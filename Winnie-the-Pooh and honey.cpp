
/* 	 Dec 29, 2022 08:55:22 PM		 120C - Winnie-the-Pooh and honey	 GNU C++	Accepted	30 ms	200 KB */
#include<cstdio>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, k;
	while (scanf("%d%d", &n, &k) == 2){
		int ans = 0;
		for (int i = 0; i < n; i++){
			int a;
			scanf("%d", &a);
			for (int j = 1; j <= 3 && a >= k; j++)
				a -= k;
			ans += a;
		}
		printf("%d\n", ans);
	}
	return 0;
}
