#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//
//
//	//int arr1[][5] = { 1,2,3,4,5,6 };
//	int arr2[][5] = { {1,2}, {3,4}, {5,6}};
//
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//A��B����
//int main() {
//	int a = 0, b = 0, tmp = 0;
//	scanf("%d %d", &a, &b);
//
//	tmp = a;
//	a = b;
//	b = tmp;
//
//	printf("%d %d", a, b);
//
//	return 0;
//}



//ʮ�����������
//int main() {
//
//	int arr[10] = { 66,11,-88,0,33,76,17,82,94,101 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int a = 0;
//
//	int MAX = 0;
//
//	for (a = 0; a < sz; a++) {
//
//		if (arr[a] > MAX)
//			MAX = arr[a];
//	}
//
//	printf("%d", MAX);
//
//	return 0;
//}





//������,�ɴ�С���
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	//�������ֵΪa
//	if (b > a) {
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (c > a) {
//		int tmp = 0;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b) {
//		int tmp = 0;
//		tmp = c;
//		c = b;
//		b = tmp;
//	}
//
//	printf("%d %d %d",a,b,c);
//
//	return 0;
//}



//1+2+3+4+5...+100;
//int main() {
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 100; a++) {
//		//b += a;
//		b = b + a;
//	}
//	printf("%d ", b);
//	return 0;
//}


//�ж�һ����n�ܷ�ͬʱ��3��5����
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	if ((n % 3 == 0) && (n % 5 == 0))
//
//	printf("%d ��ͬʱ��3��5����",n);
//
//	else
//		printf("%d ����ͬʱ��3��5����",n);
//
//	return 0;
//}

#include<math.h>
//100��200֮�������
int main() {
	int i = 0;
	for (i = 101; i <= 200; i+=2) {

		int j = 0;
		for (j = 2; j < sqrt(i); j++) {

			if (i % j == 0)
				break;
		}

		if (j > sqrt(i))
			printf("%d ", i);
	}

	return 0;
}
