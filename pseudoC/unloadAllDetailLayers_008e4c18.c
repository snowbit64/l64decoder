// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadAllDetailLayers
// Entry Point: 008e4c18
// Size: 248 bytes
// Signature: undefined unloadAllDetailLayers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::unloadAllDetailLayers() */

void BaseTerrain::unloadAllDetailLayers(void)

{
  DetailLayer *pDVar1;
  long in_x0;
  long lVar2;
  ulong uVar3;
  DetailLayer *pDVar4;
  DetailLayer *this;
  DetailLayer *pDVar5;
  
  lVar2 = *(long *)(in_x0 + 8);
  uVar3 = ((long)*(DetailLayer **)(in_x0 + 0x10) - lVar2 >> 4) * 0xba2e8ba3;
  if ((int)uVar3 < 1) {
    return;
  }
  uVar3 = uVar3 & 0xffffffff;
  pDVar5 = *(DetailLayer **)(in_x0 + 0x10);
  do {
    pDVar4 = (DetailLayer *)(lVar2 + (uVar3 - 1 & 0xffffffff) * 0xb0);
    this = pDVar4;
    if (pDVar4 + 0xb0 == pDVar5) {
LAB_008e4cc0:
      do {
        pDVar5 = pDVar5 + -0xb0;
        FUN_008eccf8(in_x0 + 0x18,pDVar5);
      } while (pDVar5 != pDVar4);
    }
    else {
      do {
        pDVar4 = this + 0xb0;
        DetailLayer::operator=(this,pDVar4);
        pDVar1 = this + 0x160;
        this = pDVar4;
      } while (pDVar1 != pDVar5);
      pDVar5 = *(DetailLayer **)(in_x0 + 0x10);
      if (pDVar4 != pDVar5) goto LAB_008e4cc0;
    }
    *(DetailLayer **)(in_x0 + 0x10) = pDVar4;
    if ((long)uVar3 < 2) {
      return;
    }
    lVar2 = *(long *)(in_x0 + 8);
    uVar3 = uVar3 - 1;
    pDVar5 = pDVar4;
  } while( true );
}


