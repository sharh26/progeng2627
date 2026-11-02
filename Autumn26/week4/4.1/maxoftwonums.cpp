#include <iostream>

int larger(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a, b;
    std::cin>>a>>b;
    std::cout<<larger(a, b)<<std::endl;
}