#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    create_connect();
    enable_servos();
    set_servo_position(3,1100);
    msleep(1000);
    create_drive_direct(-500,-500);
    msleep(500);
    create_drive_direct(1,300);
    msleep(1003);
    return 0;
}
