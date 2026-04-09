// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: test
// Entry Point: 0086eae4
// Size: 228 bytes
// Signature: undefined __thiscall test(ConditionalAnimationConditions * this, ConditionalAnimationInformation * param_1)


/* ConditionalAnimationConditions::test(ConditionalAnimationInformation const&) const */

byte __thiscall
ConditionalAnimationConditions::test
          (ConditionalAnimationConditions *this,ConditionalAnimationInformation *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ConditionalAnimationComparisons **ppCVar8;
  ulong uVar9;
  
  lVar5 = *(long *)this;
  uVar6 = (*(long *)(this + 8) - lVar5 >> 3) * -0x5555555555555555;
  if ((int)uVar6 != 0) {
    uVar7 = 0;
    uVar6 = uVar6 & 0xffffffff;
    bVar1 = true;
    do {
      ppCVar8 = (ConditionalAnimationComparisons **)(lVar5 + uVar7 * 0x18);
      uVar9 = (long)ppCVar8[1] - (long)*ppCVar8;
      if ((int)(uVar9 >> 5) != 0) {
        uVar2 = ConditionalAnimationComparisons::compare(*ppCVar8,param_1);
        if ((uVar2 & 1) == 0) goto LAB_0086eba4;
        uVar2 = uVar9 >> 5 & 0xffffffff;
        uVar9 = 1;
        do {
          uVar4 = uVar9;
          if (uVar4 == uVar2) goto LAB_0086eb88;
          uVar3 = ConditionalAnimationComparisons::compare(*ppCVar8 + uVar4 * 0x20,param_1);
          uVar9 = uVar4 + 1;
        } while ((uVar3 & 1) != 0);
        if (uVar4 < uVar2) goto LAB_0086eba4;
      }
LAB_0086eb88:
      uVar7 = uVar7 + 1;
      bVar1 = uVar7 < uVar6;
      if (uVar7 == uVar6) goto LAB_0086eba4;
      lVar5 = *(long *)this;
    } while( true );
  }
  bVar1 = false;
LAB_0086eba4:
  return ~bVar1 & 1;
}


