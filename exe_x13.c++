//Write a program to print all words from AAA to ZZZ
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
 void PrintFromAAAtoZZZ(){
     for(int i = 65 ;i<=90;i++){
        for(int j = 65 ;j<=90;j++){
            for(int k = 65 ;k<=90;k++){
                cout << char(i)<<char(j)<<char(k);
                cout <<endl;
             }
        }
    }
}

int main ()
{
    PrintFromAAAtoZZZ();
    return 0;
}