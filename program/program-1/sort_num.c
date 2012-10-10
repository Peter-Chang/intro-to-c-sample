/**  @File: sort_num.c
  * 
  * Copyright (c) 2012, Peter Chang (phchang@sslab.cs.nthu.edu.tw)
  *
  * All rights reserved.
  *
  */
#include<stdio.h>

int main(int argc, const char *argv[])
{
	int big, mid, small;
	int temp_1, temp_2;

	scanf("%d", &big);
	scanf("%d", &mid);
	scanf("%d", &small);

	/*
	 * Sort big and mid first.
	 *
	 * If mid > big, then swap them and let big > mid
	 * Otherwise, we don't need to do anything.
	 */
	if (mid > big) {
		//Swap between big and mid, let big > mid
		temp_1 = big;
		big = mid;
		mid = temp_1;
	}

	/*
	 * Sort between sorted (big, mid) and small
	 *
	 * If small > big, then let small become the "big" and let big become the "mid" and mid become the "small"
	 * If small > mid, then swap mid and small
	 * If small < big and small < mid, do nothing;
	 */
	if (small > big) {
		/*
		 * Let Big > mid > small
		 */
		//Save (big, mid) into (temp_1, temp_2)
		temp_1 = big;
		temp_2 = mid;
		//Put previous "small" into big
		big = small;
		//Put (temp_1, temp_2) into (mid, small)
		mid = temp_1;
		small = temp_2;
	} else if (small > mid) {
		/*
		 * Swap mid and small
		 */
		temp_1 = small;
		small = mid;
		mid = temp_1;
	}

	printf("(big, mid, small) = (%d, %d, %d)\n", big, mid, small);

	return 0;
}
