#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <sys/time.h>

#if 0
struct tm {
    int tm_sec;         /* seconds */
    int tm_min;         /* minutes */
    int tm_hour;        /* hours */
    int tm_mday;        /* day of the month */
    int tm_mon;         /* month */
    int tm_year;        /* year */
    int tm_wday;        /* day of the week */
    int tm_yday;        /* day in the year */
    int tm_isdst;       /* daylight saving time */
    };
#endif // example struct

int main()
{
	int hr, min, sec, day, mont, yr;

	time_t mytime;

	time(&mytime);
	printf("Today's time - %s\n", ctime(&mytime));

	struct tm *local = localtime(&mytime);

	hr = local->tm_hour;
	min = local->tm_min;
	sec = local->tm_sec;

	day = local->tm_mday;
	mont = local->tm_mon + 1;
	yr = local->tm_year + 1900; //year since 1900

	if(hr < 12) printf("hr:%d\tmin:%d\tsec:%d AM\n", hr, min, sec);
	else // after mid day
		printf("hr:%d\tmin:%d\tsec:%d PM\n", hr, min, sec);
	printf("Date: day:%02d\tmon:%02d\tyr:%d\n", day, mont, yr);


	return 0;
}
