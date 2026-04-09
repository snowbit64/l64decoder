// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d228
// Entry Point: 00d3d228
// Size: 244 bytes
// Signature: undefined FUN_00d3d228(void)


uint FUN_00d3d228(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  bVar2 = *(byte *)(param_2 + 2);
  uVar4 = (uint)bVar2;
  if (bVar2 == 0x3b) {
    uVar3 = 0;
  }
  else {
    if (bVar2 == 0x78) {
      uVar3 = 0;
      pbVar5 = (byte *)(param_2 + 3);
      do {
        uVar4 = (uint)*pbVar5;
        switch(uVar4 - 0x30) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          uVar3 = uVar4 - 0x30 | uVar3 << 4;
          break;
        default:
          goto switchD_00d3d284_caseD_a;
        case 0xb:
          goto switchD_00d3d284_caseD_b;
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
          uVar3 = (uVar4 + uVar3 * 0x10) - 0x37;
          break;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
          uVar3 = (uVar4 + uVar3 * 0x10) - 0x57;
        }
        if (0x10ffff < (int)uVar3) {
          return 0xffffffff;
        }
switchD_00d3d284_caseD_a:
        pbVar5 = pbVar5 + 1;
      } while( true );
    }
    uVar3 = 0;
    pbVar5 = (byte *)(param_2 + 3);
    do {
      uVar3 = (uVar4 + uVar3 * 10) - 0x30;
      if (0x10ffff < (int)uVar3) {
        return 0xffffffff;
      }
      uVar4 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x3b);
switchD_00d3d284_caseD_b:
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
  }
  if ((&DAT_01010fa8)[(int)uVar3] == '\0') {
    return 0xffffffff;
  }
  return uVar3;
}


