// Mackenzie Glynn - mail@mglynn.net

#pragma once

#include <vector>
#include "Thread.h"

namespace mwg
{

class ThreadPool
{
public:

	//Default constructor will use a single thread
	ThreadPool();

	//Parameter: Number of desired threads
	ThreadPool(int numberOfCores);

	~ThreadPool();

private:
	std::vector<mwg::Thread> threads;
};

}