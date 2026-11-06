#include <iostream>
#include <vector>

int main(){
    int n, t;
    std::vector<int> v;

    std::cout<<"enter a number n"<<std::endl;
    std::cin>>n;
    for (int i=0; i<n; i++){
       int tmp; 
       std::cout<<"enter a number"<<std::endl; 
       std::cin>>tmp;
       v.push_back(tmp);
    }

    std::cout<<"enter a number t"<<std::endl;
    std::cin>>t;
    for (int j=0; j<n; j++){
        if (v[j]<t){
            std::cout<<v[j]<<std::endl;
        }
    }

}