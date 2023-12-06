#include "Python.h"
#include <stdio.h>
#include <string.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

/**
 * print_python_list - Prints information about Python list. Such as size, and
 * amount of memory allcoated. What type each element is and if it is a type
 * 'bytes', print information on the element.
 *
 * @p: Pointer to a Python object.
 *
 * Return: void.
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t p_size;
	Py_ssize_t idx;
	PyObject *n;

	if (PyList_Check(p))
	{
		p_size = ((PyVarObject *)(p))->ob_size;
		printf("[*] Python list info\n");
		printf("[*] Size of the Python List = %zd\n", p_size);
		printf("[*] Allocated = %zd\n", ((PyListObject *) (p))->allocated);
		for (idx = 0; idx < p_size; idx++)
		{
			n = ((PyListObject *) (p))->ob_item[idx];
			printf("Element %zd: %s\n", idx, (n->ob_type)->tp_name);
			if (PyBytes_Check(n))
				print_python_bytes(n);
		}
	}
}

/**
 * print_python_bytes - Checks if the object is a Python bytes object. If so
 * print the size, attempt to print it as a string and the first 10 bytes at
 * most in hexadecimal.
 *
 * @p: Pointer to a Python object.
 *
 * Return: void.
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t p_size;
	Py_ssize_t idx;
	Py_ssize_t max;

	if (PyBytes_Check(p))
	{
		p_size = PyBytes_Size(p);
		printf("[.] bytes object info\n");
		printf("  size: %zd\n", p_size);
		printf("  trying string: %s\n", PyBytes_AsString(p));
		if (p_size + 1 < 10)
			max = p_size + 1;
		else
			max = 10;
		printf("  first %zd bytes: ", max);
		for (idx = 0; idx < max - 1; idx++)
			printf("%02x ",  (unsigned char) PyBytes_AsString(p)[idx]);
		printf("%02x\n",  (unsigned char) PyBytes_AsString(p)[max - 1]);
	}
	else
	{
		printf("[.] bytes object info\n  [ERROR] Invalid Bytes Object\n");
	}
}
