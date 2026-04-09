// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d4471c
// Entry Point: 00d4471c
// Size: 296 bytes
// Signature: undefined FUN_00d4471c(void)


uint FUN_00d4471c(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  
  if ((*(char *)(param_2 + 4) != '\0') || (*(char *)(param_2 + 5) != 'x')) {
    uVar3 = 0;
    pcVar6 = (char *)(param_2 + 6);
    if (*(char *)(param_2 + 4) == '\0') goto LAB_00d447d0;
    do {
      uVar7 = 0xffffffff;
      pcVar5 = pcVar6;
      while( true ) {
        uVar3 = (uVar7 + uVar3 * 10) - 0x30;
        if (0x10ffff < (int)uVar3) {
          return 0xffffffff;
        }
        pcVar6 = pcVar5 + 2;
        if (*pcVar5 != '\0') break;
LAB_00d447d0:
        uVar7 = (uint)(byte)pcVar6[-1];
        pcVar5 = pcVar6;
        if (pcVar6[-1] == 0x3b) goto LAB_00d447f8;
      }
    } while( true );
  }
  uVar3 = 0;
  pbVar4 = (byte *)(param_2 + 7);
  do {
    if (pbVar4[-1] == 0) {
      bVar2 = *pbVar4;
      uVar7 = (uint)bVar2;
      if (uVar7 == 0x3b) {
LAB_00d447f8:
        iVar1 = (int)uVar3 >> 8;
        if (7 < iVar1 - 0xd8U) {
          if (iVar1 == 0xff) {
            if (uVar3 >> 1 != 0x7fff) {
              return uVar3;
            }
          }
          else {
            if (iVar1 != 0) {
              return uVar3;
            }
            if ((&DAT_01010fa8)[(int)uVar3] != '\0') {
              return uVar3;
            }
          }
        }
        return 0xffffffff;
      }
      uVar8 = (ulong)(uVar7 - 0x30);
      if (uVar7 - 0x30 < 0x37) {
        if ((1L << (uVar8 & 0x3f) & 0x3ffU) == 0) {
          if ((1L << (uVar8 & 0x3f) & 0x7e0000U) == 0) {
            if ((1L << (uVar8 & 0x3f) & 0x7e000000000000U) == 0) goto LAB_00d44754;
            uVar3 = (uVar7 + uVar3 * 0x10) - 0x57;
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
LAB_00d44754:
    pbVar4 = pbVar4 + 2;
  } while( true );
}


