#pragma once
#ifndef ITER_H
#define ITER_H

#include <cstdlib>

template <typename T, typename R>
void iter(T* arr, std::size_t size, R (*func)(T&)) {
	for (std::size_t i = 0; i < size; ++i) {
		func(arr[i]);
	}
}

template <typename T, typename R>
void iter(T* arr, std::size_t size, R (*func)(const T&)) {
	for (std::size_t i = 0; i < size; ++i) {
		func(arr[i]);
	}
}

#endif
