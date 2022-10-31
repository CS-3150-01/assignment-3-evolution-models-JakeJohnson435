#include <iostream>
using namespace std;

    /* TODO: Create a time array, not sure where to put it that will work with World::time and Creature::timeActive */

class Creature{
    /* TODO: timeActive is an int value that will be an index for the time array created above */
    /* TODO: creatureType might be edited to be the same as the timeActive section */

    public:
        string name;
        int timeActive;
        int health;
        int creatureType;

        void getName();
        void move();
        void attack();
        void die();
        void reproduce();
};

class World{
    public:
        int time;
        int weather;
        /* TODO: Does this actually need to be linked with Creature to spawn/kill? */
        void killCreature();
        void spawnCreature();
    
};

class LandCreature : public Creature{
    public:
        int health;
        int strValue;
        string name;
        int active;
    private:
        void attack();
        void move();
        void hunt();
        void sleep();
        void isActive();
};

class FlyingCreature : public Creature{
    public:
        int health;
        int strValue;
        string name;
        int active;
    private:
        void attack();
        void move();
        void hunt();
        void sleep();
        void isActive();
};

class WaterCreature : public Creature{
    public:
        int health;
        int strValue;
        string name;
        int active;
    private:
        void attack();
        void move();
        void hunt();
        void sleep();
        void isActive();
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
