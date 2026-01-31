#include <stdio.h>
#define N 3
struct tec{
	long long id;
    char name[20];
    char offer[20];
	struct payroll{
		int base;
		int byside;
		int offbyside;
	}pay;
    struct date{
	    int year;
	    int month;
	    int day;
  }born;
	int totalpay;
};
int main(void){
	int i;
	struct tec a[N];
	for(i=0;i<N;i++){
		scanf("%lld %s %s %d %d %d %d %d %d", &a[i].id,a[i].name,a[i].offer,&a[i].pay.base,&a[i].pay.byside,&a[i].pay.offbyside,&a[i].born.year,&a[i].born.month,&a[i].born.day);
		a[i].totalpay=a[i].pay.base+a[i].pay.byside+a[i].pay.offbyside;
	}
	
	for(i=0;i<N;i++){
		if(a[i].totalpay>5000){
			printf("姓名:%s,出生日期:%d.%d.%d,工资:%d\n", a[i].name,a[i].born.year,a[i].born.month,a[i].born.day,a[i].totalpay);
		}
	}
    return 0;
}
