#ifndef MONITOR_H
#define MONITOR_H


class monitor
{
public:
    monitor();
    bool Set(double a, double b);

private:
    double price;
    double size;
};

#endif // MONITOR_H
