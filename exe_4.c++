/*write a program to ask the user to enter his/her :
*Age.
*Driver license.
Then Print "Hired" if his/her age is grater than 21
and s/he has a driver license,otherwise print "Rejected".
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

short age_of_user(){
    short age ;
    cout << "\nEnter your age :";
    cin >> age;
    return age;
}

bool have_Driver_license(){
    bool Driver_license ;
    cout << "\nDo you have a drive license (0 = no ) and (1 = yes) :";
    cin >> Driver_license ;
    return Driver_license ;
}
void print_Hired_or_Rejected(short age , bool Driver_license){
    if(Driver_license && (age >21) )
        cout << "You are Hired \a";
    else
        cout <<"You are Rejected";
}
int main ()
{
    print_Hired_or_Rejected(age_of_user(),have_Driver_license());

return 0;
}