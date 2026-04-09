// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RGBVideoFrame
// Entry Point: 00c73928
// Size: 16 bytes
// Signature: undefined __thiscall ~RGBVideoFrame(RGBVideoFrame * this)


/* TheoraVideoDecoder::RGBVideoFrame::~RGBVideoFrame() */

void __thiscall TheoraVideoDecoder::RGBVideoFrame::~RGBVideoFrame(RGBVideoFrame *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}


