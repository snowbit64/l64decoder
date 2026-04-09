// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compare
// Entry Point: 0086d754
// Size: 260 bytes
// Signature: undefined __thiscall compare(ConditionalAnimationComparisons * this, ConditionalAnimationInformation * param_1)


/* ConditionalAnimationComparisons::compare(ConditionalAnimationInformation const&) const */

byte __thiscall
ConditionalAnimationComparisons::compare
          (ConditionalAnimationComparisons *this,ConditionalAnimationInformation *param_1)

{
  uint *puVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ConditionalAnimationValue aCStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)this;
  if ((int)((ulong)(*(long *)(this + 8) - lVar9) >> 4) == 0) {
    bVar5 = 0;
    bVar3 = false;
  }
  else {
    uVar7 = (ulong)(*(long *)(this + 8) - lVar9) >> 4 & 0xffffffff;
    lVar6 = 0;
    bVar5 = 0;
    uVar8 = 1;
    bVar3 = true;
    while( true ) {
      ConditionalAnimationValue::ConditionalAnimationValue(aCStack_70);
      puVar1 = (uint *)(lVar9 + lVar6);
      ConditionalAnimationInformation::getValue(param_1,*puVar1,aCStack_70);
      bVar4 = compareValue(puVar1[1],aCStack_70,(ConditionalAnimationValue *)(puVar1 + 2));
      if (((bVar4 & 1) == 0) && (this[0x18] == (ConditionalAnimationComparisons)0x0)) break;
      bVar3 = uVar8 < uVar7;
      bVar5 = bVar5 | bVar4;
      if (uVar7 * 0x10 + -0x10 == lVar6) break;
      lVar9 = *(long *)this;
      lVar6 = lVar6 + 0x10;
      uVar8 = uVar8 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (bVar3 ^ 1U) & bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


