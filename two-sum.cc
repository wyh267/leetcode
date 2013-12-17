/*

http://oj.leetcode.com/problems/two-sum/

*/


class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> res;
        for(int i=0;i<numbers.size()-1;i++){
            
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j] == target){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    break;
                }
            }
        }
        
        return res;
    }
};