#ifndef CAR_H
#define CAR_H
#include<string>
using namespace std;



class car
{
    public:
        void setmaker(string m);
        string getmaker();
        void setyearmodel(int m);
        int getyearmodel();
        car();
        virtual ~car();

    protected:

    private:
        string maker;
        int yearmodle;

};

#endif // CAR_H
