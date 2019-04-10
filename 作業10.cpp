#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

char n;

printf("請輸入英文字母:"); 
scanf("%c",&n);

if((n>='A')&&(n<='Z')){
n+=32;
printf("轉換為%c\n",n);
}
else if((n>='a')&&(n<='z')){
n-=32;
printf("轉換為%c\n",n);	
}
else{
printf("你輸入的不是英文字母\n");
}

system("PAUSE");
return 0;
}
