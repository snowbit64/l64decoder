// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFixedSize
// Entry Point: 00a59cdc
// Size: 20 bytes
// Signature: undefined __thiscall setFixedSize(NoteNode * this, bool param_1)


/* NoteNode::setFixedSize(bool) */

void __thiscall NoteNode::setFixedSize(NoteNode *this,bool param_1)

{
  this[0x1cc] = (NoteNode)param_1;
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x1000;
  return;
}


