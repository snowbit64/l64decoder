// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OverlayLayer
// Entry Point: 008e8ee0
// Size: 148 bytes
// Signature: undefined __thiscall ~OverlayLayer(OverlayLayer * this)


/* BaseTerrain::OverlayLayer::~OverlayLayer() */

void __thiscall BaseTerrain::OverlayLayer::~OverlayLayer(OverlayLayer *this)

{
  OverlayLayer OVar1;
  
  if (((byte)this[0x78] & 1) == 0) {
    OVar1 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    OVar1 = this[0x60];
  }
  if (((byte)OVar1 & 1) == 0) {
    OVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    OVar1 = this[0x48];
  }
  if (((byte)OVar1 & 1) == 0) {
    OVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    OVar1 = this[0x30];
  }
  if (((byte)OVar1 & 1) == 0) {
    OVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    OVar1 = this[8];
  }
  if (((byte)OVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


