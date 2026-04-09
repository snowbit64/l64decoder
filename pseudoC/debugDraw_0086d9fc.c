// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 0086d9fc
// Size: 616 bytes
// Signature: undefined __thiscall debugDraw(ConditionalAnimationComparisons * this, ConditionalAnimationInformation * param_1, int param_2, int param_3, ConditionalAnimationShared * param_4, uint * param_5)


/* ConditionalAnimationComparisons::debugDraw(ConditionalAnimationInformation const&, int, int,
   ConditionalAnimationShared const&, unsigned int&) const */

void __thiscall
ConditionalAnimationComparisons::debugDraw
          (ConditionalAnimationComparisons *this,ConditionalAnimationInformation *param_1,
          int param_2,int param_3,ConditionalAnimationShared *param_4,uint *param_5)

{
  ConditionalAnimationValue *this_00;
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  ConditionalAnimationValue aCStack_118 [8];
  Vector4 aVStack_110 [16];
  undefined auStack_100 [128];
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  lVar1 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  Vector4::set(aVStack_110,1.0,1.0,1.0,1.0);
  if ((int)((ulong)(lVar2 - lVar1) >> 4) != 0) {
    lVar7 = 0;
    do {
      lVar6 = *(long *)this;
      ConditionalAnimationValue::ConditionalAnimationValue(aCStack_118);
      uVar3 = *(uint *)(lVar6 + lVar7);
      uVar5 = ConditionalAnimationInformation::getValue(param_1,uVar3,aCStack_118);
      if ((uVar5 & 1) != 0) {
        lVar6 = lVar6 + lVar7;
        this_00 = (ConditionalAnimationValue *)(lVar6 + 8);
        compareValue(*(COMPARE_OPERATION *)(lVar6 + 4),aCStack_118,this_00);
        local_130 = 0;
        uStack_128 = 0;
        local_120 = (void *)0x0;
                    /* try { // try from 0086dadc to 0086daeb has its CatchHandler @ 0086dc64 */
        ConditionalAnimationShared::findParameter(param_4,uVar3,(basic_string *)&local_130);
                    /* try { // try from 0086dafc to 0086dbbf has its CatchHandler @ 0086dc68 */
        uVar5 = ConditionalAnimationValue::sameTag(this_00,aCStack_118);
        if ((uVar5 & 1) != 0) {
          uVar5 = ConditionalAnimationValue::isBool();
          if ((uVar5 & 1) == 0) {
            uVar5 = ConditionalAnimationValue::isFloat();
            if ((uVar5 & 1) != 0) {
              fVar8 = (float)ConditionalAnimationValue::getFloat();
              fVar9 = (float)ConditionalAnimationValue::getFloat();
              FUN_0086dc84((double)fVar8,(double)fVar9,auStack_100);
            }
          }
          else {
            ConditionalAnimationValue::getBool();
            ConditionalAnimationValue::getBool();
            FUN_0086dc84(auStack_100);
          }
          *param_5 = *param_5 + 1;
        }
        if ((local_130 & 1) != 0) {
          operator_delete(local_120);
        }
      }
      lVar7 = lVar7 + 0x10;
    } while (((ulong)(lVar2 - lVar1) >> 4 & 0xffffffff) * 0x10 - lVar7 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


