#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <string>

class Activity {
public:
    Activity(const std::string &name, double waterUsage = 0.0);

    void setWaterUsage(double waterUsage);
    std::string getName() const;
    double getWaterUsage() const;

private:
    std::string name;
    double waterUsage;
};

#endif
