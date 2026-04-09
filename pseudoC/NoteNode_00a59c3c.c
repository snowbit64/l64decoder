// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NoteNode
// Entry Point: 00a59c3c
// Size: 36 bytes
// Signature: undefined __thiscall ~NoteNode(NoteNode * this)


/* NoteNode::~NoteNode() */

void __thiscall NoteNode::~NoteNode(NoteNode *this)

{
  ~NoteNode(this);
  operator_delete(this);
  return;
}


