#ifndef USER_H
#define USER_H

#include "Activity.h"
#include <vector>
#include <utility>

class User {
public:
    void addActivity(const Activity &activity, int frequency);
    double calculateTotalWaterFootprint() const;

private:
    std::vector<std::pair<Activity, int>> activities;
};

#endif
