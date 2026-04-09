// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FlipYMode5
// Entry Point: 00a84304
// Size: 428 bytes
// Signature: undefined __cdecl FlipYMode5(uchar * param_1)


/* BC7FlipUtil::FlipYMode5(unsigned char*) */

void BC7FlipUtil::FlipYMode5(uchar *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((param_1[0xb] & 4 | param_1[0xf] & 2) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    *(ulong *)(param_1 + 8) =
         (uVar3 & 0xfc000001f8) << 0x18 | uVar3 & 3 | (uVar3 & 0x200000004) << 0x17 |
         (uVar3 & 0xff000001fe00) << 8 | uVar3 >> 8 & 0xff000001fe00 | uVar3 >> 0x18 & 0xfc000001f8
         | uVar3 >> 0x17 & 0x200000004;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    uVar3 = *(ulong *)param_1;
    if ((param_1[0xb] >> 2 & 1) == 0) {
      local_30 = (uVar3 >> 0x32) << 0x3a |
                 uVar3 >> 8 & 0xfffc000000000000 | uVar3 & 0x3ffffffffffff | (uVar5 & 3) << 0x38;
      uVar4 = 0xfffffffe00000000;
      uVar3 = uVar3 >> 0x38;
    }
    else if ((param_1[0xf] >> 1 & 1) == 0) {
      local_30 = uVar3 >> 7 & 0x7f01fc07f00 | uVar3 & 0xfffc0000000000ff |
                 (uVar3 & 0x7f01fc07f00) << 7;
      uVar4 = 0x1fffffffc;
      uVar3 = uVar5;
    }
    else {
      uVar4 = 0xfffffffffffffffc;
      local_30 = (uVar3 >> 0x32) << 0x3a |
                 uVar3 >> 7 & 0x7f01fc07f00 | uVar3 & 0xff | (uVar3 & 0x7f01fc07f00) << 7 |
                 uVar3 >> 8 & 0xfc000000000000 | (uVar5 & 3) << 0x38;
      uVar3 = uVar3 >> 0x38;
    }
    *(ulong *)(param_1 + 8) =
         ((uVar5 & 0x200000004) << 0x17 | uVar3 & 3 | (uVar5 & 0xfc000001f8) << 0x18 |
          (uVar5 & 0xff000001fe00) << 8 | uVar5 >> 8 & 0xff000001fe00 | uVar5 >> 0x18 & 0xfc000001f8
         | uVar5 >> 0x17 & 0x200000004) ^ uVar4;
    *(ulong *)param_1 = local_30;
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


