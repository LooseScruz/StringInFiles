// Mackenzie Glynn - mail@mglynn.net

#include "ThreadUtils.h"

#include <iostream>

namespace mwg
{

ThreadPool::ThreadPool()
{
	ThreadPool(1);
}

ThreadPool::ThreadPool(int numberOfCores)
{
	if (numberOfCores > GetNumberOfAvailableCores())
	{
		std::cout << "Warning, this machine should likely use no more than " << GetNumberOfAvailableCores() << " cores." << std::endl;
	}
}

ThreadPool::~ThreadPool()
{

}

}