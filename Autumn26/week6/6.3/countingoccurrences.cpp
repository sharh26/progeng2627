#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>

//function to count instances of a string. arguments 
// of vector as constant and string. returns number.

int count_str(const std::vector<std::string> &v, const std::string str){
    int count = 0;
    for (int i=0; i<v.size(); i++){
        if (v[i]== str){
            count++;
        }
    }
    return count;
}

int main(){
    std::vector<std::string> refstr, text;
    std::vector<int> count;
    std::string full, words, tmp;
    std::ifstream fullfile, wordsfile;
    std::ofstream outfile; 

    std::cout<<"enter the name of 2 text files:"<<std::endl;
    std::cin>>full>>words;
    fullfile.open(full);

    if (!fullfile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    while(fullfile>>tmp){
        text.push_back(tmp);
    }

    fullfile.close();

    wordsfile.open(words);
    if (!wordsfile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    while(wordsfile>>tmp){
        refstr.push_back(tmp);
    }
    wordsfile.close();

    for (int i=0; i<refstr.size(); i++){
        count.push_back(count_str(text, refstr[i]));
    }

    outfile.open("out.txt");
    if (!outfile.is_open()){
        std::cout<<"error opening output file"<<std::endl;
        return EXIT_FAILURE;
    }

    for (int i= 0 ; i<refstr.size(); i++){
        outfile<<refstr[i]<<": "<<count[i]<<std::endl;
    }
    outfile.close();
}