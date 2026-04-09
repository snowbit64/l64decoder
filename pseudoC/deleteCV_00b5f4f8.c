// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteCV
// Entry Point: 00b5f4f8
// Size: 132 bytes
// Signature: undefined __thiscall deleteCV(Spline * this, uint param_1)


/* Spline::deleteCV(unsigned int) */

void __thiscall Spline::deleteCV(Spline *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  
  iVar2 = *(int *)(this + 0x28);
  iVar3 = *(int *)(this + 0x20);
  uVar1 = iVar2 + iVar3 + *(int *)(this + 0x24);
  if (uVar1 != 0) {
    uVar5 = 0;
    iVar6 = 0;
    lVar7 = *(long *)(this + 0x18);
    do {
      if ((ulong)(iVar3 + param_1) * 3 != uVar5) {
        uVar4 = iVar6 * 3;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(lVar7 + (ulong)uVar4 * 4) =
             *(undefined4 *)(lVar7 + (uVar5 & 0xffffffff) * 4);
        *(undefined4 *)(lVar7 + (ulong)(uVar4 + 1) * 4) =
             *(undefined4 *)(lVar7 + (ulong)((int)uVar5 + 1) * 4);
        *(undefined4 *)(lVar7 + (ulong)(uVar4 + 2) * 4) =
             *(undefined4 *)(lVar7 + (ulong)((int)uVar5 + 2) * 4);
      }
      uVar5 = uVar5 + 3;
    } while ((ulong)uVar1 * 3 != uVar5);
  }
  *(int *)(this + 0x28) = iVar2 + -1;
  return;
}


