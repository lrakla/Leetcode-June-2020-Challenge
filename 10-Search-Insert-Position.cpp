class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(nums.begin(),nums.end(),target);
        if(it!=nums.end()) return it-nums.begin();
        else{
            for(int i=0;i<nums.size();i++){
                if(target<nums[i])
                    return i;
            }
        }
        return nums.size();
    }
};