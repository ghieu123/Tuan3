#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX_RANDOM 100

// Hàm tạo và xuất ma trận a chứa các phần tử ngẫu nhiên
void generateRandomMatrix(int** a, int m, int n) {
	srand(time_t(NULL));
	printf("Cau 1: Ma tran ngau nhien:\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			a[i][j] = rand() % (MAX_RANDOM + 1);
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

// Hàm xuất phần tử lớn nhất trên từng cột
void maxElementOfColumns(int** a, int m, int n) {
	printf("\nCau 3: Xuat phan tu lon nhat tren tung Cot:\n");
	for (int j = 0; j < n; ++j) {
		int max = a[0][j];
		for (int i = 1; i < m; ++i) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
		printf("Cot %d: %d\n", j, max);
	}
}

int main() {
	int m, n;
	printf("Hay nhap so Hang (m): ");
	scanf_s("%d", &m);
	printf("Hay nhap so Cot (n): ");
	scanf_s("%d", &n);

	// Cấp phát bộ nhớ cho ma trận 2 chiều a
	int** a = (int**)malloc(m * sizeof(int*));
	for (int i = 0; i < m; ++i) {
		a[i] = (int*)malloc(n * sizeof(int));
	}

	// 1. Tạo và xuất ma trận a chứa các phần tử ngẫu nhiên
	generateRandomMatrix(a, m, n);

	// 3. Xuất phần tử lớn nhất trên từng cột
		maxElementOfColumns(a, m, n);

	_getch();
}
