/*
	4. Перевантажте у класі SimpleCircle оператор присвоєння.
*/

class SimpleCircle
{
public:
    SimpleCircle(double);
    SimpleCircle(const SimpleCircle&);
    ~SimpleCircle();

    SimpleCircle& operator=(const SimpleCircle&);

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

SimpleCircle& SimpleCircle::operator=(const SimpleCircle& other)
{
    if (this != &other)
    {
        delete itsRadius;
        itsRadius = nullptr;
        itsRadius = new double(*other.itsRadius);
    }
    return *this;
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
