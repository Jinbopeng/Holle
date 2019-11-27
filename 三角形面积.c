#include<stdio.h>
#include<math.h>
void main(){
    double a,b,c,s,t,area;
    int flag=1;
    printf("请输入三角形的三边(大于零):");

    while(flag){
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a>0&&b>0&&c>0){
            s=(a+b+c)/2;
            t=s*(s-a)*(s-b)*(s-c);
            if(t>0){
                area=sqrt(t);
                printf("三角形面积为:%0.3lf",area);
                flag=0;
            }
            else
                printf("该三条边无法构成三角形,请重新输入:");
        }
        else
            printf("要求边数输入大于零,请重新输入:");
    }
}
