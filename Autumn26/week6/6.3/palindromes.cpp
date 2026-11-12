#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

std::string remove_space(std::string s){
    std::string n;
    for (int i = 0; i<s.size(); i++){
        std::string tmp = char_to_string(s[i]);
        if (!(tmp ==" ")){
            n.push_back(s[i]);
        }
    }
    return n;
}

bool is_palindrome(std::string s){
    // complete this function
    //check through each letter 
    //turn it into string
    //check if it matches
    // and if any of them 
    // is wrong return false
    //if it gets through with no problem it is true
    std::string p, p2;
    s= remove_space(s);
    int c=0;
    for (int i=s.size()-1;i>=0;i--){
        p=char_to_string(s[i]);
        p2=char_to_string(s[c]);
        if(!(p==p2)){
            return false;
        }
        c++;
    }
    return true;
}

int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}