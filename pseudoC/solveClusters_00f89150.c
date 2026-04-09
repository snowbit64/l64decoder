// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveClusters
// Entry Point: 00f89150
// Size: 108 bytes
// Signature: undefined __thiscall solveClusters(btSoftBody * this, float param_1)


/* btSoftBody::solveClusters(float) */

void __thiscall btSoftBody::solveClusters(btSoftBody *this,float param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0x454);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x460) + lVar2) + 0x18))
                (*(undefined4 *)(this + 0x240),param_1);
      lVar2 = lVar2 + 8;
    } while ((ulong)uVar1 * 8 - lVar2 != 0);
  }
  return;
}


