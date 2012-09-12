/*
 * odeDraw.h
 *
 *  Created on: 2012/09/13
 *      Author: yuya-oc
 */

#ifndef ODEDRAW_H_
#define ODEDRAW_H_

#include "bodies.h"

class odeBodies {
public:
	static void draw(const dBodyBox& box);
	static void draw(const dBodyCylinder& cylinder);
	static void draw(const dBodySphere& sphere);
};

#endif /* ODEDRAW_H_ */
