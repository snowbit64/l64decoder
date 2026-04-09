// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00a99ed4
// Size: 88 bytes
// Signature: undefined initialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftVirtualTexture::initialize() */

uint SoftVirtualTexture::initialize(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long in_x0;
  int iVar5;
  
  uVar4 = SoftVirtualTextureDesc::validateAndFix();
  if ((uVar4 & 1) != 0) {
    *(int *)(in_x0 + 0x5c) = *(int *)(in_x0 + 0xc);
    iVar5 = (int)(1L << ((ulong)*(uint *)(in_x0 + 8) & 0x3f));
    uVar1 = iVar5 + *(int *)(in_x0 + 0xc) * 2;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(in_x0 + 0x10) / uVar1;
    }
    *(int *)(in_x0 + 0x44) = iVar5;
    *(uint *)(in_x0 + 0x48) = *(uint *)(in_x0 + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(uint *)(in_x0 + 0x14) / uVar1;
    }
    *(uint *)(in_x0 + 0x4c) = uVar1;
    *(uint *)(in_x0 + 0x50) = uVar2;
    *(uint *)(in_x0 + 0x54) = uVar3;
    *(uint *)(in_x0 + 0x58) = uVar3 * uVar2;
  }
  return uVar4 & 1;
}


