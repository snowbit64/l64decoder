// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mapT
// Entry Point: 00bfaa6c
// Size: 140 bytes
// Signature: undefined __thiscall mapT(ShaderDecompressor * this, ShaderEntry * param_1)


/* ShaderDecompressor::mapT(CompiledShaderArchive::ShaderEntry*) const */

undefined8 __thiscall ShaderDecompressor::mapT(ShaderDecompressor *this,ShaderEntry *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = (void *)CompiledShaderArchive::getDecompressedImage
                             (*(CompiledShaderArchive **)(this + 0x10),
                              (ArchiveDataBlock *)(param_1 + 8),&local_3c);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar2 != pvVar3) {
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 8) = pvVar2;
    param_1[0x14] = (ShaderEntry)0x0;
    *(uint *)(param_1 + 0x10) = local_3c;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


