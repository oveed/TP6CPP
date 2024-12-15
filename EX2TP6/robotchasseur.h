#include "robot.h"

class RobotChasseur : public Robot {
public:
    RobotChasseur(string nom, float x, float y, float portee);
    void tuer(Robot& autre);
};


