#include <iostream>

void myswap(double& a, double& b){

    double tmp;
    tmp = a;
    a = b;
    b = tmp;

}

void sort_three_numbers(double& s1, double& s2, double& s3){
    bool sorted=false;
    while(!sorted){ //need it to keep checking the conditionals until it can pass through all of them without needing to swap
        if (s1>s2){
            myswap(s1, s2);
        } 
        if(s2>s3){
            myswap(s2, s3);
        }
        if(s3>s2&&s2>s1){
            sorted = true;
        }
    }
}

int main(){
    double n1, n2, n3;
    std::cin>>n1>>n2>>n3;
    sort_three_numbers(n1, n2, n3);
    std::cout<<n1<<" "<<n2<<" "<<n3<<std::endl;
}