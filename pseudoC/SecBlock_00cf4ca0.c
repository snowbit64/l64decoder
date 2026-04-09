// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecBlock
// Entry Point: 00cf4ca0
// Size: 60 bytes
// Signature: undefined __thiscall ~SecBlock(SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> * this)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::AllocatorWithCleanup<unsigned int, true>
   >::~SecBlock() */

void __thiscall
CryptoPP::SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::~SecBlock
          (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *this)

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
                    /* try { // try from 00cf4cd0 to 00cf4cd3 has its CatchHandler @ 00cf4cdc */
  UnalignedDeallocate(pvVar2);
  return;
}


