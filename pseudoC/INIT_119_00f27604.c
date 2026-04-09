// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_119
// Entry Point: 00f27604
// Size: 156 bytes
// Signature: undefined _INIT_119(void)


void _INIT_119(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  char acStack_6c [92];
  
  uVar3 = getauxval(0x10);
  if (((uint)uVar3 >> 8 & 1) != 0) {
    iVar2 = __system_property_get("ro.arch",acStack_6c);
    uVar1 = (uint)((ulong)uVar3 >> 8);
    if (iVar2 < 1) {
      uVar4 = uVar1 & 1;
    }
    else {
      iVar2 = strncmp(acStack_6c,"exynos9810",10);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = uVar1 & 1;
      }
    }
    DAT_02124b00 = uVar4 != 0;
    return;
  }
  DAT_02124b00 = 0;
  return;
}


