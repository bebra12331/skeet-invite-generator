
//SKEET INVITE GENERATOR
//MADE BY JAKBES#5483
//100% REAL NO FAKE

#include <string> 
#include <stdio.h>
#include <ctime>
#include <iostream>
#include <cstdlib>
//random includes, i dont really know if all of them are useful
using namespace std;



const int MAX = 100;

string skeetcodegen(int n)
{

    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',

                          'h', 'i', 'j', 'k', 'l', 'm', 'n',

                          'o', 'p', 'q', 'r', 's', 't', 'u',

                          'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',

                          'H', 'I', 'J', 'K', 'L', 'M', 'N',

                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',

                          'V', 'W', 'X', 'Y', 'Z', '0', '1','2', '3','4', '5','6', '7', '8','9', };



    string res = "";

    for (int i = 0; i < n; i++)

        res = res + alphabet[rand() % MAX];



    return res;
}


int main()
{

    srand(time(NULL));

    int n = 30;

    std::cout  << "Your skeet invite code is: " << skeetcodegen(n) << endl;
    std::cout << "Enjoy!" << endl;
    system("pause");
    return 0;
}