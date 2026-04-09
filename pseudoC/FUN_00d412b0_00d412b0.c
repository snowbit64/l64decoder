// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d412b0
// Entry Point: 00d412b0
// Size: 308 bytes
// Signature: undefined FUN_00d412b0(void)


undefined8 FUN_00d412b0(uint param_1,long param_2,byte *param_3,long param_4,byte **param_5)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_4 - (long)param_3;
  if (1 < (long)uVar3) {
    do {
      bVar2 = param_3[1];
      uVar4 = (uint)bVar2;
      if (0xdb < uVar4) {
        if (bVar2 == 0xff) {
          if (0xfd < *param_3) {
switchD_00d4133c_caseD_0:
            *param_5 = param_3;
            return 0;
          }
        }
        else if (bVar2 - 0xdc < 4) goto switchD_00d4133c_caseD_0;
        goto switchD_00d4133c_caseD_2;
      }
      if (uVar4 - 0xd8 < 4) {
switchD_00d4133c_caseD_7:
        if (uVar3 < 4) {
          return 0xfffffffe;
        }
        pbVar1 = param_3 + 4;
        goto LAB_00d412e4;
      }
      if (uVar4 == 0) {
        bVar2 = *(byte *)(param_2 + 0x88 + (ulong)*param_3);
        switch(bVar2) {
        case 0:
        case 1:
        case 8:
          goto switchD_00d4133c_caseD_0;
        default:
          goto switchD_00d4133c_caseD_2;
        case 6:
          if (uVar3 < 3) {
            return 0xfffffffe;
          }
          pbVar1 = param_3 + 3;
          break;
        case 7:
          goto switchD_00d4133c_caseD_7;
        case 0xc:
        case 0xd:
          pbVar1 = param_3 + 2;
          if (bVar2 == param_1) {
            if (param_4 - (long)pbVar1 < 2) {
              return 0xffffffe5;
            }
            *param_5 = pbVar1;
            if (((param_3[3] == 0) &&
                (bVar2 = *(byte *)(param_2 + 0x88 + (ulong)*pbVar1), bVar2 < 0x1f)) &&
               ((1 << (ulong)(bVar2 & 0x1f) & 0x40300e00U) != 0)) {
              return 0x1b;
            }
            return 0;
          }
        }
      }
      else {
switchD_00d4133c_caseD_2:
        pbVar1 = param_3 + 2;
      }
LAB_00d412e4:
      param_3 = pbVar1;
      uVar3 = param_4 - (long)param_3;
    } while (1 < (long)uVar3);
  }
  return 0xffffffff;
}


