#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

std::vector<double> line_to_vector(std::string s){
    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    ss<<s;
    while(ss>>tmp){
        out.push_back(std::stod(tmp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){
    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout<<"error opening file"<<input_file<<std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    while(std::getline(infile, line)){
        out.push_back(line_to_vector(line));
    }

    return out;
}

//input vector and which column is needed
std::vector<double> extract_column(std::vector<std::vector<double>> m, int column){
    std::vector<double> out;
    for (int i=0; i<m.size(); i++){
        out.push_back(m[i][column]);
    }

    return out;
}


double scalar_product(const std::vector<double> v1, const std::vector<double> v2){
    double out;
    for(int i = 0; i < v1.size(); i++){
        out = out + v1[i] * v2[i];
    }
    return out;
}

std::vector<std::vector<double>> matrix_mult(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2){
    std::vector<std::vector<double>> out;

    for (int i =0; i<m1.size();i++){
        std::vector<double> row;
        for (int j=0;j<m1[0].size();j++){
            std::vector<double> column = extract_column(m2, j);
            row.push_back(scalar_product(m1[i], column));
        }
        out.push_back(row);
    }
    return out;
}

std::string matrix_to_string(std::vector<std::vector<double>> m){
    std::stringstream out;
    out<<std::fixed<<std::setprecision(2);

    for(int i=0;i<m.size();i++){
        for (int j=0; j<m[0].size();j++){
            out<<m[i][j]<<"\t";
        }
        out<<"\n";
    }
    return out.str();
}

int main(int argc, char* argv[]){

    if(argc != 3){
        std::cout << "two arguments needed"<< std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2= read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = matrix_mult(m1, m2);

    std::cout<< matrix_to_string(m1)<<std::endl;
    std::cout<<"*"<<std::endl<<std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;
}