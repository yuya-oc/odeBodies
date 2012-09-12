
#include <ode/ode.h>

typedef enum{
	X_AXIS=1,
	Y_AXIS=2,
	Z_AXIS=3
} dAxisDirection;

class dBodySphere : public dBody{
public:
	void setMass(dReal density, dReal radius);
	void setMassTotal(dReal total, dReal radius);
	dReal getRadius() const {return radius;}
private:
	void setRadius(dReal radius){this->radius=radius;}
	dReal radius;
};


class dBodyBox : public dBody{
public:
	void setMass(dReal density, dReal lx, dReal ly, dReal lz);
	void setMassTotal(dReal total, dReal lx, dReal ly, dReal lz);
	const dReal* getSides() const{
		return sides;
	}
private:
	void setSides(dReal lx, dReal ly, dReal lz){
		sides[0] = lx;
		sides[1] = ly;
		sides[2] = lz;
	}
	dReal sides[3];
};


class dBodyCylinder : public dBody{
public:
	void setMass(dReal density, dAxisDirection direction, dReal radius, dReal length);
	void setMassTotal(dReal total, dAxisDirection direction, dReal radius, dReal length);
	dReal getLength() const {
		return length;
	}
	dReal getRadius() const {
		return radius;
	}
private:
	void setLength(dReal length) {
		this->length = length;
	}
	void setRadius(dReal radius) {
		this->radius = radius;
	}
	dReal length;
	dReal radius;
};
