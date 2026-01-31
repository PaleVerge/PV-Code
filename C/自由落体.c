#include<stdio.h>
#include<math.h>

int main(void){
    int count=0;
    double H,S_1,V,L,K;
    int n;
    
    scanf("%lf %lf %lf %lf %lf %d",&H,&S_1,&V,&L,&K,&n);
    double time_min=sqrt((H-K)/5.0);
    double time_max=sqrt(H/5.0);
    double x_max=V*time_max;
    double x_min=V*time_min;
    double x_left=S_1-x_max;
    double x_right=S_1-x_min+L;

    
    for(int i=0;i<n;i++){
        double ball_pos=i;
        if(ball_pos<=x_right + 1e-5 && ball_pos>=x_left - 1e-5){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}