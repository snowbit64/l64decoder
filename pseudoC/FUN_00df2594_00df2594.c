// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df2594
// Entry Point: 00df2594
// Size: 196 bytes
// Signature: undefined FUN_00df2594(void)


ulong FUN_00df2594(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = oc_pack_read1();
  if ((int)uVar2 != 0) {
    iVar1 = oc_pack_read1(param_1);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = oc_pack_read1(param_1);
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = oc_pack_read1(param_1);
    if (iVar1 == 0) {
      return 3;
    }
    iVar1 = oc_pack_read1(param_1);
    if (iVar1 == 0) {
      return 4;
    }
    iVar1 = oc_pack_read1(param_1);
    if (iVar1 == 0) {
      return 5;
    }
    iVar1 = oc_pack_read1(param_1);
    uVar3 = 6;
    if (iVar1 != 0) {
      uVar3 = 7;
    }
    uVar2 = (ulong)uVar3;
  }
  return uVar2;
}


