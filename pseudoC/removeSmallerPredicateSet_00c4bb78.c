// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeSmallerPredicateSet
// Entry Point: 00c4bb78
// Size: 232 bytes
// Signature: undefined __thiscall removeSmallerPredicateSet(IR_Section * this, IR_Section * param_1)


/* IR_Section::removeSmallerPredicateSet(IR_Section const&) */

void __thiscall IR_Section::removeSmallerPredicateSet(IR_Section *this,IR_Section *param_1)

{
  int *piVar1;
  int *__dest;
  size_t __n;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar4 = *(long *)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 != lVar4) {
    lVar2 = *(long *)(this + 0x40);
    lVar3 = *(long *)(this + 0x48);
    uVar9 = 0;
    lVar6 = lVar3;
    do {
      lVar5 = lVar2;
      if (lVar6 != lVar2) {
        uVar8 = 0;
        uVar10 = 0;
        while( true ) {
          piVar1 = (int *)(lVar4 + uVar9 * 8);
          __dest = (int *)(lVar2 + uVar8 * 8);
          if (*piVar1 == *__dest && *(char *)(piVar1 + 1) == *(char *)(__dest + 1)) {
            __n = lVar6 - (long)(__dest + 2);
            if (__n != 0) {
              memmove(__dest,__dest + 2,__n);
              lVar2 = *(long *)(this + 0x40);
            }
            lVar3 = (long)__dest + __n;
            uVar10 = uVar10 - 1;
            *(long *)(this + 0x48) = lVar3;
          }
          uVar10 = uVar10 + 1;
          uVar8 = (ulong)uVar10;
          if ((ulong)(lVar3 - lVar2 >> 3) <= uVar8) break;
          lVar4 = *(long *)(param_1 + 0x40);
          lVar6 = lVar3;
        }
        lVar4 = *(long *)(param_1 + 0x40);
        lVar7 = *(long *)(param_1 + 0x48);
        lVar5 = lVar3;
      }
      uVar9 = (ulong)((int)uVar9 + 1);
      lVar6 = lVar5;
    } while (uVar9 < (ulong)(lVar7 - lVar4 >> 3));
  }
  return;
}


