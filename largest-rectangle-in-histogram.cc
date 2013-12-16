/*

http://oj.leetcode.com/problems/largest-rectangle-in-histogram/

*/

class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        int maxV           = 0;  
		int start    = 0;  
		int end      = height.size();  
		while(start< height.size())  
		{        
			end        = height.size() -1;  
			for(int k  = start+1;k <= end; k++)  
			{  
				if(height[k] < height[k-1])  
				{  
					end = k-1;  
					break;  
				}  
			}  
			int minV   = height[end];  
			for(int j  = end; j>=0; j--)  
			{  
				minV     = std::min(minV, height[j]);  
				int area = minV*(end-j+1);  
				if(area > maxV)  
					maxV   = area;  
			}  
			start      = end +1;  
		}  
		return maxV;
    }
    
  
};