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