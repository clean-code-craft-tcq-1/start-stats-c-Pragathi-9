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


int emailAlerter()
{
  printf("Email Alert: Maximum value greater than threshold");
 
  return( ++emailAlertCallCount);
  
}
int ledAlerter()
{
  printf("LED glow Alert: Maximum value greater than threshold");
  return(++ledAlertCallCount);
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  struct Stats m;
  if (m.max > maxThreshold)
  {
	alerters[0];
	
	alerters[1];
	
  }
	
}






