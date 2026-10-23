#include <iostream>

int main(){
    int n, ans=1;

    std::cin>>n;

    for (int mult = 1; mult<=n; mult++){
        ans = ans*mult;
    }

    std::cout<<n<<"!="<<ans<<std::endl;
}