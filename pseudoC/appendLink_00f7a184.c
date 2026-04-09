// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendLink
// Entry Point: 00f7a184
// Size: 20 bytes
// Signature: undefined __thiscall appendLink(btSoftBody * this, int param_1, int param_2, Material * param_3, bool param_4)


/* btSoftBody::appendLink(int, int, btSoftBody::Material*, bool) */

void __thiscall
btSoftBody::appendLink(btSoftBody *this,int param_1,int param_2,Material *param_3,bool param_4)

{
  appendLink(this,(Node *)(*(long *)(this + 0x380) + (long)param_1 * 0x78),
             (Node *)(*(long *)(this + 0x380) + (long)param_2 * 0x78),param_3,param_4);
  return;
}


