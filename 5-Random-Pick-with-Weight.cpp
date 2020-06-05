class Solution {
    vector<int> cum_sum;
    int total =0;
public:
    Solution(vector<int>& w) {
        for(int i :w){
            total+=i;
            cum_sum.push_back(total);
        }
    }
    
    int pickIndex() {
        int r = rand()%total;
        auto it = upper_bound(cum_sum.begin(), cum_sum.end(), r);
        return it - cum_sum.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */