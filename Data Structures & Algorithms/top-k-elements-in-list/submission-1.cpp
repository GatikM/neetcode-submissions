class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        int n = nums.size();
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }

        vector<pair<int, int>> temp;
        for(auto it : mp){
            temp.push_back({it.second, it.first});
        }   

        // sort the vector
        sort(temp.begin(), temp.end(), greater<pair<int, int>>());

        for(int i=0; i<k; i++){
            result.push_back(temp[i].second);
        }

        return result;
    }
};
