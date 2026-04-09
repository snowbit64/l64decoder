// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44fcc
// Entry Point: 00d44fcc
// Size: 1072 bytes
// Signature: undefined FUN_00d44fcc(void)


void FUN_00d44fcc(long param_1,byte *param_2,long param_3,byte **param_4)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  uVar4 = param_3 - (long)param_2;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((long)uVar4 < 2) {
LAB_00d453c8:
    uVar4 = 0xffffffff;
  }
  else {
    bVar1 = *param_2;
    uVar8 = (uint)bVar1;
    if (bVar1 == 0) {
      uVar6 = (ulong)param_2[1];
      switch(*(undefined *)(param_1 + uVar6 + 0x88)) {
      case 6:
        if (uVar4 < 3) goto LAB_00d45084;
        break;
      case 7:
        goto switchD_00d4506c_caseD_7;
      case 0x16:
      case 0x18:
switchD_00d4506c_caseD_16:
        lVar11 = param_3 - (long)(param_2 + 2);
        if (1 < lVar11) {
          lVar10 = 0;
          lVar12 = 3;
LAB_00d45150:
          bVar1 = param_2[lVar12 + -1];
          uVar9 = (uint)bVar1;
          if (0xdb < uVar9) {
            if (bVar1 == 0xff) {
              uVar4 = (ulong)param_2[lVar12];
              if (param_2[lVar12] < 0xfe) goto switchD_00d45184_caseD_1d;
            }
            else if (3 < bVar1 - 0xdc) goto LAB_00d451a4;
            goto switchD_00d45184_caseD_5;
          }
          if (uVar9 == 0) {
            uVar4 = (ulong)param_2[lVar12];
            switch(*(undefined *)(param_1 + 0x88 + uVar4)) {
            case 6:
              if ((ulong)(lVar11 + lVar10) < 3) goto LAB_00d45084;
              break;
            case 7:
              goto switchD_00d45184_caseD_7;
            case 9:
            case 10:
            case 0x15:
              local_5c = 0xb;
              if ((lVar10 == -4) && (uVar8 == 0)) {
                if ((int)uVar6 == 0x78) {
                  bVar3 = false;
                }
                else {
                  if ((int)uVar6 != 0x58) goto LAB_00d45274;
                  bVar3 = true;
                }
                if (param_2[2] != 0) goto LAB_00d45274;
                if (param_2[3] != 0x6d) {
                  if (param_2[3] != 0x4d) goto LAB_00d45274;
                  bVar3 = true;
                }
                if (param_2[4] != 0) goto LAB_00d45274;
                if (param_2[5] == 0x4c) {
LAB_00d453a8:
                  pbVar5 = param_2 + 6;
                  goto LAB_00d451c0;
                }
                if (param_2[5] != 0x6c) goto LAB_00d45274;
                if (bVar3) goto LAB_00d453a8;
                uVar6 = 0xc;
                local_5c = 0xc;
                uVar7 = lVar11 - 6;
              }
              else {
LAB_00d45274:
                uVar6 = 0xb;
                uVar7 = (lVar11 + lVar10) - 2;
              }
              if ((long)uVar7 < 2) goto LAB_00d453c8;
              param_2 = param_2 + (4 - lVar10);
              uVar4 = 0xffffffff;
              goto LAB_00d452c0;
            case 0xf:
              uVar4 = FUN_00d4592c(param_2,param_2 + (2 - lVar10),&local_5c);
              if ((int)uVar4 != 0) {
                if (lVar11 + lVar10 + -2 < 2) goto LAB_00d453c8;
                pbVar5 = param_2 + (4 - lVar10);
                if ((param_2[lVar12 + 1] != 0) || (param_2[lVar12 + 2] != 0x3e)) goto LAB_00d451c0;
                uVar6 = (ulong)local_5c;
                pbVar5 = param_2 + (6 - lVar10);
                goto LAB_00d451c4;
              }
              *param_4 = param_2 + (2 - lVar10);
              goto LAB_00d453cc;
            case 0x16:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
              goto switchD_00d45184_caseD_16;
            case 0x1d:
              goto switchD_00d45184_caseD_1d;
            }
          }
          else {
            if (3 < uVar9 - 0xd8) {
LAB_00d451a4:
              uVar4 = (ulong)param_2[lVar12];
switchD_00d45184_caseD_1d:
              if ((*(uint *)(&DAT_0054734c +
                            (uVar4 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar1] << 5)) >>
                   (ulong)((uint)uVar4 & 0x1f) & 1) != 0) goto switchD_00d45184_caseD_16;
              goto switchD_00d45184_caseD_5;
            }
switchD_00d45184_caseD_7:
            if ((ulong)(lVar11 + lVar10) < 4) goto LAB_00d45084;
          }
switchD_00d45184_caseD_5:
          pbVar5 = param_2 + (2 - lVar10);
LAB_00d451c0:
          uVar6 = 0;
          goto LAB_00d451c4;
        }
        goto LAB_00d453c8;
      case 0x1d:
        goto switchD_00d4506c_caseD_1d;
      }
    }
    else if (bVar1 - 0xd8 < 4) {
switchD_00d4506c_caseD_7:
      if (uVar4 < 4) {
LAB_00d45084:
        uVar4 = 0xfffffffe;
        goto LAB_00d453cc;
      }
    }
    else if (3 < uVar8 - 0xdc) {
      if (uVar8 == 0xff) {
        uVar6 = (ulong)param_2[1];
        if (0xfd < param_2[1]) goto switchD_00d4506c_caseD_5;
      }
      else {
        uVar6 = (ulong)param_2[1];
      }
switchD_00d4506c_caseD_1d:
      if ((*(uint *)(&DAT_0054734c + (uVar6 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar1] << 5))
           >> (ulong)((uint)uVar6 & 0x1f) & 1) != 0) goto switchD_00d4506c_caseD_16;
    }
