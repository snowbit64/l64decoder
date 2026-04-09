// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: predictMotion
// Entry Point: 00f74780
// Size: 112 bytes
// Signature: undefined __thiscall predictMotion(btDefaultSoftBodySolver * this, float param_1)


/* btDefaultSoftBodySolver::predictMotion(float) */

void __thiscall btDefaultSoftBodySolver::predictMotion(btDefaultSoftBodySolver *this,float param_1)

{
  int iVar1;
  btSoftBody *this_00;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(this + 0x1c);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      this_00 = *(btSoftBody **)(*(long *)(this + 0x28) + lVar3 * 8);
      iVar1 = *(int *)(this_00 + 0xec);
      if (iVar1 != 2 && iVar1 != 5) {
        btSoftBody::predictMotion(this_00,param_1);
        iVar2 = *(int *)(this + 0x1c);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}


