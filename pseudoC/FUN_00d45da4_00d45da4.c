// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d45da4
// Entry Point: 00d45da4
// Size: 1584 bytes
// Signature: undefined FUN_00d45da4(void)


void FUN_00d45da4(long param_1,byte *param_2,long param_3,byte **param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar12 = param_3 - (long)param_2;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar7 = param_2;
  if ((long)uVar12 < 2) {
LAB_00d46380:
    local_70 = pbVar7;
    uVar6 = 0xffffffff;
LAB_00d46384:
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  bVar4 = false;
  lVar1 = param_1 + 0x88;
  local_70 = param_2;
LAB_00d45e3c:
  bVar2 = *local_70;
  uVar11 = (uint)bVar2;
  if (0xdb < bVar2) {
    if (uVar11 == 0xff) {
      uVar13 = (ulong)local_70[1];
      if (local_70[1] < 0xfe) goto switchD_00d45e74_caseD_1d;
    }
    else if (3 < uVar11 - 0xdc) goto LAB_00d45ef8;
    goto switchD_00d45e74_caseD_18;
  }
  if (uVar11 != 0) {
    if (3 < uVar11 - 0xd8) {
LAB_00d45ef8:
      uVar13 = (ulong)local_70[1];
      goto switchD_00d45e74_caseD_1d;
    }
switchD_00d45e74_caseD_7:
    if (3 < uVar12) goto switchD_00d45e74_caseD_18;
    goto LAB_00d462d4;
  }
  uVar13 = (ulong)local_70[1];
  uVar6 = 0;
  pbVar9 = local_70;
  pbVar7 = local_70;
  switch(*(undefined *)(lVar1 + uVar13)) {
  case 6:
    if (2 < uVar12) break;
    goto LAB_00d462d4;
  case 7:
    goto switchD_00d45e74_caseD_7;
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
    goto switchD_00d45e74_caseD_8;
  case 9:
  case 10:
  case 0x15:
    local_70 = local_70 + 2;
    lVar8 = param_3 - (long)local_70;
    while( true ) {
      pbVar7 = local_70;
      if (lVar8 < 2) goto LAB_00d46380;
      if (*local_70 != 0) goto switchD_00d45e74_caseD_18;
      bVar2 = *(byte *)(lVar1 + (ulong)local_70[1]);
      if (1 < bVar2 - 9 && bVar2 != 0x15) break;
      local_70 = local_70 + 2;
      lVar8 = lVar8 + -2;
    }
    if (bVar2 == 0xe) goto switchD_00d45e74_caseD_e;
    break;
  case 0xe:
switchD_00d45e74_caseD_e:
    pbVar9 = local_70 + 2;
    lVar8 = param_3 - (long)pbVar9;
    pbVar7 = pbVar9;
    if (1 < lVar8) {
      while( true ) {
        pbVar5 = pbVar9;
        if (*pbVar9 != 0) goto LAB_00d462e4;
        bVar2 = *(byte *)(lVar1 + (ulong)pbVar9[1]);
        if ((bVar2 & 0xfe) == 0xc) break;
        if (0x15 < bVar2 || (1 << (ulong)(bVar2 & 0x1f) & 0x200600U) == 0) goto LAB_00d462e4;
        pbVar9 = pbVar9 + 2;
        lVar8 = lVar8 + -2;
        uVar6 = 0xffffffff;
        local_70 = pbVar9;
        if (lVar8 < 2) goto LAB_00d46384;
      }
      local_70 = pbVar9 + 2;
      uVar12 = lVar8 - 2;
      pbVar7 = local_70;
      if (1 < (long)uVar12) {
        do {
          uVar11 = (uint)*local_70;
          if (*local_70 < 0xdc) {
            if (uVar11 - 0xd8 < 4) {
              bVar10 = 7;
            }
            else if (uVar11 == 0) {
              bVar10 = *(byte *)(lVar1 + (ulong)local_70[1]);
            }
            else {
LAB_00d46094:
              bVar10 = 0x1d;
            }
          }
          else if (uVar11 - 0xdc < 4) {
            bVar10 = 8;
          }
          else {
            if ((uVar11 != 0xff) || (local_70[1] < 0xfe)) goto LAB_00d46094;
            bVar10 = 0;
          }
          if (bVar10 == bVar2) goto LAB_00d461cc;
          switch(bVar10) {
          case 0:
          case 1:
          case 2:
          case 8:
            goto switchD_00d460b8_caseD_0;
          case 3:
            uVar6 = FUN_00d459d8(param_1,local_70 + 2,param_3,&local_70);
            if ((int)uVar6 < 1) {
              pbVar9 = local_70;
              pbVar7 = local_70;
              if ((int)uVar6 != 0) goto LAB_00d46384;
              goto switchD_00d45e74_caseD_8;
            }
            break;
          default:
            local_70 = local_70 + 2;
            break;
          case 6:
            if (uVar12 < 3) goto LAB_00d462d4;
            local_70 = local_70 + 3;
            break;
          case 7:
            if (uVar12 < 4) goto LAB_00d462d4;
            local_70 = local_70 + 4;
          }
          uVar12 = param_3 - (long)local_70;
          uVar6 = 0xffffffff;
          if ((long)uVar12 < 2) goto LAB_00d46384;
        } while( true );
      }
    }
    goto LAB_00d46380;
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_00d45e74_caseD_16:
    pbVar7 = local_70 + 2;
    goto LAB_00d45f1c;
  case 0x17:
    if (bVar4) break;
    pbVar9 = local_70 + 2;
    uVar12 = param_3 - (long)pbVar9;
    pbVar7 = pbVar9;
    if (1 < (long)uVar12) {
      bVar2 = *pbVar9;
      uVar11 = (uint)bVar2;
      pbVar5 = pbVar9;
      if (bVar2 < 0xdc) {
        if (uVar11 != 0) {
          if (3 < uVar11 - 0xd8) goto LAB_00d461a0;
switchD_00d45f7c_caseD_7:
          local_70 = pbVar9;
          if (uVar12 < 4) goto LAB_00d462d4;
          goto LAB_00d462e4;
        }
        uVar13 = (ulong)local_70[3];
        uVar6 = 0;
        switch(*(undefined *)(lVar1 + uVar13)) {
        case 6:
          local_70 = pbVar9;
          if (uVar12 < 3) goto LAB_00d462d4;
          goto LAB_00d462e4;
        case 7:
          goto switchD_00d45f7c_caseD_7;
        default:
          goto switchD_00d45e74_caseD_8;
        case 0x16:
        case 0x18:
switchD_00d45f7c_caseD_16:
          pbVar7 = local_70 + 4;
          bVar4 = true;
          break;
        case 0x1d:
          goto switchD_00d45f7c_caseD_1d;
        }
        goto LAB_00d45f1c;
      }
      if (uVar11 == 0xff) {
        uVar13 = (ulong)local_70[3];
        if (local_70[3] < 0xfe) {
switchD_00d45f7c_caseD_1d:
          if ((*(uint *)(&DAT_0054734c +
                        (uVar13 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar2] << 5)) >>
               (ulong)((uint)uVar13 & 0x1f) & 1) != 0) goto switchD_00d45f7c_caseD_16;
        }
      }
      else if (3 < uVar11 - 0xdc) {
LAB_00d461a0:
        uVar13 = (ulong)local_70[3];
        goto switchD_00d45f7c_caseD_1d;
      }
      goto LAB_00d462e4;
    }
    goto LAB_00d46380;
  case 0x1d:
switchD_00d45e74_caseD_1d:
    if ((*(uint *)(&DAT_0054734c + (uVar13 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar2] << 5))
         >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0) goto switchD_00d45e74_caseD_16;
  }
switchD_00d45e74_caseD_18:
  uVar6 = 0;
  pbVar9 = local_70;
  pbVar7 = local_70;
  goto switchD_00d45e74_caseD_8;
LAB_00d461cc:
  pbVar9 = local_70 + 2;
  pbVar7 = pbVar9;
  if (param_3 - (long)pbVar9 < 2) goto LAB_00d46380;
  pbVar5 = pbVar9;
  if (*pbVar9 == 0) {
    uVar6 = 0;
    switch(*(undefined *)(lVar1 + (ulong)local_70[3])) {
    case 9:
    case 10:
    case 0x15:
      pbVar9 = local_70 + 4;
      uVar12 = param_3 - (long)pbVar9;
      pbVar7 = pbVar9;
      if ((long)uVar12 < 2) goto LAB_00d46380;
      pbVar5 = local_70 + 6;
      local_70 = pbVar9;
LAB_00d46228:
      pbVar7 = pbVar5;
      bVar2 = pbVar7[-2];
      if (bVar2 == 0) {
        uVar13 = (ulong)pbVar7[-1];
        switch(*(undefined *)(lVar1 + uVar13)) {
        case 6:
          if (uVar12 < 3) goto LAB_00d462d4;
          goto switchD_00d46250_caseD_8;
        case 7:
          goto switchD_00d46250_caseD_7;
        default:
          goto switchD_00d46250_caseD_8;
        case 9:
        case 10:
        case 0x15:
          goto switchD_00d46250_caseD_9;
        case 0xb:
          pbVar9 = pbVar7 + -2;
          pbVar7 = local_70;
          goto switchD_00d4620c_caseD_b;
        case 0x11:
          pbVar9 = pbVar7 + -2;
          goto switchD_00d4620c_caseD_11;
        case 0x16:
        case 0x18:
          goto switchD_00d46250_caseD_16;
        case 0x1d:
          goto switchD_00d46250_caseD_1d;
        }
      }
      if (bVar2 - 0xd8 < 4) {
switchD_00d46250_caseD_7:
        if (uVar12 < 4) {
LAB_00d462d4:
          uVar6 = 0xfffffffe;
          goto LAB_00d46384;
        }
      }
      else if (3 < bVar2 - 0xdc) {
        if (bVar2 == 0xff) {
          uVar13 = (ulong)pbVar7[-1];
          if (0xfd < pbVar7[-1]) goto switchD_00d46250_caseD_8;
        }
        else {
          uVar13 = (ulong)pbVar7[-1];
        }
switchD_00d46250_caseD_1d:
        pbVar5 = local_70;
        if ((*(uint *)(&DAT_0054734c +
                      (uVar13 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar2] << 5)) >>
             (ulong)((uint)uVar13 & 0x1f) & 1) != 0) {
switchD_00d46250_caseD_16:
          bVar4 = false;
LAB_00d45f1c:
          uVar12 = param_3 - (long)pbVar7;
          local_70 = pbVar7;
          if ((long)uVar12 < 2) goto LAB_00d46380;
          goto LAB_00d45e3c;
        }
        goto LAB_00d462e4;
      }
switchD_00d46250_caseD_8:
      uVar6 = 0;
      pbVar9 = pbVar7 + -2;
      pbVar7 = local_70;
      break;
    case 0xb:
switchD_00d4620c_caseD_b:
      local_70 = pbVar7;
      uVar6 = 1;
      pbVar9 = pbVar9 + 2;
      pbVar7 = local_70;
      break;
    case 0x11:
switchD_00d4620c_caseD_11:
      local_70 = pbVar9 + 2;
      pbVar7 = local_70;
      if (param_3 - (long)local_70 < 2) goto LAB_00d46380;
      if (*local_70 == 0) {
        pbVar7 = pbVar9 + 4;
        if (pbVar9[3] != 0x3e) {
          pbVar7 = local_70;
        }
        uVar11 = 3;
        if (pbVar9[3] != 0x3e) {
          uVar11 = 0;
        }
        uVar6 = (ulong)uVar11;
        pbVar9 = pbVar7;
        pbVar7 = local_70;
      }
      else {
switchD_00d460b8_caseD_0:
        uVar6 = 0;
        pbVar9 = local_70;
        pbVar7 = local_70;
      }
    }
  }
  else {
LAB_00d462e4:
    local_70 = pbVar5;
    uVar6 = 0;
    pbVar7 = local_70;
  }
switchD_00d45e74_caseD_8:
  local_70 = pbVar7;
  *param_4 = pbVar9;
  goto LAB_00d46384;
switchD_00d46250_caseD_9:
  pbVar9 = pbVar9 + 2;
  uVar12 = uVar12 - 2;
  uVar6 = 0xffffffff;
  pbVar5 = pbVar7 + 2;
  local_70 = pbVar7;
  if ((long)uVar12 < 2) goto LAB_00d46384;
  goto LAB_00d46228;
}


