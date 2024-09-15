#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ipSum(char *a, char *b) {
	int i = 0;
	int j = 0;
	int seg = 0;
	char ipArray[4][4] = {};
	
	while (a[i] != '\0' && seg < 4) {
		if (a[i] == '.') {
			ipArray[seg][j] = '\0';
			seg++;
			j = 0;
		} else {
			ipArray[seg][j++] = a[i];
		} i++;
	} ipArray[4][j] = '\0';
	
	for (int k = 0; k <= seg; k++) {
		printf("%dst Segment:\t%s\n", k + 1, ipArray[k]);
	}
}

int main(int argc, char *argv[]) {
	if (argc < 3) {
		printf("Usage %s <First_IP_Segment> <Second_IP_Segment>\n", argv[0]);
		return 1;
	}
	
	ipSum(argv[1], argv[2]);
	
	
	return 0;
}
