#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream file;
    file.open("input.txt");

    std::vector<std::string> v;

    if (!file.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while (file>>tmp){
        v.push_back(tmp);

    }
    file.close();
    for (int i=(v.size()-1);i>=0;i--){
        std::cout<<v[i]<<std::endl;
    }

}