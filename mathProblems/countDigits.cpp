#include <iostream>
#include <cmath>

int countDigitsBruteForce(int n){ // time complexity: O(log10(n))
    int counter = 0;
    while (n > 0){
        counter++;
        n = n/10;
    }
    return counter;
}

int countDigitsOptimal(int n){  // time complexity: O(1)
    return int(std::log10(n)) + 1;
}


int main(){

    int n;
    std::cin>>n;
    std::cout << countDigitsOptimal(n);

    return 0;
}