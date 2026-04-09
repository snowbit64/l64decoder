// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SecBlock
// Entry Point: 00d272e0
// Size: 308 bytes
// Signature: undefined __thiscall SecBlock(SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned long, CryptoPP::FixedSizeAllocatorWithCleanup<unsigned long, 16ul,
   CryptoPP::NullAllocator<unsigned long>, true> >::SecBlock(CryptoPP::SecBlock<unsigned long,
   CryptoPP::FixedSizeAllocatorWithCleanup<unsigned long, 16ul, CryptoPP::NullAllocator<unsigned
   long>, true> > const&) */

void __thiscall
CryptoPP::
SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
::SecBlock(SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
           *this,SecBlock *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__src;
  long lVar4;
  SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
  *__dest;
  long lVar5;
  ulong uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  this[0x89] = (SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
                )0x0;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  lVar5 = *(long *)(param_1 + 0x98);
  *(long *)(this + 0x98) = lVar5;
  uVar6 = *(ulong *)(param_1 + 0x98);
  if (uVar6 < 0x11) {
    __dest = this + ((ulong)(uint)-(int)this & 8);
    this[0x89] = (SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
                  )0x1;
    *(SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
      **)(this + 0xa0) = __dest;
    __src = *(void **)(param_1 + 0xa0);
  }
  else {
    __dest = (SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
              *)0x0;
    *(undefined8 *)(this + 0xa0) = 0;
    __src = *(void **)(param_1 + 0xa0);
  }
  if (__src != (void *)0x0) {
    uVar6 = uVar6 * 8;
    if ((ulong)(lVar5 * 8) <= uVar6 && uVar6 + lVar5 * -8 != 0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d27390 to 00d27397 has its CatchHandler @ 00d27450 */
      puVar3 = (undefined8 *)operator_new(0x20);
      puVar3[1] = 0x726566667562203a;
      *puVar3 = 0x735f7970636d656d;
      *(undefined8 *)((long)puVar3 + 0x11) = 0x776f6c667265766f;
      *(undefined8 *)((long)puVar3 + 9) = 0x2072656666756220;
      *(undefined *)((long)puVar3 + 0x19) = 0;
      *(undefined4 *)(puVar2 + 1) = 1;
      *puVar2 = &PTR__Exception_00fe0298;
                    /* try { // try from 00d273e0 to 00d273e7 has its CatchHandler @ 00d27430 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar2 + 2));
      *puVar2 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00d273f8 to 00d2740f has its CatchHandler @ 00d27414 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    memcpy(__dest,__src,uVar6);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


