#include<stdio.h>


int main()
{
	char fname[100] = "time.log";
	FILE* fp;
	int min, sec, x,sum, avr, avr_min, avr_sec;
	int max=0;
	int k;
	fp = fopen(fname, "r");
	
	if (fp == NULL) {
		printf("Failed to open file\n");
		return 0;
	}
	sum=0;
	x=0;
	while(!feof(fp)) {
		x+=1;
		if(min*60+sec>max) max=min*60+sec;
		sum+=(min*60+sec);
		fscanf(fp, "(%d:%d)\n", &min, &sec);
		printf("min = %d, sec = %d\n", min, sec);
	
		// get min, max, avg access time 

	}
	avr=sum/x;
	avr_min=avr/60;
	avr_sec=avr%60;
	k = max%60;
	printf("average is %d min %d sec\n",avr_min,avr_sec);
	printf("maximum = %d: %d\n", max/60, k);
	return 0;
}

