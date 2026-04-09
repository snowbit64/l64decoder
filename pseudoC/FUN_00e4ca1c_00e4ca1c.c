// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4ca1c
// Entry Point: 00e4ca1c
// Size: 344 bytes
// Signature: undefined FUN_00e4ca1c(void)


undefined8 FUN_00e4ca1c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  
  pcVar3 = *(char **)(param_1 + 0x40);
  if (pcVar3 == (char *)0x0) {
    uVar2 = fgetc(*(FILE **)(param_1 + 0x30));
    if (uVar2 != 0xffffffff) {
      if ((uVar2 & 0xff) != 0x4f) goto LAB_00e4cb5c;
      goto LAB_00e4ca74;
    }
  }
  else if (pcVar3 < *(char **)(param_1 + 0x50)) {
    *(char **)(param_1 + 0x40) = pcVar3 + 1;
    if (*pcVar3 != 'O') goto LAB_00e4cb5c;
LAB_00e4ca74:
    pcVar3 = *(char **)(param_1 + 0x40);
    if (pcVar3 == (char *)0x0) {
      uVar2 = fgetc(*(FILE **)(param_1 + 0x30));
      if (uVar2 != 0xffffffff) {
        if ((uVar2 & 0xff) != 0x67) goto LAB_00e4cb5c;
        goto LAB_00e4cabc;
      }
    }
    else if (pcVar3 < *(char **)(param_1 + 0x50)) {
      *(char **)(param_1 + 0x40) = pcVar3 + 1;
      if (*pcVar3 != 'g') goto LAB_00e4cb5c;
LAB_00e4cabc:
      pcVar3 = *(char **)(param_1 + 0x40);
      if (pcVar3 == (char *)0x0) {
        uVar2 = fgetc(*(FILE **)(param_1 + 0x30));
        if (uVar2 != 0xffffffff) {
          if ((uVar2 & 0xff) != 0x67) goto LAB_00e4cb5c;
          goto LAB_00e4cb04;
        }
      }
      else if (pcVar3 < *(char **)(param_1 + 0x50)) {
        *(char **)(param_1 + 0x40) = pcVar3 + 1;
        if (*pcVar3 != 'g') goto LAB_00e4cb5c;
LAB_00e4cb04:
        pbVar4 = *(byte **)(param_1 + 0x40);
        if (pbVar4 == (byte *)0x0) {
          uVar2 = fgetc(*(FILE **)(param_1 + 0x30));
          if (uVar2 != 0xffffffff) {
            uVar2 = uVar2 & 0xff;
            goto LAB_00e4cb3c;
          }
        }
        else if (pbVar4 < *(byte **)(param_1 + 0x50)) {
          *(byte **)(param_1 + 0x40) = pbVar4 + 1;
          uVar2 = (uint)*pbVar4;
LAB_00e4cb3c:
          if (uVar2 == 0x53) {
            uVar1 = FUN_00e4cb74(param_1);
            return uVar1;
          }
          goto LAB_00e4cb5c;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
LAB_00e4cb5c:
  *(undefined4 *)(param_1 + 0x9c) = 0x1e;
  return 0;
}


