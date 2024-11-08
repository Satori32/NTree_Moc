#include <stdio.h>

#include "Vector.h"
#include "FixedVector.h"


struct Type {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
};

struct TypeAndValue {
	Type T;
	//T.T Value;
};

struct TreeSystem {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	TypeAndValue Root;
};

struct NTreeNode {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	Vector<TypeAndValue> Nodes;
};
template<size_t N>
struct NTreeNodeII {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<TypeAndValue,N> Nodes;
};
struct Tree2Node {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	TypeAndValue Right;
	TypeAndValue Left;
};
struct Tree2NodeII {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<TypeAndValue,2> Nodes;
};
struct Tree8Node {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	TypeAndValue One;
	TypeAndValue Tow;
	TypeAndValue Three;
	TypeAndValue Fore;
	TypeAndValue Five;
	TypeAndValue Six;
	TypeAndValue Seven;
	TypeAndValue Eight;
};
struct Tree8NodeII {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<TypeAndValue,8> Nodes;
};
struct Tree21Node {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<TypeAndValue,21> Nodes;
};
struct Tree82Node {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<TypeAndValue,82> Nodes;
};