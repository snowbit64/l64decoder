// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecBlock
// Entry Point: 00d1f868
// Size: 68 bytes
// Signature: undefined __thiscall ~SecBlock(SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,16ul,CryptoPP::NullAllocator<unsigned_char>,true>> * this)


/* CryptoPP::SecBlock<unsigned char, CryptoPP::FixedSizeAllocatorWithCleanup<unsigned char, 16ul,
   CryptoPP::NullAllocator<unsigned char>, true> >::~SecBlock() */

void __thiscall
CryptoPP::
SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,16ul,CryptoPP::NullAllocator<unsigned_char>,true>>
::~SecBlock(SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,16ul,CryptoPP::NullAllocator<unsigned_char>,true>>
            *this)

{
  ulong uVar1;
  SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,16ul,CryptoPP::NullAllocator<unsigned_char>,true>>
  *pSVar2;
  
  pSVar2 = *(SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,16ul,CryptoPP::NullAllocator<unsigned_char>,true>>
             **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  if (this + ((ulong)(uint)-(int)this & 8) == pSVar2) {
    this[0x19] = (SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,16ul,CryptoPP::NullAllocator<unsigned_char>,true>>
                  )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      pSVar2[uVar1 - 1] =
           (SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,16ul,CryptoPP::NullAllocator<unsigned_char>,true>>
            )0x0;
    }
  }
  return;
}


