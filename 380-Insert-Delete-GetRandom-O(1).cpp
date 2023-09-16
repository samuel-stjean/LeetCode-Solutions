class RandomizedSet {
public:

// all functions run in constant time
    unordered_map<int,int> map;
    vector<int> list;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(!map.count(val)){
            map[val] = list.size();
            list.push_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(map.count(val)){
            list[map[val]] = list.back();
            map[list.back()] = map[val];
            list.pop_back();
            map.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return list[rand()%list.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
