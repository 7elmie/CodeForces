#include <iostream>

//4034009   Jan 15, 2023 10:05:56 PM		 215A - Bicycle Chain	 GNU C++0x	Accepted	15 ms	0 KB

using namespace std;

int main()
{
    int n, m, a[50], b, max(0), count(1);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> b;
        for (int j = 0; j < n; ++j)
        {
            if (b % a[j] == 0)
            {
                int x = b / a[j];
                if (x > max)
                {
                    max = x;
                    count = 1;
                }
                else if (x == max)
                {
                    count += 1;
                }
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}
