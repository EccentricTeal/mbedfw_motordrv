#ifndef MOTORDRIVER_HPP
#define MOTORDRIVER_HPP

#include <mbed.h>
#include <EthernetInterface.h>
#include <string>

class  MotorDriverClass
{
public:
     MotorDriverClass( std::string self_ip );
    ~ MotorDriverClass();    

private:
    EthernetInterface net_;
    SocketAddress self_addr_;

};







#endif
