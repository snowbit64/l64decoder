// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OverlayLayerDesc
// Entry Point: 0093714c
// Size: 148 bytes
// Signature: undefined __thiscall ~OverlayLayerDesc(OverlayLayerDesc * this)


/* TerrainTransformGroupDesc::OverlayLayerDesc::~OverlayLayerDesc() */

void __thiscall
TerrainTransformGroupDesc::OverlayLayerDesc::~OverlayLayerDesc(OverlayLayerDesc *this)

{
  OverlayLayerDesc OVar1;
  
  if (((byte)this[0x70] & 1) == 0) {
    OVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    OVar1 = this[0x58];
  }
  if (((byte)OVar1 & 1) == 0) {
    OVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    OVar1 = this[0x40];
  }
  if (((byte)OVar1 & 1) == 0) {
    OVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    OVar1 = this[0x28];
  }
  if (((byte)OVar1 & 1) == 0) {
    OVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    OVar1 = this[0x10];
  }
  if (((byte)OVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


