#include <iostream>
#include <string>

int main(){
    std::string s;

    std::cin>>s;

    while (s!="STOP"&&s!="stop"&&s!="Stop"){
        std::cout<<s<<std::endl;
        std::cin>>s;

    }
}