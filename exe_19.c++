//Write a program to calculate Circle Area By diameter.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void read_info(float& diameter  ){
    cout << "Enter the  Diameter of circle : ";
    cin >> diameter;
}
float Cacule_Circle_Area(float  diameter ){
    float Area ;
    const float Pi = 3.141592653589793238;
    diameter /= 2;
    Area = pow( diameter , 2) *  Pi;
    return Area;
}
void print_Circle_Area(float Area ){
    cout <<"\nCircle Area = " << Area;
}

int main ()
{
    float  diameter ;
    read_info(diameter);
    print_Circle_Area(Cacule_Circle_Area(diameter));
   return 0;
}