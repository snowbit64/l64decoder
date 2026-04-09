// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: containsPredicate
// Entry Point: 00c4b9b8
// Size: 96 bytes
// Signature: undefined __thiscall containsPredicate(IR_Section * this, Predicate * param_1)


/* IR_Section::containsPredicate(IR_Section::Predicate const&) const */

bool __thiscall IR_Section::containsPredicate(IR_Section *this,Predicate *param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar2 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
  if (lVar2 != 0) {
    uVar8 = lVar2 >> 3;
    uVar9 = 0;
    uVar10 = 1;
    do {
      piVar1 = (int *)(*(long *)(this + 0x40) + uVar9 * 8);
      bVar6 = *(int *)param_1 == *piVar1;
      bVar7 = param_1[4] == *(Predicate *)(piVar1 + 1);
      bVar3 = bVar6 && bVar7;
      bVar5 = uVar10 <= uVar8;
      bVar4 = uVar8 != uVar10;
      uVar9 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (((!bVar6 || !bVar7) && bVar5) && (bVar3 || bVar4));
    return bVar3;
  }
  return false;
}


