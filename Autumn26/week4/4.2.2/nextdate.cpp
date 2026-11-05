#include <iostream>

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
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

    //drew a diagram to plan on tablet
    if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10){
        //31 days in a month
        if (d1==31){
            d2=1;
            m2=m1+1;
            y2=y1;
        }
        else{
            d2=d1+1;
            m2=m1;
            y2=y1;
        }
    }
    else if (m1==12){
        d2 = 1;
        m2 = 1;
        y2 = y1+1;
    }
    else if (m1==2){
        //february
        if(leap_year(y1)){ //is leap year
            if (d1==29){
                d2=1;
                m2=m1+1;
                y2=y1;
            }
            else{
                d2=d1+1;
                m2=m1;
                y2=y1;
            }
        }
        else{ //not leap year
            if (d1==28){
                d2=1;
                m2=m1+1;
                y2=y1;
            }
            else{
                d2=d1+1;
                m2=m1;
                y2=y1;
            }
        }
    }
    else{
        //30 days in a month
        if (d1==30){
            d2=1;
            m2=m1+1;
            y2=y1;
        }
        else{
            d2=d1+1;
            m2=m1;
            y2=y1;
        }
    }

}

int main(){
    // TODO: write a main to test the function
    int d1, m1, y1, d2, m2, y2;
    std::cout<<"enter a date in day, month, year with only space seperating them"<<std::endl;
    std::cin>>d1>>m1>>y1;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout<<"the next date is "<<d2<<"/"<<m2<<"/"<<y2<<std::endl;
}