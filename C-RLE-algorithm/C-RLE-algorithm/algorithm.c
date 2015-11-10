#include <stdio.h>
#include <stdlib.h>

#define DATASIZE 100

int main(void) {
	int i, count = 0;
	char *inputData = (char *)malloc(sizeof(char) * DATASIZE);
	printf("Input Data : ");
	gets_s(inputData, DATASIZE);
	printf("Compress Data : \n");
	for (i = 0;i < DATASIZE;i++) {
		if (i != 0) {
			count++;
			if (inputData[i] != inputData[i - 1]) {
				printf("%c%d", inputData[i - 1], count);
				count = 0;
			}
			if (inputData[i] == 0)
				break;
		}
	}
}