//   Dec 12, 2022 09:24:24 PM		 43A - Football	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, goal(0);
    cin >> n;

    string team, win;
    while (n--)
    {
        if (goal != 0)
        {
            cin >> team;
            if (team == win)
            {
                goal += 1;
            }
            else
            {
                goal -= 1;
            }
        }
        else
        {
            cin >> win;
            goal = 1;
        }
    }
    cout << win << endl;
    return 0;
}
