#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if (vin.size()==0){
        return -1;
    }
    double min=vin[0];
    int mindex;
    for (int i=1; i<vin.size();i++){
        if (vin[i]<min){
            min = vin[i];
            mindex=i;
        }
    }
    return mindex;

}

int main(){
    std::vector<double> v;
    std::cout<<min_vector_element(v)<<std::endl;
    //should print -1
    v = {1,2,3};
    std::cout<<min_vector_element(v)<<std::endl;
    //should print 0
    v = {5, 4, 7, 2};
    std::cout<<min_vector_element(v)<<std::endl;
    //should print 3
}