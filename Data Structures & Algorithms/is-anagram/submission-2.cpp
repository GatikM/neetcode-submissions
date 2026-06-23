class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> freqMap;

        for(auto it : s){
            freqMap[it]++;
        }

        for(auto it : t){
            freqMap[it]--;
        }

        for(auto it : freqMap){
            if(it.second != 0) return false;
        }
        return true;
    }
};
