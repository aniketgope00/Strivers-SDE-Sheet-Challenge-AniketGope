#include <algorithm> 
#include <vector>
#include <iostream>
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    next_permutation(permutation.begin(),permutation.end());
    return permutation;
}
int main(){
int n; 
cin>>n;
vector<int> v;
for (int i=0;i<n;i++){
    int val;
    cin>>val;
    v.push_back(val);
}
v = nextPermutation(v,n);
for(auto e: v) cout<<e<<" ";
return 0;
}