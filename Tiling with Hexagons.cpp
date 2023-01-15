//4055814   Jan 15, 2023 10:07:32 PM		 216A - Tiling with Hexagons	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * b + b * c + c * a - a - b - c + 1 << endl;
    return 0;
}
