compiler = c++ -std=c++11 -stdlib=libc++ -fno-exceptions -fno-rtti

hello:
	$(compiler) hello.c++
