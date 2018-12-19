#include<stdio.h>
#include<iostream>
using namespace std;
int main() {

	int n;

	int total, effect;

	double x, y;

	scanf("%d", &n);

	scanf("%d%d", &total, &effect);
	
	x = (double)effect / total;        /* 鸡尾酒疗法*/

	for(int i = 1; i < n; ++i) {

		scanf("%d%d", &total, &effect);

		y = (double)effect / total;    /* 其他疗法 */

		if((x - y) > 0.05)

			printf("worse\n");

		else if((y - x) > 0.05)

			printf("better\n");

		else

			printf("same\n");

	}

	return 0;

}
