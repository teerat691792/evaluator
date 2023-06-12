#pragma once
#ifndef WHATEVER_H
#define WHATEVER_H

template <typename T>
void swap(T& lhs, T& rhs) {
	T temp = lhs;
	lhs = rhs;
	rhs = temp;
}

template <typename T>
T min(T lhs, T rhs) {
	if (lhs < rhs) {
		return lhs;
	} else {
		return rhs;
	}
}

template <typename T>
T max(T lhs, T rhs) {
	if (lhs < rhs) {
		return rhs;
	} else {
		return lhs;
	}
}

#endif
