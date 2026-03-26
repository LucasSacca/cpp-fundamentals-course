#include <stdio.h>
#include <string>
#include <vector>

class Circle
{
    private:
        float radius;
    
    public:
        Circle(){};
        Circle(float radius)
        {
            this -> radius = radius;
        }

        void setRadius(float radius)
        {
            this -> radius = radius;
        }

        float getRadius()
        {
            return this -> radius; 
        }

        float getArea()
        {
            float area;
            area = 3.14 * (radius*radius); // funciona pois "radius" pertence ao objeto (this->radius implícito)
            
            return area;
        }

        float getPerimeter()
        {
            float perimeter;
            perimeter = 2 * 3.14 * this->radius; // mesma coisa.

            return perimeter;
        }


};
