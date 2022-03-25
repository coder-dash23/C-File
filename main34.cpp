#include <iostream>
using namespace std;

class Simple_Intrest
{
    float principle, rate, time;

public:
    // Simple_Intrest(float p, float r, float t)
    // {
    //     principle = p;
    //     rate = r;
    //     time = t;
    // }
    void insert()
    {
        cout << "Enter the value of Principle" << endl;
        cin >> principle;
        cout << "Enter the value of rate" << endl;
        cin >> rate;
        cout << "Enter the value of time" << endl;
        cin >> time;
    }

    void show()
    {
        cout << "Principle : " << principle << endl;
        cout << " rate: " << rate << endl;
        cout << "time " << time << endl;

        float si = principle * rate * time / 100;

        cout << "Simple intrest is " << si<<endl;
    }
};

int main()
{
    int N;
    cout <<"Enter the value of N"<<endl;
    cin>>N;

    Simple_Intrest B[N];

    for (int i = 0; i < N; i++)
    { 
       cout << "Enter the details of "<<i+1 <<" person "<<endl;
       B[i].insert();
       B[i].show();
    }

    return 0;

}