/*

http://oj.leetcode.com/problems/climbing-stairs/

*/

class Solution {
public:
    int climbStairs(int n) {
        int last = 0;
        int curr = 1;
        for(int i = 1; i <= n ; i++){
            int tmp = curr;
            curr = last + curr;
            last = tmp;
        }
        return curr;
    }
};