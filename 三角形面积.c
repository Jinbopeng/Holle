#include<stdio.h>
#include<math.h>
void main(){
    double a,b,c,s,t,area;
    int flag=1;
    printf("�����������ε�����(������):");

    while(flag){
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a>0&&b>0&&c>0){
            s=(a+b+c)/2;
            t=s*(s-a)*(s-b)*(s-c);
            if(t>0){
                area=sqrt(t);
                printf("���������Ϊ:%0.3lf",area);
                flag=0;
            }
            else
                printf("���������޷�����������,����������:");
        }
        else
            printf("Ҫ��������������,����������:");
    }
}
