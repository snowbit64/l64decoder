// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compress
// Entry Point: 00ba5ab4
// Size: 208 bytes
// Signature: undefined __cdecl compress(uchar * param_1, uint param_2, uchar * * param_3, uint * param_4, bool param_5)


/* ZLIBCompressionUtil::compress(unsigned char const*, unsigned int, unsigned char**, unsigned int*,
   bool) */

void ZLIBCompressionUtil::compress
               (uchar *param_1,uint param_2,uchar **param_3,uint *param_4,bool param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = *param_3;
  local_50 = (ulong)*param_4;
  if (puVar4 == (uchar *)0x0) {
    local_50 = compressBound(param_2);
    puVar4 = (uchar *)operator_new__(local_50);
  }
  iVar2 = compress2(puVar4,&local_50,param_1,param_2,9);
  if (iVar2 == 0) {
    *param_3 = puVar4;
    uVar3 = (uint)local_50;
  }
  else {
    if (*param_3 == (uchar *)0x0) {
      operator_delete__(puVar4);
    }
    uVar3 = 0;
  }
  *param_4 = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


