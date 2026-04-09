// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FlipYMode6
// Entry Point: 00a84840
// Size: 268 bytes
// Signature: undefined __cdecl FlipYMode6(uchar * param_1)


/* BC7FlipUtil::FlipYMode6(unsigned char*) */

void BC7FlipUtil::FlipYMode6(uchar *param_1)

{
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x28);
  bVar1 = param_1[0xe];
  if ((bVar1 >> 3 & 1) == 0) {
    bVar2 = param_1[8];
    uVar3 = param_1[9];
    param_1[9] = param_1[0xf];
    param_1[0xf] = uVar3;
    param_1[8] = bVar1 & 0xf0 | (byte)((bVar1 & 7) << 1) | bVar2 & 1;
    *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) >> 0x10 | *(uint *)(param_1 + 10) << 0x10;
    param_1[0xe] = bVar2 & 0xf0 | bVar2 >> 1 & 7;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 8);
    uVar6 = *(ulong *)param_1;
    *(ulong *)(param_1 + 8) =
         ((uVar7 >> 1 & 7) << 0x30 | (uVar7 >> 4) << 0x34 |
          uVar6 >> 0x3f | (uVar7 >> 0x10 & 0xffff) << 0x20 | uVar7 >> 0x10 & 0xffff0000 |
          uVar7 >> 0x30 & 0xfff0 | uVar7 >> 0x2f & 0xe) ^ 0xfffffffffffffffe;
    *(ulong *)param_1 =
         uVar6 >> 7 & 0xfe03f80fe03f80 | uVar6 & 0x7f | (uVar6 & 0xfe03f80fe03f80) << 7 |
         uVar7 << 0x3f;
  }
  if (*(long *)(lVar4 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


