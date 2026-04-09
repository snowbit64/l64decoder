// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canStripExtension
// Entry Point: 00ac60a0
// Size: 96 bytes
// Signature: undefined __cdecl canStripExtension(char * param_1)


/* SpirvUtil::canStripExtension(char const*) */

bool SpirvUtil::canStripExtension(char *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,"SPV_GOOGLE_decorate_string");
  if ((iVar2 == 0) || (iVar2 = strcmp(param_1,"SPV_GOOGLE_hlsl_functionality1"), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    iVar2 = strcmp(param_1,"SPV_GOOGLE_user_type");
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


