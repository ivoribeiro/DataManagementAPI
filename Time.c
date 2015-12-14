#include "Time.h"

time_t getUnixTime() {
    time_t clk = time(NULL);
    return clk;
}

void convertDate(time_t *unixTime) {
    printf("%s", ctime(unixTime));

};

