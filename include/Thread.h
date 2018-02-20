// Mackenzie Glynn - mail@mglynn.net

#pragma once

#include <thread>

namespace mwg
{

	enum ThreadType
	{
		GENERAL,
		IO
	};

	//This is more of a hint and should be interpreted as such
	static unsigned int GetNumberOfAvailableCores();

	class Thread
	{
	public:

	};

}