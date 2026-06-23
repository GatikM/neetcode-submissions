class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(auto str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());

            vector<string>& group = mp[temp];
            group.push_back(str);
        }

        vector<vector<string>> result;
        for(auto it : mp){
            result.push_back(it.second);
        }

        return result;
    }
};
