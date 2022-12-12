//   Dec 12, 2022 09:17:15 PM	  270A - Fancy Fence	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        if (360 % (180 - a) == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
