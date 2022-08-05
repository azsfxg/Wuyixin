#include <stdio.h>
int main(){
	int maxnumber;
	scanf("%d",&maxnumber);
	int i;
	int x;
	int a[maxnumber];
	for(i=0;i<maxnumber;i++){
		a[i] = 1;
	}
	for(x=2;x<maxnumber;x++){
		if(a[x] == 1){
		for(i =2;i*x<maxnumber;i++){
			a[i*x] = 0;
		}
		}
	}
	for(i=2;i<maxnumber;i++){
		if(a[i] == 1){
			printf("%d\t",i);
		}
	}
	return 0;
}
