#ifndef CPP_JWT_STRCASECMP_HPP
#define CPP_JWT_STRCASECMP_HPP

#if defined (__unix__) || (defined (__APPLE__) && defined (__MACH__))

#include <strings.h>

namespace jwt {

using ::strcasecmp;

} // END namespace jwt

#elif defined (_WIN32)

#include <string.h>

namespace jwt {

inline int strcasecmp(const char* str1, const char* str2) {
  return ::_stricmp(str1, str2);
}

} // END namespace jwt

#else

#error Unknown platform

#endif

#endif
