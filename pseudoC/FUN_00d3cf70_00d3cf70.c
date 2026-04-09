// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3cf70
// Entry Point: 00d3cf70
// Size: 696 bytes
// Signature: undefined FUN_00d3cf70(void)


void FUN_00d3cf70(long param_1,byte *param_2,int param_3,long param_4)

{
  byte **ppbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  
  iVar4 = 0;
  cVar6 = '\0';
  iVar3 = 1;
switchD_00d3cfc4_caseD_4:
  iVar7 = iVar3;
  pbVar5 = param_2;
  param_2 = pbVar5 + 1;
  iVar3 = iVar7;
  switch(*(undefined *)(param_1 + 0x88 + (ulong)*param_2)) {
  case 3:
    if (iVar4 < param_3) {
      *(undefined *)(param_4 + (long)iVar4 * 0x20 + 0x18) = 0;
    }
    goto switchD_00d3cfc4_caseD_4;
  case 5:
    if ((iVar7 == 0) && (iVar7 = 1, iVar4 < param_3)) {
      ppbVar1 = (byte **)(param_4 + (long)iVar4 * 0x20);
      *ppbVar1 = param_2;
      *(undefined *)(ppbVar1 + 3) = 1;
    }
    param_2 = pbVar5 + 2;
    iVar3 = iVar7;
    goto switchD_00d3cfc4_caseD_4;
  case 6:
    if ((iVar7 == 0) && (iVar7 = 1, iVar4 < param_3)) {
      ppbVar1 = (byte **)(param_4 + (long)iVar4 * 0x20);
      *ppbVar1 = param_2;
      *(undefined *)(ppbVar1 + 3) = 1;
    }
    param_2 = pbVar5 + 3;
    iVar3 = iVar7;
    goto switchD_00d3cfc4_caseD_4;
  case 7:
    if ((iVar7 == 0) && (iVar7 = 1, iVar4 < param_3)) {
      ppbVar1 = (byte **)(param_4 + (long)iVar4 * 0x20);
      *ppbVar1 = param_2;
      *(undefined *)(ppbVar1 + 3) = 1;
    }
    param_2 = pbVar5 + 4;
    iVar3 = iVar7;
    goto switchD_00d3cfc4_caseD_4;
  case 9:
  case 10:
    iVar3 = 0;
    if (((iVar7 != 1) && (iVar3 = iVar7, iVar7 == 2)) && (iVar4 < param_3)) {
      *(undefined *)(param_4 + (long)iVar4 * 0x20 + 0x18) = 0;
      iVar3 = 2;
    }
    goto switchD_00d3cfc4_caseD_4;
  case 0xb:
  case 0x11:
    goto switchD_00d3cfc4_caseD_b;
  case 0xc:
    if (iVar7 == 2) {
      iVar3 = 2;
      if (cVar6 == '\f') {
        if (iVar4 < param_3) {
          *(byte **)(param_4 + (long)iVar4 * 0x20 + 0x10) = param_2;
        }
        iVar4 = iVar4 + 1;
        cVar6 = '\f';
        iVar3 = 0;
      }
      goto switchD_00d3cfc4_caseD_4;
    }
    cVar6 = '\f';
    iVar3 = 2;
    if (param_3 <= iVar4) goto switchD_00d3cfc4_caseD_4;
    cVar6 = '\f';
    break;
  case 0xd:
    if (iVar7 == 2) {
      iVar3 = 2;
      if (cVar6 == '\r') {
        if (iVar4 < param_3) {
          *(byte **)(param_4 + (long)iVar4 * 0x20 + 0x10) = param_2;
        }
        iVar4 = iVar4 + 1;
        cVar6 = '\r';
        iVar3 = 0;
      }
      goto switchD_00d3cfc4_caseD_4;
    }
    cVar6 = '\r';
    iVar3 = 2;
    if (param_3 <= iVar4) goto switchD_00d3cfc4_caseD_4;
    cVar6 = '\r';
    break;
  case 0x15:
    iVar3 = 0;
    if (((iVar7 != 1) && (iVar3 = iVar7, iVar7 == 2)) && (iVar4 < param_3)) {
      lVar2 = param_4 + (long)iVar4 * 0x20;
      pcVar8 = (char *)(lVar2 + 0x18);
      iVar3 = 2;
      if ((*pcVar8 != '\0') &&
         (((param_2 == *(byte **)(lVar2 + 8) || (*param_2 != 0x20)) ||
          (((ulong)pbVar5[2] == 0x20 ||
           (iVar3 = 2, cVar6 == *(char *)(param_1 + 0x88 + (ulong)pbVar5[2]))))))) {
        *pcVar8 = '\0';
        iVar3 = 2;
      }
    }
    goto switchD_00d3cfc4_caseD_4;
  case 0x16:
  case 0x18:
  case 0x1d:
    if ((iVar7 == 0) && (iVar3 = 1, iVar4 < param_3)) {
      ppbVar1 = (byte **)(param_4 + (long)iVar4 * 0x20);
      *ppbVar1 = param_2;
      *(undefined *)(ppbVar1 + 3) = 1;
    }
    goto switchD_00d3cfc4_caseD_4;
  }
  *(byte **)(param_4 + (long)iVar4 * 0x20 + 8) = pbVar5 + 2;
  iVar3 = 2;
  goto switchD_00d3cfc4_caseD_4;
switchD_00d3cfc4_caseD_b:
  iVar3 = 2;
  if (iVar7 != 2) {
    return;
  }
  goto switchD_00d3cfc4_caseD_4;
}


