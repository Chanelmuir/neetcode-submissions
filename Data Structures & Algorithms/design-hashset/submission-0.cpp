class MyHashSet {
    private:
        vector<int> hashMap;
    public:
        MyHashSet() {}
        
        void add(int key) {
            if(!contains(key)) hashMap.push_back(key);
            return;
        }
        
        void remove(int key) {
            for(size_t i{0}; i < hashMap.size(); ++i)
            {
                if(hashMap[i] == key) {
                    hashMap.erase(hashMap.begin() + i);
                    return;
                }
            }
            return;
        }
        
        bool contains(int key) {
            for (int num : hashMap) {
                if (num == key) return true;
            }
            return false;
        }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */