// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout<<"Hi there, What is your name? : " <<std::flush;
    std::string str;
    std::cin >> str;
    std::cout << "User's name is " << str<<"!, nice to meet you";

    std::cout << std::endl << std::endl;
    return (0);
}
