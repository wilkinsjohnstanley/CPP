#include <iostream>

int main(){

int guess;
int compNum = 5;

do {
std::cout<<"Please enter a number between 1 and 5" << '\n';
std::cin>>guess;

}
while(guess!=compNum);
std::cout<<"You did it! Congradulations!";






    return 0;
}