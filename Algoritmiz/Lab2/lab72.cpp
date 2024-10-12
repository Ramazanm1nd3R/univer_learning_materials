#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if(A+B>C 
    && A+C>B 
    && B+C>A)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

/*  
    3+4>5
    3+5>4
    4+5>3   TRUE

    1+1>8
    1+8>1
    1+8>1   FALSE   
*/