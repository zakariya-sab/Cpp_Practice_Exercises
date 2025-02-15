//Rectangle Area.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void read_info(float& lenght , float& ep){
    cout << "Enter the length of rectangle : ";
    cin >>lenght;
    cout << "Enter the ep of rectangle : ";
    cin >>ep;
}
float Cacule_Rectangle_Area(float lenght ,float ep){
    float Area = lenght * ep ;
    return Area;
}
void print_Rectagle_Area(float Area ){
    cout <<"\nRectangle Area = "<<Area;
}

int main ()
{
    float lenght , ep ;
    read_info(lenght ,ep);
    print_Rectagle_Area(Cacule_Rectangle_Area(lenght , ep));
   return 0;
}
