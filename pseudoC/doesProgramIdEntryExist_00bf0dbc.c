// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doesProgramIdEntryExist
// Entry Point: 00bf0dbc
// Size: 16 bytes
// Signature: undefined __thiscall doesProgramIdEntryExist(ShaderManager * this, uint param_1, uchar * param_2)


/* ShaderManager::doesProgramIdEntryExist(unsigned int, unsigned char const*) */

void __thiscall
ShaderManager::doesProgramIdEntryExist(ShaderManager *this,uint param_1,uchar *param_2)

{
  if (*(CompiledShaderArchive **)this != (CompiledShaderArchive *)0x0) {
    CompiledShaderArchive::doesProgramIdEntryExist(*(CompiledShaderArchive **)this,param_1,param_2);
    return;
  }
  return;
}


