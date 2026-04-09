// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_control_SNR
// Entry Point: 00e98d50
// Size: 192 bytes
// Signature: undefined silk_control_SNR(void)


undefined8 silk_control_SNR(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x11e0);
  *(int *)(param_1 + 0x1200) = param_2;
  if (*(int *)(param_1 + 0x11e4) == 2) {
    iVar1 = iVar2 + 0xf;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    param_2 = (param_2 - (iVar1 >> 4)) + -2000;
  }
  if (iVar2 == 8) {
    uVar5 = 0x6a;
    puVar4 = &UNK_00568f62;
  }
  else if (iVar2 == 0xc) {
    uVar5 = 0x9a;
    puVar4 = &DAT_00568fcd;
  }
  else {
    uVar5 = 0xbe;
    puVar4 = &UNK_00569068;
  }
  uVar3 = (param_2 + 200) / 400 - 10;
  if ((int)uVar5 <= (int)uVar3) {
    uVar3 = uVar5;
  }
  if (0 < (int)uVar3) {
    *(uint *)(param_1 + 0x127c) = (uint)(byte)puVar4[uVar3] * 0x15;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x127c) = 0;
  return 0;
}


