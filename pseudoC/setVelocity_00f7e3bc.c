// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVelocity
// Entry Point: 00f7e3bc
// Size: 76 bytes
// Signature: undefined __thiscall setVelocity(btSoftBody * this, btVector3 * param_1)


/* btSoftBody::setVelocity(btVector3 const&) */

void __thiscall btSoftBody::setVelocity(btSoftBody *this,btVector3 *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(this + 0x374);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(this + 0x380) + lVar3;
      if (0.0 < *(float *)(lVar1 + 0x60)) {
        uVar4 = *(undefined8 *)param_1;
        *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(lVar1 + 0x30) = uVar4;
      }
      lVar3 = lVar3 + 0x78;
    } while ((ulong)uVar2 * 0x78 - lVar3 != 0);
  }
  return;
}


