#include <stdio.h>
#include "Circle.cpp"

int main()
{
    Circle circle;
    circle.setRadius(3);
    
    printf("\n\nRaio = %f", circle.getRadius());
    printf("\nÁrea = %f", circle.getArea());
    printf("\nPerímetro = %f", circle.getPerimeter());
    
    return 0
}
