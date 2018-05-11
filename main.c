#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,s;
	for(s=0,i=0;i<10;i++){
		s=s+i;
	}
	printf("s=%d",s);
	return 0;
}