switchD_00d4506c_caseD_5:
    uVar4 = 0;
    *param_4 = param_2;
  }
LAB_00d453cc:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
LAB_00d452c0:
  do {
    bVar1 = *param_2;
    uVar8 = (uint)bVar1;
    if (0xdb < uVar8) {
      if (bVar1 == 0xff) {
        if (param_2[1] < 0xfe) goto switchD_00d45308_caseD_2;
      }
      else if (3 < bVar1 - 0xdc) goto switchD_00d45308_caseD_2;
switchD_00d45308_caseD_0:
      uVar4 = 0;
      *param_4 = param_2;
      break;
    }
    if (uVar8 - 0xd8 < 4) {
switchD_00d45308_caseD_7:
      if (3 < uVar7) {
        pbVar5 = param_2 + 4;
        goto LAB_00d452b0;
      }
      goto LAB_00d45084;
    }
    if (uVar8 == 0) {
      switch(*(undefined *)(param_1 + 0x88 + (ulong)param_2[1])) {
      case 0:
      case 1:
      case 8:
        goto switchD_00d45308_caseD_0;
      default:
        goto switchD_00d45308_caseD_2;
      case 6:
        if (uVar7 < 3) goto LAB_00d45084;
        pbVar5 = param_2 + 3;
        break;
      case 7:
        goto switchD_00d45308_caseD_7;
      case 0xf:
        pbVar5 = param_2 + 2;
        if (param_3 - (long)pbVar5 < 2) goto LAB_00d453c8;
        if ((*pbVar5 == 0) && (param_2[3] == 0x3e)) {
          pbVar5 = param_2 + 4;
LAB_00d451c4:
          *param_4 = pbVar5;
          uVar4 = uVar6;
          goto LAB_00d453cc;
        }
      }
    }
    else {
switchD_00d45308_caseD_2:
      pbVar5 = param_2 + 2;
    }
LAB_00d452b0:
    param_2 = pbVar5;
    uVar7 = param_3 - (long)param_2;
  } while (1 < (long)uVar7);
  goto LAB_00d453cc;
switchD_00d45184_caseD_16:
  lVar10 = lVar10 + -2;
  lVar12 = lVar12 + 2;
  uVar4 = 0xffffffff;
  if (lVar11 + lVar10 < 2) goto LAB_00d453cc;
  goto LAB_00d45150;
}


