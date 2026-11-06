#include <iostream>
#include <vector>

int main(){
    int n, s, count=0;
    std::vector<int> v;

    std::cout<<"please enter n:"<<std::endl;
    std::cin>>n;
    for (int i=0; i<n; i++){
       int tmp; 
       std::cout<<"please enter a number:"<<std::endl; 
       std::cin>>tmp;
       v.push_back(tmp);
    }

    std::cout<<"enter a number s"<<std::endl;
    std::cin>>s;
    for (int j=0; j<n; j++){
        if (v[j]==s){
            count+=1;
        }
    }
    std::cout<<"there are "<<count<<" occurrences of "<<s<<std::endl;
    

}