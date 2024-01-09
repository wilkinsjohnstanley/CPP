#include <iostream>

int main(){

int category;
std::cout<<"Hurricane categories explained: How strong is each category?" << '\n'
<<"Please enter a category between 1 and 5" << '\n';
std::cin>>category;

switch(category){
    case 1:
        std::cout<<"A Category 1 hurricane has sustained winds between 74-95 mph";
        break;
    case 2:
        std::cout<<"Winds on a Category 2 hurricane are between 96-110 mph.";
        break;
    case 3:
        std::cout<<"A Category 3 hurricane has continuous winds between 111-129 mph, where devastating damage will occur,";
        break;
    case 4:
        std::cout<<"Category 4 storms can cause catastrophic damage with their 130-156 mph winds.";
        break;
    case 5:
        std::cout<<"Category 5 hurricanes are the most devastating, with sustained winds of at least 157 mph.";
        break;
default:
    std::cout<<"Please make sure you entered a category between 1 and 5";



}



    return 0;
}