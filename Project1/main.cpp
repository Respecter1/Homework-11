/*
	1. Перевантажте оператори преінкремента та постінкремента для використання
	у вашому класі SimpleCircle зі змінною itsRadius.
*/

class SimpleCircle
{
public:
	SimpleCircle();                  
	~SimpleCircle();                 

	SimpleCircle operator++(int);    // Постінкремент
	SimpleCircle& operator++();      // Преінкремент

private:
	double itsRadius;
};


SimpleCircle::SimpleCircle() : itsRadius(0.0)
{
}


SimpleCircle::~SimpleCircle()
{
	
}

// Постінкремент
SimpleCircle SimpleCircle::operator++(int)
{
	SimpleCircle temp = *this;  
	itsRadius++;                
	return temp;                
}

// Преінкремент
SimpleCircle& SimpleCircle::operator++()
{
	++itsRadius;               
	return *this;               
}
