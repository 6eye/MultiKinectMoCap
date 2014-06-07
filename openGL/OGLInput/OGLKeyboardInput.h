#pragma once

#include <map>
#include <string>
#include <Windows.h>


typedef std::map<std::string, std::map<int, bool> > IntKeysMap;

class OGLKeyboardInput
{
	private:
		IntKeysMap	intKeys;

	public:
		OGLKeyboardInput				();
		~OGLKeyboardInput				();

		void			update			();
		void			addKey			(const std::string &, unsigned int);

		bool 			isKeyPressed	(const std::string &);
};
