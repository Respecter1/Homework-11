/*
	2. ����� SimpleCircle ����� �����, 
	��� �������� itsRadius � �������� ������ ���'�� � ��������� ������� ������.
*/

class SimpleCircle
{
public:
	SimpleCircle(double);
	~SimpleCircle();

	SimpleCircle& operator++();
	SimpleCircle operator++(int);

private:
	double* itsRadius;
};

SimpleCircle::SimpleCircle(double Radius)
{
	itsRadius = new double(Radius);
}

SimpleCircle::~SimpleCircle()
{
	delete itsRadius;
	itsRadius = nullptr;
}

SimpleCircle& SimpleCircle::operator++()
{
	(*itsRadius)++;
	return *this;
}

SimpleCircle SimpleCircle::operator++(int)
{
	SimpleCircle temp = *this;
	(*itsRadius)++;
	return temp;
}



