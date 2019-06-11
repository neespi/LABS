#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Header_2.h"

_Bool IsAnArea(double x, double y){
    if ((x >= -1 && x <= 1 && y>=1 && y<=0 ) || (x>=-1 && x<=0 && y >=-1 && y <= 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
