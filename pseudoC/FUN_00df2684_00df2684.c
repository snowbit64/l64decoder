// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df2684
// Entry Point: 00df2684
// Size: 176 bytes
// Signature: undefined FUN_00df2684(void)


uint FUN_00df2684(undefined8 param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = oc_pack_read(param_1,3);
  iVar3 = (int)uVar1;
  if (uVar1 < 5) {
    uVar2 = 0;
    switch(uVar1) {
    case 0:
      goto switchD_00df26c0_caseD_0;
    case 1:
      return 1;
    case 2:
      return 0xffffffff;
    default:
      iVar3 = iVar3 + -1;
      uVar2 = oc_pack_read1(param_1);
    }
  }
  else {
    uVar1 = oc_pack_read(param_1,iVar3 + -2);
    iVar3 = (1 << (ulong)(iVar3 - 3U & 0x1f)) + (int)(uVar1 >> 1);
    uVar2 = (uint)uVar1 & 1;
  }
  uVar2 = iVar3 - uVar2 ^ -uVar2;
switchD_00df26c0_caseD_0:
  return uVar2;
}


