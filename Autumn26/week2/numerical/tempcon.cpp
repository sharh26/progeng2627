#include <iostream>

int main(){
    double C, F;

    std::cout<<"enter temperature in Celcius"<<std::endl;
    std::cin>> C;

    F = (C * (9/5)) +32;

    std::cout<<C<< " is "<<F<<" in Fahrenheit"<<std::endl;

}