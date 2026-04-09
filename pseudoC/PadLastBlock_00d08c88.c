// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PadLastBlock
// Entry Point: 00d08c88
// Size: 212 bytes
// Signature: undefined __thiscall PadLastBlock(IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> * this, uint param_1, uchar param_2)


/* CryptoPP::IteratedHashBase<unsigned int,
   CryptoPP::MessageAuthenticationCode>::PadLastBlock(unsigned int, unsigned char) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode>::PadLastBlock
          (IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> *this,uint param_1,
          uchar param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *__s;
  size_t __n;
  long *plVar5;
  
  plVar5 = (long *)(this + 8);
  iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
  }
  uVar2 = uVar2 & *(uint *)(this + 0x10);
  __s = (void *)(**(code **)(*(long *)this + 0xd8))(this);
  uVar1 = uVar2 + 1;
  *(uchar *)((long)__s + (ulong)uVar2) = param_2;
  if (uVar2 < param_1) {
    __n = (size_t)(param_1 - uVar1);
    __s = (void *)((long)__s + (ulong)uVar1);
  }
  else {
    memset((void *)((long)__s + (ulong)uVar1),0,(ulong)(iVar3 - uVar1));
    uVar4 = (**(code **)(*(long *)(this + 8) + 0x50))(plVar5);
    (**(code **)(*(long *)this + 0xd0))(this,__s,uVar4);
    __n = (size_t)param_1;
  }
  memset(__s,0,__n);
  return;
}


