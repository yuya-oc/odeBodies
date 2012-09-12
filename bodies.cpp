
#include "odeBodies.h"

void dBodySphere::setMass(dReal density, dReal radius) {
	dMass mass;
	mass.setSphere(density,radius);
	dBody::setMass(mass);
	setRadius(radius);
}

void dBodySphere::setMassTotal(dReal total, dReal radius) {
	dMass mass;
	mass.setSphereTotal(total,radius);
	dBody::setMass(mass);
	setRadius(radius);
}


void dBodyBox::setMass(dReal density, dReal lx, dReal ly, dReal lz) {
	dMass mass;
	mass.setBox(density,lz,ly,lz);
	dBody::setMass(mass);
	setSides(lx,ly,lz);
}

void dBodyBox::setMassTotal(dReal total, dReal lx, dReal ly, dReal lz) {
	dMass mass;
	mass.setBoxTotal(total,lx,ly,lz);
	dBody::setMass(mass);
	setSides(lx,ly,lz);
}


void dBodyCylinder::setMass(dReal density, dAxisDirection direction, dReal radius, dReal length) {
	dMass mass;
	mass.setCylinder(density,direction,radius,length);
	dBody::setMass(mass);
	setRadius(radius);
	setLength(length);
}

void dBodyCylinder::setMassTotal(dReal total, dAxisDirection direction, dReal radius, dReal length) {
	dMass mass;
	mass.setCylinderTotal(total,direction,radius,length);
	dBody::setMass(mass);
	setRadius(radius);
	setLength(length);
}
