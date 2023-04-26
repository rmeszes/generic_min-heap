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
		Element(T data) :data(data), left(nullptr), right(nullptr) {}
	};
	Element* root;
	size_t num_of_elements;
public:
	min_heap() :root(nullptr), num_of_elements(0) {}

	min_heap(const min_heap& m) {

	}

	~min_heap();

	void Build(const T* data, const size_t size);

	void Add(const T& data);

	void Swap(Element* a, Element* b);

	//kiveszi a gyökér elemet, majd megjavítja a fát
	const T Pop();

	const T& getRoot() const { return root->data; }

	const size_t size() const { return num_of_elements; }
};