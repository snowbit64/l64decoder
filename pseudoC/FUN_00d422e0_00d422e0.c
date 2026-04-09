// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d422e0
// Entry Point: 00d422e0
// Size: 1552 bytes
// Signature: undefined FUN_00d422e0(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_00d422e0(long param_1,byte *param_2,long param_3,byte **param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar11 = param_3 - (long)param_2;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar8 = param_2;
  if ((long)uVar11 < 2) {
LAB_00d42878:
    local_70 = pbVar8;
    uVar5 = 0xffffffff;
LAB_00d4287c:
    if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    return;
  }
  bVar4 = false;
  lVar1 = param_1 + 0x88;
  local_70 = param_2;
LAB_00d42378:
  bVar2 = local_70[1];
  uVar10 = (uint)bVar2;
  if (0xdb < bVar2) {
    if (uVar10 == 0xff) {
      uVar12 = (ulong)*local_70;
      if (*local_70 < 0xfe) goto switchD_00d423b0_caseD_1d;
    }
    else if (3 < uVar10 - 0xdc) goto LAB_00d42434;
    goto switchD_00d423b0_caseD_18;
  }
  if (uVar10 != 0) {
    if (3 < uVar10 - 0xd8) {
LAB_00d42434:
      uVar12 = (ulong)*local_70;
      goto switchD_00d423b0_caseD_1d;
    }
switchD_00d423b0_caseD_7:
    if (3 < uVar11) goto switchD_00d423b0_caseD_18;
    goto LAB_00d42804;
  }
  uVar12 = (ulong)*local_70;
  uVar5 = 0;
  pbVar8 = local_70;
  pbVar7 = local_70;
  switch(*(undefined *)(lVar1 + uVar12)) {
  case 6:
    if (2 < uVar11) break;
    goto LAB_00d42804;
  case 7:
    goto switchD_00d423b0_caseD_7;
  case 8:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x1c:
    goto switchD_00d423b0_caseD_8;
  case 9:
  case 10:
  case 0x15:
    local_70 = local_70 + 2;
    lVar6 = param_3 - (long)local_70;
    while( true ) {
      pbVar8 = local_70;
      if (lVar6 < 2) goto LAB_00d42878;
      if (local_70[1] != 0) goto switchD_00d423b0_caseD_18;
      bVar2 = *(byte *)(lVar1 + (ulong)*local_70);
      if (1 < bVar2 - 9 && bVar2 != 0x15) break;
      local_70 = local_70 + 2;
      lVar6 = lVar6 + -2;
    }
    if (bVar2 == 0xe) goto switchD_00d423b0_caseD_e;
    break;
  case 0xe:
switchD_00d423b0_caseD_e:
    local_70 = local_70 + 2;
    lVar6 = param_3 - (long)local_70;
    pbVar8 = local_70;
    if (1 < lVar6) {
      while( true ) {
        pbVar8 = local_70;
        if (local_70[1] != 0) goto LAB_00d42820;
        bVar2 = *(byte *)(lVar1 + (ulong)*local_70);
        if ((bVar2 & 0xfe) == 0xc) break;
        if (0x15 < bVar2 || (1 << (ulong)(bVar2 & 0x1f) & 0x200600U) == 0) goto LAB_00d42820;
        local_70 = local_70 + 2;
        lVar6 = lVar6 + -2;
        uVar5 = 0xffffffff;
        if (lVar6 < 2) goto LAB_00d4287c;
      }
      local_70 = local_70 + 2;
      uVar11 = lVar6 - 2;
      pbVar8 = local_70;
      if (1 < (long)uVar11) {
        do {
          uVar10 = (uint)local_70[1];
          if (local_70[1] < 0xdc) {
            if (uVar10 - 0xd8 < 4) {
              bVar9 = 7;
            }
            else if (uVar10 == 0) {
              bVar9 = *(byte *)(lVar1 + (ulong)*local_70);
            }
            else {
LAB_00d425d0:
              bVar9 = 0x1d;
            }
          }
          else if (uVar10 - 0xdc < 4) {
            bVar9 = 8;
          }
          else {
            if ((uVar10 != 0xff) || (*local_70 < 0xfe)) goto LAB_00d425d0;
            bVar9 = 0;
          }
          if (bVar9 == bVar2) goto LAB_00d426fc;
          switch(bVar9) {
          case 0:
          case 1:
          case 2:
          case 8:
            goto switchD_00d425f4_caseD_0;
          case 3:
            uVar5 = FUN_00d41f18(param_1,local_70 + 2,param_3,&local_70);
            if ((int)uVar5 < 1) {
              pbVar8 = local_70;
              pbVar7 = local_70;
              if ((int)uVar5 == 0) goto switchD_00d423b0_caseD_8;
              goto LAB_00d4287c;
            }
            break;
          default:
            local_70 = local_70 + 2;
            break;
          case 6:
            if (uVar11 < 3) goto LAB_00d42804;
            local_70 = local_70 + 3;
            break;
          case 7:
            if (uVar11 < 4) goto LAB_00d42804;
            local_70 = local_70 + 4;
          }
          uVar11 = param_3 - (long)local_70;
          uVar5 = 0xffffffff;
          if ((long)uVar11 < 2) goto LAB_00d4287c;
        } while( true );
      }
    }
    goto LAB_00d42878;
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_00d423b0_caseD_16:
    local_70 = local_70 + 2;
    goto LAB_00d42458;
  case 0x17:
    if (bVar4) break;
    pbVar8 = local_70 + 2;
    uVar11 = param_3 - (long)pbVar8;
    if (1 < (long)uVar11) {
      bVar2 = local_70[3];
      uVar10 = (uint)bVar2;
      if (bVar2 < 0xdc) {
        if (uVar10 == 0) {
          uVar12 = (ulong)*pbVar8;
          uVar5 = 0;
          pbVar7 = pbVar8;
          switch(*(undefined *)(lVar1 + uVar12)) {
          case 6:
            local_70 = pbVar8;
joined_r0x00d428bc:
            pbVar8 = local_70;
            if (uVar11 < 3) goto LAB_00d42804;
            goto LAB_00d42820;
          case 7:
            goto joined_r0x00d42810;
          default:
            goto switchD_00d423b0_caseD_8;
          case 0x16:
          case 0x18:
switchD_00d424b8_caseD_16:
            local_70 = local_70 + 4;
            bVar4 = true;
            break;
          case 0x1d:
            goto switchD_00d424b8_caseD_1d;
          }
          goto LAB_00d42458;
        }
        if (3 < uVar10 - 0xd8) goto LAB_00d426d0;
        goto joined_r0x00d42810;
      }
      if (uVar10 == 0xff) {
        uVar12 = (ulong)*pbVar8;
        if (*pbVar8 < 0xfe) {
switchD_00d424b8_caseD_1d:
          if ((*(uint *)(&DAT_0054734c +
                        (uVar12 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar2] << 5)) >>
               (ulong)((uint)uVar12 & 0x1f) & 1) != 0) goto switchD_00d424b8_caseD_16;
        }
      }
      else if (3 < uVar10 - 0xdc) {
LAB_00d426d0:
        uVar12 = (ulong)*pbVar8;
        goto switchD_00d424b8_caseD_1d;
      }
      goto LAB_00d42820;
    }
    goto LAB_00d42878;
  case 0x1d:
