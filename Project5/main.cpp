/*
	5. Напишіть програму, яка створює два об'єкти класу SimpleCircle. 
	Для створення одного об'єкта використовуйте конструктор, заданий за замовчуванням, 
	а другому екземпляру при оголошенні надайте значення 9. 
	З кожним із об'єктів використовуйте оператор інкремента та виведіть отримані значення на друк. 
	Нарешті, надайте значення одного об'єкта іншому об'єкту та виведіть результат на друк.
*/

#include <iostream>

class SimpleCircle
{
public:
    SimpleCircle() : itsRadius{ 0.0 } {}
    SimpleCircle(double radius) : itsRadius{ radius } {}

    SimpleCircle operator++()
    {
        ++itsRadius;
        return *this;
    }

    SimpleCircle operator++(int)
    {
        SimpleCircle temp = *this;
        itsRadius++;
        return temp;
    }

    double getRadius() const { return itsRadius; }
    void setRadius(double radius) { itsRadius = radius; }

private:
    double itsRadius;
};

int main()
{
    SimpleCircle circle1;
    SimpleCircle circle2{9.0};

    
    ++circle1;
    circle2++;

    
    std::cout << "value circle1: " << circle1.getRadius() << std::endl;
    std::cout << "value circle2: " << circle2.getRadius() << std::endl;

    circle1.setRadius(circle2.getRadius());
    std::cout << "New value circle1: " << circle1.getRadius() << std::endl;

    return 0;
}
