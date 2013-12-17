#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int M=matrix.size()-1;
		int N=matrix[0].size()-1;
		int pos=N/2;
		int mid=M/2;
		int left_last=-90,right_last=-90;
		int left_mid=-90,right_mid=-90;
		
		if(matrix.size()==0)
			return false;
		else if(matrix[0].size()==0)
			return false;
		
		while(1)
		{
			cout << mid << "  " << pos<< endl;
			
			if(pos>N || pos <0 || mid >M ||mid <0)
				return false;
			
			if(matrix[mid][pos] == target)
				return true;
			
			if(matrix[mid][N] < target){
				left_mid=mid;
				mid=mid+(M-mid)/2;
				if(mid>=right_mid)
					return false;
				pos=N/2;
				left_last=-90,right_last=-90;
				continue;
			}
			
			if(matrix[mid][0] > target){
				right_mid=mid;
				mid=mid-(M-mid)/2;
				if(mid<=left_mid)
					return false;
				pos=N/2;
				left_last=-90,right_last=-90;
				continue;
			}
			
			if(matrix[mid][pos] < target){
				left_last=pos;
				pos=pos+(N-pos)/2;
				if(pos>=right_last)
					return false;
				//pos++;
				continue;
			}else{
				right_last=pos;
				pos=pos/2;
				if(pos<=left_last)
					return false;
				//pos--;
				continue;
			}
			
		}
		
		return true;
    }
	
	
};


int main (int argc, char const *argv[])
{
	/* code */
	Solution a;
	vector<int> r;
	vector< vector<int> > all;
	r.push_back(1);
	all.push_back(r);
	/*r.push_back(2);
	r.push_back(3);
	all.push_back(r);
	r.clear();
	r.push_back(4);
	r.push_back(5);
	r.push_back(6);
	all.push_back(r);
	r.clear();
	r.push_back(7);
	r.push_back(8);
	r.push_back(9);
	all.push_back(r);
	r.clear();
	r.push_back(11);
	r.push_back(12);
	r.push_back(15);
	all.push_back(r);*/
	
	cout <<a.searchMatrix(all,1) << endl;
	return 0;
}