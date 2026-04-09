// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShader
// Entry Point: 00bef08c
// Size: 16 bytes
// Signature: undefined __thiscall getShader(ShaderVariants * this, uint param_1)


/* AdhocShader::ShaderVariants::getShader(unsigned int) */

long __thiscall AdhocShader::ShaderVariants::getShader(ShaderVariants *this,uint param_1)

{
  return *(long *)(this + 8) + (ulong)param_1 * 0x100;
}


