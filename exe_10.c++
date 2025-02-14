//the Average of 3 Mark
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void read_Mark(float & Mark1,float &Mark2,float &Mark3){
    cout << "Enter Mark1  = ";
    cin >> Mark1;
    cout << "Enter Mark2  = ";
    cin >> Mark2;
    cout << "Enter Mark3  = ";
    cin >> Mark3;
}

float sum( float Mark1 , float Mark2 ,float Mark3){
    return (float)(Mark1 + Mark2 + Mark3);
}

float Calculate_Average(float Mark1 ,float Mark2 ,float Mark3){


    return (float)(sum(Mark1 ,Mark2 ,Mark3)/3);
}
 void print_Average(float Average){
    cout << "the Average is  = "<<Average;
}

int main ()
{
    float Mark1, Mark2, Mark3;
    read_Mark(Mark1 ,Mark2 ,Mark3);
    print_Average(Calculate_Average(Mark1 ,Mark2 ,Mark3));
}