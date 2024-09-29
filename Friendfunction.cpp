#include <iostream>
using namespace std;
class engine
{
private:
    int hp;

public:
    engine(int h)
    {
        hp = h;
    }
    friend class car;
};
class car
{
public:
    void showhp(engine e)
    {
        cout<<"hp is: "<<e.hp<<endl;
    }
};
int main()
{
    engine c1(150);
    car cr;
    cr.showhp(c1);
    return 0;
}
