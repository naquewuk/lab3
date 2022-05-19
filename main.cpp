#include <iostream>

using namespace std;

class Circle{
private:
    int radius;
    int radian;

public:
    Circle(){
        radius = 4;
        radian = 2;
    }

    Circle(int m_radius, int m_radian){
        radius = m_radius;
        radian = m_radian;
    }

    int getradius(){ return radius; }

    int getradian(){ return radian; }

    void setradius(int tmp_radius){ radius = tmp_radius; }

    void setradian(int tmp_radian){ radian = tmp_radian;}

    void print(Circle c){
        cout << "Radius: " << radius << " cm."<< endl;
        cout << "Radian: " << radian << endl;
    }
    void arc_length(){
        cout << "Arc Length: " << radius * radian <<" cm." << endl;
    }

};

int main(){
    Circle c1;
    c1.print(c1);
    c1.arc_length();
    Circle c2(3, 2);
    c2.print(c2);
    c2.arc_length();
}



