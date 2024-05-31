/*
	1. ������������ ��������� ������������ �� ������������� ��� ������������
	� ������ ���� SimpleCircle � ������ itsRadius.
*/

class SimpleCircle
{
public:
	SimpleCircle();                  
	~SimpleCircle();                 

	SimpleCircle operator++(int);    // ������������
	SimpleCircle& operator++();      // �����������

private:
	double itsRadius;
};


SimpleCircle::SimpleCircle() : itsRadius(0.0)
{
}


SimpleCircle::~SimpleCircle()
{
	
}

// ������������
SimpleCircle SimpleCircle::operator++(int)
{
	SimpleCircle temp = *this;  
	itsRadius++;                
	return temp;                
}

// �����������
SimpleCircle& SimpleCircle::operator++()
{
	++itsRadius;               
	return *this;               
}
