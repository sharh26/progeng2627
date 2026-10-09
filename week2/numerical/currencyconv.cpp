#include <iostream>

int main(){
    double pounds, rate, euro;

    std::cout<<"enter amount of pounds"<<std::endl;
    std::cin>>pounds;

    std::cout<<"whats is the exchange rate to euros?"<<std::endl;
    std::cin>>rate;

    euro = pounds*rate;
    std::cout<<pounds<<" is "<<euro<<" euros"<<std::endl;

}