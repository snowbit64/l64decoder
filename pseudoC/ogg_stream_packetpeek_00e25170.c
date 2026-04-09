// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_packetpeek
// Entry Point: 00e25170
// Size: 224 bytes
// Signature: undefined ogg_stream_packetpeek(void)


ulong ogg_stream_packetpeek(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar4 = (long)(int)param_1[9];
    if ((long)param_1[8] <= lVar4) {
      return 0;
    }
    uVar1 = *(uint *)(param_1[4] + lVar4 * 4);
    if ((uVar1 >> 10 & 1) != 0) {
      param_1[9] = param_1[9] + 1;
      param_1[0x31] = param_1[0x31] + 1;
      return 0xffffffff;
    }
    if (param_2 == (long *)0x0) {
      return 1;
    }
    uVar3 = (ulong)uVar1 & 0xff;
    uVar7 = uVar1 & 0x200;
    if ((int)uVar3 == 0xff) {
      lVar6 = lVar4 << 0x20;
      puVar5 = (uint *)(param_1[4] + lVar4 * 4);
      uVar3 = 0xff;
      do {
        puVar5 = puVar5 + 1;
        lVar6 = lVar6 + 0x100000000;
        uVar9 = (ulong)*puVar5 & 0xff;
        if ((*puVar5 & 0x200) != 0) {
          uVar7 = 0x200;
        }
        uVar3 = uVar3 + uVar9;
      } while ((int)uVar9 == 0xff);
      lVar4 = lVar6 >> 0x20;
    }
    uVar9 = param_1[5];
    uVar8 = param_1[3];
    param_2[5] = param_1[0x31];
    lVar6 = *(long *)(uVar9 + lVar4 * 8);
    param_2[2] = (ulong)(uVar1 & 0x100);
    param_2[3] = (ulong)uVar7;
    lVar4 = uVar2 + uVar8;
    uVar2 = 1;
    param_2[4] = lVar6;
    *param_2 = lVar4;
    param_2[1] = uVar3;
  }
  return uVar2 & 0xffffffff;
}


