// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 0086e784
// Size: 172 bytes
// Signature: undefined __thiscall debugDraw(Group * this, ConditionalAnimationInformation * param_1, int param_2, ConditionalAnimationShared * param_3, uint * param_4)


/* ConditionalAnimationConditions::Group::debugDraw(ConditionalAnimationInformation const&, int,
   ConditionalAnimationShared const&, unsigned int&) const */

void __thiscall
ConditionalAnimationConditions::Group::debugDraw
          (Group *this,ConditionalAnimationInformation *param_1,int param_2,
          ConditionalAnimationShared *param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(long *)(this + 8) - (long)*(ConditionalAnimationComparisons **)this;
  if ((int)(uVar1 >> 5) != 0) {
    uVar1 = uVar1 >> 5 & 0xffffffff;
    ConditionalAnimationComparisons::debugDraw
              (*(ConditionalAnimationComparisons **)this,param_1,0,param_2,param_3,param_4);
    if (uVar1 != 1) {
      uVar2 = 1;
      lVar3 = 0x20;
      do {
        ConditionalAnimationComparisons::debugDraw
                  ((ConditionalAnimationComparisons *)(*(long *)this + lVar3),param_1,(int)uVar2,
                   param_2,param_3,param_4);
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x20;
      } while (uVar1 != uVar2);
    }
  }
  return;
}


