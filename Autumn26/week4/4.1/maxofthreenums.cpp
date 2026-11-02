#include <iostream>

int larger(int a, int b, int c){
    if (a>b&&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a, b, c;
    std::cin>>a>>b>>c;
    std::cout<<larger(a, b, c)<<std::endl;
}