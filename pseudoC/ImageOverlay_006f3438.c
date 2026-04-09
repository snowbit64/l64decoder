// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ImageOverlay
// Entry Point: 006f3438
// Size: 36 bytes
// Signature: undefined __thiscall ~ImageOverlay(ImageOverlay * this)


/* ImageOverlay::~ImageOverlay() */

void __thiscall ImageOverlay::~ImageOverlay(ImageOverlay *this)

{
  ~ImageOverlay(this);
  operator_delete(this);
  return;
}


