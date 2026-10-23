#include <iostream>

int main(){
    int n=1, sum;

    std::cout<<"enter a number:"<<std::endl;
    std::cin>>sum;

    while (n!=0){
        std::cout<<"the sum so far is:\n"<<sum<<std::endl;
        std::cout<<"enter a number:"<<std::endl;
        std::cin>>n;
        sum=sum+n;
    }
}