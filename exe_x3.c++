// Write a program to print Perfect Number from 1 to N .
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int read_number()
{
    int number;
    do
    {
        cout << "Enter a number : ";
        cin >> number;
    } while (number <= 0);
    return number;
}

bool Is_prefect(int numbre)
{
    int sum_all_diviors = 0;
    if (numbre == 1)
    {
        return true;
    }
    for (int i = 1; i <= numbre / 2; i++)
    {
        if (numbre % i == 0)
            sum_all_diviors += i;
    }
    if (sum_all_diviors == numbre)
        return true;
    else
        return false;
}

void print_result(int result)
{
    cout << result << " is a prefect number \n";
}

void print_number_prefect_from_1_to_N(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (Is_prefect(i))
        {
            print_result(i);
        }
    }
}

int main()
{
    print_number_prefect_from_1_to_N(read_number());
    return 0;
}