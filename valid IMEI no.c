
#include<stdio.h>
#include<conio.h>
void main(){
int n;
printf("enter the number");
scanf("%d",&n);
int sum=0;
int n1=n;
int m=0;
while(n1>0){
    m++;
    n1=n1/10;

if(m==15){
        while(m>=1){
            int d=n%10;
            if(m%2==0){
                d=d*2;
            }
            while(d>0){
                int d1=d%10;
                sum=sum+d1;
                d=d/10;
            }
            n=n/10;
            m--;
        }

}
}

if(sum%10==0){
    printf("IMEi is valid");
}
else if {
    printf("IMEI is not valid");
}
else{
    printf("Number entered is not valid")
}
getch();
}
