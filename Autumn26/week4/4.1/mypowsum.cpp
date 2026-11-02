#include <iostream>

double mypow(double base, int exp){
    double result=1; 
    bool isneg=false;

    if (exp<0){
        isneg = true;
        exp= -exp;
    }

    for (int i=0;i<exp;i++){
        result = result*base;

    }

    //need top do 1 divided by result at the end if neg
    if (isneg){
        result = 1/result;
    }

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

double power(double x, double n){
    double sum=0;
    for(int i=1;i<n||i==n;i++){
        sum+=mypow(x,i);
    }
    return sum;
}

int main(){
    double x, n;
    std::cout<<"please enter 2 numbers"<<std::endl;
    std::cin>>x>>n;
    std::cout<<power(x,n)<<std::endl;
}