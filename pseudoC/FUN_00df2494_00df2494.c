// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df2494
// Entry Point: 00df2494
// Size: 232 bytes
// Signature: undefined FUN_00df2494(void)


int FUN_00df2494(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = oc_pack_read1();
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = oc_pack_read(param_1,2);
  if ((uVar2 >> 1 & 1) == 0) {
    return uVar2 + 2;
  }
  if ((uVar2 & 1) == 0) {
    iVar1 = oc_pack_read1(param_1);
    return iVar1 + 4;
  }
  uVar2 = oc_pack_read(param_1,3);
  if ((uVar2 >> 2 & 1) == 0) {
    return uVar2 + 6;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    iVar1 = oc_pack_read(param_1,2);
    return iVar1 + (uVar2 & 1) * 4 + 10;
  }
  if ((uVar2 & 1) == 0) {
    iVar1 = oc_pack_read(param_1,4);
    return iVar1 + 0x12;
  }
  iVar1 = oc_pack_read(param_1,0xc);
  return iVar1 + 0x22;
}


