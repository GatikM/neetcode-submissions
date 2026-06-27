class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max_water = 0;

        int left = 0;
        int right = n-1;

        while(left < right){
            int length = min(heights[left], heights[right]);
            int width = right - left;
            int current_water = length * width;

            max_water = max(max_water, current_water);
            if(heights[left] < heights[right]){
                left++;
            } else{
                right--;
            }
        }
        return max_water;
    }
};
