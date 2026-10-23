#include <iostream>

int main(){
    int n, steps=0, max;

    std::cin>>n;
    max=n;

    while(n!=1){
        if (n%2==0){
            n=n/2;
        }
        else{
            n=n*3;
            n++;
        }

        if (n>max){
            max=n;
        }
        
        std::cout<<n<<"\t";
        steps++;
    }
    std::cout<<"\nNumber of steps: "<<steps<<"\nMax number: "<<max<<std::endl;
}

// excercises involving while loop can be log in system where user keeps entering until they get it correct. similarly, for loop so that user gets a limited number of attempts at getting the password correct.