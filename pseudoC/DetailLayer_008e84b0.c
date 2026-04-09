// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DetailLayer
// Entry Point: 008e84b0
// Size: 164 bytes
// Signature: undefined __thiscall ~DetailLayer(DetailLayer * this)


/* BaseTerrain::DetailLayer::~DetailLayer() */

void __thiscall BaseTerrain::DetailLayer::~DetailLayer(DetailLayer *this)

{
  DetailLayer DVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x90);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x70] & 1) == 0) {
    DVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    DVar1 = this[0x58];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    DVar1 = this[0x40];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    DVar1 = this[0x28];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    DVar1 = this[0x10];
  }
  if (((byte)DVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


