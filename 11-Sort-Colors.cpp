class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n =nums.size();
       int start = 0,end=n-1;
       for(int i=start;i<=end;i++){
           while (nums[i]==2 && i<end) swap(nums[i], nums[end--]);
           while (nums[i]==0 && i>start) swap(nums[i], nums[start++]);
       }
    }
};