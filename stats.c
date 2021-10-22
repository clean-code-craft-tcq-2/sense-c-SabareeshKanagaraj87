#include "stats.h"


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    
    float sum = 0.0;    
    for (int i=0; i<setlength; i++)
       sum += numberset[i];
    
    float max = numberset[0];
    for (i = 1; i < setlength; i++)
        if (numberset[i] > max)
            max = numberset[i];
    
    float min = numberset[0];
    for (i = 1; i < setlength; i++)
        if (numberset[i] < min)
            min = numberset[i];

    s.average = sum/setlength;;
    s.min = min;
    s.max = max;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
