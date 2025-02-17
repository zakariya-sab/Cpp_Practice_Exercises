//Write a program to calculate Circle Area.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void read_info(float& rayon  ){
    cout << "Enter the  rayon of circle : ";
    cin >> rayon;
}
float Cacule_Circle_Area(float  rayon ){
    float Area ;
    const float Pi = 3.141592653589793238;
    Area = pow( rayon , 2) *  Pi;
    return Area;
}
void print_Circle_Area(float Area ){
    cout <<"\nCircle Area = " << Area;
}

int main ()
{
    float  rayon ;
    read_info( rayon);
    print_Circle_Area(Cacule_Circle_Area( rayon));
   return 0;
}