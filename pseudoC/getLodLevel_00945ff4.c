// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLodLevel
// Entry Point: 00945ff4
// Size: 16 bytes
// Signature: undefined __thiscall getLodLevel(GsMaterial * this, float param_1)


/* GsMaterial::getLodLevel(float) const */

void __thiscall GsMaterial::getLodLevel(GsMaterial *this,float param_1)

{
  if (*(CustomShader **)(this + 0x80) != (CustomShader *)0x0) {
    CustomShader::getLodLevelIndex(*(CustomShader **)(this + 0x80),param_1);
    return;
  }
  return;
}


