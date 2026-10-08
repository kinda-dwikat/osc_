#include <stdio.h>

int main(){
printf("size of int is %zu \n",sizeof(int));
printf("size of double is %zu \n",sizeof(double));
printf("size of float is %zu \n",sizeof(float));
printf("size of void is %zu \n",sizeof(void));
printf("size of pointer is %zu \n",sizeof(char *));
printf("size of long int is %zu \n",sizeof(long int));
printf("size of short int is %zu \n",sizeof(short int));
char i=-1;
if(i<0){
printf("char is signed");
}
else{
printf("char is not signed");
}

}
