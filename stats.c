#include "stats.h"
#include <stdio.h>

struct Stats compute_statistics(const float* numberset, int setlength)
{
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int i,j;
    float sum=0;	
    
    s.min = s.max = numberset[0];
    for(i=1; i<setlength; i++)
    {
         if(s.min>numberset[i])
           {
		 s.min=numberset[i];   
           }
        
	if(s.max<numberset[i])
           {
               s.max = numberset[i]; 
           }
    }
    
    for (j=0;j<setlength;j++)
    {
        sum+= numberset[j];
    }
    s.average= (sum/setlength);
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void emailAlerter()
{
  printf("Email Alert: Maximum value greater than threshold");
  
}
void ledAlerter()
{
  printf("LED glow Alert: Maximum value greater than threshold");

}

check_and_alert(maxThreshold, alerters, computedStats)
{
  struct Stats m;
  if (m.max > maxThreshold)
  {
	alerters[0];
	emailAlertCallCount++;
	alerters[1];
	ledAlertCallCount++;
  }
	
}






