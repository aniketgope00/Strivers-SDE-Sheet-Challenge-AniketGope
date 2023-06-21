/*
This solution is based on looking at the pascal triangle as the coefficients of a binomial equation with 
the row number being the highest power in the equation -  coeff. for (a+b)^n for row now n.
*/
#include <iostream>
#include <vector>
using namespace std;
int get_nCr(int n, int r)
{
    //needs to be fixed. showing error.
    unsigned long long nFact=1,rFact=1,nrFact=1;
    for(int i = n;i>=1;i--) 
    {nFact = nFact*i;}
    for(int i = r;i>=1;i--)
    {rFact *= i;}
    for(int i = n-r;i>=1;i--)
    {nrFact *= i;}
    unsigned long long int getVal = nFact/(nrFact * rFact);
    return getVal;
}
vector<vector<int>> pascalTriangle(int numRows)
{
    vector<vector<int>> v = {{1}};
    //if (numRows)
    for(int i = 1;i<numRows;i++){
        vector<int> row;
        for(int j=0;j<=i;j++){
            int val = get_nCr(i,j);
            row.push_back(val);
        }
        v.push_back(row);
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> triangle = pascalTriangle(n);
    for(auto row: triangle){
        for(auto val: row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}