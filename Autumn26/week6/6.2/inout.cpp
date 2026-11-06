#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;

    }

    int tmp;
    while (infile>>tmp){
        v.push_back(tmp);

    }
    infile.close();

    std::ofstream outfile;
    outfile.open("output.txt");
    for (int i= (v.size()-1);i>=0;i--){
        outfile<<v[i]<<std::endl;
    }
    outfile.close();
}