#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ipSum(char *a, char *b) {
	int i = 0;
	int j = 0;
	int seg = 0;
	char ipArray[4][4] = {};
	char ipArray2[4][4] = {};
	char finalArray[4][4] = {};
	char loserArray[4][4] = {};
	
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
	
	i = 0, j = 0, seg = 0;
	
	while (b[i] != '\0' && seg < 4) {
		if (b[i] == '.') {
			ipArray2[seg][j] = '\0';
			seg++;
			j = 0;
		} else {
			ipArray2[seg][j++] = b[i];
		} i++;
	} ipArray2[4][j] = '\0';
	
	for (int k = 0; k <= seg; k++) {
		printf("%dst Segment:\t%s\n", k + 1, ipArray2[k]);
	}
	
	i = 0, j = 0, seg = 0;
	
	for (int k = 0; k <= seg; k++) {
		if (ipArray[seg][i] == ipArray2[seg][i] && ipArray[seg][i] == '\0') {
			finalArray[seg][i] == '\0';
			seg++;
			i = 0;
		} else if (ipArray[seg][i] != ipArray2[seg][i]){
			loserArray[seg][i] = ipArray[seg][i];
			i++;
		} else {
			finalArray[seg][i] = ipArray[seg][i];
			i++;
		}
	}
	for (int k = 0; k <= seg; k++) {
		printf("final Array %s", finalArray[k]);
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
