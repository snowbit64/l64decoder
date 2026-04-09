// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3e560
// Entry Point: 00d3e560
// Size: 1472 bytes
// Signature: undefined FUN_00d3e560(void)


void FUN_00d3e560(long param_1,byte *param_2,long param_3,byte **param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar7 = param_3 - (long)param_2;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar11 = param_2;
  if ((long)uVar7 < 1) {
LAB_00d3eae8:
    local_70 = pbVar11;
    uVar6 = 0xffffffff;
LAB_00d3eaec:
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  bVar4 = false;
  lVar1 = param_1 + 0x88;
  local_70 = param_2;
LAB_00d3e5cc:
  pbVar10 = local_70;
  uVar6 = 0;
  pbVar11 = pbVar10;
  pbVar12 = local_70;
  switch(*(undefined *)(lVar1 + (ulong)*local_70)) {
  case 5:
    if (1 < uVar7) {
      uVar6 = (**(code **)(param_1 + 0x188))(param_1,local_70);
      pbVar12 = local_70;
      if ((int)uVar6 == 0) goto switchD_00d3e5f4_caseD_8;
      pbVar10 = pbVar10 + 2;
      break;
    }
    goto LAB_00d3ea78;
  case 6:
    if (uVar7 < 3) goto LAB_00d3ea78;
    uVar6 = (**(code **)(param_1 + 400))(param_1,local_70);
    pbVar12 = local_70;
    if ((int)uVar6 == 0) goto switchD_00d3e5f4_caseD_8;
    pbVar10 = pbVar10 + 3;
    break;
  case 7:
    if (uVar7 < 4) goto LAB_00d3ea78;
    uVar6 = (**(code **)(param_1 + 0x198))(param_1,local_70);
    pbVar12 = local_70;
    if ((int)uVar6 == 0) goto switchD_00d3e5f4_caseD_8;
    pbVar10 = pbVar10 + 4;
    break;
  default:
    goto switchD_00d3e5f4_caseD_8;
  case 9:
  case 10:
  case 0x15:
    pbVar10 = local_70 + 1;
    lVar8 = param_3 - (long)pbVar10;
    pbVar11 = pbVar10;
    if (0 < lVar8) {
      while (bVar2 = *(byte *)(lVar1 + (ulong)*pbVar10), bVar2 - 9 < 2 || bVar2 == 0x15) {
        pbVar10 = pbVar10 + 1;
        lVar8 = lVar8 + -1;
        pbVar11 = pbVar10;
        if (lVar8 < 1) goto LAB_00d3eae8;
      }
      local_70 = pbVar10;
      if (bVar2 == 0xe) goto switchD_00d3e5f4_caseD_e;
LAB_00d3ea64:
      uVar6 = 0;
      pbVar11 = pbVar10;
      pbVar12 = local_70;
      goto switchD_00d3e5f4_caseD_8;
    }
    goto LAB_00d3eae8;
  case 0xe:
switchD_00d3e5f4_caseD_e:
    pbVar11 = pbVar10 + 1;
    if (0 < param_3 - (long)pbVar11) {
      uVar9 = (uint)*(byte *)(lVar1 + (ulong)*pbVar11);
      if ((*(byte *)(lVar1 + (ulong)*pbVar11) & 0xfe) != 0xc) {
        lVar8 = param_3 - (long)pbVar11;
        pbVar10 = pbVar10 + 2;
        local_70 = pbVar11;
        do {
          pbVar11 = pbVar10;
          lVar8 = lVar8 + -1;
          if ((0x15 < uVar9) || ((1 << (ulong)(uVar9 & 0x1f) & 0x200600U) == 0)) {
            uVar6 = 0;
            pbVar11 = pbVar11 + -1;
            pbVar12 = local_70;
            goto switchD_00d3e5f4_caseD_8;
          }
          if (lVar8 < 1) goto LAB_00d3eae8;
          uVar9 = (uint)*(byte *)(lVar1 + (ulong)*pbVar11);
          pbVar10 = pbVar11 + 1;
          local_70 = pbVar11;
        } while ((uVar9 & 0xfe) != 0xc);
        pbVar10 = pbVar11 + -1;
      }
      local_70 = pbVar10 + 2;
joined_r0x00d3e6e0:
      uVar7 = param_3 - (long)local_70;
      pbVar11 = local_70;
      if (0 < (long)uVar7) {
        do {
          pbVar10 = local_70;
          if (*(byte *)(lVar1 + (ulong)*local_70) == uVar9) {
            pbVar12 = local_70 + 1;
            pbVar11 = pbVar12;
            if (param_3 - (long)pbVar12 < 1) break;
            uVar6 = 0;
            switch(*(undefined *)(lVar1 + (ulong)*pbVar12)) {
            case 9:
            case 10:
            case 0x15:
              goto switchD_00d3e900_caseD_9;
            case 0xb:
              goto switchD_00d3e900_caseD_b;
            default:
              goto switchD_00d3e5f4_caseD_8;
            case 0x11:
              goto switchD_00d3e900_caseD_11;
            }
          }
          uVar6 = 0;
          pbVar11 = local_70;
          pbVar12 = local_70;
          switch(*(byte *)(lVar1 + (ulong)*local_70)) {
          case 0:
          case 1:
          case 2:
          case 8:
            goto switchD_00d3e5f4_caseD_8;
          case 3:
            uVar6 = FUN_00d3e180(param_1,local_70 + 1,param_3,&local_70);
            if ((int)uVar6 < 1) {
              pbVar11 = local_70;
              pbVar12 = local_70;
              if ((int)uVar6 != 0) goto LAB_00d3eaec;
              goto switchD_00d3e5f4_caseD_8;
            }
            break;
          default:
            goto switchD_00d3e730_caseD_4;
          case 5:
            if (uVar7 < 2) goto LAB_00d3ea78;
            iVar5 = (**(code **)(param_1 + 0x1b8))(param_1,local_70);
            if (iVar5 != 0) goto LAB_00d3ea64;
            local_70 = pbVar10 + 2;
            break;
          case 6:
            if (uVar7 < 3) goto LAB_00d3ea78;
            iVar5 = (**(code **)(param_1 + 0x1c0))(param_1,local_70);
            if (iVar5 != 0) goto LAB_00d3ea64;
            local_70 = pbVar10 + 3;
            break;
          case 7:
            if (uVar7 < 4) goto LAB_00d3ea78;
            iVar5 = (**(code **)(param_1 + 0x1c8))(param_1,local_70);
            if (iVar5 != 0) goto LAB_00d3ea64;
            local_70 = pbVar10 + 4;
          }
          uVar7 = param_3 - (long)local_70;
          pbVar11 = local_70;
          if ((long)uVar7 < 1) break;
        } while( true );
      }
    }
    goto LAB_00d3eae8;
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    pbVar10 = local_70 + 1;
    break;
  case 0x17:
    if (bVar4) goto LAB_00d3ea64;
    pbVar11 = local_70 + 1;
    uVar7 = param_3 - (long)pbVar11;
    if ((long)uVar7 < 1) goto LAB_00d3eae8;
    uVar6 = 0;
    pbVar12 = pbVar11;
    switch(*(undefined *)(lVar1 + (ulong)*pbVar11)) {
    case 5:
      local_70 = pbVar11;
      if (uVar7 < 2) goto LAB_00d3ea78;
      uVar6 = (**(code **)(param_1 + 0x1a0))(param_1,pbVar11);
      pbVar12 = local_70;
      if ((int)uVar6 == 0) goto switchD_00d3e5f4_caseD_8;
      pbVar10 = pbVar10 + 3;
      bVar4 = true;
      break;
    case 6:
      local_70 = pbVar11;
      if (uVar7 < 3) goto LAB_00d3ea78;
      uVar6 = (**(code **)(param_1 + 0x1a8))(param_1,pbVar11);
      pbVar12 = local_70;
      if ((int)uVar6 == 0) goto switchD_00d3e5f4_caseD_8;
      pbVar10 = pbVar10 + 4;
      bVar4 = true;
      break;
    case 7:
      local_70 = pbVar11;
      if (uVar7 < 4) goto LAB_00d3ea78;
      uVar6 = (**(code **)(param_1 + 0x1b0))(param_1,pbVar11);
      pbVar12 = local_70;
      if ((int)uVar6 == 0) goto switchD_00d3e5f4_caseD_8;
      pbVar10 = pbVar10 + 5;
      bVar4 = true;
      break;
    default:
      goto switchD_00d3e5f4_caseD_8;
    case 0x16:
    case 0x18:
      pbVar10 = local_70 + 2;
      bVar4 = true;
    }
  }
LAB_00d3e5fc:
  uVar7 = param_3 - (long)pbVar10;
  pbVar11 = pbVar10;
  local_70 = pbVar10;
  if ((long)uVar7 < 1) goto LAB_00d3eae8;
  goto LAB_00d3e5cc;
switchD_00d3e900_caseD_9:
  pbVar11 = local_70 + 2;
  uVar7 = param_3 - (long)pbVar11;
  if ((long)uVar7 < 1) goto LAB_00d3eae8;
  pbVar10 = local_70 + 6;
  local_70 = pbVar11;
LAB_00d3e924:
  switch(*(undefined *)(lVar1 + (ulong)pbVar10[-4])) {
  case 5:
    goto switchD_00d3e944_caseD_5;
  case 6:
    if (uVar7 < 3) goto LAB_00d3ea78;
    uVar6 = (**(code **)(param_1 + 0x1a8))(param_1,pbVar10 + -4);
    pbVar12 = local_70;
    if ((int)uVar6 == 0) goto switchD_00d3e5f4_caseD_8;
    pbVar10 = pbVar10 + -1;
    bVar4 = false;
    goto LAB_00d3e5fc;
  case 7:
    if (uVar7 < 4) goto LAB_00d3ea78;
    uVar6 = (**(code **)(param_1 + 0x1b0))(param_1,pbVar10 + -4);
    pbVar11 = pbVar10 + -4;
    pbVar12 = local_70;
    if ((int)uVar6 == 0) goto switchD_00d3e5f4_caseD_8;
    break;
  default:
    uVar6 = 0;
    pbVar11 = pbVar10 + -4;
    pbVar12 = local_70;
    goto switchD_00d3e5f4_caseD_8;
  case 9:
  case 10:
  case 0x15:
    goto switchD_00d3e944_caseD_9;
  case 0xb:
    pbVar12 = pbVar10 + -4;
    pbVar11 = local_70;
switchD_00d3e900_caseD_b:
    local_70 = pbVar11;
    uVar6 = 1;
    pbVar11 = pbVar12 + 1;
    pbVar12 = local_70;
    goto switchD_00d3e5f4_caseD_8;
  case 0x11:
    pbVar12 = pbVar10 + -4;
switchD_00d3e900_caseD_11:
    pbVar10 = pbVar12 + 1;
    pbVar11 = pbVar10;
    if (0 < param_3 - (long)pbVar10) {
      pbVar11 = pbVar12 + 2;
      if (pbVar12[1] != 0x3e) {
        pbVar11 = pbVar10;
      }
      uVar9 = 3;
      if (pbVar12[1] != 0x3e) {
        uVar9 = 0;
      }
      uVar6 = (ulong)uVar9;
      pbVar12 = pbVar10;
      goto switchD_00d3e5f4_caseD_8;
    }
    goto LAB_00d3eae8;
  case 0x16:
  case 0x18:
    pbVar10 = pbVar10 + -3;
  }
  bVar4 = false;
  goto LAB_00d3e5fc;
switchD_00d3e944_caseD_9:
  pbVar11 = pbVar11 + 1;
  local_70 = pbVar10 + -3;
  uVar7 = uVar7 - 1;
  pbVar10 = pbVar10 + 1;
  uVar6 = 0xffffffff;
  if ((long)uVar7 < 1) goto LAB_00d3eaec;
  goto LAB_00d3e924;
switchD_00d3e944_caseD_5:
  if (uVar7 < 2) {
LAB_00d3ea78:
    uVar6 = 0xfffffffe;
    goto LAB_00d3eaec;
  }
  uVar6 = (**(code **)(param_1 + 0x1a0))(param_1,pbVar10 + -4);
  pbVar12 = local_70;
  if ((int)uVar6 == 0) {
switchD_00d3e5f4_caseD_8:
    local_70 = pbVar12;
    *param_4 = pbVar11;
    goto LAB_00d3eaec;
  }
  pbVar10 = pbVar10 + -2;
  bVar4 = false;
  goto LAB_00d3e5fc;
switchD_00d3e730_caseD_4:
  local_70 = local_70 + 1;
  goto joined_r0x00d3e6e0;
}


