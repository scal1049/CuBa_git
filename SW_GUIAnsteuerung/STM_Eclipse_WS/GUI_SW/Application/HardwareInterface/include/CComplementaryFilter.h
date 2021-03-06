//26.8.2016, Michael Meindl
//Class to calculate the filtered phi value
#ifndef CCOMPLEMENTARYFILTER_H
#define CCOMPLEMENTARYFILTER_H
#include "Global.h"

class CComplementaryFilter
{
public:
	float calculatePhi(const float phi, const float phi__d);
public:
	CComplementaryFilter();
	CComplementaryFilter(const CComplementaryFilter&) = delete;
	CComplementaryFilter& operator=(const CComplementaryFilter&) = delete;
	~CComplementaryFilter() = default;
private:
	float mRecentPhi;
	float mRecentPhi__d;
	bool mFirstRun;
	UInt8 mPadding[3];
};

#endif
