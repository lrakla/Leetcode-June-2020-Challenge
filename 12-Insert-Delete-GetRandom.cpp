class RandomizedSet {
    set<int> s;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {         
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
       auto it = s.find(val);
       if(it==s.end()){
           s.insert(val);
           return true;
       }
       return false; 
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        auto it = s.find(val);
        if(it!=s.end()){
            s.erase(it);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int idx = rand() % s.size();
        auto it = s.begin();
        for (int i = 0; i < idx; i++)
            it++;
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */