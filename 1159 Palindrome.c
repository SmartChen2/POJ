#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;
char arr[5001];
int dp[2][5001];

int main()
{
	int N;
	scanf("%d", &N);
	scanf("%s", arr);
	
	int e = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i; j >= 0; j--) {
			if (arr[i] == arr[j]) 
				dp[e][j] = dp[1 - e][j + 1];
			else//如果不等 有两种方案 一种是把j凑对成回文 一种是把i凑对 XXAB
				dp[e][j] = min(dp[1 - e][j], dp[e][j + 1]) + 1;
				//dp[1 - e][j]是把i凑对 继承上一次的 XXBAB
				//dp[e][j + 1]是把j凑对 XXABA
		}
		e = 1 - e;
	}
	
	printf("%d\n", dp[1 - e][0]);
	return 0;
}
