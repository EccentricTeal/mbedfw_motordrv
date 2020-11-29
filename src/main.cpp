#define MBED_NO_GLOBAL_USING_DIRECTIVE

#include <mbed.h>

int main()
{
    while(1)
    {
        mbed::DigitalOut test(LED1);
        test.write(1);

    }

    return 0;
}


