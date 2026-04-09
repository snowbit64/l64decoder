// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCompiledShaderDataThreadSafe
// Entry Point: 00bf7344
// Size: 172 bytes
// Signature: undefined __thiscall getCompiledShaderDataThreadSafe(CompiledShaderArchive * this, uint param_1, uint * param_2, uchar * * param_3)


/* CompiledShaderArchive::getCompiledShaderDataThreadSafe(unsigned int, unsigned int&, unsigned
   char*&) */

bool __thiscall
CompiledShaderArchive::getCompiledShaderDataThreadSafe
          (CompiledShaderArchive *this,uint param_1,uint *param_2,uchar **param_3)

{
  long lVar1;
  uchar *puVar2;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  puVar2 = (uchar *)getDecompressedImage
                              (this,(ArchiveDataBlock *)(*(long *)this + (ulong)param_1 * 0x20 + 8),
                               &local_4c);
  if (puVar2 != (uchar *)0x0) {
    *param_3 = puVar2;
    *param_2 = local_4c;
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar2 != (uchar *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


