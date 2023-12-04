#include "Python.h"
#include <stdio.h>

/**
 * print_python_list_info - it prints the number of elements, memory allocated in
 * bytes, and the member types of a Python list.
 *
 * @p: the Pointer to a PyObject.
 *
 * Return: void.
 */
void print_python_list_info(PyObject *p)
{
	unsigned long int len, i;
	PyObject *n;

	if (PyList_Check(p))
	{
		len = Py_SIZE(p);
		printf("[*] Size of the Python List = %lu\n", len);
		printf("[*] Allocated = %lu\n", (unsigned long int)
				((PyListObject *) (p))->allocated);
		for (i = 0; i < len; i++)
		{
			n = PyList_GetItem(p, i);
			printf("Element %lu: %s\n", i, (Py_TYPE(n))->tp_name);
		}
	}
}
