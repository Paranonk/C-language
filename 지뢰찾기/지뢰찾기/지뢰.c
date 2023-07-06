#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {


	int m, n;
	int count = 0;

	scanf("%d %d", &m, &n);
	char** matrix = malloc(sizeof(char*) * m);

	for (int i = 0; i < m; i++) {
		matrix[i] = malloc(sizeof(char) * (n + 1));

	}



	for (int i = 0; i < m; i++) {

		scanf("%s", matrix[i]);
	}

	for (int i = 0; i < m; i++) {



		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == '.')
			{
				matrix[i][j] = '0';
			}

		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			if (matrix[i][j] == '*') {
				for (int y = i - 1; y < i + 2; y++) {
					for (int x = j - 1; x < j + 2; x++) {
						if (y < 0 || x < 0 || y >= m || x >= n || matrix[i][j] == matrix[y][x] || matrix[y][x] == '*') {
							continue;
						}
						matrix[y][x] += 1;
					}
				}

			}

		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
		{
			printf("%c", matrix[i][j]);
		}
		printf("\n");
	}
	// 메모리 해제
	for (int i = 0; i < m; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	return 0;
}