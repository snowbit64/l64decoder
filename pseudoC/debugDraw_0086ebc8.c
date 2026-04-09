// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 0086ebc8
// Size: 260 bytes
// Signature: undefined __thiscall debugDraw(ConditionalAnimationConditions * this, ConditionalAnimationInformation * param_1, int param_2, ConditionalAnimationShared * param_3, uint * param_4)


/* ConditionalAnimationConditions::debugDraw(ConditionalAnimationInformation const&, int,
   ConditionalAnimationShared const&, unsigned int&) const */

void __thiscall
ConditionalAnimationConditions::debugDraw
          (ConditionalAnimationConditions *this,ConditionalAnimationInformation *param_1,int param_2
          ,ConditionalAnimationShared *param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ConditionalAnimationComparisons **ppCVar6;
  
  lVar3 = *(long *)this;
  uVar2 = (*(long *)(this + 8) - lVar3 >> 3) * -0x5555555555555555;
  if ((int)uVar2 != 0) {
    uVar5 = 0;
    while( true ) {
      ppCVar6 = (ConditionalAnimationComparisons **)(lVar3 + uVar5 * 0x18);
      uVar1 = (long)ppCVar6[1] - (long)*ppCVar6;
      if ((int)(uVar1 >> 5) != 0) {
        uVar1 = uVar1 >> 5 & 0xffffffff;
        ConditionalAnimationComparisons::debugDraw(*ppCVar6,param_1,0,param_2,param_3,param_4);
        if (uVar1 != 1) {
          lVar3 = 0x20;
          uVar4 = 1;
          do {
            ConditionalAnimationComparisons::debugDraw
                      (*ppCVar6 + lVar3,param_1,(int)uVar4,param_2,param_3,param_4);
            uVar4 = uVar4 + 1;
            lVar3 = lVar3 + 0x20;
          } while (uVar1 != uVar4);
        }
      }
      uVar5 = uVar5 + 1;
      if (uVar5 == (uVar2 & 0xffffffff)) break;
      lVar3 = *(long *)this;
    }
  }
  return;
}


