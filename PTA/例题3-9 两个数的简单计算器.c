# include <stdio.h>
int day_of_year(int year, int month, int day);

int main(void) {
	int day, month, year;

	scanf("%d%d%d", &year, &month, &day);
	printf("%d\n", day_of_year(year, month, day));

	return 0;
}


int day_of_year(int year, int month,int day) {
	int i ;
	switch(month) {

		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			31 ;
		case 4:
		case 6:
		case 9:
		case 11:
			30;
			if(year%4==0 &&year%100 != 0 ||year % 400 == 0) {
				switch(month) {
					case 2:
						28 ;
				}

			} else {
				switch(month) {
					case 2:
						29 ;
				}
			}
	}
	for(i=1;i<day;i++)

}
