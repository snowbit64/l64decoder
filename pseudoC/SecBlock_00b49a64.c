// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecBlock
// Entry Point: 00b49a64
// Size: 68 bytes
// Signature: undefined __thiscall ~SecBlock(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>> * this)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::FixedSizeAllocatorWithCleanup<unsigned int, 16ul,
   CryptoPP::NullAllocator<unsigned int>, true> >::~SecBlock() */

void __thiscall
CryptoPP::
SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
::~SecBlock(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
            *this)

{
  ulong uVar1;
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  *pSVar2;
  
  pSVar2 = *(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
             **)(this + 0x60);
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  if (this + ((ulong)(uint)-(int)this & 8) == pSVar2) {
    this[0x49] = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
                  )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pSVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  return;
}


