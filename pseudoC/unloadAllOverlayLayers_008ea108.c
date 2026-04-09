// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadAllOverlayLayers
// Entry Point: 008ea108
// Size: 248 bytes
// Signature: undefined unloadAllOverlayLayers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::unloadAllOverlayLayers() */

void BaseTerrain::unloadAllOverlayLayers(void)

{
  OverlayLayer *pOVar1;
  long in_x0;
  long lVar2;
  ulong uVar3;
  OverlayLayer *pOVar4;
  OverlayLayer *this;
  OverlayLayer *pOVar5;
  
  lVar2 = *(long *)(in_x0 + 0x20);
  uVar3 = ((long)*(OverlayLayer **)(in_x0 + 0x28) - lVar2 >> 3) * 0x286bca1b;
  if ((int)uVar3 < 1) {
    return;
  }
  uVar3 = uVar3 & 0xffffffff;
  pOVar5 = *(OverlayLayer **)(in_x0 + 0x28);
  do {
    pOVar4 = (OverlayLayer *)(lVar2 + (uVar3 - 1 & 0xffffffff) * 0x98);
    this = pOVar4;
    if (pOVar4 + 0x98 == pOVar5) {
LAB_008ea1b0:
      do {
        pOVar5 = pOVar5 + -0x98;
        FUN_008ecd9c(in_x0 + 0x30,pOVar5);
      } while (pOVar5 != pOVar4);
    }
    else {
      do {
        pOVar4 = this + 0x98;
        OverlayLayer::operator=(this,pOVar4);
        pOVar1 = this + 0x130;
        this = pOVar4;
      } while (pOVar1 != pOVar5);
      pOVar5 = *(OverlayLayer **)(in_x0 + 0x28);
      if (pOVar4 != pOVar5) goto LAB_008ea1b0;
    }
    *(OverlayLayer **)(in_x0 + 0x28) = pOVar4;
    if ((long)uVar3 < 2) {
      return;
    }
    lVar2 = *(long *)(in_x0 + 0x20);
    uVar3 = uVar3 - 1;
    pOVar5 = pOVar4;
  } while( true );
}


