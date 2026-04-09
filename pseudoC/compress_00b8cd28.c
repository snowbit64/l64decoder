// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compress
// Entry Point: 00b8cd28
// Size: 304 bytes
// Signature: undefined __cdecl compress(uchar * param_1, uint param_2, uchar * * param_3, uint * param_4, bool param_5)


/* LZMACompressionUtil::compress(unsigned char const*, unsigned int, unsigned char**, unsigned int*,
   bool) */

bool LZMACompressionUtil::compress
               (uchar *param_1,uint param_2,uchar **param_3,uint *param_4,bool param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uchar *puVar6;
  ulong local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = (ulong)(param_2 / 3 + 0x80);
  puVar6 = *param_3;
  local_60 = 5;
  if (puVar6 == (uchar *)0x0) {
    puVar6 = (uchar *)operator_new__(local_68 + 5);
  }
  uVar4 = 5;
  if (!param_5) {
    uVar4 = 2;
  }
  iVar3 = LzmaCompress(puVar6 + 5,&local_68,param_1,param_2,puVar6,&local_60,uVar4,0,0xffffffff,
                       0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  bVar2 = local_60 == 5;
  if (iVar3 == 0 && bVar2) {
    *param_3 = puVar6;
    uVar5 = (int)local_68 + 5;
  }
  else {
    if (*param_3 == (uchar *)0x0) {
      operator_delete__(puVar6);
    }
    uVar5 = 0;
  }
  *param_4 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return iVar3 == 0 && bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


