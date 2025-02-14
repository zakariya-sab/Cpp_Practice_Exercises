//Max of Two Numbers.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
struct stTow_Numbers{
    int numbre1;
    int numbre2;
};

void read_numbers( stTow_Numbers &user ){
    cout<<"Enter the first number : ";
    cin >> user.numbre1;
    cout<<"Enter the second number : ";
    cin >> user.numbre2;
}
int Max_numbers(stTow_Numbers user){
    int max ;
    if (user.numbre1 > user.numbre2)
        max = user.numbre1;
    else
        max = user.numbre2;
    return max;
}

void print_result(int result){
    cout << endl<<"Max number = "<<result;
}
int main ()
{
    stTow_Numbers zakariya ;
    read_numbers(zakariya);
    print_result(Max_numbers(zakariya));
}