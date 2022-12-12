//   Dec 12, 2022 09:22:57 PM 	 	34B - Sale 	GNU C++0x 	Accepted 	30 ms 	0 KB

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a[100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int s(0);
    for (int i = 0; i < m; ++i)
    {
        if (a[i] >= 0)
        {
            break;
        }
        s += a[i];
    }
    cout << -s << endl;
    return 0;
}
