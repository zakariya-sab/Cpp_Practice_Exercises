//read name from user then print the name.
#include <iostream>
#include <cmath>
#include <string>

void print_name(string name )
{
    cout <<"\nYour name is  :"<<name<< endl;
}

string read_name()
{
    string name = "ther is no name here ";
    cout<<"\nEnter your name :";
    getline(cin,name);
    return name ;
}
int main ()
{
  print_name(read_name());
return 0;
}