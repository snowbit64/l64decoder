// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompressBuffered
// Entry Point: 00b8d364
// Size: 292 bytes
// Signature: undefined __cdecl decompressBuffered(BufferedDecompressState * param_1, void * param_2, uint * param_3, void * param_4, uint * param_5)


/* LZMACompressionUtil::decompressBuffered(LZMACompressionUtil::BufferedDecompressState&, void
   const*, unsigned int&, void*, unsigned int&) */

void LZMACompressionUtil::decompressBuffered
               (BufferedDecompressState *param_1,void *param_2,uint *param_3,void *param_4,
               uint *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined auStack_6c [4];
  ulong local_68;
  ulong local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = (ulong)*param_5;
  uVar1 = *param_3;
  uVar5 = (ulong)uVar1;
  *param_5 = 0;
  *param_3 = 0;
  local_68 = uVar5;
  if (param_1[0x88] == (BufferedDecompressState)0x0) {
    if ((uVar1 < 5) || (iVar4 = LzmaDec_Allocate(param_1,param_2,5,s_allocFreeForLzma), iVar4 != 0))
    {
      bVar3 = false;
      goto LAB_00b8d434;
    }
    LzmaDec_Init(param_1);
    local_68 = uVar5 - 5;
    param_2 = (void *)((long)param_2 + 5);
    param_1[0x88] = (BufferedDecompressState)0x1;
    *param_3 = 5;
  }
  iVar4 = LzmaDec_DecodeToBuf(param_1,param_4,&local_60,param_2,&local_68,0,auStack_6c);
  bVar3 = iVar4 == 0;
  if (iVar4 == 0) {
    *param_5 = (uint)local_60;
    *param_3 = *param_3 + (int)local_68;
  }
LAB_00b8d434:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


