#include <iostream>

void idiv(int a,int b, int& res, int& rem){
    res = a/b;
    rem = a%b;
}

int main(){
    int a, b, res, rem;
    std::cin>>a>>b;
    idiv(a, b, res, rem);
    std::cout<<"result is "<<res<<"\nremainder is "<<rem<<std::endl;
}