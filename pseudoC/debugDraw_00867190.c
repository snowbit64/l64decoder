// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 00867190
// Size: 532 bytes
// Signature: undefined __thiscall debugDraw(ConditionalAnimationTracks * this, CharacterSet * param_1, Vector3 * param_2, vector * param_3)


/* ConditionalAnimationTracks::debugDraw(CharacterSet&, Vector3 const&,
   std::__ndk1::vector<ConditionalAnimationItem, std::__ndk1::allocator<ConditionalAnimationItem> >
   const&) const */

void __thiscall
ConditionalAnimationTracks::debugDraw
          (ConditionalAnimationTracks *this,CharacterSet *param_1,Vector3 *param_2,vector *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ConditionalAnimationItem *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  Vector4 aVStack_190 [256];
  long local_90;
  
  lVar2 = tpidr_el0;
  lVar5 = 0;
  local_90 = *(long *)(lVar2 + 0x28);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = (void *)0x0;
  do {
                    /* try { // try from 008671ec to 008671f7 has its CatchHandler @ 008673b8 */
    uVar3 = (uint)lVar5;
    CharacterSet::isVisible(param_1,uVar3);
    fVar10 = *(float *)(param_1 + lVar5 * 4 + 0xb4);
                    /* try { // try from 00867204 to 0086720f has its CatchHandler @ 008673b4 */
    CharacterSet::getAssignedClip(param_1,uVar3);
                    /* try { // try from 00867214 to 0086721f has its CatchHandler @ 008673b0 */
    fVar6 = (float)CharacterSet::getTime(param_1,uVar3);
                    /* try { // try from 00867224 to 0086722f has its CatchHandler @ 008673ac */
    fVar7 = (float)CharacterSet::getSpeedScale(param_1,uVar3);
    this_00 = *(ConditionalAnimationItem **)param_3;
    uVar4 = (*(long *)(param_3 + 8) - (long)this_00 >> 3) * 0xbdef7bdf;
    if ((int)uVar4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      iVar1 = *(int *)((long)(this + lVar5 * 8) + 4);
      do {
        if (*(int *)(this_00 + 8) == *(int *)(this + lVar5 * 8)) {
                    /* try { // try from 008672d0 to 0086732f has its CatchHandler @ 008673a8 */
          fVar8 = (float)ConditionalAnimationItem::getCurrentWeightFromItem();
          fVar9 = (float)ConditionalAnimationItem::getCurrentWeightFromBlendInfo(this_00,iVar1);
          FUN_008673d4((double)fVar10,(double)fVar8,(double)fVar9,(double)fVar6,(double)fVar7,
                       aVStack_190);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_1a8);
          break;
        }
        this_00 = this_00 + 0xf8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 6) {
                    /* try { // try from 00867334 to 00867353 has its CatchHandler @ 008673a4 */
      Vector4::set(aVStack_190,0.8,0.8,0.8,1.0);
      if ((local_1a8 & 1) != 0) {
        operator_delete(local_198);
      }
      if (*(long *)(lVar2 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


