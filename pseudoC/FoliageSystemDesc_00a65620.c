// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageSystemDesc
// Entry Point: 00a65620
// Size: 108 bytes
// Signature: undefined __thiscall ~FoliageSystemDesc(FoliageSystemDesc * this)


/* FoliageSystemDesc::~FoliageSystemDesc() */

void __thiscall FoliageSystemDesc::~FoliageSystemDesc(FoliageSystemDesc *this)

{
  MultiLayer *pMVar1;
  MultiLayer *this_00;
  MultiLayer *pMVar2;
  
  pMVar2 = *(MultiLayer **)(this + 0x10);
  if (pMVar2 == (MultiLayer *)0x0) {
    return;
  }
  this_00 = *(MultiLayer **)(this + 0x18);
  pMVar1 = pMVar2;
  if (this_00 != pMVar2) {
    do {
      this_00 = this_00 + -0x28;
      MultiLayer::~MultiLayer(this_00);
    } while (this_00 != pMVar2);
    pMVar1 = *(MultiLayer **)(this + 0x10);
  }
  *(MultiLayer **)(this + 0x18) = pMVar2;
  operator_delete(pMVar1);
  return;
}


