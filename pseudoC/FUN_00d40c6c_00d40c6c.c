// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d40c6c
// Entry Point: 00d40c6c
// Size: 292 bytes
// Signature: undefined FUN_00d40c6c(void)


uint FUN_00d40c6c(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  
  if ((*(char *)(param_2 + 5) == '\0') && (*(char *)(param_2 + 4) == 'x')) {
    uVar3 = 0;
    pcVar4 = (char *)(param_2 + 7);
    do {
      if (*pcVar4 == '\0') {
        bVar2 = pcVar4[-1];
        uVar5 = (uint)bVar2;
        if (uVar5 == 0x3b) goto LAB_00d40d44;
        uVar6 = (ulong)(uVar5 - 0x30);
        if (uVar5 - 0x30 < 0x37) {
          if ((1L << (uVar6 & 0x3f) & 0x3ffU) == 0) {
            if ((1L << (uVar6 & 0x3f) & 0x7e0000U) == 0) {
              if ((1L << (uVar6 & 0x3f) & 0x7e000000000000U) == 0) goto LAB_00d40ca4;
              uVar3 = (uVar5 + uVar3 * 0x10) - 0x57;
            }
            else {
              uVar3 = ((uint)bVar2 + uVar3 * 0x10) - 0x37;
            }
          }
          else {
            uVar3 = bVar2 - 0x30 | uVar3 << 4;
          }
          if (0x10ffff < (int)uVar3) {
            return 0xffffffff;
          }
        }
      }
LAB_00d40ca4:
      pcVar4 = pcVar4 + 2;
    } while( true );
  }
  uVar3 = 0;
  pcVar4 = (char *)(param_2 + 5);
  do {
    if (*pcVar4 == '\0') {
      uVar5 = (uint)(byte)pcVar4[-1];
      if (uVar5 == 0x3b) {
LAB_00d40d44:
        iVar1 = (int)uVar3 >> 8;
        if (iVar1 - 0xd8U < 8) {
          return 0xffffffff;
        }
        if (iVar1 == 0xff) {
          if (uVar3 >> 1 == 0x7fff) {
            return 0xffffffff;
          }
          return uVar3;
        }
        if (iVar1 != 0) {
          return uVar3;
        }
        if ((&DAT_01010fa8)[(int)uVar3] == '\0') {
          return 0xffffffff;
        }
        return uVar3;
      }
    }
    else {
      uVar5 = 0xffffffff;
    }
    pcVar4 = pcVar4 + 2;
    uVar3 = (uVar5 + uVar3 * 10) - 0x30;
    if (0x10ffff < (int)uVar3) {
      return 0xffffffff;
    }
  } while( true );
}


