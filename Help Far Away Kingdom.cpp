#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    size_t n = s.find('.');
    if (s[n-1] == '9')
    {
        cout << "GOTO Vasilisa." << endl;
    }
    else
    {
        if (s[n+1] >= '5')
        {
            s[n-1] += 1;
        }
        s.erase(s.begin() + n, s.end());
        cout << s << endl;
    }

    return 0;
}
