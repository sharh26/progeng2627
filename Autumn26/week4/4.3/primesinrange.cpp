#include <iostream>

int smallest_factor(int n){
    //check if divisible by any number below n/2. if no, return 0
    for(int cf = 2; cf<n; cf++){
        if ((n%cf)==0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int n1, n2;
    std::cout<<"enter 2 numbers, 2nd number larger than the first"<<std::endl;
    std::cin>>n1>>n2;

    for (int i=n1; i<=n2; i++){
        if (smallest_factor(i)==0){
            std::cout<<i<<std::endl;
        }
    }
}