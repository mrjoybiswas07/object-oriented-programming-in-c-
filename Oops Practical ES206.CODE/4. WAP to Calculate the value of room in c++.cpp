#include<iostream>
using namespace std;
class room{
    public:
    double length,breadth,height;
    double calculate_volume(){
        return length*breadth*height;
    }
};
int main(){
    room s1;
    s1.length=42.4;
    s1.breadth=30.8;
    s1.height=19.2;
    cout<<"Volume of the room is "<<s1.calculate_volume();
    return 0;
}