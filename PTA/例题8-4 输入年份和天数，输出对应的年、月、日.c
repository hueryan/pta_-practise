# include <stdio.h>
void month_day ( int year, int yearday, int * pmonth, int * pday);

int main (void)
{
   int day, month, year, yearday; /*  ��������ա��¡���������ı���*/
   scanf ("%d%d", &year, &yearday );        
   month_day (year, yearday, &month, &day );/* ���ü����¡��պ���  */ 
   printf ("%d %d %d\n", year, month, day );    
   return 0;    
}

void month_day (int year,int yeardy,int *pmonth,int *pday){
	
	int month[] ={31 ,28,31,30,31,30,31,31,30,31,30,31} ;
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		month[1] = 29 ;
	int i = 0;
	while(yeardy > month[i]){
		yeardy -=month[i] ;
		i ++ ;
	}
	*pmonth = i +1;
	*pday = yeardy ;
}
