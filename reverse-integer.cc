/*

http://oj.leetcode.com/problems/reverse-integer/

*/

class Solution {
public:
    int reverse(int x) {
        vector<int> reverse_list;
        int i=1;
        int rev=0;
        bool z=true;
        if(x<10 && x>(-10))
            return x;
        
        if(x<0){
            x=abs(x);
            z=false;
        }
        
        do{
            reverse_list.push_back(x%10);
            x=x/10;
        }while(x>=10);
        reverse_list.push_back(x);
        
        do{
            rev=reverse_list.back()*i+rev;
            reverse_list.pop_back();
            i=i*10;
        }while(reverse_list.empty()==false);
        
        if(z==false)
            rev=0-rev;
        return rev;
        
    }
};