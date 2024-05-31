/*
	9. Припустимо, що у попередньому прикладі об'єкт класу Shape не використовує параметри, 
	об'єкт класу Rectangle приймає два параметри (length і width), 
	а об'єкт класу Square - один параметр (length);
	запишіть конструктор класу Square.
*/
class Shape 
{};

class Rectangle : public Shape 
{
private:
    double itsLength;
    double itsWidth;
public:
    Rectangle(double length, double width) : itsLength(length), itsWidth(width) {}
};

class Square : public Rectangle 
{
public:
    Square(double length) : Rectangle(length, length) {}
};
