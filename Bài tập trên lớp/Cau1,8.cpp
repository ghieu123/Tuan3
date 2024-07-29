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

//8 Hàm xuất dòng chỉ chứa số chẵn
void rowsWithEvenNumbers(int** a, int m, int n) {
	printf("\nCau 8: Xuat dong chi chua so chan:\n");
	for (int i = 0; i < m; ++i) {
		int has_Even = 0;
		for (int j = 0; j < n; ++j) {
			if (a[i][j] % 2 != 0) {
				has_Even = 1;
				break;
			}
		}
		if (has_Even == 0) {
			for (int j = 0; j < n; ++j) {
				printf(" %d", a[i][j]);
			}
			printf("\n");
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

	// 8. Xuất dòng chỉ chứa số chẵn
	rowsWithEvenNumbers(a, m, n);

	_getch();
}
