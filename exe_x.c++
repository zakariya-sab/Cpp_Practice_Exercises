//Write a program to ask the user to enter number of day then print the day.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

enum endays{Sunday = 1, Monday=2, Tusday=3 , Wednesday =4, Thursday =5 , Friday =6 , Saturday =7 };

void days_of_week(){
    cout <<"1 for Sunday"<<endl;
    cout <<"2 for Monday"<<endl;
    cout <<"3 for Tusday "<<endl;
    cout <<"4 for Wednesday"<<endl;
    cout <<"5 for Thursday"<<endl;
    cout <<"6 for Friday"<<endl;
    cout <<"7 for Saturday"<<endl;
    cout <<endl;
    cout <<"******************************************************************";
    cout <<endl;
}

short read_number_of_day(){
    short day ;
    days_of_week();
    do{
    cout <<"Pleas Enter number of day : ";
    cin >>day;
    }while(day < 1 || day > 7);
    return day;
}



void print_result(short  x){
    switch(x){
     case       endays::Sunday    : cout <<"is Sunday"<<endl;     break;
     case       endays::Monday    : cout <<"is Monday"<<endl;     break;
     case       endays::Tusday    : cout <<"is Tuesday "<<endl;   break;
     case       endays::Wednesday : cout <<"is Wednesday"<<endl;  break;
     case       endays::Thursday  : cout <<"is Thursday"<<endl;   break;
     case       endays::Friday    : cout <<"is Friday"<<endl;     break;
     case       endays::Saturday  : cout <<"is Saturday"<<endl;   break;
    }
}

int main ()
{
    system(colore )
    print_result(read_number_of_day());
   return 0;
}