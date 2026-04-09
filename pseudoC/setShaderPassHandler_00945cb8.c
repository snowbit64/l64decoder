// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShaderPassHandler
// Entry Point: 00945cb8
// Size: 8 bytes
// Signature: undefined __thiscall setShaderPassHandler(GsMaterial * this, ShaderPassHandler * param_1)


/* GsMaterial::setShaderPassHandler(GsMaterial::ShaderPassHandler*) */

void __thiscall GsMaterial::setShaderPassHandler(GsMaterial *this,ShaderPassHandler *param_1)

{
  *(ShaderPassHandler **)(this + 0x90) = param_1;
  return;
}


