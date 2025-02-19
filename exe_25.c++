//Write a program read until age between 18 and 45.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

short read_age(){
    short age;
    cout << "Enter age between 18 and 45 : ";
    cin >>age;
    return age;
}

void Print_The_Age(short age){
    cout << "You win \a your age is :" <<age ;
}
void Test_If_Age_Is_Correct(short age ){
    while(age < 18 || age > 45){
        cout << "You are Roang !"<<endl;
        age = read_age();
    }
    Print_The_Age(age);
}


int main ()
{
Test_If_Age_Is_Correct(read_age());
   return 0;
}