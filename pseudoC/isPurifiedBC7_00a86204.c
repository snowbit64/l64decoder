// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPurifiedBC7
// Entry Point: 00a86204
// Size: 328 bytes
// Signature: undefined __cdecl isPurifiedBC7(uchar * param_1, uint param_2, uint param_3)


/* BC6BC7Util::isPurifiedBC7(unsigned char*, unsigned int, unsigned int) */

byte BC6BC7Util::isPurifiedBC7(uchar *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  BlockData local_b0;
  byte local_af;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_3 < 4) {
    bVar5 = false;
  }
  else {
    uVar1 = param_2 >> 2;
    uVar3 = param_3 >> 2;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar6 = 0;
    uVar2 = uVar3;
    if (uVar3 < 2) {
      uVar2 = 1;
    }
    bVar5 = true;
    do {
      uVar7 = uVar1;
      if (3 < param_2) {
        do {
          D3DX_BC7::ReadBlockData((D3DX_BC7 *)param_1,&local_b0);
          if (((byte)local_b0 < 8) && ((1 << (ulong)((byte)local_b0 & 0x1f) & 0x8aU) != 0)) {
            if ((local_af & 0xfe) == 0x3e) goto LAB_00a86310;
          }
          else if ((((byte)local_b0 & 0xfd) == 0) &&
                  ((((byte)local_b0 == 0 && ((local_af & 0xfe) == 0xe)) ||
                   ((local_af < 0x40 &&
                    ((1L << ((ulong)local_af & 0x3f) & 0xc800000180000000U) != 0))))))
          goto LAB_00a86310;
          param_1 = (uchar *)((D3DX_BC7 *)param_1 + 0x10);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar6 = uVar6 + 1;
      bVar5 = uVar6 < uVar3;
    } while (uVar6 != uVar2);
  }
LAB_00a86310:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5 ^ 1;
}


