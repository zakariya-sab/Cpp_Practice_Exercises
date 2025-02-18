//Write a program to calculate Circle Area along the circumference.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void read_info(float& circumference  ){
    cout << "Enter the  circumference : ";
    cin >> circumference;
}
float Cacule_Circle_Area(float circumference){
    float Area ;
    const float Pi = 3.141592653589793238;
    Area = pow(circumference , 2 ) / (4*Pi);
    return Area;
}
void print_Circle_Area(float Area ){
    cout <<"\nCircle Area = " << Area;
}

int main ()
{
    float  circumference ;
    read_info(circumference);
    print_Circle_Area(Cacule_Circle_Area(circumference));
   return 0;
}