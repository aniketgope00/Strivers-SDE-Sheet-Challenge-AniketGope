#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> getDigits(int n){ //time complexity: O(log10(n))
    std::vector<int> digits;
    while (n > 0){
        digits.push_back(n%10);
        n = n/10;
    }
    std::reverse(digits.begin(), digits.end());
    return digits;
}

int main(){

    int n;
    std::cin>>n;
    
    std::vector<int> result = getDigits(n);
    for (int i = 0; i < result.size(); i++){
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}