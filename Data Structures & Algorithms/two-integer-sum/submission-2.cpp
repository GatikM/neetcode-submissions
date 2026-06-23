class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> freqMap;

        for(int i=0; i<n; i++){
            int difference = target - nums[i];

            if(freqMap.find(difference) != freqMap.end()){
                return {freqMap[difference], i};
            }

            freqMap[nums[i]] = i;
        }

        return {};
    }
};
