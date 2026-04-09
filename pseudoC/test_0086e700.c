// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: test
// Entry Point: 0086e700
// Size: 132 bytes
// Signature: undefined __thiscall test(Group * this, ConditionalAnimationInformation * param_1)


/* ConditionalAnimationConditions::Group::test(ConditionalAnimationInformation const&) const */

bool __thiscall
ConditionalAnimationConditions::Group::test(Group *this,ConditionalAnimationInformation *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(long *)(this + 8) - (long)*(ConditionalAnimationComparisons **)this;
  if ((int)(uVar5 >> 5) == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = ConditionalAnimationComparisons::compare
                      (*(ConditionalAnimationComparisons **)this,param_1);
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      uVar2 = uVar5 >> 5 & 0xffffffff;
      uVar5 = 1;
      do {
        uVar4 = uVar5;
        if (uVar4 == uVar2) break;
        uVar3 = ConditionalAnimationComparisons::compare
                          ((ConditionalAnimationComparisons *)(*(long *)this + uVar4 * 0x20),param_1
                          );
        uVar5 = uVar4 + 1;
      } while ((uVar3 & 1) != 0);
      bVar1 = uVar2 <= uVar4;
    }
  }
  return bVar1;
}


