/*
This solution is a brute force based on the graphical represesntation 
- Each point in the next row is the sum of the two points above in the previous row.
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows = {{1},{1,1}};
        if (numRows==1){
            return {{1}};
        }
        if (numRows==2){
            return rows;
        }
        while((numRows-2)>0){
            vector<int> prev = rows.back();
            vector<int> currRow;
            for(int i=0;i<prev.size()-1;i++){
                int currVal = prev[i] + prev[i+1];
                cout<<currVal<<endl;
                currRow.push_back(currVal);
            }
            currRow.insert(currRow.begin(),1);
            currRow.push_back(1);
            rows.push_back(currRow);
            numRows--;
        }
        return rows;
    }
};