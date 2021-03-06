struct Stats
{
	float average;
	float min;
	float max;
};

struct Stats compute_statistics(const float* numberset, int setlength);

typedef int (*alerter_funcptr)(int);
int emailAlerter(int);
int ledAlerter(int);

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
