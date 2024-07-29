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

//5 Hàm xuất các phần tử cực đại
void localMaxima(int** a, int m, int n) {
	printf("\nCau 5: Xuat cac phan tu Cuc dai:\n");
	for (int i = 1; i < m - 1; ++i) {
		for (int j = 1; j < n - 1; ++j) {
			if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1]) {
				printf("%d at (%d, %d)\n", a[i][j], i, j);
			}
		}
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

	// 5. Xuất các phần tử cực đại
	localMaxima(a, m, n);

	_getch();
}
