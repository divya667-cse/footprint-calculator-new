#ifndef WATERFOOTPRINTCALCULATOR_H
#define WATERFOOTPRINTCALCULATOR_H

#include "User.h"
#include <vector>
#include <string>

class WaterFootprintCalculator {
public:
    WaterFootprintCalculator();
    void run();

private:
    void displayMenu() const;
    void addUserActivity(User &user);
    double estimateWaterUsage(const std::string &activityName, int &frequency) const;
    void calculateFootprint(const User &user) const;

    std::vector<Activity> activityList;
};

#endif
