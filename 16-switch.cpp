#include <iostream>


int main(){

    int category;

    std::cout<<"Hurricane categories explained: How strong is each category?"<< '\n'
    <<"Enter a category between 1 and 5:" << '\n';
    std::cin>>category;

switch(category) {
  case 1:
    // code block
    std::cout<<"A Category 1 hurricane has sustained winds between 74-95 mph";
    break;
  case 2:
    // code block
    std::cout<<"Winds on a Category 2 hurricane are between 96-110 mph.";
    break;
  case 3:
    // code block
    std::cout<<"A Category 3 hurricane has continuous winds between 111-129 mph.";
    break;
  case 4:
    // code block
    std::cout<<"Category 4 storms can cause catastrophic damage with their 130-156 mph winds. ";
    break;
   case 5:
    // code block
    std::cout<<"Category 5 hurricanes are the most devastating, with sustained winds of at least 157 mph.";
    break;
  
  default:
    // code block
    std::cout<<"Please enter a number between 1 and 5.";
}


    return 0;
}