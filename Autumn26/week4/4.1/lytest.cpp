#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;
    if( (year % 4) == 0){ 
        // if multiple of 4
        if( (year % 100) == 0){ 
            // if (also) multiple of 100
            if((year%400)== 0){
                ly = true;
            }

            else{
                ly = false;
            }


        }
        else{ 
            ly = true;

        }
    }
    else{
        // if not multiple of 4
        ly = false;
    }

    return ly;
    // we *do not print* anything in the function
}

int main(){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800)== false)<<std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2024) == true) << std::endl;
    std::cout << (leap_year(2027) == false) << std::endl;
}