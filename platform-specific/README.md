This is an example project showing cross-platform compiling in a
relatively simple and sane manner as part of a code listing for a blog
post. While I don't use any cross-platform functions in this
particular code sample, it should be easy to see how it transfers.

This method is not for big production applications, but instead to
kind of alleviate trying to create an intense build environment for a
simple test project that just happens to have to run on Linux and
Windows. I try to avoid using preprocessor macros for the most part
because I don't really find the code with #ifdef _WIN32 and that sort
of thing all that readable, especially when you are literally playing
musical chairs with what's being defined for what platform. I find the
idea of separating into compartmentalized files and picking and
choosing to be good. If you want to know more about this check out the
blog posting:

blog.808inorganic.com (sometime in early july 2012 if I forget to sync a URL).