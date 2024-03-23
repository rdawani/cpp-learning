// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahren = 100;
    int celsius;

    celsius = ((float)5/9) * (fahren-32);

    std::cout<< "Fahreniet = " << fahren << std::endl;
    std::cout<< "Celsius = " << celsius << std::endl;

    float weight = 10.99;

    std::cout<< "Integral part : "<<int(weight) << std::endl;
    std::cout<< "Fractional part :"<< (double)((weight - int(weight))*10000)<<std::endl;



    
    std::cout << std::endl << std::endl;
    return (0);
}
