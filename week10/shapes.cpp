#include <iostream>
using namespace std;
const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape{
  public:
    virtual int get_perimeter_length(){ return -1; }
    virtual int get_area(){ return -1; }
};
class circle : public shape{
  private:
    int cRadius;
  public:
    circle(int radius){ cRadius = radius; }
    int get_perimeter_length(){
        int circumference;
        circumference = 2 * PI * cRadius;
        return circumference; 
    }
    int get_area(){
        int area;
        area = PI * cRadius * cRadius;
        return area; 
    }
};
class rectangle : public shape{
  private:
    int rHeight;
    int rWidth;
  public:
    rectangle(int height, int width){
        rHeight = height;
        rWidth = width;
     }
    int get_perimeter_length(){
        int perimeter;
        perimeter = 2 * (rHeight + rWidth);
        return perimeter; 
    }
    int get_area(){
        int area;
        area = rHeight * rWidth;
        return area;
    }
};
class square : public shape{
  private:
    int sSide;
  public:
    square(int side) { sSide = side; }
    int get_perimeter_length(){
        int perimeter;
        perimeter = 4 * sSide;
        return perimeter;
    }
    int get_area(){
        int area;
        area = sSide * sSide;
        return area; 
    }
};
int main(){
  shape *s1;
  circle c(3);
  s1 = &c;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  square s(3);
  s1 = &s;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  rectangle r(4,5);
  s1 = &r;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  return 0;
}