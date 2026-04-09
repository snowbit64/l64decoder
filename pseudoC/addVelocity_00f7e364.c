// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVelocity
// Entry Point: 00f7e364
// Size: 88 bytes
// Signature: undefined __thiscall addVelocity(btSoftBody * this, btVector3 * param_1, int param_2)


/* btSoftBody::addVelocity(btVector3 const&, int) */

void __thiscall btSoftBody::addVelocity(btSoftBody *this,btVector3 *param_1,int param_2)

{
  long lVar1;
  
  if (0.0 < *(float *)(*(long *)(this + 0x380) + (long)param_2 * 0x78 + 0x60)) {
    lVar1 = *(long *)(this + 0x380) + (long)param_2 * 0x78;
    *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) + *(float *)param_1;
    *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) + *(float *)(param_1 + 4);
    *(float *)(lVar1 + 0x38) = *(float *)(lVar1 + 0x38) + *(float *)(param_1 + 8);
  }
  return;
}


