/*
	9. ����������, �� � ������������ ������� ��'��� ����� Shape �� ����������� ���������, 
	��'��� ����� Rectangle ������ ��� ��������� (length � width), 
	� ��'��� ����� Square - ���� �������� (length);
	�������� ����������� ����� Square.
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
