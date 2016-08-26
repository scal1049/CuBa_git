//26.8.2016, Michael Meindl
//Class to proccess the raw Sensorvalues
#ifndef CSENSOREVALUATION_H
#define CSENSOREVALUATION_H
#include "Global.h"

class CSensorEvaluation
{
public:
	float calcPhi(Int16 x1__dd_raw, Int16 x2__dd_raw,
			      Int16 y1__dd_raw, Int16 y2__dd_raw);
	float calcPhi__d(Int16 phi1__d_raw, Int16 phi2__d_raw);
	float calcPsi__d(Int16 psi__d_raw);
public:
	CSensorEvaluation() = default;
	CSensorEvaluation(const CSensorEvaluation&) = delete;
	CSensorEvaluation& operator=(const CSensorEvaluation&) = delete;
	~CSensorEvaluation() = default;
};

#endif
