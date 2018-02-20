// Mackenzie Glynn - mail@mglynn.net

#include "ThreadUtils.h"

namespace mwg
{

static unsigned int GetNumberOfAvailableCores()
{
	int availableCores = std::thread::hardware_concurrency();
	return (availableCores > 0) ? availableCores : 1;
}

}