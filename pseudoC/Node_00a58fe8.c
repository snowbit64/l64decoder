// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Node
// Entry Point: 00a58fe8
// Size: 36 bytes
// Signature: undefined __thiscall ~Node(Node * this)


/* Node::~Node() */

void __thiscall Node::~Node(Node *this)

{
  ~Node(this);
  operator_delete(this);
  return;
}


