// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Inverse
// Entry Point: 00d02dd4
// Size: 308 bytes
// Signature: undefined __thiscall Inverse(ModularArithmetic * this, Integer * param_1)


/* CryptoPP::ModularArithmetic::Inverse(CryptoPP::Integer const&) const */

ModularArithmetic * __thiscall
CryptoPP::ModularArithmetic::Inverse(ModularArithmetic *this,Integer *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if ((*(int *)(param_1 + 0x28) != 1) && (**(int **)(param_1 + 0x20) == 0)) {
    lVar7 = *(long *)(param_1 + 0x18);
    do {
      if (lVar7 == 0) {
        return (ModularArithmetic *)param_1;
      }
      lVar10 = lVar7 + -1;
      lVar9 = lVar7 + -1;
      lVar7 = lVar10;
    } while ((*(int **)(param_1 + 0x20))[lVar9] == 0);
    if ((int)lVar10 == -1) {
      return (ModularArithmetic *)param_1;
    }
  }
  __dest = *(void **)(this + 0x68);
  if (__dest != *(void **)(this + 0x38)) {
    memcpy(__dest,*(void **)(this + 0x38),*(long *)(this + 0x30) << 2);
    __dest = *(void **)(this + 0x68);
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  if (uVar5 != 0) {
    uVar6 = 0;
    lVar9 = 0;
    lVar7 = *(long *)(param_1 + 0x20);
    do {
      lVar10 = uVar6 * 4;
      uVar6 = uVar6 + 2;
      puVar1 = (uint *)((long)__dest + lVar10);
      puVar2 = (uint *)(lVar7 + lVar10);
      lVar9 = (lVar9 + (ulong)*puVar1) - (ulong)*puVar2;
      *puVar1 = (uint)lVar9;
      lVar10 = ((ulong)puVar1[1] - (ulong)puVar2[1]) + (lVar9 >> 0x3f);
      lVar9 = lVar10 >> 0x3f;
      puVar1[1] = (uint)lVar10;
    } while (uVar6 < uVar5);
    if (lVar10 < 0) {
      piVar3 = (int *)((long)__dest + uVar5 * 4);
      lVar7 = *(long *)(this + 0x30);
      iVar4 = *piVar3;
      *piVar3 = iVar4 + -1;
      if ((iVar4 == 0) && (uVar5 = lVar7 - uVar5, 1 < uVar5)) {
        uVar6 = 1;
        do {
          uVar8 = (ulong)((int)uVar6 + 1);
          iVar4 = piVar3[uVar6];
          piVar3[uVar6] = iVar4 + -1;
          uVar6 = uVar8;
        } while ((iVar4 == 0 && uVar8 <= uVar5) && (iVar4 != 0 || uVar5 != uVar8));
      }
    }
  }
  return this + 0x48;
}


