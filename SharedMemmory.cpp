#include "SharedMemmory.h"

template<class T>
SharedMemmory<T> ConstructSharedMemory(const Memory<T>& In) {
	SharedPointer<Memory<T>> S = ConstructSharedPonter<Memory<T>>(In);

	return S;

}

template<class T>
SharedMemmory<T> ConstructSharedMemory(size_t N) {
	Memory<T> M = ConstructMemory(N);
	SharedPointer<Memory<T>> S = ConstructSharedPonter<Memory<T>>(M);

	return S;
}
template<class T>
bool Free(SharedMemmory<T>& In) {
	if (Free(In.S) == false) { return false; }

	return Free(In.S);
}