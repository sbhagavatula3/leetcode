class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return -1;

        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums.at(mid) == target) {
                return mid;
            } else if (nums.at(mid) > target){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }
};
