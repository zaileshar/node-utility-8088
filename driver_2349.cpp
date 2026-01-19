#ifndef DRIVER_H
#define DRIVER_H

class DriverController {
public:
    virtual void init() = 0;
    virtual void process() = 0;
};

#endif