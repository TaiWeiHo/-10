#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

char n;

printf("�п�J�^��r��:"); 
scanf("%c",&n);

if((n>='A')&&(n<='Z')){
n+=32;
printf("�ഫ��%c\n",n);
}
else if((n>='a')&&(n<='z')){
n-=32;
printf("�ഫ��%c\n",n);	
}
else{
printf("�A��J�����O�^��r��\n");
}

system("PAUSE");
return 0;
}
