#include <iostream>

int main(){
    int n, x, a=1;
    std::cin>>x>>n;

    for(int i=0; i<n; i++){
        a = a*x;
    }

    std::cout<<x<<"^"<<n<<"="<<a<<std::endl;
}