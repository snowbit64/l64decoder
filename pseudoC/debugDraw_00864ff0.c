// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 00864ff0
// Size: 724 bytes
// Signature: undefined __thiscall debugDraw(ConditionalAnimationPlayer * this, ConditionalAnimationShared * param_1, Vector3 * param_2)


/* ConditionalAnimationPlayer::debugDraw(ConditionalAnimationShared const&, Vector3 const&) const */

void __thiscall
ConditionalAnimationPlayer::debugDraw
          (ConditionalAnimationPlayer *this,ConditionalAnimationShared *param_1,Vector3 *param_2)

{
  ConditionalAnimationInformation *this_00;
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ConditionalAnimationShared **ppCVar6;
  ConditionalAnimationShared *pCVar7;
  long lVar8;
  ConditionalAnimationItem **ppCVar9;
  long lVar10;
  ConditionalAnimationShared **ppCVar11;
  float fVar12;
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined auStack_100 [128];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  ppCVar9 = (ConditionalAnimationItem **)(this + 8);
  this_00 = (ConditionalAnimationInformation *)(this + 0x68);
  uVar5 = (*(long *)(this + 0x10) - (long)*ppCVar9 >> 3) * 0xbdef7bdf;
  if ((int)uVar5 == 0) {
    Vector4::set((Vector4 *)&local_80,0.269,1.0,0.0,1.0);
  }
  else {
    uVar3 = ConditionalAnimationItem::checkConditions(*ppCVar9,this_00);
    lVar8 = (uVar5 & 0xffffffff) - 1;
    if (lVar8 != 0) {
      lVar10 = 0xf8;
      do {
        uVar4 = ConditionalAnimationItem::checkConditions(*ppCVar9 + lVar10,this_00);
        lVar8 = lVar8 + -1;
        uVar3 = uVar4 | uVar3;
        lVar10 = lVar10 + 0xf8;
      } while (lVar8 != 0);
    }
    Vector4::set((Vector4 *)&local_80,0.269,1.0,0.0,1.0);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = (void *)0x0;
    if ((uVar3 & 1) != 0) goto LAB_00865130;
  }
  local_118 = (void *)0x0;
  uStack_120 = 0;
  local_128 = 0;
  FUN_008652f4(auStack_100);
                    /* try { // try from 008650fc to 00865107 has its CatchHandler @ 008652cc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_128);
                    /* try { // try from 00865108 to 00865127 has its CatchHandler @ 008652c8 */
  Vector4::set((Vector4 *)&local_110,1.0,0.269,0.0,1.0);
  uStack_78 = uStack_108;
  local_80 = local_110;
LAB_00865130:
  ppCVar11 = *(ConditionalAnimationShared ***)param_1;
  while (ppCVar11 != (ConditionalAnimationShared **)(param_1 + 8)) {
    uVar3 = *(uint *)(ppCVar11 + 4);
                    /* try { // try from 0086516c to 0086518b has its CatchHandler @ 008652d8 */
    ConditionalAnimationValue::ConditionalAnimationValue((ConditionalAnimationValue *)&local_110);
    ConditionalAnimationInformation::getValue(this_00,uVar3,(ConditionalAnimationValue *)&local_110)
    ;
    uVar5 = ConditionalAnimationValue::isBool();
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 008651d0 to 008651d7 has its CatchHandler @ 008652d8 */
      uVar5 = ConditionalAnimationValue::isFloat();
      if ((uVar5 & 1) != 0) {
                    /* try { // try from 008651e8 to 00865217 has its CatchHandler @ 008652d0 */
        fVar12 = (float)ConditionalAnimationValue::getFloat();
        FUN_008652f4((double)fVar12,auStack_100);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_128);
      }
    }
    else {
                    /* try { // try from 0086519c to 008651cb has its CatchHandler @ 008652d4 */
      ConditionalAnimationValue::getBool();
      FUN_008652f4(auStack_100);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_128);
    }
    ppCVar6 = (ConditionalAnimationShared **)ppCVar11[1];
    if ((ConditionalAnimationShared **)ppCVar11[1] == (ConditionalAnimationShared **)0x0) {
      ppCVar6 = ppCVar11 + 2;
      bVar2 = (ConditionalAnimationShared **)*(ConditionalAnimationShared **)*ppCVar6 != ppCVar11;
      ppCVar11 = (ConditionalAnimationShared **)*ppCVar6;
      if (bVar2) {
        do {
          pCVar7 = *ppCVar6;
          ppCVar6 = (ConditionalAnimationShared **)(pCVar7 + 0x10);
          ppCVar11 = (ConditionalAnimationShared **)*ppCVar6;
        } while (*ppCVar11 != pCVar7);
      }
    }
    else {
      do {
        ppCVar11 = ppCVar6;
        ppCVar6 = (ConditionalAnimationShared **)*ppCVar11;
      } while ((ConditionalAnimationShared **)*ppCVar11 != (ConditionalAnimationShared **)0x0);
    }
  }
  if (*(CharacterSet **)this != (CharacterSet *)0x0) {
                    /* try { // try from 00865270 to 0086527b has its CatchHandler @ 008652c4 */
    ConditionalAnimationTracks::debugDraw
              ((ConditionalAnimationTracks *)(this + 0x20),*(CharacterSet **)this,param_2,
               (vector *)ppCVar9);
  }
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


