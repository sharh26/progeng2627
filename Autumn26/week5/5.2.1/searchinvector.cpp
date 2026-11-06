#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i=0; i<vin.size(); i++){
        if (n == vin[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int> v;
    v = {5, 3, 4, 2, 9, 3};
    std::cout<<search_vector(2, v)<<std::endl;
    //should print 3
    std::cout<<search_vector(1, v)<<std::endl;
    //should print -1
    std::cout<<search_vector(3, v)<<std::endl;
    //should print 1
}