#include <iostream>
using namespace std;


int factorial(int num);

int main()
{
    int number;
    cout << "enter number = ";
    cin >> number;
    int result = factorial(number);
    
    if(result != -1)
    {
        cout << "factorial: " << result;
    }
    else
    {
        cout << "error";    
    }
}

int factorial(int num)
{
    if(num < 0)
    {
        return -1;
    }
    else
    {
        int result = 1;
        for(int i = 1; i <= num; i++)
        {
            result *= i;
        }
        return result;
    }
}