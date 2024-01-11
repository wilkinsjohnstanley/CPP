#include <iostream>
#include <windows.h>

int main(){

int i=1;
std::cout<<"Watch me count: " << '\n';
while(i<=10){
    std::cout<< i << '\n';
    i++;
    Sleep(1000);;

    
}


    return 0;
}