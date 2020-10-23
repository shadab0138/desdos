#include<stdio.h>
int add (int a,int b){
    int sum=0;
    sum=a+b;
    return sum;
}
int main(){
    printf("Sum=%d",add(10,90));
    return 0;

}