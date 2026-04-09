// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveShaderArchiveCache
// Entry Point: 00bf0a7c
// Size: 104 bytes
// Signature: undefined __thiscall saveShaderArchiveCache(ShaderManager * this, bool param_1)


/* ShaderManager::saveShaderArchiveCache(bool) */

void __thiscall ShaderManager::saveShaderArchiveCache(ShaderManager *this,bool param_1)

{
  ulong uVar1;
  ShaderManager *pSVar2;
  bool bVar3;
  ShaderManager *pSVar4;
  
  if (*(CompiledShaderArchive **)this != (CompiledShaderArchive *)0x0) {
    bVar3 = ((byte)this[0x58] & 1) != 0;
    uVar1 = (ulong)((byte)this[0x58] >> 1);
    if (bVar3) {
      uVar1 = *(ulong *)(this + 0x60);
    }
    if (uVar1 != 0) {
      pSVar4 = *(ShaderManager **)(this + 0x68);
      if (!bVar3) {
        pSVar4 = this + 0x59;
      }
      pSVar2 = this + 0x71;
      if (((byte)this[0x70] & 1) != 0) {
        pSVar2 = *(ShaderManager **)(this + 0x80);
      }
      CompiledShaderArchive::writeArchiveFile
                (*(CompiledShaderArchive **)this,(char *)pSVar4,(char *)pSVar2,true,param_1,false);
    }
  }
  return;
}


