//Write a program to calculate rectangle area through diagonal and side area of rectangle.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void read_info(float& side_area , float& diagonal){
    cout << "Diagonal is the biggest own " << endl;
    cout << "Enter the side area of rectangle : ";
    cin >>side_area;
    cout << "Enter the Diagonal of rectangle : ";
    cin >>diagonal;
}
float Cacule_Rectangle_Area(float side_area ,float diagonal){
    float Area ;
    Area = side_area * sqrt(pow(diagonal , 2)-pow(side_area ,2));
    return Area;
}
void print_Rectagle_Area(float Area ){
    cout <<"\nRectangle Area = " << Area;
}

int main ()
{
    float side_area , diagonal ;
    read_info(side_area ,diagonal);
    print_Rectagle_Area(Cacule_Rectangle_Area(side_area , diagonal));
   return 0;
}
