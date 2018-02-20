// Mackenzie Glynn - mail@mglynn.net

#include <experimental/filesystem>
#include <functional>
#include <iostream>
#include <string>

#include <assert.h>

#include "ThreadUtils.h"

using namespace std::experimental; //Since I will be using this namespace quite a bit.

bool validateArguments(int argc, const char **argv);

int main(int argc, const char **argv)
{
	filesystem::path startingPath;
	std::string searchString;

	if (!validateArguments(argc, argv))
	{
		std::cerr << "Invalid usage. Run with exactly one filepath argument and one string to search for." << std::endl;
		startingPath = "C:\\Users\\mglynn";
		searchString = "test";
		//return 1;
	}
	else
	{
		startingPath = argv[1];
		searchString = argv[2];
	}

	//For now, single threaded
	auto threadPool = std::make_unique<mwg::ThreadPool>();
	//TODO: Refactor this so that I construct threads with a threadpool as the argument and use the pimpl pattern to connect their impls.

	return 0;
}

bool validateArguments(int argc, const char **argv)
{
	if (argc == 3)
	{
		return ((filesystem::exists(argv[1]) && strlen(argv[2]) <= 128));
	}
	return false;
}