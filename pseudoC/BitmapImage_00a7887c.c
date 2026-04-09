// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BitmapImage
// Entry Point: 00a7887c
// Size: 24 bytes
// Signature: undefined __thiscall ~BitmapImage(BitmapImage * this)


/* BitmapImage::~BitmapImage() */

void __thiscall BitmapImage::~BitmapImage(BitmapImage *this)

{
  if ((*this != (BitmapImage)0x0) && (*(void **)(this + 0x20) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x20));
    return;
  }
  return;
}


