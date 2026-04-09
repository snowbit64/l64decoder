// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecBlock
// Entry Point: 00d1f824
// Size: 68 bytes
// Signature: undefined __thiscall ~SecBlock(SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,32ul,CryptoPP::NullAllocator<unsigned_char>,true>> * this)


/* CryptoPP::SecBlock<unsigned char, CryptoPP::FixedSizeAllocatorWithCleanup<unsigned char, 32ul,
   CryptoPP::NullAllocator<unsigned char>, true> >::~SecBlock() */

void __thiscall
CryptoPP::
SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,32ul,CryptoPP::NullAllocator<unsigned_char>,true>>
::~SecBlock(SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,32ul,CryptoPP::NullAllocator<unsigned_char>,true>>
            *this)

{
  ulong uVar1;
  SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,32ul,CryptoPP::NullAllocator<unsigned_char>,true>>
  *pSVar2;
  
  pSVar2 = *(SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,32ul,CryptoPP::NullAllocator<unsigned_char>,true>>
             **)(this + 0x40);
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  if (this + ((ulong)(uint)-(int)this & 8) == pSVar2) {
    this[0x29] = (SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,32ul,CryptoPP::NullAllocator<unsigned_char>,true>>
                  )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      pSVar2[uVar1 - 1] =
           (SecBlock<unsigned_char,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_char,32ul,CryptoPP::NullAllocator<unsigned_char>,true>>
            )0x0;
    }
  }
  return;
}


