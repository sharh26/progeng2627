#include <iostream>

int main(){
    int n, curmax, curmin;

    std::cout<<"please enter number:"<< std::endl;
    std::cin>>n;

    curmax=n;
    curmin=n;

    std::cout<<"max so far:"<<curmax<<"\nmin so far:"<<curmin<<std::endl;

    while(n != 0){

        std::cout<<"please enter number:"<<std::endl;
        std::cin>>n;

        if(n>curmax){
            curmax = n;
        }

        else if(n<curmin){
            curmin=n;
        }
    std::cout<<"max so far:"<<curmax<<"\nmin so far:"<<curmin<<std::endl;    
    }
}