/*
 * Examiner.h
 *
 *  Created on: Feb 9, 2018
 *      Author: shmkane
 */

#ifndef EXAMINER_H_
#define EXAMINER_H_

#include "Vec.h"
#include <iostream>
#include <vector>

class Examiner {
public:
	Examiner(std::vector<Vec> v, Vec home);
	bool isHome(); // Determine if thre's a bunch of home tags, return result

};

#endif /* EXAMINER_H_ */
