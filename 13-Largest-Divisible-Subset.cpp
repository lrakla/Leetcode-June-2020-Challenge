class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return nums;
        sort(nums.begin(),nums.end());
        vector<int> next_idx(n,-1);
        vector<int> sizes(n,1);
        
        int max_idx = 0;
        int max_len = 1;
        for(int i=n-1;i>=0;--i){
            int j = i+1;
            int max = 0;
            int _max_idx = i;
            while(j<n){
                if(nums[j]%nums[i] ==0 && sizes[j]>max){
                    max = sizes[j];
                    _max_idx = j;
                }
                j++;
            }
            if(_max_idx!=i){
                sizes[i]+=sizes[_max_idx];
                next_idx[i] = _max_idx;
                if(max +1 > max_len){
                    max_len = 1+max;
                    max_idx = i;
                    
                }
            }
        }
        vector<int> result;
        int curr = max_idx;
        while(curr>=0){
            result.push_back(nums[curr]);
            curr = next_idx[curr];
        }
        return result;
        
    }
};