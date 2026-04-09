// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d4106c
// Entry Point: 00d4106c
// Size: 428 bytes
// Signature: undefined FUN_00d4106c(void)


undefined8 FUN_00d4106c(undefined8 param_1,byte **param_2,long param_3,byte **param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  
  pbVar5 = *param_2;
  uVar6 = param_3 - (long)pbVar5 & 0xfffffffffffffffe;
  if (0 < (long)uVar6) {
    pbVar1 = pbVar5 + uVar6;
    do {
      bVar2 = *pbVar5;
      bVar3 = pbVar5[1];
      uVar4 = (uint)(char)bVar2;
      if (bVar3 - 1 < 7) {
LAB_00d41088:
        pbVar9 = *param_4;
        if ((long)param_5 - (long)pbVar9 < 2) {
LAB_00d41200:
          *param_2 = pbVar5;
          return 2;
        }
        bVar7 = (byte)(uint)(CONCAT14(bVar3,uVar4 << 0x18) >> 0x1e) | 0xc0;
LAB_00d410a8:
        *param_4 = pbVar9 + 1;
        *pbVar9 = bVar7;
        pbVar9 = *param_4;
        *param_4 = pbVar9 + 1;
        *pbVar9 = bVar2 & 0x3f | 0x80;
      }
      else {
        uVar8 = (uint)bVar3;
        if (bVar3 - 0xd8 < 4) {
          pbVar9 = *param_4;
          if ((long)param_5 - (long)pbVar9 < 4) goto LAB_00d41200;
          if ((long)pbVar1 - (long)pbVar5 < 4) {
            *param_2 = pbVar5;
            return 1;
          }
          uVar8 = ((uint)(bVar2 >> 6) | (uVar8 & 3) << 2) + 1;
          *param_4 = pbVar9 + 1;
          *pbVar9 = (byte)(uVar8 >> 2) | 0xf0;
          pbVar9 = *param_4;
          *param_4 = pbVar9 + 1;
          *pbVar9 = bVar2 >> 2 & 0xf | (byte)((uVar8 & 3) << 4) | 0x80;
          bVar2 = pbVar5[2];
          bVar3 = pbVar5[3];
          pbVar9 = *param_4;
          *param_4 = pbVar9 + 1;
          *pbVar9 = (byte)((uVar4 & 3) << 4) | bVar2 >> 6 | (byte)((bVar3 & 3) << 2) | 0x80;
          pbVar9 = *param_4;
          *param_4 = pbVar9 + 1;
          *pbVar9 = bVar2 & 0x3f | 0x80;
          pbVar5 = pbVar5 + 2;
        }
        else {
          if (uVar8 != 0) {
            pbVar9 = *param_4;
            if ((long)param_5 - (long)pbVar9 < 3) goto LAB_00d41200;
            *param_4 = pbVar9 + 1;
            bVar7 = (byte)((uVar8 & 0xf) << 2) | (byte)(uVar4 >> 6) & 3 | 0x80;
            *pbVar9 = bVar3 >> 4 | 0xe0;
            pbVar9 = *param_4;
            goto LAB_00d410a8;
          }
          if ((int)uVar4 < 0) goto LAB_00d41088;
          pbVar9 = *param_4;
          if (pbVar9 == param_5) goto LAB_00d41200;
          *param_4 = pbVar9 + 1;
          *pbVar9 = bVar2;
        }
      }
      pbVar5 = pbVar5 + 2;
    } while (pbVar5 < pbVar1);
  }
  *param_2 = pbVar5;
  return 0;
}


