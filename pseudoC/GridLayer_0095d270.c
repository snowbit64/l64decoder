// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GridLayer
// Entry Point: 0095d270
// Size: 108 bytes
// Signature: undefined __thiscall ~GridLayer(GridLayer * this)


/* MultiresTexture::GridLayer::~GridLayer() */

void __thiscall MultiresTexture::GridLayer::~GridLayer(GridLayer *this)

{
  if (*(void **)(this + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe0));
  }
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete__(*(void **)(this + 200));
  }
  if (*(void **)(this + 0xb0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xb0));
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x98));
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x80));
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
    return;
  }
  return;
}


