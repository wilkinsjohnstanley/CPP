#include <iostream>

int main(){


struct {
    std::string brand;
    std::string model;
    int year;
} myCar1, myCar2;


myCar1.brand="Maserati";
std::cout<<myCar1.brand <<'\n';
myCar2.brand="Honda";
std::cout<<myCar2.brand;



    return 0;
}