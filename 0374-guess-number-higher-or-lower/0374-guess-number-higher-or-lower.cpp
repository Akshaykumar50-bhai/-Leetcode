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
    int guessNumber(int n) {
       long long i = 0;
       long long j = n;
        while(i<=j){
            long long pick = (i+j)/2;
       if(guess(pick) == 0) return pick;
       else if(guess(pick) == -1) j = pick-1;
       else i = pick+1; 
            
        }
        return 0;
    }
};