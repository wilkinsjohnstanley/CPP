#include <iostream>

int main(){

int oneD[3]={1, 2, 3};
int twoD[2][3]=
{
    {4, 5, 6},
    {7, 8, 9}
};
int threeD[2][2][3]=
{
    {
        {10, 11, 12}, {13, 14, 15}
    },
    {
        {16, 17, 18}, {19, 20, 21}
    }
};

std::cout<<oneD[2] << '\n';
std::cout<<twoD[0][1] << '\n';
std::cout<<threeD[1][0][1] << '\n';

    return 0;
}