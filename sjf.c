#include<stdio.h>
struct process
{
    int pid, at, bt,ct, tat, wt, rt;
}p[3];
int main(){
    struct process p1;
    int i,j;
    for(i=0;i<3;i++) {
        printf("Enter AT,BT for P%d \n",i+1);
        scanf("%d%d",&p[i].at,&p[i].bt);
        p[i].pid=i+1;
    }
    int n=3;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            int temp= 
        }
    }
}