switchD_00d423b0_caseD_1d:
    if ((*(uint *)(&DAT_0054734c + (uVar12 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar2] << 5))
         >> (ulong)((uint)uVar12 & 0x1f) & 1) != 0) goto switchD_00d423b0_caseD_16;
  }
switchD_00d423b0_caseD_18:
  uVar5 = 0;
  pbVar8 = local_70;
  pbVar7 = local_70;
  goto switchD_00d423b0_caseD_8;
LAB_00d426fc:
  pbVar7 = local_70 + 2;
  pbVar8 = pbVar7;
  if (param_3 - (long)pbVar7 < 2) goto LAB_00d42878;
  if (local_70[3] == 0) {
    uVar5 = 0;
    switch(*(undefined *)(lVar1 + (ulong)*pbVar7)) {
    case 9:
    case 10:
    case 0x15:
      pbVar7 = local_70 + 4;
      uVar11 = param_3 - (long)pbVar7;
      pbVar8 = pbVar7;
      if ((long)uVar11 < 2) goto LAB_00d42878;
LAB_00d42754:
      bVar2 = pbVar7[1];
      if (bVar2 == 0) {
        uVar12 = (ulong)*pbVar7;
        uVar5 = 0;
        pbVar8 = pbVar7;
        switch(*(undefined *)(lVar1 + uVar12)) {
        case 6:
          local_70 = pbVar7;
          goto joined_r0x00d428bc;
        case 7:
          goto joined_r0x00d42810;
        default:
          goto switchD_00d423b0_caseD_8;
        case 9:
        case 10:
        case 0x15:
          goto switchD_00d42780_caseD_9;
        case 0xb:
          goto switchD_00d4273c_caseD_b;
        case 0x11:
          goto switchD_00d4273c_caseD_11;
        case 0x16:
        case 0x18:
          goto switchD_00d42780_caseD_16;
        case 0x1d:
          goto switchD_00d42780_caseD_1d;
        }
      }
      pbVar8 = pbVar7;
      if (bVar2 - 0xd8 < 4) {
joined_r0x00d42810:
        local_70 = pbVar8;
        pbVar8 = local_70;
        if (uVar11 < 4) {
LAB_00d42804:
          uVar5 = 0xfffffffe;
          goto LAB_00d4287c;
        }
      }
      else if (3 < bVar2 - 0xdc) {
        if (bVar2 == 0xff) {
          uVar12 = (ulong)*pbVar7;
          if (0xfd < *pbVar7) goto LAB_00d42820;
        }
        else {
          uVar12 = (ulong)*pbVar7;
        }
switchD_00d42780_caseD_1d:
        pbVar8 = pbVar7;
        if ((*(uint *)(&DAT_0054734c +
                      (uVar12 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar2] << 5)) >>
             (ulong)((uint)uVar12 & 0x1f) & 1) != 0) {
switchD_00d42780_caseD_16:
          local_70 = pbVar7 + 2;
          bVar4 = false;
LAB_00d42458:
          uVar11 = param_3 - (long)local_70;
          pbVar8 = local_70;
          if ((long)uVar11 < 2) goto LAB_00d42878;
          goto LAB_00d42378;
        }
      }
      goto LAB_00d42820;
    case 0xb:
switchD_00d4273c_caseD_b:
      local_70 = pbVar7;
      uVar5 = 1;
      pbVar8 = local_70 + 2;
      pbVar7 = local_70;
      break;
    case 0x11:
switchD_00d4273c_caseD_11:
      local_70 = pbVar7 + 2;
      pbVar8 = local_70;
      if (param_3 - (long)local_70 < 2) goto LAB_00d42878;
      if (pbVar7[3] == 0) {
        pbVar8 = pbVar7 + 4;
        if (pbVar7[2] != 0x3e) {
          pbVar8 = local_70;
        }
        uVar10 = 3;
        if (pbVar7[2] != 0x3e) {
          uVar10 = 0;
        }
        uVar5 = (ulong)uVar10;
        pbVar7 = local_70;
      }
      else {
switchD_00d425f4_caseD_0:
        uVar5 = 0;
        pbVar8 = local_70;
        pbVar7 = local_70;
      }
    }
  }
  else {
LAB_00d42820:
    local_70 = pbVar8;
    uVar5 = 0;
    pbVar8 = local_70;
    pbVar7 = local_70;
  }
switchD_00d423b0_caseD_8:
  local_70 = pbVar7;
  *param_4 = pbVar8;
  goto LAB_00d4287c;
switchD_00d42780_caseD_9:
  pbVar7 = pbVar7 + 2;
  uVar11 = uVar11 - 2;
  uVar5 = 0xffffffff;
  local_70 = pbVar7;
  if ((long)uVar11 < 2) goto LAB_00d4287c;
  goto LAB_00d42754;
}


