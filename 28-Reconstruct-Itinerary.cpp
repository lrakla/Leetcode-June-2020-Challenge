class Solution {
unordered_map<string,multiset<string>> target;
vector<string> route;
public:
    void visit(string airport){  
      while (target[airport].size()){
          string next = *target[airport].begin();
          target[airport].erase(target[airport].begin());
          visit(next);  
      }
      route.push_back(airport);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for(auto t : tickets){
            target[t[0]].insert(t[1]);
        }
        visit("JFK");
    
        return vector<string>(route.rbegin(),route.rend());
        
    }
};