//Write a program to calculate Triangle Area.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void read_info(float& base ,float& hateur){
    cout << "Enter the Base of Triangle : ";
    cin >>base;
    cout << "Enter the hateur of Triangle : ";
    cin >>hateur;
}
float Cacule_Triangle_Area(float base ,float hateur){
    float Area ;
    Area = 0.5 * base * hateur ;
    return Area;
}
void print_Triangle_Area(float Area ){
    cout <<"\nTriangle Area = " << Area;
}

int main ()
{
    float base , hateur ;
    read_info(base , hateur);
    print_Triangle_Area(Cacule_Triangle_Area(base , hateur));
   return 0;
}