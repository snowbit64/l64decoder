// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioBufferDesc
// Entry Point: 008b4294
// Size: 64 bytes
// Signature: undefined __thiscall ~AudioBufferDesc(AudioBufferDesc * this)


/* AudioBufferDesc::~AudioBufferDesc() */

void __thiscall AudioBufferDesc::~AudioBufferDesc(AudioBufferDesc *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  if (((byte)this[0x28] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x38));
  return;
}


