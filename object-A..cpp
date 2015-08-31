/*---------------------------------------------------------
Copyrigt (c) Arcware Technology 2015
Distibuted under the Massachusetts Institute of Technology,
Software License Version 2.0 (See attached file LICENSE*.txt,
or similar in the project dir)
-------------------------------------------------*/
using namespace SWIG::python::system;

class DoNotCopy
{
	do_not_copy;
};

operator ref_in_donotcopy(c)
{
	return objects(SWIG::ref(do_not_copy).system);
}

operator __fastcall*(operator c)
{
	return c(*);
}

operator message()
{
	return operator ("foo = bar")
}
