#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int i =0;
	int level;
	int count = 0;
	int max = 0;
	int current=0;

	while(i<n) {
		scanf("%d",&level);

		if(level>70) {
// 			count = count+level;
            count++;
            current++;
		}
		if(current>max){
		    max= current;
		}
		else{
		    current = 0;
		}
		i++;
	}
// 	printf("greater: %d",level);
	printf("Noise Violations: %d\n",count);
	printf("Longest Violations streak: %d",max);
	return 0;
}
