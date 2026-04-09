// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 00868a5c
// Size: 700 bytes
// Signature: undefined __thiscall debugDraw(ConditionalAnimationItem * this, ConditionalAnimationInformation * param_1, bool param_2, ConditionalAnimationShared * param_3, uint * param_4)


/* ConditionalAnimationItem::debugDraw(ConditionalAnimationInformation const&, bool,
   ConditionalAnimationShared const&, unsigned int&) const */

void __thiscall
ConditionalAnimationItem::debugDraw
          (ConditionalAnimationItem *this,ConditionalAnimationInformation *param_1,bool param_2,
          ConditionalAnimationShared *param_3,uint *param_4)

{
  void *pvVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  ConditionalAnimationItem CVar6;
  ConditionalAnimationItem CVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  ConditionalAnimationItem *pCVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong local_1e0;
  undefined8 uStack_1d8;
  void *local_1d0;
  ConditionalAnimationValue aCStack_1c8 [8];
  undefined auStack_1c0 [256];
  Vector4 aVStack_c0 [16];
  long local_b0;
  
  lVar8 = tpidr_el0;
  local_b0 = *(long *)(lVar8 + 0x28);
  if (*(float *)(this + 0x3c) <= 0.0) {
    fVar14 = 0.0;
    fVar13 = 0.7;
  }
  else {
    fVar13 = 0.0;
    fVar14 = 1.0;
  }
  Vector4::set(aVStack_c0,fVar13,fVar14,fVar13,1.0);
  if (this[0xc] == (ConditionalAnimationItem)0x0) {
    fVar13 = *(float *)(this + 0x30);
    fVar15 = *(float *)(this + 0x34);
    fVar16 = *(float *)(this + 0x38);
    fVar17 = *(float *)(this + 0x3c);
    uVar5 = *(undefined4 *)(this + 8);
    fVar14 = *(float *)(this + 0x40);
    pCVar12 = this + 0x11;
    if (((byte)this[0x10] & 1) != 0) {
      pCVar12 = *(ConditionalAnimationItem **)(this + 0x20);
    }
    uVar10 = ConditionalAnimationConditions::test
                       ((ConditionalAnimationConditions *)(this + 0x98),param_1);
    pcVar2 = "true";
    if ((uVar10 & 1) == 0) {
      pcVar2 = "false";
    }
    FUN_008676ac((double)fVar13,(double)fVar15,(double)fVar16,(double)fVar17,(double)fVar14,
                 auStack_1c0,0xff,0xff,
                 "Item[%d] - name[%s] blended[%s]\n    Weight[current(%.3f),begin(%.3f),end(%.3f)]\n     Transition[%.3f/%.3f]\n     Condition(%s)"
                 ,uVar5,pCVar12,"false",pcVar2);
  }
  else {
    ConditionalAnimationValue::ConditionalAnimationValue(aCStack_1c8);
    uVar4 = *(uint *)(this + 0x70);
    uVar10 = ConditionalAnimationInformation::getValue(param_1,uVar4,aCStack_1c8);
    if ((uVar10 & 1) != 0) {
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1d0 = (void *)0x0;
                    /* try { // try from 00868b20 to 00868b2f has its CatchHandler @ 00868d1c */
      ConditionalAnimationShared::findParameter(param_3,uVar4,(basic_string *)&local_1e0);
                    /* try { // try from 00868b30 to 00868b3b has its CatchHandler @ 00868d18 */
      fVar13 = (float)ConditionalAnimationValue::getFloat();
      pvVar9 = local_1d0;
      uVar10 = local_1e0;
      CVar6 = this[0x10];
      fVar14 = *(float *)(this + 0x74);
      fVar15 = *(float *)(this + 0x78);
      fVar16 = *(float *)(this + 0x30);
      fVar17 = *(float *)(this + 0x34);
      fVar18 = *(float *)(this + 0x38);
      fVar19 = *(float *)(this + 0x3c);
      uVar5 = *(undefined4 *)(this + 8);
      pCVar12 = *(ConditionalAnimationItem **)(this + 0x20);
      CVar7 = this[0xc];
      fVar20 = *(float *)(this + 0x40);
                    /* try { // try from 00868b74 to 00868bf3 has its CatchHandler @ 00868d20 */
      uVar11 = ConditionalAnimationConditions::test
                         ((ConditionalAnimationConditions *)(this + 0x98),param_1);
      pvVar1 = (void *)((ulong)&local_1e0 | 1);
      if ((uVar10 & 1) != 0) {
        pvVar1 = pvVar9;
      }
      if (((byte)CVar6 & 1) == 0) {
        pCVar12 = this + 0x11;
      }
      pcVar2 = "false";
      if (CVar7 != (ConditionalAnimationItem)0x0) {
        pcVar2 = "true";
      }
      pcVar3 = "true";
      if ((uVar11 & 1) == 0) {
        pcVar3 = "false";
      }
      FUN_008676ac((double)fVar13,(double)fVar14,(double)fVar15,(double)fVar16,(double)fVar17,
                   (double)fVar18,(double)fVar19,(double)fVar20,auStack_1c0,0xff,0xff,
                   "Item[%d] - name[%s] blended[%s]\n    blendValue[%s]=%.3f (min=%.3f, max=%.3f)\n    Weight[current(%.3f),begin(%.3f),end(%.3f)]\n     Transition[%.3f/%.3f]\n     Condition(%s)"
                   ,uVar5,pCVar12,pcVar2,pvVar1,pcVar3);
      if ((local_1e0 & 1) != 0) {
        operator_delete(local_1d0);
      }
    }
  }
  if (param_2) {
    uVar10 = ConditionalAnimationConditions::test
                       ((ConditionalAnimationConditions *)(this + 0x98),param_1);
    if ((uVar10 & 1) != 0) {
      ConditionalAnimationConditions::debugDraw
                ((ConditionalAnimationConditions *)(this + 0x98),param_1,*(int *)(this + 8),param_3,
                 param_4);
    }
  }
  if (*(long *)(lVar8 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


