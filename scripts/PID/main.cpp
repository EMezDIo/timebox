#include <iostream>

using namespace std;

int main()
{
    float speed = 0;

    //quadratic expression parameters
    float a=0.256f; //TODO a math equasion that determines the max x for the set maxSpeed
    float b=0;             //in the first sequence and divies into 3 equal parts for the 'a'
    float c;                         //parameter

    float maxSpeed = 1;
    int direction = -1;
    double sentSpeed;
    /*
    for(double i=0;(double)i*i*a+b*i<=maxSpeed;i+=0.01f){
        cout<<i<<endl;
    }
    */

    double x = 0;
    double y = (double)x*x*a+b*x;
    while(y<=maxSpeed){
        y = (double)x*x*a+b*x;
        sentSpeed = y*direction;
        //cout<<sentSpeed<<endl;
        x+=0.01f;
    }
    /*
    cout<<"de aici incepe reverse in mm"<<endl;
    cout<<x;
    */

    while(y>=0 && x>=0){
        y = (double)x*x*a+b*x;
        sentSpeed = y*direction;
        //cout<<sentSpeed<<endl;
        x-=0.01f;
    }
    cout<<"mama mea e florareasa";
    return 0;
}
