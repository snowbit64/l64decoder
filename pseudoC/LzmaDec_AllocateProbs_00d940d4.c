// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaDec_AllocateProbs
// Entry Point: 00d940d4
// Size: 320 bytes
// Signature: undefined LzmaDec_AllocateProbs(void)


undefined8 LzmaDec_AllocateProbs(uint *param_1,byte *param_2,uint param_3,code **param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  uint uVar8;
  
  if (4 < param_3) {
    uVar3 = *(uint *)(param_2 + 1);
    bVar4 = *param_2;
    if (uVar3 < 0x1001) {
      uVar3 = 0x1000;
    }
    if (bVar4 < 0xe1) {
      uVar8 = (uint)bVar4;
      uVar2 = uVar8 + (bVar4 / 9) * -9 & 0xff;
      uVar5 = (bVar4 / 9) % 5;
      uVar1 = (0x300 << (ulong)(uVar5 + uVar2 & 0x1f)) + 0x736;
      if ((*(long *)(param_1 + 4) == 0) || (uVar1 != param_1[0x1a])) {
        (*param_4[1])(param_4);
        pcVar7 = *param_4;
        *(undefined8 *)(param_1 + 4) = 0;
        lVar6 = (*pcVar7)(param_4,(ulong)uVar1 << 1);
        param_1[0x1a] = uVar1;
        *(long *)(param_1 + 4) = lVar6;
        if (lVar6 == 0) {
          return 2;
        }
      }
      *param_1 = uVar2;
      param_1[1] = uVar5;
      uVar1 = uVar8 * 0x6d >> 8;
      param_1[2] = uVar1 + ((uVar8 - uVar1 & 0xfe) >> 1) >> 5;
      param_1[3] = uVar3;
      return 0;
    }
  }
  return 4;
}


