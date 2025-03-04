//Write a program to guess a 3-letter Password (all capital). 
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
string read_srting(){
    string password = "" ;
    cout << "Enter your password : ";
    cin >> password;
    return password;
}

 void PrintFromAAAtoZZZ( string password){
     string str = "" ;
     short cp = 1;
     for(int i = 65 ;i<=90;i++){
        for(int j = 65 ;j<=90;j++){
            for(int k = 65 ;k<=90;k++){
               str += char(i) ;
               str += char(j) ;
               str += char(k) ;
               if(str != password){
                    cout <<"Trial ["<<cp<<"]: "<<str;
                    cout<<"\n";
                    cp++;
                    str="";
                    continue;
               }
               else{
                  cout <<"Trial ["<<cp<<"]: "<<str;
                  cout <<endl<<endl;
                  cout<<"Password is "<<str;
                  cout <<endl;
                  cout<<"Found of ter "<<cp<<" Trial(s)";
                  return;
               }
             }
        }
    }
}



int main ()
{
    PrintFromAAAtoZZZ(read_srting());
    return 0;
}