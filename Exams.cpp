//4238316   Jan 9, 2023 09:12:59 AM		 194A - Exams	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", k <= n * 3 ? n * 3 - k : 0);
    return 0;
}
