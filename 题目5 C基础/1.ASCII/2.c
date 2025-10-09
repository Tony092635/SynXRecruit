#include <stdio.h>
   
   int main(){
       char a = '1';
       a = a - 48;
       printf("%d",a);
       return 0;
   }
   //   1对应的ASCII码为49，减去48就能打印出真正的1