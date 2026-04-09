// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PadLastBlock
// Entry Point: 00d0818c
// Size: 216 bytes
// Signature: undefined __thiscall PadLastBlock(IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> * this, uint param_1, uchar param_2)


/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::HashTransformation>::PadLastBlock(unsigned
   int, unsigned char) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::PadLastBlock
          (IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *this,uint param_1,
          uchar param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *__s;
  
  iVar3 = (**(code **)(*(long *)this + 0x50))();
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
  }
  uVar2 = uVar2 & *(uint *)(this + 8);
  __s = (void *)(**(code **)(*(long *)this + 0xc0))(this);
  uVar1 = uVar2 + 1;
  *(uchar *)((long)__s + (ulong)uVar2) = param_2;
  if (uVar2 < param_1) {
    memset((void *)((long)__s + (ulong)uVar1),0,(ulong)(param_1 - uVar1));
    return;
  }
  memset((void *)((long)__s + (ulong)uVar1),0,(ulong)(iVar3 - uVar1));
  uVar4 = (**(code **)(*(long *)this + 0x50))(this);
  (**(code **)(*(long *)this + 0xb8))(this,__s,uVar4);
  memset(__s,0,(ulong)param_1);
  return;
}


