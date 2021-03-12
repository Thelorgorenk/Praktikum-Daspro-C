#include <iostream>
using namespace std;

int main()
{
    int rows, rown, spaces;
    int bawah, kanan;
    cin >> bawah >> kanan >> rows;
    rows = rows-1;
    for (int i=1; i<=bawah; i++)
    {
        for (rown=1; rown<=rows; rown++)
        {
            for (spaces=1; spaces<=rows-rown+1; spaces++) cout << " "; 
            for (int j=1; j <= (2*(rown)-1); j++) cout << "#"; 
            for (spaces=1; spaces<=2*(rows-rown)+1; spaces++) cout << " "; 
            for (int j=1; j <= (2*(rown)-1); j++) cout << "#"; 
            for (int j=1; j<kanan; j++)
            {
                for (spaces=1; spaces<=2*(rows-rown)+2; spaces++) cout << " "; 
                for (int j=1; j <= (2*(rown)-1); j++) cout << "#"; 
                for (spaces=1; spaces<=2*(rows-rown)+1; spaces++) cout << " "; 
                for (int j=1; j <= (2*(rown)-1); j++) cout << "#"; 
            }
            cout << endl;
        }
        for (int rown=1; rown<=rows*2+1; rown++)
        {
            for (spaces=1; spaces<=rown-1; spaces++) cout << " "; 
            for (int j=1; j <= (2*(2*rows+1-rown)+1); j++) cout << "#"; 
            for (int j=1; j<kanan; j++)
            {
                for (spaces=1; spaces<=2*(rown-1); spaces++) cout << " "; 
                for (int j=1; j <= (2*(2*rows+1-rown)+1); j++) cout << "#"; 
            }
            cout << endl;
        }

    }
}
