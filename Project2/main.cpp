/*
	2. Змініть SimpleCircle таким чином, 
	щоб зберігати itsRadius в динамічній області пам'яті і фіксувати існуючі методи.
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



