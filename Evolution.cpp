#include <iostream>
using namespace std;

class Creature{
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
