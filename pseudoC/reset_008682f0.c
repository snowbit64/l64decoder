// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008682f0
// Size: 196 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationItem::reset() */

void ConditionalAnimationItem::reset(void)

{
  long lVar1;
  long in_x0;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  *(undefined4 *)(in_x0 + 0x34) = 0;
  *(undefined4 *)(in_x0 + 0x38) = 0;
  *(undefined4 *)(in_x0 + 0x40) = 0;
  ConditionalAnimationBlending::resetWeights();
  lVar1 = *(long *)(in_x0 + 0xd8);
  *(undefined *)(in_x0 + 0xbc) = 0;
  *(undefined4 *)(in_x0 + 0xf0) = 0;
  uVar5 = (*(long *)(in_x0 + 0xe0) - lVar1 >> 3) * -0x5555555555555555;
  if ((int)uVar5 != 0) {
    uVar3 = uVar5 & 0xffffffff;
    if (uVar3 < 2) {
      lVar6 = 0;
    }
    else {
      lVar6 = uVar3 - (uVar5 & 1);
      puVar2 = (undefined4 *)(lVar1 + 0x1c);
      lVar4 = lVar6;
      do {
        lVar4 = lVar4 + -2;
        puVar2[-6] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0xc;
      } while (lVar4 != 0);
      if ((uVar5 & 1) == 0) goto LAB_0086838c;
    }
    lVar4 = uVar3 - lVar6;
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x18 + 4);
    do {
      lVar4 = lVar4 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 6;
    } while (lVar4 != 0);
  }
LAB_0086838c:
  if (*(char *)(in_x0 + 0xc) != '\0') {
    ConditionalAnimationBlending::resetClip();
    return;
  }
  ConditionalAnimationClipInfo::reset();
  return;
}


