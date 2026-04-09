// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3ac48
// Entry Point: 00d3ac48
// Size: 568 bytes
// Signature: undefined FUN_00d3ac48(void)


int FUN_00d3ac48(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  if (param_1 == (byte *)0x0) {
    return 6;
  }
  pbVar5 = param_1;
  pbVar6 = &DAT_004f8852;
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar6;
    uVar4 = bVar1 - 0x20;
    if (0x19 < bVar1 - 0x61) {
      uVar4 = (uint)bVar1;
    }
    uVar7 = bVar2 - 0x20;
    if (0x19 < bVar2 - 0x61) {
      uVar7 = (uint)bVar2;
    }
    iVar3 = (uint)((uVar4 & 0xff) == 0) << 1;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar3 = 1;
    }
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (iVar3 == 0);
  if (iVar3 == 2) {
    iVar3 = 0;
  }
  else {
    pbVar5 = param_1;
    pbVar6 = (byte *)"US-ASCII";
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar6;
      uVar4 = bVar1 - 0x20;
      if (0x19 < bVar1 - 0x61) {
        uVar4 = (uint)bVar1;
      }
      uVar7 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        uVar7 = (uint)bVar2;
      }
      iVar3 = (uint)((uVar4 & 0xff) == 0) << 1;
      if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
        iVar3 = 1;
      }
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (iVar3 == 0);
    if (iVar3 == 2) {
      return 1;
    }
    pbVar5 = param_1;
    pbVar6 = &DAT_004f3503;
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar6;
      uVar4 = bVar1 - 0x20;
      if (0x19 < bVar1 - 0x61) {
        uVar4 = (uint)bVar1;
      }
      uVar7 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        uVar7 = (uint)bVar2;
      }
      iVar3 = (uint)((uVar4 & 0xff) == 0) << 1;
      if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
        iVar3 = 1;
      }
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (iVar3 == 0);
    if (iVar3 != 2) {
      pbVar5 = param_1;
      pbVar6 = &DAT_004c8dfb;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar6;
        uVar4 = bVar1 - 0x20;
        if (0x19 < bVar1 - 0x61) {
          uVar4 = (uint)bVar1;
        }
        uVar7 = bVar2 - 0x20;
        if (0x19 < bVar2 - 0x61) {
          uVar7 = (uint)bVar2;
        }
        iVar3 = (uint)((uVar4 & 0xff) == 0) << 1;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar3 = 1;
        }
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (iVar3 == 0);
      if (iVar3 == 2) {
        return 3;
      }
      pbVar5 = param_1;
      pbVar6 = (byte *)"UTF-16BE";
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar6;
        uVar4 = bVar1 - 0x20;
        if (0x19 < bVar1 - 0x61) {
          uVar4 = (uint)bVar1;
        }
        uVar7 = bVar2 - 0x20;
        if (0x19 < bVar2 - 0x61) {
          uVar7 = (uint)bVar2;
        }
        iVar3 = (uint)((uVar4 & 0xff) == 0) << 1;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar3 = 1;
        }
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (iVar3 == 0);
      if (iVar3 == 2) {
        return 4;
      }
      pbVar5 = (byte *)"UTF-16LE";
      do {
        bVar1 = *param_1;
        bVar2 = *pbVar5;
        uVar4 = bVar1 - 0x20;
        if (0x19 < bVar1 - 0x61) {
          uVar4 = (uint)bVar1;
        }
        uVar7 = bVar2 - 0x20;
        if (0x19 < bVar2 - 0x61) {
          uVar7 = (uint)bVar2;
        }
        iVar3 = (uint)((uVar4 & 0xff) == 0) << 1;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar3 = 1;
        }
        param_1 = param_1 + 1;
        pbVar5 = pbVar5 + 1;
      } while (iVar3 == 0);
      if (iVar3 == 2) {
        return 5;
      }
      return -1;
    }
  }
  return iVar3;
}


