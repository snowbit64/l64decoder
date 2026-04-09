// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecBlock
// Entry Point: 00b4ad5c
// Size: 60 bytes
// Signature: undefined __thiscall ~SecBlock(SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> * this)


/* CryptoPP::SecBlock<unsigned char, CryptoPP::AllocatorWithCleanup<unsigned char, false>
   >::~SecBlock() */

void __thiscall
CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::~SecBlock
          (SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *this)

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
                    /* try { // try from 00b4ad8c to 00b4ad8f has its CatchHandler @ 00b4ad98 */
  UnalignedDeallocate(pvVar2);
  return;
}


