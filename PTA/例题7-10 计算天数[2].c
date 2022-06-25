# include <stdio.h>
int day_of_year(int year, int month, int day);

int main(void) 
{
    int day, month, year;

    scanf("%d%d%d", &year, &month, &day);
    printf("%d\n", day_of_year(year, month, day));

    return 0;
}

int day_of_year(int year, int month,int day){
	int i , sum = 0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31} ;
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) a[1]=29 ;
	else a[1]=28 ;
	for(i = 0 ; i < month - 1 ; i ++){
		sum += a[i] ;
	}
   sum += day ;
	return sum ;
}

