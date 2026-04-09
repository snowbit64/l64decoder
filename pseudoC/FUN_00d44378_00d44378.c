// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44378
// Entry Point: 00d44378
// Size: 932 bytes
// Signature: undefined FUN_00d44378(void)


void FUN_00d44378(long param_1,byte *param_2,int param_3,long param_4)

{
  byte **ppbVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char cVar7;
  byte *pbVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  
  iVar5 = 0;
  cVar7 = '\0';
  iVar4 = 1;
switchD_00d44458_caseD_4:
  while( true ) {
    while( true ) {
      iVar10 = iVar4;
      pbVar6 = param_2;
      pbVar8 = pbVar6 + 2;
      uVar12 = (uint)*pbVar8;
      param_2 = pbVar8;
      iVar4 = iVar10;
      if (*pbVar8 < 0xdc) break;
      if ((3 < uVar12 - 0xdc) && ((uVar12 != 0xff || (pbVar6[3] < 0xfe)))) goto joined_r0x00d44524;
    }
    if (3 < uVar12 - 0xd8) break;
switchD_00d44458_caseD_7:
    if ((iVar10 == 0) && (iVar10 = 1, iVar5 < param_3)) {
      ppbVar1 = (byte **)(param_4 + (long)iVar5 * 0x20);
      *ppbVar1 = pbVar8;
      *(undefined *)(ppbVar1 + 3) = 1;
    }
    param_2 = pbVar6 + 4;
    iVar4 = iVar10;
  }
  if (uVar12 != 0) goto joined_r0x00d44524;
  bVar3 = pbVar6[3];
  switch(*(undefined *)(param_1 + 0x88 + (ulong)bVar3)) {
  case 3:
    if (iVar5 < param_3) {
      *(undefined *)(param_4 + (long)iVar5 * 0x20 + 0x18) = 0;
    }
  default:
    goto switchD_00d44458_caseD_4;
  case 6:
    param_2 = pbVar6 + 3;
  case 5:
  case 0x16:
  case 0x18:
  case 0x1d:
joined_r0x00d44524:
    if ((iVar10 == 0) && (iVar4 = 1, iVar5 < param_3)) {
      ppbVar1 = (byte **)(param_4 + (long)iVar5 * 0x20);
      *ppbVar1 = pbVar8;
      *(undefined *)(ppbVar1 + 3) = 1;
      iVar4 = 1;
    }
    goto switchD_00d44458_caseD_4;
  case 7:
    goto switchD_00d44458_caseD_7;
  case 9:
  case 10:
    iVar4 = 0;
    if (((iVar10 != 1) && (iVar4 = iVar10, iVar10 == 2)) && (iVar5 < param_3)) {
      *(undefined *)(param_4 + (long)iVar5 * 0x20 + 0x18) = 0;
      iVar4 = 2;
    }
    goto switchD_00d44458_caseD_4;
  case 0xb:
  case 0x11:
    goto switchD_00d44458_caseD_b;
  case 0xc:
    if (iVar10 == 2) {
      iVar4 = 2;
      if (cVar7 == '\f') {
        if (iVar5 < param_3) {
          *(byte **)(param_4 + (long)iVar5 * 0x20 + 0x10) = pbVar8;
        }
        iVar5 = iVar5 + 1;
        cVar7 = '\f';
        iVar4 = 0;
      }
    }
    else {
      cVar7 = '\f';
      iVar4 = 2;
      if (iVar5 < param_3) {
        cVar7 = '\f';
        goto LAB_00d4469c;
      }
    }
    goto switchD_00d44458_caseD_4;
  case 0xd:
    if (iVar10 == 2) {
      iVar4 = 2;
      if (cVar7 == '\r') {
        if (iVar5 < param_3) {
          *(byte **)(param_4 + (long)iVar5 * 0x20 + 0x10) = pbVar8;
        }
        iVar5 = iVar5 + 1;
        cVar7 = '\r';
        iVar4 = 0;
      }
    }
    else {
      cVar7 = '\r';
      iVar4 = 2;
      if (iVar5 < param_3) {
        cVar7 = '\r';
LAB_00d4469c:
        *(byte **)(param_4 + (long)iVar5 * 0x20 + 8) = pbVar6 + 4;
        iVar4 = 2;
      }
    }
    goto switchD_00d44458_caseD_4;
  case 0x15:
    break;
  }
  iVar4 = 0;
  if (((iVar10 != 1) && (iVar4 = iVar10, iVar10 == 2)) && (iVar5 < param_3)) {
    lVar2 = param_4 + (long)iVar5 * 0x20;
    pcVar11 = (char *)(lVar2 + 0x18);
    iVar4 = 2;
    if (*pcVar11 != '\0') {
      if ((pbVar8 != *(byte **)(lVar2 + 8)) && (bVar3 == 0x20)) {
        uVar12 = (uint)pbVar6[4];
        if (pbVar6[4] < 0xdc) {
          if (uVar12 - 0xd8 < 4) {
            cVar9 = '\a';
          }
          else if (uVar12 == 0) {
            if ((ulong)pbVar6[5] == 0x20) goto LAB_00d44708;
            cVar9 = *(char *)(param_1 + 0x88 + (ulong)pbVar6[5]);
          }
          else {
LAB_00d446f4:
            cVar9 = '\x1d';
          }
        }
        else if (uVar12 - 0xdc < 4) {
          cVar9 = '\b';
        }
        else {
          if ((uVar12 != 0xff) || (pbVar6[5] < 0xfe)) goto LAB_00d446f4;
          cVar9 = '\0';
        }
        iVar4 = 2;
        if (cVar9 != cVar7) goto switchD_00d44458_caseD_4;
      }
LAB_00d44708:
      *pcVar11 = '\0';
      iVar4 = 2;
    }
  }
  goto switchD_00d44458_caseD_4;
switchD_00d44458_caseD_b:
  iVar4 = 2;
  if (iVar10 != 2) {
    return;
  }
  goto switchD_00d44458_caseD_4;
}


