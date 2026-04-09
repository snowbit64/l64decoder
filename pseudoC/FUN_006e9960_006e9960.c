// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9960
// Entry Point: 006e9960
// Size: 300 bytes
// Signature: undefined FUN_006e9960(void)


void FUN_006e9960(uint *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar1 = param_1 + 0x43;
  pbVar3 = (byte *)GenericStoreUtil::getProductInfo(*param_1);
  if (pbVar3 == (byte *)0x0) {
    *(ushort *)puVar1 = *(ushort *)puVar1 & 0xfffe;
    *(ushort *)(param_1 + 0x47) = *(ushort *)(param_1 + 0x47) & 0xfffe;
    *(undefined **)(param_1 + 0x40) = &DAT_0050a39f;
    *(undefined **)(param_1 + 0x44) = &DAT_0050a39f;
    *(undefined **)(param_1 + 0x48) = &DAT_0050a39f;
    param_1[0x42] = 6;
    param_1[0x46] = 6;
    param_1[0x4a] = 6;
    *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) & 0xfffe;
    pbVar4 = &DAT_0050a39f;
  }
  else {
    bVar2 = *pbVar3;
    pbVar4 = *(byte **)(pbVar3 + 0x10);
    param_1[0x42] = 6;
    if ((bVar2 & 1) == 0) {
      pbVar4 = pbVar3 + 1;
    }
    *(ushort *)puVar1 = *(ushort *)puVar1 & 0xfffe;
    *(byte **)(param_1 + 0x40) = pbVar4;
    bVar2 = pbVar3[0x18];
    pbVar5 = *(byte **)(pbVar3 + 0x28);
    param_1[0x46] = 6;
    pbVar4 = pbVar3 + 0x19;
    if ((bVar2 & 1) != 0) {
      pbVar4 = pbVar5;
    }
    *(ushort *)(param_1 + 0x47) = *(ushort *)(param_1 + 0x47) & 0xfffe;
    *(byte **)(param_1 + 0x44) = pbVar4;
    bVar2 = pbVar3[0x30];
    pbVar5 = *(byte **)(pbVar3 + 0x40);
    param_1[0x4a] = 6;
    pbVar4 = pbVar3 + 0x31;
    if ((bVar2 & 1) != 0) {
      pbVar4 = pbVar5;
    }
    *(byte **)(param_1 + 0x48) = pbVar4;
    *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) & 0xfffe;
    pbVar4 = pbVar3 + 0x49;
    if ((pbVar3[0x48] & 1) != 0) {
      pbVar4 = *(byte **)(pbVar3 + 0x58);
    }
  }
  *(byte **)(param_1 + 0x4c) = pbVar4;
  param_1[0x4e] = 6;
  *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) & 0xfffe;
  return;
}


