/*
This solution is based on looking at the pascal triangle as the coefficients of a binomial equation with 
the row number being the highest power in the equation -  coeff. for (a+b)^n for row now n.
*/
#include <iostream>
#include <vector>
using namespace std;
int get_nCr(int n, int r)
{
    int val;
    //something
    return val;
}
vector<vector<int>> pascalTriangle(int numRows)
{
    vector<vector<int>> v;
    return v;
}
int main(){
    int n;
    vector<vector<int>> triangle = pascalTriangle(n);
    for(auto row: triangle){
        for(auto val: row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}