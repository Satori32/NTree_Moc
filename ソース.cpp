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

struct NodeParam {//Plz Rewrite this.
	void* Weight = 0;
};

struct Node {
	TypeAndValue Next;
	NodeParam Node;
};

struct NTreeNode {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	Vector<Node> Nodes;
};

struct ConstNumberHolder {
	const size_t Value;
};

template<size_t N>
ConstNumberHolder ConstructConstNumberHolder<N>() {
	ConstNumberHolder C = { N };

	return C;
}

struct NTreeNodeII {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	ConstNumberHolder C;

	FixedVector<Node,C.Value> Nodes;
};
struct Tree2Node {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	Node Right;
	Node Left;
};
struct Tree2NodeII {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<Node,2> Nodes;
};
struct Tree8Node {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	Node One;
	Node Tow;
	Node Three;
	Node Fore;
	Node Five;
	Node Six;
	Node Seven;
	Node Eight;
};
struct Tree8NodeII {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<Node,8> Nodes;
};
struct Tree21Node {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<Node,21> Nodes;
};
struct Tree82Node {
	//type T = NULL;
	typedef void* T;
	//type Type = T;
	T Value;

	FixedVector<Node,82> Nodes;
};