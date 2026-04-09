// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AuthenticateLastConfidentialBlock
// Entry Point: 00ce275c
// Size: 124 bytes
// Signature: undefined AuthenticateLastConfidentialBlock(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GCM_Base::AuthenticateLastConfidentialBlock() */

void CryptoPP::GCM_Base::AuthenticateLastConfidentialBlock(void)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  GCM_Base *in_x0;
  
  uVar2 = *(uint *)(in_x0 + 0x50);
  if (uVar2 != 0) {
    memset((void *)(*(long *)(in_x0 + 0x30) + (ulong)uVar2),0,(ulong)(0x10 - uVar2));
    *(undefined4 *)(in_x0 + 0x50) = 0;
    AuthenticateBlocks(in_x0,*(uchar **)(in_x0 + 0x30),0x10);
  }
  puVar1 = *(ulong **)(in_x0 + 0x30);
  uVar3 = (*(long *)(in_x0 + 0x38) << 3 & 0xff00ff00ff00ff00U) >> 8 |
          (*(long *)(in_x0 + 0x38) << 3 & 0xff00ff00ff00ffU) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  *puVar1 = uVar3 >> 0x20 | uVar3 << 0x20;
  uVar3 = (*(long *)(in_x0 + 0x40) << 3 & 0xff00ff00ff00ff00U) >> 8 |
          (*(long *)(in_x0 + 0x40) << 3 & 0xff00ff00ff00ffU) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  puVar1[1] = uVar3 >> 0x20 | uVar3 << 0x20;
  AuthenticateBlocks(in_x0,*(uchar **)(in_x0 + 0x30),0x10);
  return;
}


