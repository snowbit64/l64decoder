// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Parity
// Entry Point: 00ce3d58
// Size: 76 bytes
// Signature: undefined Parity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PolynomialMod2::Parity() const */

uint CryptoPP::PolynomialMod2::Parity(void)

{
  long lVar1;
  long in_x0;
  uint uVar2;
  ulong uVar3;
  
  if (*(ulong *)(in_x0 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    do {
      lVar1 = uVar3 * 4;
      uVar3 = (ulong)((int)uVar3 + 1);
      uVar2 = *(uint *)(*(long *)(in_x0 + 0x18) + lVar1) ^ uVar2;
    } while (uVar3 < *(ulong *)(in_x0 + 0x10));
  }
  uVar2 = uVar2 ^ uVar2 >> 0x10;
  uVar2 = uVar2 ^ uVar2 >> 8;
  uVar2 = uVar2 ^ uVar2 >> 4;
  uVar2 = uVar2 ^ uVar2 >> 2;
  return (uVar2 ^ uVar2 >> 1) & 1;
}


