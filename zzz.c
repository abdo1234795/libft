#include <libc.h>
int main (){
    int a= write(-1,"",1);
    printf("\n[%d]\n",a);
}