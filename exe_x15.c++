//Write a program to read a text and encrypt it , decrypt it .
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


string encrypt_word( string word , int EncryptionKey ){
       for(short i = 0 ;i <= word.length() ; i++){
            word[i] = char((int)word[i]+ EncryptionKey);

       }
     cout <<"\nText after encrypt : "<<word;
     return word ;
}

string decrypt_word( string word , int EncryptionKey ){
       for(short i = 0 ;i <= word.length() ; i++){
            word[i] = char((int)word[i] -  EncryptionKey);

       }
     cout <<"\nText pefore encrypt : "<<word;
     return word ;
}

int main ()
{
    int EncryptionKey = 2 ;
    string TEXT = read_srting();
    TEXT =encrypt_word (TEXT,EncryptionKey);
    TEXT =decrypt_word (TEXT,EncryptionKey);
    return 0;
}