// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d964
// Entry Point: 00d3d964
// Size: 952 bytes
// Signature: undefined FUN_00d3d964(void)


void FUN_00d3d964(long param_1,byte *param_2,long param_3,byte **param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  uVar6 = param_3 - (long)param_2;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((long)uVar6 < 1) {
LAB_00d3dce8:
    uVar6 = 0xffffffff;
  }
  else {
    lVar1 = param_1 + 0x88;
    lVar9 = 1;
    switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
    case 5:
      if (uVar6 < 2) {
LAB_00d3daec:
        uVar6 = 0xfffffffe;
        goto LAB_00d3dcec;
      }
      uVar6 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if ((int)uVar6 != 0) {
        lVar9 = 2;
        goto switchD_00d3d9d8_caseD_16;
      }
      break;
    case 6:
      if (uVar6 < 3) goto LAB_00d3daec;
      uVar6 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
      if ((int)uVar6 != 0) {
        lVar9 = 3;
        goto switchD_00d3d9d8_caseD_16;
      }
      break;
    case 7:
      if (uVar6 < 4) goto LAB_00d3daec;
      uVar6 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
      if ((int)uVar6 != 0) {
        lVar9 = 4;
        goto switchD_00d3d9d8_caseD_16;
      }
      break;
    default:
switchD_00d3d9d8_caseD_8:
      uVar6 = 0;
      break;
    case 0x16:
    case 0x18:
switchD_00d3d9d8_caseD_16:
      for (pbVar10 = param_2 + lVar9; uVar6 = param_3 - (long)pbVar10, 0 < (long)uVar6;
          pbVar10 = pbVar10 + lVar9) {
        lVar9 = 1;
        pbVar7 = pbVar10;
        switch(*(undefined *)(lVar1 + (ulong)*pbVar10)) {
        case 5:
          if (uVar6 < 2) goto LAB_00d3daec;
          uVar6 = (**(code **)(param_1 + 0x188))(param_1,pbVar10);
          if ((int)uVar6 == 0) {
LAB_00d3db7c:
            *param_4 = pbVar10;
            goto LAB_00d3dcec;
          }
          lVar9 = 2;
          break;
        case 6:
          if (uVar6 < 3) goto LAB_00d3daec;
          uVar6 = (**(code **)(param_1 + 400))(param_1,pbVar10);
          if ((int)uVar6 == 0) goto LAB_00d3db7c;
          lVar9 = 3;
          break;
        case 7:
          if (uVar6 < 4) goto LAB_00d3daec;
          uVar6 = (**(code **)(param_1 + 0x198))(param_1,pbVar10);
          if ((int)uVar6 == 0) goto LAB_00d3db7c;
          lVar9 = 4;
          break;
        default:
          goto LAB_00d3db88;
        case 9:
        case 10:
        case 0x15:
          local_5c = 0xb;
          if ((long)pbVar10 - (long)param_2 == 3) {
            if (*param_2 == 0x78) {
              bVar3 = false;
            }
            else {
              if (*param_2 != 0x58) goto LAB_00d3dbd8;
              bVar3 = true;
            }
            if (param_2[1] != 0x6d) {
              if (param_2[1] != 0x4d) goto LAB_00d3dbd8;
              bVar3 = true;
            }
            if (param_2[2] == 0x4c) goto switchD_00d3da30_caseD_1d;
            if (param_2[2] != 0x6c) goto LAB_00d3dbd8;
            if (bVar3) goto switchD_00d3da30_caseD_1d;
            uVar5 = 0xc;
            local_5c = 0xc;
          }
          else {
LAB_00d3dbd8:
            uVar5 = 0xb;
          }
          uVar8 = param_3 - (long)(pbVar10 + 1);
          if (0 < (long)uVar8) {
            param_2 = pbVar10 + 1;
            goto LAB_00d3dc0c;
          }
          goto LAB_00d3dce8;
        case 0xf:
          uVar6 = FUN_00d3e0e0(param_2,pbVar10,&local_5c);
          if ((int)uVar6 == 0) goto LAB_00d3db7c;
          pbVar7 = pbVar10 + 1;
          if (0 < param_3 - (long)pbVar7) {
            if (*pbVar7 == 0x3e) {
              uVar5 = (ulong)local_5c;
              pbVar7 = pbVar10 + 2;
            }
            else {
LAB_00d3db88:
              uVar5 = 0;
            }
            goto LAB_00d3db8c;
          }
          goto LAB_00d3dce8;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          break;
        case 0x1d:
switchD_00d3da30_caseD_1d:
          uVar6 = 0;
          *param_4 = pbVar10;
          goto LAB_00d3dcec;
        }
      }
      goto LAB_00d3dce8;
    }
    *param_4 = param_2;
  }
LAB_00d3dcec:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
  while( true ) {
    uVar8 = param_3 - (long)pbVar10;
    uVar6 = 0xffffffff;
    param_2 = pbVar10;
    if ((long)uVar8 < 1) break;
LAB_00d3dc0c:
    switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
    case 0:
    case 1:
    case 8:
      goto switchD_00d3d9d8_caseD_8;
    default:
      pbVar10 = param_2 + 1;
      break;
    case 5:
      if (uVar8 < 2) goto LAB_00d3daec;
      iVar4 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
      if (iVar4 != 0) goto switchD_00d3d9d8_caseD_8;
      pbVar10 = param_2 + 2;
      break;
    case 6:
      if (uVar8 < 3) goto LAB_00d3daec;
      iVar4 = (**(code **)(param_1 + 0x1c0))(param_1,param_2);
      if (iVar4 != 0) goto switchD_00d3d9d8_caseD_8;
      pbVar10 = param_2 + 3;
      break;
    case 7:
      if (uVar8 < 4) goto LAB_00d3daec;
      iVar4 = (**(code **)(param_1 + 0x1c8))(param_1,param_2);
      if (iVar4 != 0) goto switchD_00d3d9d8_caseD_8;
      pbVar10 = param_2 + 4;
      break;
    case 0xf:
      pbVar10 = param_2 + 1;
      if (param_3 - (long)pbVar10 < 1) goto LAB_00d3dce8;
      if (*pbVar10 == 0x3e) {
        pbVar7 = param_2 + 2;
LAB_00d3db8c:
        *param_4 = pbVar7;
        uVar6 = uVar5;
        goto LAB_00d3dcec;
      }
    }
  }
  goto LAB_00d3dcec;
}


