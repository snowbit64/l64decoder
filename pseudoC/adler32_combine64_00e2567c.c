// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adler32_combine64
// Entry Point: 00e2567c
// Size: 196 bytes
// Signature: undefined adler32_combine64(void)


ulong adler32_combine64(ulong param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (-1 < (long)param_3) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    lVar4 = SUB168(auVar3 * ZEXT816(0xf00e10d2fc5cd),8);
    lVar5 = param_3 + (lVar4 + (param_3 - lVar4 >> 1) >> 0xf) * -0xfff1;
    lVar7 = lVar5 * (param_1 & 0xffff);
    lVar4 = (param_1 & 0xffff) + (ulong)(ushort)param_2;
    uVar6 = lVar4 - 1;
    if (lVar4 + 0xfff0U < 0xfff1) {
      uVar6 = 0xfff0;
    }
    uVar1 = uVar6 - 0xfff1;
    if (uVar6 < 0xfff1) {
      uVar1 = uVar6;
    }
    lVar4 = (((param_1 >> 0x10 & 0xffff) + (ulong)(param_2 >> 0x10)) - lVar5) +
            (ulong)((int)lVar7 + (uint)((ulong)(lVar7 * 0x80078071) >> 0x2f) * -0xfff1);
    uVar6 = lVar4 + 0xfff1;
    uVar2 = lVar4 - 0xfff1;
    if (uVar6 < 0x1ffe2) {
      uVar2 = uVar6;
    }
    uVar6 = uVar2 * 0x10000 - 0xfff10000;
    if (uVar2 < 0xfff1) {
      uVar6 = uVar2 * 0x10000;
    }
    return uVar6 | uVar1;
  }
  return 0xffffffff;
}


