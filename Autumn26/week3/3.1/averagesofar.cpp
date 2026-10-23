#include <iostream>

int main(){
    int n=1;
    double avg, total=0, count=0;

    while (n!=0){
        std::cout<<"enter a number:"<<std::endl;
        std::cin>>n;
        count+=1;
        total+=n;
        avg= total/count;
        std::cout<<"the average so far is:\n"<<avg<<std::endl;

    }
}