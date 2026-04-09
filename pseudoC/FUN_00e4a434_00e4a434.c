// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4a434
// Entry Point: 00e4a434
// Size: 360 bytes
// Signature: undefined FUN_00e4a434(void)


uint FUN_00e4a434(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x40);
  if (pbVar4 == (byte *)0x0) {
    uVar2 = fgetc(*(FILE **)(param_1 + 0x30));
    if (uVar2 == 0xffffffff) goto LAB_00e4a4a4;
    uVar2 = uVar2 & 0xff;
    pbVar5 = *(byte **)(param_1 + 0x40);
    uVar6 = uVar2;
    if (pbVar5 != (byte *)0x0) goto LAB_00e4a4b8;
LAB_00e4a48c:
    uVar1 = fgetc(*(FILE **)(param_1 + 0x30));
    uVar6 = uVar2;
    if (uVar1 == 0xffffffff) goto LAB_00e4a4e0;
    uVar1 = (uVar1 & 0xff) << 8;
LAB_00e4a4ec:
    pbVar4 = *(byte **)(param_1 + 0x40);
    uVar1 = uVar1 | uVar2;
    if (pbVar4 == (byte *)0x0) {
      uVar2 = fgetc(*(FILE **)(param_1 + 0x30));
      if (uVar2 == 0xffffffff) goto LAB_00e4a538;
      uVar2 = (uVar2 & 0xff) << 0x10;
      goto LAB_00e4a544;
    }
    pbVar3 = *(byte **)(param_1 + 0x50);
    if (pbVar3 <= pbVar4) goto LAB_00e4a538;
LAB_00e4a504:
    pbVar5 = pbVar4 + 1;
    *(byte **)(param_1 + 0x40) = pbVar5;
    uVar1 = uVar1 | (uint)*pbVar4 << 0x10;
    if (pbVar5 < pbVar3) goto LAB_00e4a55c;
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x50);
    if (pbVar3 <= pbVar4) {
LAB_00e4a4a4:
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x98) = 1;
      pbVar5 = *(byte **)(param_1 + 0x40);
      uVar6 = 0;
      if (pbVar5 == (byte *)0x0) goto LAB_00e4a48c;
LAB_00e4a4b8:
      pbVar3 = *(byte **)(param_1 + 0x50);
      if (pbVar5 < pbVar3) goto LAB_00e4a4c4;
LAB_00e4a4e0:
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x98) = 1;
      uVar2 = uVar6;
      goto LAB_00e4a4ec;
    }
    pbVar5 = pbVar4 + 1;
    *(byte **)(param_1 + 0x40) = pbVar5;
    uVar6 = (uint)*pbVar4;
    if (pbVar3 <= pbVar5) goto LAB_00e4a4e0;
LAB_00e4a4c4:
    pbVar4 = pbVar5 + 1;
    *(byte **)(param_1 + 0x40) = pbVar4;
    uVar1 = uVar6 | (uint)*pbVar5 << 8;
    if (pbVar4 < pbVar3) goto LAB_00e4a504;
LAB_00e4a538:
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x98) = 1;
LAB_00e4a544:
    pbVar5 = *(byte **)(param_1 + 0x40);
    uVar1 = uVar2 | uVar1;
    if (pbVar5 == (byte *)0x0) {
      uVar2 = fgetc(*(FILE **)(param_1 + 0x30));
      if (uVar2 != 0xffffffff) goto LAB_00e4a588;
    }
    else if (pbVar5 < *(byte **)(param_1 + 0x50)) {
LAB_00e4a55c:
      *(byte **)(param_1 + 0x40) = pbVar5 + 1;
      uVar2 = (uint)*pbVar5;
      goto LAB_00e4a588;
    }
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x98) = 1;
LAB_00e4a588:
  return uVar1 | uVar2 << 0x18;
}


