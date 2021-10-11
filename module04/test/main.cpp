

class PureVirtual
{
public:
	virtual ~Base() {}
	virtual int pure() = 0;

private:
	int x; // Look, I can have member variables.
};

class InheritedPureVirtual : public PureVirtual
{
};

class PureVirtualWithImplementation
{
public:
	virtual ~PureVirtualWithImplementation() {}
	virtual int pure() = 0;
};

int PureVirtualWithImplementation::pure()
{
	return 0;
}

class PureVirtualDouble
{
public:
	virtual ~PureVirtualDouble() {}
	virtual int pure() = 0;
	virtual void pure2(float) = 0;
};

class AlmostValid : public PureVirtualDouble
{
public:
	int pure() { return 42; }
	// Notice no implementation of pure2(float).
};

class Valid : public PureVirtual
{
public:
	int pure() { return 42; }
};

// C++ creates a default constructor for the above classes,
// so we don't have to specify it ourselves. In case you
// wonder how come a class cannot be constructed without
// constructor being defined.
int main()
{
	// Fails to compile (cannot create an abstract object).
	PureVirtual pv;
	InheritedPureVirtual ipv;
	PureVirtualWithImplementation pvwi;
	AlmostValid av;

	// Successfully creates the object.
	Valid v;
}


// shallow vs deep copy 

//  In general, if the variables of an object have been dynamically allocated
//  then it is required to do a Deep Copy in order to create a copy of the object.


// shallow , by reference >> by copy Ctor and assigmnent operator (in case no dynamic memory allocation)
// deep 