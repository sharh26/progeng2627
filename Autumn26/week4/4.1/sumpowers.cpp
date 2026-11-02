#include <iostream>
#include <cmath>

double power(double x, double n){
    double sum=0;
    for(int i=1;i<n||i==n;i++){
        sum+=std::pow(x,i);
    }
    return sum;
}

int main(){
    double x, n;
    std::cout<<"please enter 2 numbers"<<std::endl;
    std::cin>>x>>n;
    std::cout<<power(x,n)<<std::endl;
}