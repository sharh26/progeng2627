#include <iostream>

bool perar(double s1, double s2, double& p, double& a){
    p = 2*(s1+s2);
    a = s1*s2;
    return true;
}

int main(){
    double perimeter, area, s1, s2;
    std::cout<<"enter two non parallel sides of a rectangle:"<<std::endl;
    std::cin>>s1>>s2;
    bool done = perar(s1, s2, perimeter, area);
    std::cout<<"perimeter is "<<perimeter<<"\narea is "<<area<<std::endl;

}