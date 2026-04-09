// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecBlock
// Entry Point: 00ce5e48
// Size: 60 bytes
// Signature: undefined __thiscall ~SecBlock(SecBlock<char,CryptoPP::AllocatorWithCleanup<char,false>> * this)


/* CryptoPP::SecBlock<char, CryptoPP::AllocatorWithCleanup<char, false> >::~SecBlock() */

void __thiscall
CryptoPP::SecBlock<char,CryptoPP::AllocatorWithCleanup<char,false>>::~SecBlock
          (SecBlock<char,CryptoPP::AllocatorWithCleanup<char,false>> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x18);
  uVar1 = *(ulong *)(this + 8);
  if (*(ulong *)(this + 0x10) <= *(ulong *)(this + 8)) {
    uVar1 = *(ulong *)(this + 0x10);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00ce5e78 to 00ce5e7b has its CatchHandler @ 00ce5e84 */
  UnalignedDeallocate(pvVar2);
  return;
}


