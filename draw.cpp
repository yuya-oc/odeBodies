/*
 * odeDraw.cpp
 *
 *  Created on: 2012/09/13
 *      Author: yuya-oc
 */

#include "draw.h"
#include <drawstuff/drawstuff.h>

#ifdef dDOUBLE
	#define dsDrawBox dsDrawBoxD
	#define dsDrawCylinder dsDrawCylinderD
	#define dsDrawSphere dsDrawSphereD
#endif

void odeBodies::draw(const dBodyBox& box) {
	dsDrawBox(box.getPosition(), box.getRotation(), box.getSides());
}

void odeBodies::draw(const dBodyCylinder& cylinder) {
	dsDrawCylinder(cylinder.getPosition(), cylinder.getRotation(), cylinder.getLength(), cylinder.getRadius());
}

void odeBodies::draw(const dBodySphere& sphere) {
	dsDrawSphere(sphere.getPosition(), sphere.getRotation(), sphere.getRadius());
}
