// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compressIfSmaller
// Entry Point: 00b8ce58
// Size: 268 bytes
// Signature: undefined __cdecl compressIfSmaller(uchar * param_1, uint param_2, uchar * * param_3, uint * param_4)


/* LZMACompressionUtil::compressIfSmaller(unsigned char const*, unsigned int, unsigned char**,
   unsigned int*) */

void LZMACompressionUtil::compressIfSmaller
               (uchar *param_1,uint param_2,uchar **param_3,uint *param_4)

{
  long lVar1;
  int iVar2;
  uchar *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = (ulong)(param_2 / 3 + 0x80);
  local_50 = 5;
  puVar3 = (uchar *)operator_new__(local_58 + 5);
  iVar2 = LzmaCompress(puVar3 + 5,&local_58,param_1,param_2,puVar3,&local_50,2,0,0xffffffff,
                       0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  if (iVar2 == 0 && local_50 == 5) {
    uVar5 = (int)local_58 + 5;
    if (uVar5 < param_2) {
      uVar4 = 1;
      goto LAB_00b8cf30;
    }
  }
  operator_delete__(puVar3);
  puVar3 = (uchar *)0x0;
  uVar5 = 0;
  uVar4 = 0;
LAB_00b8cf30:
  *param_3 = puVar3;
  *param_4 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


