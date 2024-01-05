#include "stdio.h"
#include "stdbool.h"
bool kiemtradoixung(int n, int A[]){
	int i;
	int dem = 0;
	for(i = 0; i < n; i++){
		if(A[i] != A[n-i-1]){
		dem++;
		}
	}
	if(dem == 0) printf("\n mang doi xung");
		else printf("\n mang khong doi xung");
}
int main(){
	int n;
	printf("so phan tu la:");
	scanf("%d", &n);
	int A[n];
	
	int i;
	for(i = 0; i < n; i++){
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	printf("\nso phan tu vua nhap la:\n");
	for(i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
	
	kiemtradoixung(n, A);
}
