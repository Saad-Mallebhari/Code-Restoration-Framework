#include <stdio.h>
#include <string.h>
int main (){
     char s1[20] = "Unstoppable";
     char s2[10] = "stop";
     strstr(s1,s2);
     printf("substring : %s",s2);
     return 0;
}
