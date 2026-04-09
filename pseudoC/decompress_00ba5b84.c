// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompress
// Entry Point: 00ba5b84
// Size: 104 bytes
// Signature: undefined __cdecl decompress(uchar * param_1, uint param_2, uchar * param_3, uint param_4)


/* ZLIBCompressionUtil::decompress(unsigned char const*, unsigned int, unsigned char*, unsigned int)
    */

void ZLIBCompressionUtil::decompress(uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (ulong)param_4;
  iVar2 = uncompress(param_3,&local_30,param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


