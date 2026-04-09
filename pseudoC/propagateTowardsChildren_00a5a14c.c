// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsChildren
// Entry Point: 00a5a14c
// Size: 56 bytes
// Signature: undefined __thiscall propagateTowardsChildren(NoteNode * this, uint param_1, uint param_2)


/* NoteNode::propagateTowardsChildren(unsigned int, unsigned int) */

void __thiscall NoteNode::propagateTowardsChildren(NoteNode *this,uint param_1,uint param_2)

{
  RawTransformGroup::propagateTowardsChildren((RawTransformGroup *)this,param_1,param_2);
  if ((*(uint *)(this + 0x40) & 0x110) != 0) {
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x1000;
  }
  return;
}


