#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int main(int argc, char* argv[]){
    std::string name, tmp;
    std::ifstream file;
    std::vector<std::string> content;
    name = argv[1];

    file.open(name);
    if (!file.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    while (file>>tmp){
        content.push_back(tmp);
    }

    file.close();

    for (int i=0;i<content.size();i++){
        std::cout<<content[i]<<std::endl;
    }

}