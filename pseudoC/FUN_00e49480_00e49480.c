// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e49480
// Entry Point: 00e49480
// Size: 428 bytes
// Signature: undefined FUN_00e49480(void)


undefined8 FUN_00e49480(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char *pcVar7;
  
  if (*(int *)(param_1 + 0x6e8) != -1) {
LAB_00e4949c:
    do {
      if (*(int *)(param_1 + 0x6e8) != -1) {
        *(undefined4 *)(param_1 + 0x6ec) = 0;
        *(undefined *)(param_1 + 0x6e4) = 0;
        *(undefined8 *)(param_1 + 0x6f8) = 0;
        return 1;
      }
      uVar3 = FUN_00e4ca1c(param_1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    } while ((*(byte *)(param_1 + 0x6e3) & 1) == 0);
    uVar5 = 0x20;
    goto LAB_00e4961c;
  }
  pbVar6 = *(byte **)(param_1 + 0x40);
  if (pbVar6 == (byte *)0x0) {
    uVar4 = fgetc(*(FILE **)(param_1 + 0x30));
    if (uVar4 == 0xffffffff) {
LAB_00e49558:
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x98) = 1;
      iVar1 = *(int *)(param_1 + 0x98);
    }
    else {
      uVar4 = uVar4 & 0xff;
      iVar1 = *(int *)(param_1 + 0x98);
    }
  }
  else {
    if (*(byte **)(param_1 + 0x50) <= pbVar6) goto LAB_00e49558;
    *(byte **)(param_1 + 0x40) = pbVar6 + 1;
    uVar4 = (uint)*pbVar6;
    iVar1 = *(int *)(param_1 + 0x98);
  }
  if (iVar1 != 0) {
    return 0;
  }
  if (uVar4 == 0x4f) {
    pcVar7 = *(char **)(param_1 + 0x40);
    if (pcVar7 == (char *)0x0) {
      uVar4 = fgetc(*(FILE **)(param_1 + 0x30));
      if (uVar4 == 0xffffffff) goto LAB_00e4960c;
      if ((uVar4 & 0xff) == 0x67) goto LAB_00e49590;
    }
    else if (pcVar7 < *(char **)(param_1 + 0x50)) {
      *(char **)(param_1 + 0x40) = pcVar7 + 1;
      if (*pcVar7 != 'g') goto LAB_00e49614;
LAB_00e49590:
      pbVar6 = *(byte **)(param_1 + 0x40);
      if (pbVar6 == (byte *)0x0) {
        uVar4 = fgetc(*(FILE **)(param_1 + 0x30));
        if (uVar4 == 0xffffffff) goto LAB_00e4960c;
        uVar4 = uVar4 & 0xff;
      }
      else {
        if (*(byte **)(param_1 + 0x50) <= pbVar6) goto LAB_00e4960c;
        *(byte **)(param_1 + 0x40) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      if ((uVar4 == 0x67) && (cVar2 = FUN_00e4c9c0(param_1), cVar2 == 'S')) {
        uVar3 = FUN_00e4cb74(param_1);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        if ((*(byte *)(param_1 + 0x6e3) & 1) != 0) {
          uVar5 = 0x20;
          *(undefined4 *)(param_1 + 0x6ec) = 0;
          *(undefined *)(param_1 + 0x6e4) = 0;
          goto LAB_00e4961c;
        }
        goto LAB_00e4949c;
      }
    }
    else {
LAB_00e4960c:
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
  }
LAB_00e49614:
  uVar5 = 0x1e;
LAB_00e4961c:
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  return 0;
}


