#include <iostream>
#include <vector>

int main(){
    int n, s, count=0;
    std::vector<int> v, index;

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
            index.push_back(j);
        }
    }

    if (count>0){
        std::cout<<"there are "<<count<<" occurrences of "<<s<<" at indices:"<<std::endl;
        
        for (int k=0;k<index.size();k++){
            std::cout<<index[k]<<std::endl;
        }
    }
    else{
        std::cout<<"there are no occurrences of "<<s<<std::endl;
    }

}