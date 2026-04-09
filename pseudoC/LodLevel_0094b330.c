// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LodLevel
// Entry Point: 0094b330
// Size: 68 bytes
// Signature: undefined __thiscall ~LodLevel(LodLevel * this)


/* CustomShader::LodLevel::~LodLevel() */

void __thiscall CustomShader::LodLevel::~LodLevel(LodLevel *this)

{
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}


