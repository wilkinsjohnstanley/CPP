#include <iostream>

int main(){

int compNum = 5;
int guess;

do{
    std::cout<<"Please guess a number between 1 and 5"<<'\n';
    std::cin>>guess;
}
while(guess != compNum);
std::cout<<"You did it! Congradulations!";





    return 0;
}