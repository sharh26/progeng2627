#include <iostream>

int main(){
    int a, b, q=0;
    std::cin>>a>>b;
    while(a>b){
        q++;
        a-=b;
    }

    std::cout<<"quotient is\n"<<q<<"\nremainder is\n"<<a<<std::endl;

}