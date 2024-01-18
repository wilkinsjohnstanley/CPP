#include <iostream>
#include <windows.h>

using namespace std;

void fizzBuzz(int n) {

for(int i = 1; i<=n; i++){
    Sleep(1000);

if(i==1 || i==2){
    cout<<i<<'\n';
}
else if(i%3==0 && i%5==0){
    cout<<"FizzBuzz"<<'\n';;
}
else if(i%3==0){
    cout<<"Fizz"<<'\n';;
}
else if (i%5==0){
    cout<<"Buzz"<<'\n';;
}
else if (!(i%3==0 || i%5==0)){
    cout<<i<<'\n';;
}


}

}

int main()
{

int n;
cout<<"Enter a number: "<<'\n';
cin>>n;
    fizzBuzz(n);

    return 0;
}

