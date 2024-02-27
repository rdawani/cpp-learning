// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4

int main(){

    const int AGE_LENGTH =4;
    int age[AGE_LENGTH];
    float temp[] = {29.1, 39.0, 45.0};

    age[0] = 54;
    age[1] = 20;
    age[2] = 9;
    age[3] = 91;
    
    std::cout<<"The Age Array has "<<AGE_LENGTH<< " Elements! "<<std::endl;
    std::cout << "Age[0] = "<<age[0]<< std::endl;
    std::cout << "Age[1] = "<<age[1]<< std::endl;
    std::cout << "Age[2] = "<<age[2]<< std::endl;
    std::cout << "Age[3] = "<<age[3]<< std::endl;
    std::cout<<std::endl<<std::endl;

    std::cout << "Temperature[0] = "<<temp[0]<< std::endl;
    std::cout << "Temperature[1] = "<<temp[1]<< std::endl;
    std::cout << "Temperature[2] = "<<temp[2]<< std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
