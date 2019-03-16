#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
#include <stdlib.h>

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
	 for (int i = 0; i < N; i++) {
		no[i].a = rand();
		no[i].b = rand();
	}
	sort(no, no + N, cmp);
	
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", no[i].a, no[i].b);
	}
	return 0;
}
