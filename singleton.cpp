#include<iostream>
using namespace std;

class MySingleton
{
    public:
    static MySingleton* iInstance;

    public:
    static MySingleton* GetInstance();

    private:
    MySingleton();

};
 MySingleton* MySingleton::iInstance=NULL;
    MySingleton::MySingleton()
    {
        cout<< "In Constructor....." << endl;
    }

    MySingleton* MySingleton::GetInstance()
    {
        if(iInstance==NULL)
        {
            iInstance= new MySingleton();
        }
        return iInstance;
    }


int main()
{
    MySingleton* obj;
    obj=MySingleton::GetInstance();
}

