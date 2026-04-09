// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_22
// Entry Point: 00909a84
// Size: 44 bytes
// Signature: undefined _INIT_22(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_22(void)

{
  _DAT_010fe308 = 0;
  _DAT_010fe300 = 0;
  I3DMaterialPoolFactory::m_modCustomShaderReplacements = &DAT_010fe300;
  __cxa_atexit(FUN_00907bd4,&I3DMaterialPoolFactory::m_modCustomShaderReplacements,
               &PTR_LOOP_00fd8de0);
  return;
}


