#include <stdio.h>
#include <string.h>

void multiplyMatrix(int m1[4][4], int m2[4][4], int result[4][4]) {
	for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
					result[i][j] = 0;
					for (int k = 0; k < 4; k++) {
							result[i][j] += m1[i][k] * m2[k][j];
					}
			}
	}
}

void sumMatrix(int m1[4][4], int m2[4][4], int result[4][4]) {
	for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
					result[j][k] = m1[j][k] + m2[j][k];
			}
	}
}

void subMatrix(int m1[4][4], int m2[4][4], int result[4][4]) {
	for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
					result[j][k] = m1[j][k] - m2[j][k];
			}
	}
}

void printMatrix(int m[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}


int main(){
	int m1[4][4], m2[4][4], result[4][4];
	char op[5];

	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 4;j++){
			scanf("%d", &m1[i][j]);
		}
	}

	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 4;j++){
			scanf("%d", &m2[i][j]);
		}
	}

	scanf("%s", op);

	if (strcmp(op, "soma") == 0) {
		sumMatrix(m1, m2, result);
	} else if (strcmp(op, "sub") == 0) {
		subMatrix(m1, m2, result);
	} else if (strcmp(op, "mult") == 0) {
		multiplyMatrix(m1, m2, result);
	}

	printMatrix(result);

	return 0;
}
