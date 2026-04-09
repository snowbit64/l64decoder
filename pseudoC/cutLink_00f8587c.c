// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cutLink
// Entry Point: 00f8587c
// Size: 40 bytes
// Signature: undefined __thiscall cutLink(btSoftBody * this, Node * param_1, Node * param_2, float param_3)


/* btSoftBody::cutLink(btSoftBody::Node const*, btSoftBody::Node const*, float) */

void __thiscall btSoftBody::cutLink(btSoftBody *this,Node *param_1,Node *param_2,float param_3)

{
  cutLink(this,(int)((ulong)((long)param_1 - *(long *)(this + 0x380)) >> 3) * -0x11111111,
          (int)((ulong)((long)param_2 - *(long *)(this + 0x380)) >> 3) * -0x11111111,param_3);
  return;
}


