// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadDetailLayer
// Entry Point: 008e9d90
// Size: 148 bytes
// Signature: undefined __thiscall unloadDetailLayer(BaseTerrain * this, uint param_1)


/* BaseTerrain::unloadDetailLayer(unsigned int) */

void __thiscall BaseTerrain::unloadDetailLayer(BaseTerrain *this,uint param_1)

{
  DetailLayer *pDVar1;
  DetailLayer *pDVar2;
  DetailLayer *this_00;
  DetailLayer *pDVar3;
  
  pDVar1 = *(DetailLayer **)(this + 0x10);
  pDVar2 = (DetailLayer *)(*(long *)(this + 8) + (ulong)param_1 * 0xb0);
  pDVar3 = pDVar2 + 0xb0;
  this_00 = pDVar2;
  if (pDVar3 != pDVar1) {
    do {
      pDVar2 = this_00 + 0xb0;
      DetailLayer::operator=(this_00,pDVar2);
      pDVar3 = this_00 + 0x160;
      this_00 = pDVar2;
    } while (pDVar3 != pDVar1);
    pDVar3 = *(DetailLayer **)(this + 0x10);
    if (pDVar2 == pDVar3) goto LAB_008e9e0c;
  }
  do {
    pDVar3 = pDVar3 + -0xb0;
    FUN_008eccf8(this + 0x18,pDVar3);
  } while (pDVar3 != pDVar2);
LAB_008e9e0c:
  *(DetailLayer **)(this + 0x10) = pDVar2;
  return;
}


