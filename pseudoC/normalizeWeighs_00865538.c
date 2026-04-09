// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: normalizeWeighs
// Entry Point: 00865538
// Size: 232 bytes
// Signature: undefined normalizeWeighs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationPlayer::normalizeWeighs() */

void ConditionalAnimationPlayer::normalizeWeighs(void)

{
  ConditionalAnimationItem *this;
  long in_x0;
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(in_x0 + 8);
  uVar2 = (*(long *)(in_x0 + 0x10) - lVar1 >> 3) * 0xbdef7bdf;
  if ((int)uVar2 != 0) {
    fVar5 = 0.0;
    lVar3 = 0;
    while( true ) {
      if (*(char *)(lVar1 + lVar3 + 0xbc) != '\0') {
        fVar4 = (float)ConditionalAnimationItem::getCurrentWeightFromItem();
        fVar5 = fVar5 + fVar4;
      }
      if ((uVar2 & 0xffffffff) * 0xf8 + -0xf8 == lVar3) break;
      lVar1 = *(long *)(in_x0 + 8);
      lVar3 = lVar3 + 0xf8;
    }
    if (((0.0 < fVar5) && (fVar5 != 1.0)) && ((int)uVar2 != 0)) {
      lVar1 = 0;
      do {
        this = (ConditionalAnimationItem *)(*(long *)(in_x0 + 8) + lVar1);
        if (this[0xbc] != (ConditionalAnimationItem)0x0) {
          ConditionalAnimationItem::scaleWeight(this,1.0 / fVar5);
        }
        lVar1 = lVar1 + 0xf8;
      } while ((uVar2 & 0xffffffff) * 0xf8 - lVar1 != 0);
    }
  }
  return;
}


