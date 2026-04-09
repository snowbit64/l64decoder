// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWithSmallerPredicateSet
// Entry Point: 00c4ba18
// Size: 132 bytes
// Signature: undefined __thiscall compatibleWithSmallerPredicateSet(IR_Section * this, IR_Section * param_1)


/* IR_Section::compatibleWithSmallerPredicateSet(IR_Section const&) const */

bool __thiscall IR_Section::compatibleWithSmallerPredicateSet(IR_Section *this,IR_Section *param_1)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
  if (lVar5 == 0) {
    return true;
  }
  uVar3 = 0;
  lVar4 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
  do {
    if (lVar4 == 0) break;
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + uVar3 * 8);
    uVar6 = 0;
    while (piVar2 = (int *)(*(long *)(this + 0x40) + uVar6 * 8),
          *piVar1 != *piVar2 || *(char *)(piVar1 + 1) != *(char *)(piVar2 + 1)) {
      uVar6 = (ulong)((int)uVar6 + 1);
      if ((ulong)(lVar4 >> 3) <= uVar6) {
        return false;
      }
    }
    uVar3 = (ulong)((int)uVar3 + 1);
  } while (uVar3 < (ulong)(lVar5 >> 3));
  return lVar4 != 0;
}


