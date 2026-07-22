/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int solve(int low, int high){
        if(low>high){
          return -1;
        }
        int mid = low+(high-low)/2;
        
        int ans = guess(mid);
        if (ans == 0)
            return mid;

        if (ans == -1)
            return solve(low, mid - 1);

        return solve(mid + 1, high);
    }
    int guessNumber(int n) {
        return solve(1, n);
    }
};