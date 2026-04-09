// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IncorporateEntropy
// Entry Point: 00d1fcec
// Size: 160 bytes
// Signature: undefined __thiscall IncorporateEntropy(OldRandomPool * this, uchar * param_1, ulong param_2)


/* CryptoPP::OldRandomPool::IncorporateEntropy(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::OldRandomPool::IncorporateEntropy(OldRandomPool *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x48);
  uVar2 = *(long *)(this + 0x18) - lVar1;
  if (uVar2 < param_2) {
    do {
      xorbuf((uchar *)(*(long *)(this + 0x20) + lVar1),param_1,uVar2);
      param_1 = param_1 + uVar2;
      param_2 = param_2 - uVar2;
      Stir();
      lVar1 = *(long *)(this + 0x48);
      uVar2 = *(long *)(this + 0x18) - lVar1;
    } while (uVar2 < param_2);
  }
  if (param_2 != 0) {
    xorbuf((uchar *)(*(long *)(this + 0x20) + lVar1),param_1,param_2);
    *(ulong *)(this + 0x48) = *(long *)(this + 0x48) + param_2;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x18);
  }
  return;
}


