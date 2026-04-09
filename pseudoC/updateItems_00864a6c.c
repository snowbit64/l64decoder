// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateItems
// Entry Point: 00864a6c
// Size: 176 bytes
// Signature: undefined __thiscall updateItems(ConditionalAnimationPlayer * this, ConditionalAnimationInformation * param_1)


/* ConditionalAnimationPlayer::updateItems(ConditionalAnimationInformation const&) */

void __thiscall
ConditionalAnimationPlayer::updateItems
          (ConditionalAnimationPlayer *this,ConditionalAnimationInformation *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(this + 8);
  uVar3 = (*(long *)(this + 0x10) - lVar2 >> 3) * 0xbdef7bdf;
  if ((int)uVar3 != 0) {
    lVar4 = 0;
    while( true ) {
      uVar1 = ConditionalAnimationItem::checkConditions
                        ((ConditionalAnimationItem *)(lVar2 + lVar4),param_1);
      if (((ConditionalAnimationItem *)(lVar2 + lVar4))[0xbc] == (ConditionalAnimationItem)0x0) {
        if ((uVar1 & 1) != 0) {
          ConditionalAnimationItem::initActivateTransition();
        }
      }
      else if ((uVar1 & 1) == 0) {
        ConditionalAnimationItem::initExitTransition();
      }
      if ((uVar3 & 0xffffffff) * 0xf8 + -0xf8 == lVar4) break;
      lVar2 = *(long *)(this + 8);
      lVar4 = lVar4 + 0xf8;
    }
  }
  return;
}


