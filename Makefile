uname = $(shell uname)
compiler = c++ -std=c++11 -fno-exceptions -fno-rtti -pthread

ifeq ($(uname), Darwin)
compiler += -stdlib=libc++
endif

hello:
	$(compiler) hello.c++
