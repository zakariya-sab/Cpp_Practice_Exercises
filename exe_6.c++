// read first name and last name then print the full Name
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

struct st_full_name{
string first_name ;
string last_name;
};

st_full_name read_full_name(st_full_name &user){
    cout << "Enter your First name :";
    cin >> user.first_name;
    cout << "Enter your Last name :";
    cin >> user.last_name;
    return user;
}

void print_full_name(st_full_name user){
    cout<<endl<<"Your full name is :"<<user.first_name+" "+user.last_name<<endl;
}

int main ()
{
   st_full_name zakariya;
   print_full_name(read_full_name(zakariya));
    return 0;
}