// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadOverlayLayer
// Entry Point: 008ea074
// Size: 148 bytes
// Signature: undefined __thiscall unloadOverlayLayer(BaseTerrain * this, uint param_1)


/* BaseTerrain::unloadOverlayLayer(unsigned int) */

void __thiscall BaseTerrain::unloadOverlayLayer(BaseTerrain *this,uint param_1)

{
  OverlayLayer *pOVar1;
  OverlayLayer *pOVar2;
  OverlayLayer *this_00;
  OverlayLayer *pOVar3;
  
  pOVar1 = *(OverlayLayer **)(this + 0x28);
  pOVar2 = (OverlayLayer *)(*(long *)(this + 0x20) + (ulong)param_1 * 0x98);
  pOVar3 = pOVar2 + 0x98;
  this_00 = pOVar2;
  if (pOVar3 != pOVar1) {
    do {
      pOVar2 = this_00 + 0x98;
      OverlayLayer::operator=(this_00,pOVar2);
      pOVar3 = this_00 + 0x130;
      this_00 = pOVar2;
    } while (pOVar3 != pOVar1);
    pOVar3 = *(OverlayLayer **)(this + 0x28);
    if (pOVar2 == pOVar3) goto LAB_008ea0f0;
  }
  do {
    pOVar3 = pOVar3 + -0x98;
    FUN_008ecd9c(this + 0x30,pOVar3);
  } while (pOVar3 != pOVar2);
LAB_008ea0f0:
  *(OverlayLayer **)(this + 0x28) = pOVar2;
  return;
}


