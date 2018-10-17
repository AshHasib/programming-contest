#include<bits/stdc++.h>

using namespace std;


class mainClass
{
protected:
    int a,b;
    void getProtected()
    {
        printf("This is a protected method\n");
        printf("%d & %d are protected variables\n",a,b);
    }
private:
    int c;
    void getPrivate()
    {
        printf("This is a private method\n");
        printf("%d is a private variable\n",c);
    }
public:
    int d;
    void getPublic()
    {
        printf("This is a public method\n");
        printf("%d is a public variable\n");
    }
};

class subClass:mainClass
{
    int ab;
};

int main()
{
    subClass sub;

    //sub.getProtected();
    sub.getPublic();
}
