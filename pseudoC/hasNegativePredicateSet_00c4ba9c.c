// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasNegativePredicateSet
// Entry Point: 00c4ba9c
// Size: 220 bytes
// Signature: undefined __thiscall hasNegativePredicateSet(IR_Section * this, IR_Section * param_1)


/* IR_Section::hasNegativePredicateSet(IR_Section const&) const */

bool __thiscall IR_Section::hasNegativePredicateSet(IR_Section *this,IR_Section *param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(this + 0x40);
  lVar5 = *(long *)(param_1 + 0x48) - lVar3;
  lVar6 = *(long *)(this + 0x48) - lVar4;
  if (lVar5 != 0) {
    if (lVar6 == 0) {
      return false;
    }
    uVar7 = 0;
    do {
      piVar1 = (int *)(lVar3 + uVar7 * 8);
      uVar8 = 0;
      while (piVar2 = (int *)(lVar4 + uVar8 * 8),
            *piVar2 != *piVar1 || (*(byte *)(piVar1 + 1) ^ 1) != *(byte *)(piVar2 + 1)) {
        uVar8 = (ulong)((int)uVar8 + 1);
        if ((ulong)(lVar6 >> 3) <= uVar8) {
          return false;
        }
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(lVar5 >> 3));
  }
  if (lVar6 == 0) {
    return true;
  }
  uVar7 = 0;
  do {
    if (lVar5 == 0) break;
    piVar1 = (int *)(lVar4 + uVar7 * 8);
    uVar8 = 0;
    while (piVar2 = (int *)(lVar3 + uVar8 * 8),
          *piVar2 != *piVar1 || (*(byte *)(piVar1 + 1) ^ 1) != *(byte *)(piVar2 + 1)) {
      uVar8 = (ulong)((int)uVar8 + 1);
      if ((ulong)(lVar5 >> 3) <= uVar8) {
        return false;
      }
    }
    uVar7 = (ulong)((int)uVar7 + 1);
  } while (uVar7 < (ulong)(lVar6 >> 3));
  return lVar5 != 0;
}


