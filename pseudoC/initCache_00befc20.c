// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initCache
// Entry Point: 00befc20
// Size: 160 bytes
// Signature: undefined __cdecl initCache(bool param_1, IRenderDevice * param_2, char * param_3, char * param_4, char * param_5, char * param_6)


/* ShaderManager::initCache(bool, IRenderDevice*, char const*, char const*, char const*, char
   const*) */

undefined8
ShaderManager::initCache
          (bool param_1,IRenderDevice *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6)

{
  byte bVar1;
  CompiledShaderArchive **ppCVar2;
  ulong uVar3;
  char *in_x6;
  CompiledShaderArchive *pCVar4;
  
  ppCVar2 = (CompiledShaderArchive **)(ulong)param_1;
  bVar1 = *(byte *)(ppCVar2 + 0xb);
  pCVar4 = (CompiledShaderArchive *)(ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pCVar4 = ppCVar2[0xc];
  }
  if (pCVar4 == (CompiledShaderArchive *)0x0) {
    if (param_6 == (char *)0x0) {
      return 1;
    }
  }
  else {
    pCVar4 = ppCVar2[0xd];
    if ((bVar1 & 1) == 0) {
      pCVar4 = (CompiledShaderArchive *)((long)ppCVar2 + 0x59);
    }
    uVar3 = CompiledShaderArchive::readArchiveFile
                      (*ppCVar2,(char *)pCVar4,(char *)0x0,false,(bool)((byte)param_2 & 1));
    if (param_6 == (char *)0x0) {
      return 1;
    }
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  if (*param_6 != '\0') {
    CompiledShaderArchive::readArchiveFile(*ppCVar2,param_6,in_x6,true,(bool)((byte)param_2 & 1));
  }
  return 1;
}


