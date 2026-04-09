// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecBlock
// Entry Point: 00cb6520
// Size: 60 bytes
// Signature: undefined __thiscall ~SecBlock(SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> * this)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::AllocatorWithCleanup<unsigned int, false>
   >::~SecBlock() */

void __thiscall
CryptoPP::SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::~SecBlock
          (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x18);
  uVar1 = *(ulong *)(this + 8);
  if (*(ulong *)(this + 0x10) <= *(ulong *)(this + 8)) {
    uVar1 = *(ulong *)(this + 0x10);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb6550 to 00cb6553 has its CatchHandler @ 00cb655c */
  UnalignedDeallocate(pvVar2);
  return;
}


