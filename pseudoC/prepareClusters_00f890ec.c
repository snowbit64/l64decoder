// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareClusters
// Entry Point: 00f890ec
// Size: 100 bytes
// Signature: undefined __thiscall prepareClusters(btSoftBody * this, int param_1)


/* btSoftBody::prepareClusters(int) */

void __thiscall btSoftBody::prepareClusters(btSoftBody *this,int param_1)

{
  long *plVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x454)) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x460) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x10))(*(undefined4 *)(this + 0x240),plVar1,param_1);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x454));
  }
  return;
}


