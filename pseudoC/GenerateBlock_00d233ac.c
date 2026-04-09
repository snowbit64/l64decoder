// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00d233ac
// Size: 92 bytes
// Signature: undefined __thiscall GenerateBlock(LC_RNG * this, uchar * param_1, ulong param_2)


/* CryptoPP::LC_RNG::GenerateBlock(unsigned char*, unsigned long) */

void __thiscall CryptoPP::LC_RNG::GenerateBlock(LC_RNG *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    do {
      param_2 = param_2 - 1;
      iVar2 = *(uint *)(this + 8) * 0xbc8f + (*(uint *)(this + 8) / 0xadc8) * -0x7fffffff;
      iVar1 = 0x7fffffff;
      if (iVar2 != 0) {
        iVar1 = iVar2;
      }
      *(int *)(this + 8) = iVar1;
      *param_1 = (byte)iVar1 ^ (byte)((uint)iVar1 >> 8) ^ (byte)((uint)iVar1 >> 0x10) ^
                 (byte)((uint)iVar1 >> 0x18);
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


