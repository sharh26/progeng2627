#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i=0;i<vin.size();i++){
        if (vin[i]==s){
            return 1;
        }
    }
    return 0;
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i=0;i<vin1.size();i++){
        if (search_vector(vin1[i], vin2)==1){
            vout.push_back(vin1[i]);
        }
    }
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    //add the next item if its not already in the vector
    for (int i = 0;i<vin1.size();i++){
        if (search_vector(vin1[i], vout)==0){
            vout.push_back(vin1[i]);
        }
    }

    for (int i = 0;i<vin2.size();i++){
        if (search_vector(vin2[i], vout)==0){
            vout.push_back(vin2[i]);
        }
    }
}

int main(){
    std::string fn1, fn2, tmp;
    std::vector<std::string> v1, v2, vunion, vintersect;

    std::cout<<"enter names of the 2 input text files:"<<std::endl;
    std::cin>>fn1>>fn2;

    std::ifstream file1, file2;

    file1.open(fn1);
    if(!file1.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    while(file1>>tmp){
        v1.push_back(tmp);
    }
    file1.close();

    file2.open(fn2);
    if(!file2.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    while(file2>>tmp){
        v2.push_back(tmp);
    }
    file2.close();

    union_vector(v1, v2, vunion);
    std::ofstream out1, out2;

    out1.open("union.txt");
    if(!out1.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0;i<vunion.size();i++){
        out1<<vunion[i]<<std::endl;
    }
    out1.close();

    intersection_vector(v1, v2, vintersect);
    out2.open("intersection.txt");
    if(!out2.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0;i<vintersect.size();i++){
        out2<<vintersect[i]<<std::endl;
    }
    out2.close();


}