// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addForce
// Entry Point: 00f7d944
// Size: 88 bytes
// Signature: undefined __thiscall addForce(btSoftBody * this, btVector3 * param_1, int param_2)


/* btSoftBody::addForce(btVector3 const&, int) */

void __thiscall btSoftBody::addForce(btSoftBody *this,btVector3 *param_1,int param_2)

{
  long lVar1;
  
  if (0.0 < *(float *)(*(long *)(this + 0x380) + (long)param_2 * 0x78 + 0x60)) {
    lVar1 = *(long *)(this + 0x380) + (long)param_2 * 0x78;
    *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) + *(float *)param_1;
    *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) + *(float *)(param_1 + 4);
    *(float *)(lVar1 + 0x48) = *(float *)(lVar1 + 0x48) + *(float *)(param_1 + 8);
  }
  return;
}


