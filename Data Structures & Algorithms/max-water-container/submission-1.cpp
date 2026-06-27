class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max_water = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int width = j-i;
                int area = min(heights[i], heights[j]) * width;

                max_water = max(max_water, area);
            }
        }
        return max_water;
    }
};
