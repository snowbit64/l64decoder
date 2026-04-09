// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompress
// Entry Point: 00b8cf64
// Size: 152 bytes
// Signature: undefined __cdecl decompress(uchar * param_1, uint param_2, uchar * param_3, uint param_4)


/* LZMACompressionUtil::decompress(unsigned char const*, unsigned int, unsigned char*, unsigned int)
    */

bool LZMACompressionUtil::decompress(uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (ulong)(param_2 - 5);
  uStack_40 = (ulong)param_4;
  iVar2 = LzmaUncompress(param_3,&uStack_40,param_1 + 5,&local_48,param_1,5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return (iVar2 == 0 && uStack_40 == param_4) && local_48 == param_2 - 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


