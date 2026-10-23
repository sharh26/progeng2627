#include <iostream>

int main(){
    int n, c2=0, c=0;
    std::cin >> n;

    while (c2<n){
        while(c<n){
            std::cout<<"*";
            c++;
        }
        std::cout<<std::endl;
        c=0;
        c2++;
    }
}