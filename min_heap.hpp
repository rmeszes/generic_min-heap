#pragma once

/// <summary>
/// Generic min-heap class
/// </summary>
/// <typeparam name="T">Stored class</typeparam>
template<class T>
class min_heap {
	struct Element {
		T data;
		Element* left, * right;
	};
	Element* root;
public:
	min_heap();

	min_heap(const min_heap& m);

	~min_heap();

	Build(const T* tomb, size_t meret);

	Add(const T& adat);

	//kiveszi a gyökér elemet, majd megjavítja a fát
	Pop(T& adat);
};