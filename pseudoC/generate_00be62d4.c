// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generate
// Entry Point: 00be62d4
// Size: 232 bytes
// Signature: undefined __thiscall generate(SecureRandomGenerator * this, void * param_1, uint param_2)


/* SecureRandomGenerator::generate(void*, unsigned int) */

void __thiscall
SecureRandomGenerator::generate(SecureRandomGenerator *this,void *param_1,uint param_2)

{
  SecureRandomGenerator *__src;
  uint uVar1;
  uchar *__dest;
  uint uVar2;
  
  if (*(int *)(this + 0x29c) != *(int *)(*(long *)(this + 0x2a0) + 0x58)) {
    reseed();
  }
  uVar2 = *(uint *)(this + 0x298);
  uVar1 = 0x200 - uVar2;
  if (param_2 < uVar1) {
    memcpy(param_1,this + (ulong)uVar2 + 0x98,(ulong)param_2);
    uVar2 = *(int *)(this + 0x298) + param_2;
  }
  else {
    __src = this + 0x98;
    memcpy(param_1,__src + uVar2,(ulong)uVar1);
    uVar2 = param_2 - uVar1;
    __dest = (uchar *)((long)param_1 + (ulong)uVar1);
    if (0x1ff < uVar2) {
      uVar1 = uVar2 & 0xfffffe00;
      CryptoPP::RandomNumberGenerator::GenerateBlock
                ((RandomNumberGenerator *)this,__dest,(ulong)uVar1);
      uVar2 = uVar2 & 0x1ff;
      __dest = __dest + uVar1;
    }
    CryptoPP::RandomNumberGenerator::GenerateBlock
              ((RandomNumberGenerator *)this,(uchar *)__src,0x200);
    memcpy(__dest,__src,(ulong)uVar2);
  }
  *(uint *)(this + 0x298) = uVar2;
  return;
}


