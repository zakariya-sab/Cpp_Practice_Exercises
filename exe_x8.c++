//Write a program to read a number , then print all  digit frequency in that number.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int read_number_postive(){
    int number ;
    do{
    cout <<"Enter a number : ";
    cin >>number;
    }while(number <= 0);
    return number;
}

short CountDigitsOfNumber(int number){
    short counte = 0;
    while(number > 0 ){
        number /= 10 ;
        counte++ ;
    }
    return counte;
}

short DigitFrequency(int number , short digit){
    short counte = 0;
    short remainder = 0;
    while(number > 0 ){
        remainder = number % 10 ;
        number /= 10 ;
        if( remainder == digit)
        counte++ ;
    }
    return counte;
}

void print_result(short result ,short digit ){
    cout <<"Digit "<<digit <<" Frequency is :"<<result <<" Time(s)";
}

bool Is_exist(short table[] , short Size , short number){
    for(short i = 0 ; i < Size ; i ++ )
    {
        if( table[i] == number )
            return true ;
    }
    return false;
}

void the_head_of_all_programme(int number , short Size , short remainder[]){
    short cp =0;
    int N = number;
    while(N > 0 ){
        remainder[cp] = N % 10 ;
        N /= 10 ;
        cp++ ;
    }
    short table[Size];
    cp = 0 ;
    for(short i = 0 ;i<= Size-1 ; i++){
        table[cp] = remainder[i];
        if(cp > 0){
            if(Is_exist(table ,cp ,table[cp])){
                cp++;
                continue;
            }
        }
        cp++;
        print_result(DigitFrequency(number,remainder[i]) ,  remainder[i] );
        cout<<endl ;
    }
}

void print_result(int result ,int digit ){
    cout <<"\nDigit "<<digit <<" Frequency is :"<<result <<" Time(s)";
}

int main (){
    int number = read_number_postive();
    short Size = CountDigitsOfNumber(number);
    short remainder[Size]  ;
    the_head_of_all_programme(number,Size,remainder);
   return 0;
}
