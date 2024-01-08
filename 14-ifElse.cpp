#include <iostream>

int main(){

int computerNum = 4;
int guess;
std::cout<<"Please guess a number between 1 and 5" << '\n';
std::cin>>guess;


if(guess>computerNum){
std::cout<<"That's too high. Please try a lower number." << '\n';

} else if (guess<computerNum){
    std::cout<<"That's too low. Please try a higher number." << '\n';

} else if (guess==computerNum){
    std::cout<<"Congratulations. You guessed correctly. How did you know?" << '\n';

}


    return 0;
}