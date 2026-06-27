class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int total_water = 0;

        for (int i = 0; i < n; i++) {
            int left_max = 0, right_max = 0;

            // Find max to the left
            for (int j = 0; j <= i; j++) {
                left_max = max(left_max, height[j]);
            }

            // Find max to the right
            for (int j = i; j < n; j++) {
                right_max = max(right_max, height[j]);
            }

            total_water += min(left_max, right_max) - height[i];
        }

        return total_water;
    }
};