//LeetCode Link: https://leetcode.com/problems/set-matrix-zeroes/description/
/*
Note: This solution is kind of a brute force way to get it done. I'll try to optimize the code.
Logic:
1. Iterate over the matrix and find the row and column for zero values.
2. Store row and column in zrow and zcol respectivly.
3. Iterate over zrow and change all column values to zero for row = zrow[i]. Same for columns.


Time Complexity:
m = No. of Rows, n = No. of Columns
x = Length of zrow, y = Length of zcol
T = O(mn + xn + ym)

***NOTE: 
1. As per the question, the code has to be optimised to achieve this in constant space.
2. Time Complexity should be an improvement on O(m+n)

*/

#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> zrow;
        vector<int> zcol;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    zrow.push_back(i);
                    zcol.push_back(j);
                }
            }
        }
        for(auto r:zrow){
            for(int i = 0;i<c;i++){
                matrix[r][i]=0;
            }
        }
        for(auto c:zcol){
            for(int i=0;i<r;i++){
                matrix[i][c]=0;
            }
        }
    }
};