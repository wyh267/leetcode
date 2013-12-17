/*

http://oj.leetcode.com/problems/multiply-strings/

*/

class Solution {
public:
    string multiply(string num1, string num2) {
        int i, j;
        int *iresult;
        int length1 = num1.size();
        int length2 = num2.size();
        string result = "";
 
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
 
        iresult = (int*)malloc(sizeof(int) * (length1 + length2 + 1));
        memset(iresult, 0, sizeof(int) * (length1 + length2 + 1));
 
        for(i = 0; i < length1; i++)
        {
                for(j = 0; j < length2; j++)
                {
                        iresult[i+j] += ((num1[i] - 48) * (num2[j] - 48));
                }
        }
 
        int carry = 0;
        for(i = 0; i < length1 + length2; i++)
        {
                int value = iresult[i] + carry;
                iresult[i] = value % 10;
                carry = value / 10;
        }
    
        for(i = length1 + length2 - 1; i >= 0; i--)
        {
                if(iresult[i] != 0)break;
        }
 
        for(; i >= 0; i--)
        {
                result = result + (char)(iresult[i]+48);
        }
 
        free(iresult);
 
        if(result == "") result = "0";
        return result;
    }
};