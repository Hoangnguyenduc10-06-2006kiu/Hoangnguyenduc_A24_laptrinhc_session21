#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("bt01.txt ","w");
printf("moi ban nhap chuoi ki tu trong file bt01: ");
char mytext[100];
fgets(mytext,sizeof(mytext),stdin);
fprintf("%s",mytext);
	return 0;
}

