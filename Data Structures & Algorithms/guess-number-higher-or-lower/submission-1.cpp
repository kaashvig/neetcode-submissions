/** 
 * Forward declaration of guess API.
 * int guess(int num);
 */

class Solution {
public:
    int binarySearch(int low, int high) {

        int mid = low + (high - low) / 2;
        int ans = guess(mid);

        if (ans == 0)
            return mid;

        if (ans == -1)
            return binarySearch(low, mid - 1);

        return binarySearch(mid + 1, high);
    }

    int guessNumber(int n) {
        return binarySearch(1, n);
    }
};