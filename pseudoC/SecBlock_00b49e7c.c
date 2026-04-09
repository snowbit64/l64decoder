// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SecBlock
// Entry Point: 00b49e7c
// Size: 296 bytes
// Signature: undefined __thiscall SecBlock(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::FixedSizeAllocatorWithCleanup<unsigned int, 16ul,
   CryptoPP::NullAllocator<unsigned int>, true> >::SecBlock(CryptoPP::SecBlock<unsigned int,
   CryptoPP::FixedSizeAllocatorWithCleanup<unsigned int, 16ul, CryptoPP::NullAllocator<unsigned
   int>, true> > const&) */

void __thiscall
CryptoPP::
SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
::SecBlock(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
           *this,SecBlock *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  *__dest;
  long lVar5;
  ulong uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  this[0x49] = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
                )0x0;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  lVar5 = *(long *)(param_1 + 0x58);
  *(long *)(this + 0x58) = lVar5;
  uVar6 = *(ulong *)(param_1 + 0x58);
  if (uVar6 < 0x11) {
    __dest = this + ((ulong)(uint)-(int)this & 8);
    this[0x49] = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
                  )0x1;
  }
  else {
    __dest = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
              *)0x0;
  }
  *(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
    **)(this + 0x60) = __dest;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    uVar6 = uVar6 * 4;
    if ((ulong)(lVar5 * 4) <= uVar6 && uVar6 + lVar5 * -4 != 0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00b49f20 to 00b49f27 has its CatchHandler @ 00b49fe0 */
      puVar3 = (undefined8 *)operator_new(0x20);
      puVar3[1] = 0x726566667562203a;
      *puVar3 = 0x735f7970636d656d;
      *(undefined8 *)((long)puVar3 + 0x11) = 0x776f6c667265766f;
      *(undefined8 *)((long)puVar3 + 9) = 0x2072656666756220;
      *(undefined *)((long)puVar3 + 0x19) = 0;
      *(undefined4 *)(puVar2 + 1) = 1;
      *puVar2 = &PTR__Exception_00fe0298;
                    /* try { // try from 00b49f70 to 00b49f77 has its CatchHandler @ 00b49fc0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar2 + 2));
      *puVar2 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00b49f88 to 00b49f9f has its CatchHandler @ 00b49fa4 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    memcpy(__dest,*(void **)(param_1 + 0x60),uVar6);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


