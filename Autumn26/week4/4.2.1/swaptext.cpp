#include <iostream>
#include <string>

void swap(std::string&a, std::string&b){
    std::string tmp = a;
    a=b;
    b=tmp;
}

int main(){
    std::string str1, str2;
    std::cout<<"enter 2 strings"<<std::endl;
    std::cin>>str1>>str2;
    std::cout<<"before swap:\nstr1:"<<str1<<"\nstr2:"<<str2<<std::endl;
    swap(str1, str2);
    std::cout<<"after swap:\nstr1:"<<str1<<"\nstr2:"<<str2<<std::endl;
}