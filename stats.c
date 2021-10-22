#include "stats.h"


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    
    float sum = 0.0;    
    for (int i=0; i<setlength; i++)
       sum += numberset[i];

    s.average = sum/setlength;;
    s.min = 0;
    s.max = 0;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
