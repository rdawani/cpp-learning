// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b =5; //single line comments
/*
* Multi
* Line 
* Comment 
*/
int main(){
    bool my_flag;
    a=7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;

    my_flag = true;
    std::cout << "my_flag = "<< my_flag << std::endl;
    std::cout << "a + b = "<< a+b << std::endl;
    std::cout << "b - a = "<< b-a << std::endl;

    unsigned int positive;
    positive = b-a;
    std::cout <<"unsigned b - a = " << positive << std::endl;
    positive = 1;
    std::cout << "positive = 1 : " << positive << std::endl;
    positive = 0;
    std::cout << "positive = 0 : " << positive << std::endl;
    positive = 2;
    std::cout << "positive = 2 : " << positive << std::endl;

    unsigned check = -400;
    
    std::cout << "Check = " << check << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
