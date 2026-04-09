// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SpirvReflect
// Entry Point: 00ac4480
// Size: 52 bytes
// Signature: undefined __thiscall ~SpirvReflect(SpirvReflect * this)


/* SpirvReflect::~SpirvReflect() */

void __thiscall SpirvReflect::~SpirvReflect(SpirvReflect *this)

{
  if (((byte)this[0x4b0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x4c0));
  }
                    /* try { // try from 00ac44a4 to 00ac44a7 has its CatchHandler @ 00ac44b4 */
  spvReflectDestroyShaderModule(this + 8);
  return;
}


