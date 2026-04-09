// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_24
// Entry Point: 0095b130
// Size: 212 bytes
// Signature: undefined _INIT_24(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_24(void)

{
  MaterialShader::buildTexturesMapVs();
  __cxa_atexit(FUN_009592f8,MaterialShader::s_texturesMapVs,&PTR_LOOP_00fd8de0);
  MaterialShader::buildTexturesMapPs();
  __cxa_atexit(FUN_00958ad8,MaterialShader::s_texturesMapPs,&PTR_LOOP_00fd8de0);
  _DAT_0210e598 = 0;
  _DAT_0210e590 = 0;
  MaterialShader::s_outputTexturesMapPs = &DAT_0210e590;
  __cxa_atexit(FUN_00958af4,&MaterialShader::s_outputTexturesMapPs,&PTR_LOOP_00fd8de0);
  MaterialShader::buildSamplersMapVs();
  __cxa_atexit(FUN_0095950c,MaterialShader::s_samplersMapVs,&PTR_LOOP_00fd8de0);
  MaterialShader::buildSamplersMapPs();
  __cxa_atexit(FUN_00958ea0,MaterialShader::s_samplersMapPs,&PTR_LOOP_00fd8de0);
  return;
}


