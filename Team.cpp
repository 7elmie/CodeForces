//4006945   Jan 9, 2023 09:11:52 AM		 231A - Team	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya, number(0);
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}
