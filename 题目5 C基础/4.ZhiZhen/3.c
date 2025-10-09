#include <stdio.h>
   
   int main() {
       int arr[3] = {10, 20, 30};
       int *ptr = arr;
       
       printf("%d\n", *ptr);      // 输出: 10 *ptr表示对数组arr解引用，会访问数组的第一个元素即arr[0]
       printf("%d\n", *(ptr+1));  // 输出: 20 (ptr+1)表示指针ptr的下一个地址，故*(ptr+1)访问arr[1]
       printf("%d\n", *ptr+1);    // 输出: 11 *解引用符为单目运算符，优先级高于+，所以先进行解引用再进行加法
       
       ptr++;
       printf("%d\n", *ptr);      // 输出: 20 与第八行原理相同
       
       return 0;
   }
