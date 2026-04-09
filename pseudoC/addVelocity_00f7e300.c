// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVelocity
// Entry Point: 00f7e300
// Size: 100 bytes
// Signature: undefined __thiscall addVelocity(btSoftBody * this, btVector3 * param_1)


/* btSoftBody::addVelocity(btVector3 const&) */

void __thiscall btSoftBody::addVelocity(btSoftBody *this,btVector3 *param_1)

{
  ulong uVar1;
  float *pfVar2;
  
  uVar1 = (ulong)*(uint *)(this + 0x374);
  if (0 < (int)*(uint *)(this + 0x374)) {
    pfVar2 = (float *)(*(long *)(this + 0x380) + 0x30);
    do {
      if (0.0 < pfVar2[0xc]) {
        *pfVar2 = *pfVar2 + *(float *)param_1;
        pfVar2[1] = pfVar2[1] + *(float *)(param_1 + 4);
        pfVar2[2] = pfVar2[2] + *(float *)(param_1 + 8);
      }
      uVar1 = uVar1 - 1;
      pfVar2 = pfVar2 + 0x1e;
    } while (uVar1 != 0);
  }
  return;
}


