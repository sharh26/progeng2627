#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

//get vector of og file
//vector of translation file
//if og file is in even index of translation file it 
// should be translated to whatever is in index+1.
//writes the new vector into output.

void translate(std::vector<std::string> &vtranslate, std::vector<std::string> &vtext, int indf, int indt){
    if (vtext[indf]==vtranslate[indt]){
        vtext[indf] = vtranslate[indt+1];
    }
}
// can use this in for loops in main.

int main(){
    std::vector<std::string> advert, translation;
    std::string adname, trname, tmp;
    std::ifstream infile;
    std::ofstream outfile;
    
    std::cout<<"enter name of 2 files"<<std::endl;
    std::cin>>adname>>trname;

    infile.open(adname);
    if (!infile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    while (infile>>tmp){
        advert.push_back(tmp);
    }
    infile.close();

    infile.open(trname);
    if (!infile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }
    while (infile>>tmp){
        translation.push_back(tmp);
    }
    infile.close();

    for (int i=0;i<advert.size();i++){
        for (int j=0; j<translation.size();j+=2){
            translate(translation, advert, i, j);
        }
    }

    std::cout<<"name output file"<<std::endl;
    std::cin>>tmp;
    outfile.open(tmp);
    if (!outfile.is_open()){
        std::cout<<"error opening output file"<<std::endl;
        return EXIT_FAILURE;
    }
    for (int k=0; k<advert.size();k++){
        outfile<<advert[k]<<" ";
    }
    outfile.close();
}