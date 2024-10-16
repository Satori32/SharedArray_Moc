#pragma once
#include <stdio.h>

#include "SharedPointer.h"
#include "MemoryAllocator.h"

template<class T>
struct SharedMemmory {
	SharedPointer<Memory<T>> S;
};

template<class T> SharedMemmory<T> ConstructSharedMemory(const Memory<T>& In);
template<class T> SharedMemmory<T> ConstructSharedMemory(size_t N);
template<class T> bool Free(SharedMemmory<T>& In);