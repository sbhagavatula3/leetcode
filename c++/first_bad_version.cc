// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1, right = n;
        long mid;
        while (left <= right) {
            mid = (left + right) / 2;
            if (isBadVersion(mid) == true && isBadVersion(mid-1) == false) {
                return mid;
            }
            if (isBadVersion(mid) == true) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return mid;

    }
};
