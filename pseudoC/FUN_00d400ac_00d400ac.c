// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d400ac
// Entry Point: 00d400ac
// Size: 696 bytes
// Signature: undefined FUN_00d400ac(void)


undefined8 FUN_00d400ac(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  uVar4 = (long)param_3 - (long)param_2;
  uVar5 = uVar4 & 0xfffffffffffffffe;
  if (uVar5 != 0 && (uVar4 & 1) != 0) {
    param_3 = param_2 + uVar5;
  }
  if (((uVar4 & 1) != 0) && (uVar5 == 0)) {
    return 0xffffffff;
  }
  uVar6 = (uint)param_2[1];
  if (param_2[1] < 0xdc) {
    if (uVar6 - 0xd8 < 4) {
switchD_00d40170_caseD_7:
      if ((long)param_3 - (long)param_2 < 4) {
        return 0xfffffffe;
      }
      param_2 = param_2 + 4;
      goto joined_r0x00d402e8;
    }
    if (uVar6 == 0) {
      switch(*(undefined *)(param_1 + 0x88 + (ulong)*param_2)) {
      case 0:
      case 1:
      case 8:
        goto switchD_00d40170_caseD_0;
      case 4:
        if ((long)param_3 - (long)(param_2 + 2) < 2) {
          return 0xffffffff;
        }
        if ((param_2[3] == 0) && (param_2[2] == 0x5d)) {
          if ((long)param_3 - (long)(param_2 + 4) < 2) {
            return 0xffffffff;
          }
          if ((param_2[5] == 0) && (param_2[4] == 0x3e)) {
            *param_4 = param_2 + 6;
            return 0x28;
          }
        }
        break;
      case 5:
        if ((long)param_3 - (long)param_2 < 2) {
          return 0xfffffffe;
        }
        break;
      case 6:
        if ((long)param_3 - (long)param_2 < 3) {
          return 0xfffffffe;
        }
        param_2 = param_2 + 3;
        goto joined_r0x00d402e8;
      case 7:
        goto switchD_00d40170_caseD_7;
      case 9:
        pbVar1 = param_2 + 2;
        if ((long)param_3 - (long)pbVar1 < 2) {
          return 0xffffffff;
        }
        if (param_2[3] == 0) {
          pbVar2 = param_2 + 4;
          if (*(char *)(param_1 + 0x88 + (ulong)param_2[2]) != '\n') {
            pbVar2 = pbVar1;
          }
          *param_4 = pbVar2;
          return 7;
        }
        *param_4 = pbVar1;
        return 7;
      case 10:
        *param_4 = param_2 + 2;
        return 7;
      }
    }
  }
  else {
    if (uVar6 - 0xdc < 4) {
switchD_00d40170_caseD_0:
      *param_4 = param_2;
      return 0;
    }
    if ((uVar6 == 0xff) && (0xfd < *param_2)) {
      *param_4 = param_2;
      return 0;
    }
  }
  param_2 = param_2 + 2;
joined_r0x00d402e8:
  uVar5 = (long)param_3 - (long)param_2;
  if (1 < (long)uVar5) {
    do {
      bVar3 = param_2[1];
      uVar6 = (uint)bVar3;
      if (uVar6 < 0xdc) {
        if (bVar3 - 0xd8 < 4) {
LAB_00d40258:
          if (uVar5 < 4) break;
          lVar7 = 4;
        }
        else {
          lVar7 = 2;
          if (bVar3 == 0) {
            bVar3 = *(byte *)(param_1 + 0x88 + (ulong)*param_2);
            if (10 < bVar3) goto LAB_00d4027c;
            uVar6 = (uint)bVar3;
            if (uVar6 == 6) {
              if (uVar5 < 3) break;
              lVar7 = 3;
            }
            else {
              if (uVar6 == 7) goto LAB_00d40258;
              lVar7 = 2;
              if ((1 << (ulong)(uVar6 & 0x1f) & 0x713U) != 0) break;
            }
          }
        }
      }
      else if (uVar6 == 0xff) {
        if (0xfd < *param_2) break;
LAB_00d4027c:
        lVar7 = 2;
      }
      else {
        lVar7 = 2;
        if (uVar6 - 0xdc < 4) break;
      }
      param_2 = param_2 + lVar7;
      uVar5 = (long)param_3 - (long)param_2;
    } while (1 < (long)uVar5);
  }
  *param_4 = param_2;
  return 6;
}


