/*

http://oj.leetcode.com/problems/evaluate-reverse-polish-notation/

*/


class Solution {
public:
    int evalRPN(vector<string> &tokens) {
		vector<int> numStack;
		int op=0;
		for(size_t i = 0; i < tokens.size(); ++i)
		{
			if(tokens[i].size()==1 && ( (op=isNum(tokens[i][0])) >=1 )){
				int a=numStack.back();
				numStack.pop_back();
				int b=numStack.back();
				numStack.pop_back();
				switch(op){
					case 1:
						numStack.push_back(a+b);
						break;
					case 2:
						numStack.push_back(a-b);
						break;
					case 3:
						numStack.push_back(a*b);
						break;
					case 4:
						numStack.push_back(b/a);
						break;
					}
			}else{
				numStack.push_back( atoi(tokens[i].c_str()) );
			}
		}
        return numStack.back();
    
}


private:
	int isNum(char test){
		string num="1234567890";
		string opr="+-*/";
		for(size_t i = 0; i < num.size(); ++i)
		{
			if(test == num[i])
				return 0;
		}
		for(size_t i = 0; i < opr.size(); ++i)
		{
			if (test == opr[i])
				return i+1;
		}
		return -1;
	}
};