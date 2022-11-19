//Nov 18, 2022 11:28:00 AM	 104A - Blackjack	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 10 || n > 21)
    {
        cout << 0 << endl;
    }
    else if (n == 20)
    {
        cout << 15 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
    return 0;
}
