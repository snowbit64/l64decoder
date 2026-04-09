// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompressAllShaders
// Entry Point: 00bf2cac
// Size: 116 bytes
// Signature: undefined decompressAllShaders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::decompressAllShaders() */

void ShaderManager::decompressAllShaders(void)

{
  long lVar1;
  CompiledShaderArchive **in_x0;
  uint local_34;
  ulonglong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  CompiledShaderArchive::decompressAllShaders(*in_x0,&local_30,&local_34);
  in_x0[0x35] = in_x0[0x35] + local_30;
  *(uint *)(in_x0 + 0x36) = *(int *)(in_x0 + 0x36) + local_34;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


