class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        //Using Bellman-Ford
       vector<int> c(n,1e8);
       c[src] = 0;
       /*relax edges k+1 times as for k stops, vertices are k+2, and 
       acc. to algorithm relaxation has to occur V-1 times i.e k+1  
       */ 
       for(int i=0;i<=k;i++){
           vector<int> temp_c(c);
           for(auto e : flights){
              temp_c[e[1]] = min(temp_c[e[1]] , c[e[0]] + e[2]); 
           }
           c= temp_c;
       }
        
       return c[dst]==1e8?-1:c[dst];     
        
    }
};