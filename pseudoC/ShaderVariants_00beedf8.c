// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ShaderVariants
// Entry Point: 00beedf8
// Size: 96 bytes
// Signature: undefined __thiscall ~ShaderVariants(ShaderVariants * this)


/* AdhocShader::ShaderVariants::~ShaderVariants() */

void __thiscall AdhocShader::ShaderVariants::~ShaderVariants(ShaderVariants *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar2 = lVar2 << 8;
      do {
        ~AdhocShader((AdhocShader *)(lVar1 + -0x100 + lVar2));
        lVar2 = lVar2 + -0x100;
      } while (lVar2 != 0);
    }
    operator_delete__((long *)(lVar1 + -8));
    return;
  }
  return;
}


