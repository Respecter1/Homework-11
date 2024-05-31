/*
	3. Створіть у класі SimpleCircle конструктор-копіювальник.
*/

class SimpleCircle
{
public:
	SimpleCircle(double);
	SimpleCircle(const SimpleCircle&); // Конструктор копіювання
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

SimpleCircle::SimpleCircle(const SimpleCircle& other)
{
	itsRadius = new double(*other.itsRadius);
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
