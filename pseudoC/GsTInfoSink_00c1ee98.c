// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsTInfoSink
// Entry Point: 00c1ee98
// Size: 68 bytes
// Signature: undefined __thiscall ~GsTInfoSink(GsTInfoSink * this)


/* GsTInfoSink::~GsTInfoSink() */

void __thiscall GsTInfoSink::~GsTInfoSink(GsTInfoSink *this)

{
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


