#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
	std::cout << std::endl;

	{
		Array<int> a(5);

		for (unsigned int i = 0; i < a.size(); ++i) {
			std::cout << "Assigning a[" << i << "] to " << i + 1 << std::endl;
			a[i] = i + 1;
		}
		std::cout << std::endl;

		for (unsigned int i = 0; i < a.size(); ++i) {
			std::cout << "a[" << i << "] = " << a[i] << std::endl;
		}
	}

	std::cout << std::endl;

	{
		Array<std::string> b(3);

		b[0] = "First string";
		b[1] = "Hello world";
		b[2] = "Goodbye world";

		for (unsigned int i = 0; i < b.size(); ++i) {
			std::cout << "b[" << i << "] = " << b[i] << std::endl;
		}
	}

	std::cout << std::endl;

	{
		Array<int> c(10);

		for (unsigned int i = 0; i < c.size(); ++i) {
			std::cout << "Assigning c[" << i << "] to " << i + 1 << std::endl;
			c[i] = i + 1;
		}
		std::cout << std::endl;

		for (unsigned int i = 0; i < c.size(); ++i) {
			std::cout << "c[" << i << "] = " << c[i] << std::endl;
		}
		std::cout << std::endl;

		Array<int> d(c);
		Array<int> e = c;

		for (unsigned int i = 0; i < d.size(); ++i) {
			std::cout << "d[" << i << "] = " << d[i] << std::endl;
		}
		std::cout << std::endl;
		for (unsigned int i = 0; i < e.size(); ++i) {
			std::cout << "e[" << i << "] = " << e[i] << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Adding +5 to all members of d" << std::endl;
		for (unsigned int i = 0; i < d.size(); ++i) {
			d[i] += 5;
		}

		for (unsigned int i = 0; i < c.size(); ++i) {
			std::cout << "c[" << i << "] = " << c[i] << std::endl;
		}
		std::cout << std::endl;
		for (unsigned int i = 0; i < d.size(); ++i) {
			std::cout << "d[" << i << "] = " << d[i] << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Adding +10 to all members of e" << std::endl;
		for (unsigned int i = 0; i < e.size(); ++i) {
			e[i] += 10;
		}

		for (unsigned int i = 0; i < c.size(); ++i) {
			std::cout << "c[" << i << "] = " << c[i] << std::endl;
		}
		std::cout << std::endl;
		for (unsigned int i = 0; i < e.size(); ++i) {
			std::cout << "e[" << i << "] = " << e[i] << std::endl;
		}
		std::cout << std::endl;
	}

	{
		Array<int> f(5);

		for (unsigned int i = 0; i < f.size(); ++i) {
			f[i] = i + 1;
		}

		const Array<int> g(f);

		for (unsigned int i = 0; i < g.size(); ++i) {
			std::cout << "g[" << i << "] = " << g[i] << std::endl;
			// Does not compile if next line is not commented!
			// g[i] = i + 2;
		}
	}

	return 0;
}
