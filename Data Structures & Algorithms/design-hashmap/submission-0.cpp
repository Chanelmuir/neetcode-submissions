class MyHashMap {
private:
    struct Node {
        int key;
        int value;
        Node* next;
        Node(int k, int v) : key(k), value(v), next(nullptr) {}
    };

    vector<Node*> hashMap{99999};

    int hash(int key) {
        return key % hashMap.size();
    }

public:
    MyHashMap() {
        for (auto& bucket : hashMap) {
            bucket = new Node(0, 0);
        }
    }
    
    void put(int key, int value) {
        Node* cur = hashMap[hash(key)];

        while(cur->next != nullptr) {
            if(cur->next->key == key) {
                cur->next->value = value;
                return;
            }
            cur = cur->next;
        }
        cur->next = new Node(key, value);
        return;
    }
    
    int get(int key) {
        Node* cur = hashMap[hash(key)];

        while(cur->next != nullptr) {
            if(cur->next->key == key) {
                return cur->next->value;
            }
            cur = cur->next;
        }
        return -1;
    }
    
    void remove(int key) {
        Node* cur = hashMap[hash(key)];

        while(cur->next != nullptr) {
            if(cur->next->key == key) {
                Node* toDelete = cur->next;
                cur->next = toDelete->next;
                delete toDelete;
                return;
            }
            cur = cur->next;
        }
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */