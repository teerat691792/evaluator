#pragma once
#ifndef ARRAY_H
#define ARRAY_H

#include <cstdlib>
#include <exception>
#include <iostream>

template <typename T>
class Array {


public:

	Array() {
		_size = 0;
		_array = new T[0];
	}

	Array(unsigned int n) {
		_size = n;
		_array = new T[n];
	}

	Array(const Array& rhs) {
		_size = rhs._size;
		_array = new T[_size];

		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = rhs._array[i];
		}
	}

	Array& operator=(const Array& rhs) {
		if (_array != rhs._array) {
			_size = rhs._size;
			delete[] _array;
			_array = new T[_size];

			for (unsigned int i = 0; i < _size; ++i) {
				_array[i] = rhs._array[i];
			}
		}

		return *this;
	}

	~Array() {
		delete[] _array;
	}

	T operator[](unsigned int index) const {
		if (index >= _size) {
			throw std::exception();
		}
		return _array[index];
	};

	T& operator[](unsigned int index) {
		if (index >= _size) {
			throw std::exception();
		}
		return _array[index];
	}

	unsigned int size() const {
		return _size;
	}


private:

	T* _array;
	unsigned int _size;

};

#endif
