// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0086491c
// Size: 304 bytes
// Signature: undefined __thiscall update(ConditionalAnimationPlayer * this, float param_1)


/* ConditionalAnimationPlayer::update(float) */

void __thiscall ConditionalAnimationPlayer::update(ConditionalAnimationPlayer *this,float param_1)

{
  ConditionalAnimationInformation *pCVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)this != 0) {
    lVar4 = *(long *)(this + 8);
    pCVar1 = (ConditionalAnimationInformation *)(this + 0x68);
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    uVar5 = (*(long *)(this + 0x10) - lVar4 >> 3) * 0xbdef7bdf;
    if ((int)uVar5 != 0) {
      lVar6 = 0;
      while( true ) {
        uVar3 = ConditionalAnimationItem::checkConditions
                          ((ConditionalAnimationItem *)(lVar4 + lVar6),pCVar1);
        if (((ConditionalAnimationItem *)(lVar4 + lVar6))[0xbc] == (ConditionalAnimationItem)0x0) {
          if ((uVar3 & 1) != 0) {
            ConditionalAnimationItem::initActivateTransition();
          }
        }
        else if ((uVar3 & 1) == 0) {
          ConditionalAnimationItem::initExitTransition();
        }
        if ((uVar5 & 0xffffffff) * 0xf8 + -0xf8 == lVar6) break;
        lVar4 = *(long *)(this + 8);
        lVar6 = lVar6 + 0xf8;
      }
    }
                    /* try { // try from 008649e0 to 00864a0b has its CatchHandler @ 00864a4c */
    updateWeights(param_1,(ConditionalAnimationInformation *)this,(vector *)pCVar1);
    ConditionalAnimationTracks::update
              ((ConditionalAnimationTracks *)(this + 0x20),pCVar1,*(CharacterSet **)this,
               (vector *)&local_70,(vector *)(this + 8));
    if (local_70 != (void *)0x0) {
      local_68 = local_70;
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


