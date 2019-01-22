#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node {
	int a, b;
};

bool cmp (Node x, Node y) {
	if (x.a <= y.a)
		return true;
	return false;
}

int main() {
	int N;
	scanf("%d", &N);
	Node no[1000];
	int cnt = 0;
	for (int i = 1; i * i < N; i++) {
		for(int j = 1; j * j < N; j++) {
			if (i * i + j * j == N) {
				if (i <= j) {
					no[cnt].a = i;
					no[cnt++].b = j;
				}			
			}
		}
	}
	sort(no, no + cnt, cmp);
	if (cnt == 0) {
		printf("No Solution\n");
	}
	else
	for (int i = 0; i < cnt; i++) {
		printf("%d %d\n", no[i].a, no[i].b);
	}
	return 0;
	
}
