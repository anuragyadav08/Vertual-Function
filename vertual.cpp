

#include <iostream>

using namespace std;

class ABC{
    public:
        virtual void get()
        {
            cout<<"Hello ABC";
        }
};
class XYZ:public ABC{
    public:
        void get()
        {
            cout<<"Hello XYZ";
        }
};
int main()
{
  ABC *obj;
  XYZ obj1;
  obj=&obj1;
  obj->get();

    return 0;
}
