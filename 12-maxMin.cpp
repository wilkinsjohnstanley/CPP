#include <iostream>

int main(){

int firstNum;
int secondNum;

std::cout<<"Please enter a number: ";
std::cin>>firstNum;
std::cout<<"Please enter another number: ";
std::cin>>secondNum;
//be careful to includ std::
std::cout<<"The bigger number was " << std::max(firstNum, secondNum) << '\n'
<< "And the smaller number was " << std::min(firstNum, secondNum);



    return 0;
}