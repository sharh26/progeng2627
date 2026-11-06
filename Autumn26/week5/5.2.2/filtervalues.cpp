#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i=0; i<vin.size();i++){
        if (vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> vin, vout;
    double t;
    vin = {4,3,6,54,23,21,12,66,8};
    t = 50;
    filter_v(vin, t, vout);
    for (int i=0; i<vout.size(); i++){
        std::cout<<vout[i]<<std::endl;
    }
}