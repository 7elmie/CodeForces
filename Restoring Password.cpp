#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, digit[10];
    cin >> s;
    for (size_t i = 0; i < sizeof(digit) / sizeof(digit[0]); ++i)
    {
        cin >> digit[i];
    }
    for (size_t i = 0; i < 8; ++i)
    {
        string x = s.substr(i * 10, 10);
        for (size_t j = 0; j < 10; ++j)
        {
            if (x == digit[j])
            {
                cout << j;
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
