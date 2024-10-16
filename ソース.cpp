#include <stdio.h>

#include "SharedPointer.h"
#include "MemoryAllocator.h"

template<class T>
struct SharedMemmory {
	SharedPointer<Memory<T>> S;
};

template<class T>
SharedMemmory<T> ConstructSharedMemory(const Memory<T>& In) {
	SharedPointer<Memory<T>> S = ConstructSharedPonter<Memory<T>>(In);

	return S;
}
template<class T>
bool Free(SharedMemmory<T>& In) {
	if (Free(In) == false) { return false; }

	return Free(NULL);
}