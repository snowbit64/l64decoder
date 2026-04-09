// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticSolve
// Entry Point: 00f88db0
// Size: 156 bytes
// Signature: undefined __thiscall staticSolve(btSoftBody * this, int param_1)


/* btSoftBody::staticSolve(int) */

void __thiscall btSoftBody::staticSolve(btSoftBody *this,int param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  if ((0 < param_1) && (uVar1 = (ulong)*(uint *)(this + 0x204), 0 < (int)*(uint *)(this + 0x204))) {
    iVar2 = 0;
    do {
      if (0 < (int)uVar1) {
        lVar3 = 0;
        do {
          (*(code *)(&PTR_PSolve_Links_0101bc58)[*(int *)(*(long *)(this + 0x210) + lVar3 * 4)])
                    (0x3f800000,0,this);
          uVar1 = (ulong)*(int *)(this + 0x204);
          lVar3 = lVar3 + 1;
        } while (lVar3 < (long)uVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_1);
  }
  return;
}


