#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>

int main(){
    std::string ifn, ofn;
    std::cout<<"enter the name of input file"<<std::endl;

    std::cin>>ifn;

    std::ifstream infile;
    infile.open(ifn);

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

    std::cout<<"enter the name of the output file"<<std::endl;
    std::cin>>ofn;

    std::ofstream outfile;
    outfile.open(ofn);
    for (int i= (v.size()-1);i>=0;i--){
        outfile<<v[i]<<std::endl;
    }
    outfile.close();

}