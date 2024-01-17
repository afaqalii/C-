#include <iostream>

using namespace std;

struct Rectangle
{
    int width;
    int length;
    int area;
};

void getData(Rectangle *);

int main()
{
    Rectangle rectangle1;
    Rectangle *recPointer = &rectangle1;
    cout << "Enter the following Rectangle details \n";

    getData(&rectangle1);

    cout << "Width is: " << rectangle1.width << endl;
    cout << "Length is: " << rectangle1.length << endl;
    cout << "Area is: " << rectangle1.area << endl;
    return 0;
}

void getData(Rectangle *c)
{
    cout << "Enter width ";
    cin >> c->width;
    cout << "Enter length ";
    cin >> c->length;
    // calculating Area of the Rectangle
    c->area = (c->length * c->width);
}
