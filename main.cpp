//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------
class Quaternion
{
  private:
	double a, b, c, d;
public:
	Quaternion(double a, double b, double c, double d)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}

	bool operator==(const Quaternion obj) const
	{
		if ((obj.a == a) && (obj.b == b) && (obj.c == c) && (obj.d == d))
			return true;
		else
			return false;
	}

	Quaternion operator+(const Quaternion obj)
	{
		Quaternion temp(0.0,0.0,0.0,0.0);
		temp.a = obj.a + a;
		temp.b = obj.b + b;
		temp.c = obj.c + c;
		temp.d = obj.d + d;

		return temp;
	}

	Quaternion operator-(const Quaternion obj)
	{
		Quaternion temp(0.0, 0.0, 0.0, 0.0);
		temp.a = obj.a - a;
		temp.b = obj.b - b;
		temp.c = obj.c - c;
		temp.d = obj.d - d;

		return temp;
	}

	Quaternion operator*(double scaler)
	{
		Quaternion newObject(0.0, 0.0, 0.0, 0.0);
		newObject.a = scaler * this->a;
		newObject.b = scaler * this->b;
		newObject.c = scaler * this->c;
		newObject.d = scaler * this->d;

		return newObject;
	}
};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------

