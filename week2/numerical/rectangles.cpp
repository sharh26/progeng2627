#include <iostream>

int main(){
    int a, b , area, perimeter;

    std::cout<<"enter the first side of the rectangle"<<std::endl;
    std::cin>>a;

    std::cout<<"enter the second side of the rectangle"<<std::endl;
    std::cin>>b;

    area=a*b;
    perimeter= 2*(a+b);

    std::cout<<"the area of the rectangle is "<<area<<" and the perimeter is "<<perimeter<<std::endl;

}