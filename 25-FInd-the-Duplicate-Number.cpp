class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = nums.size(); //n=s-1
        for(int i =0;i<s;i++){
            if(nums[abs(nums[i])]>=0){
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            }
            else
                return abs(nums[i]);
        }
        return 0;
    }
};