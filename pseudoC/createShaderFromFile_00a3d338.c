// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShaderFromFile
// Entry Point: 00a3d338
// Size: 104 bytes
// Signature: undefined __thiscall createShaderFromFile(ScreenSpaceProcessor * this, char * param_1, char * param_2, uint param_3, IRenderDevice * param_4, AdhocShader * param_5)


/* ScreenSpaceProcessor::createShaderFromFile(char const*, char const*, unsigned int,
   IRenderDevice*, AdhocShader&) */

void __thiscall
ScreenSpaceProcessor::createShaderFromFile
          (ScreenSpaceProcessor *this,char *param_1,char *param_2,uint param_3,
          IRenderDevice *param_4,AdhocShader *param_5)

{
  AdhocShader::unload();
  AdhocShader::load(param_5,param_4,param_1,param_2,param_3,*(ShaderStructLayout **)(this + 0x40),
                    (uint)((ulong)(*(long *)(this + 0x48) -
                                  (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
  return;
}


