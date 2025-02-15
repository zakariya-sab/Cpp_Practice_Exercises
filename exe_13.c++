//Max of Theree Numbers.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
struct stTow_Numbers{
    int numbre1;
    int numbre2;
    int number3;
};

void read_numbers( stTow_Numbers &user ){
    cout<<"Enter the first number : ";
    cin >> user.numbre1;
    cout<<"Enter the second number : ";
    cin >> user.numbre2;
    cout<<"Enter the theret number : ";
    cin >> user.number3;
}
int Max_numbers(stTow_Numbers user){
    if(user.numbre1 > user.numbre2)
        if(user.numbre1> user.number3)
            return user.numbre1;
        else
            return user.number3;
    else
        if(user.numbre2 > user.number3)
            return user.numbre2;
        else
            return user.number3;
}

void print_result(int result){
    cout << endl<<"Max of numbers = "<<result;
}
int main ()
{
    stTow_Numbers zakariya ;
    read_numbers(zakariya);
    print_result(Max_numbers(zakariya));
}