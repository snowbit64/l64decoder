// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_packetout
// Entry Point: 00e25080
// Size: 240 bytes
// Signature: undefined ogg_stream_packetout(void)


ulong ogg_stream_packetout(ulong *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar5 = param_1[9];
    uVar6 = (ulong)(int)uVar5;
    if ((long)param_1[8] <= (long)uVar6) {
      return 0;
    }
    uVar1 = *(uint *)(param_1[4] + uVar6 * 4);
    if ((uVar1 >> 10 & 1) == 0) {
      uVar4 = (ulong)uVar1 & 0xff;
      uVar8 = uVar1 & 0x200;
      if ((int)uVar4 == 0xff) {
        uVar4 = 0xff;
        uVar5 = uVar6;
        do {
          uVar2 = *(uint *)(param_1[4] + 4 + uVar5 * 4);
          uVar5 = uVar5 + 1;
          uVar6 = (ulong)uVar2 & 0xff;
          if ((uVar2 & 0x200) != 0) {
            uVar8 = 0x200;
          }
          uVar4 = uVar4 + uVar6;
        } while ((int)uVar6 == 0xff);
      }
      if (param_2 == (long *)0x0) {
        uVar6 = param_1[3];
      }
      else {
        uVar9 = param_1[5];
        uVar6 = param_1[3];
        param_2[5] = param_1[0x31];
        lVar7 = *(long *)(uVar9 + (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 |
                                  (uVar5 & 0xffffffff) << 3));
        param_2[2] = (ulong)(uVar1 & 0x100);
        param_2[3] = (ulong)uVar8;
        param_2[4] = lVar7;
        *param_2 = uVar3 + uVar6;
        param_2[1] = uVar4;
      }
      uVar5 = (long)((uVar5 << 0x20) + 0x100000000) >> 0x20;
      uVar3 = 1;
      param_1[3] = uVar6 + uVar4;
    }
    else {
      uVar5 = uVar5 + 1;
      uVar3 = 0xffffffff;
    }
    param_1[9] = uVar5;
    param_1[0x31] = param_1[0x31] + 1;
  }
  return uVar3 & 0xffffffff;
}


