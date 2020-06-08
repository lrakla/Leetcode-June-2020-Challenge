class Solution {
public:
    int change(int n, vector<int>& coins) { //n=amount
        vector<int> table(n+1,0);
        int m = coins.size();
        
        table[0] = 1;
        for(int i=0;i<m;i++){
            for(int j = coins[i];j<=n;j++){
                table[j] += table[j-coins[i]];    
            }
        }
        return table[n];
        
    }
};