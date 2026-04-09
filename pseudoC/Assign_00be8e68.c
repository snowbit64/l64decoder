// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Assign
// Entry Point: 00be8e68
// Size: 428 bytes
// Signature: undefined __thiscall Assign(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::FixedSizeAllocatorWithCleanup<unsigned int, 16ul,
   CryptoPP::NullAllocator<unsigned int>, true> >::Assign(CryptoPP::SecBlock<unsigned int,
   CryptoPP::FixedSizeAllocatorWithCleanup<unsigned int, 16ul, CryptoPP::NullAllocator<unsigned
   int>, true> > const&) */

void __thiscall
CryptoPP::
SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
::Assign(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
         *this,SecBlock *param_1)

{
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  *pSVar1;
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  *pSVar2;
  long lVar3;
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  *__dest;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (this != (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
               *)param_1) {
    uVar8 = *(ulong *)(param_1 + 0x58);
    uVar7 = *(ulong *)(this + 0x58);
    pSVar2 = *(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
               **)(this + 0x60);
    pSVar1 = this + ((ulong)(uint)-(int)this & 8);
    if ((uVar8 < 0x11) && (pSVar2 == pSVar1)) {
      __dest = pSVar2;
      if (uVar8 < uVar7) {
        for (; uVar7 != uVar8; uVar7 = uVar7 - 1) {
          *(undefined4 *)(pSVar2 + uVar7 * 4 + -4) = 0;
        }
      }
    }
    else {
      if ((uVar8 < 0x11) &&
         (this[0x49] ==
          (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
           )0x0)) {
        this[0x49] = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
                      )0x1;
        __dest = pSVar1;
      }
      else {
        __dest = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
                  *)0x0;
      }
      if (pSVar1 == pSVar2) {
        this[0x49] = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
                      )0x0;
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)(pSVar2 + uVar7 * 4 + -4) = 0;
        }
      }
    }
    *(ulong *)(this + 0x58) = uVar8;
    *(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
      **)(this + 0x60) = __dest;
    *(undefined8 *)(this + 0x50) = 0x3fffffffffffffff;
    if ((__dest != (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
                    *)0x0) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
      uVar7 = *(long *)(param_1 + 0x58) * 4;
      if (uVar8 * 4 <= uVar7 && uVar7 + uVar8 * -4 != 0) {
        puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00be8f90 to 00be8f97 has its CatchHandler @ 00be9050 */
        puVar5 = (undefined8 *)operator_new(0x20);
        puVar5[1] = 0x726566667562203a;
        *puVar5 = 0x735f7970636d656d;
        *(undefined8 *)((long)puVar5 + 0x11) = 0x776f6c667265766f;
        *(undefined8 *)((long)puVar5 + 9) = 0x2072656666756220;
        *(undefined *)((long)puVar5 + 0x19) = 0;
        *(undefined4 *)(puVar4 + 1) = 1;
        *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00be8fe0 to 00be8fe7 has its CatchHandler @ 00be9030 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar4 + 2));
        *puVar4 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00be8ff8 to 00be900f has its CatchHandler @ 00be9014 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar4,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      memcpy(__dest,*(void **)(param_1 + 0x60),uVar7);
    }
  }
  *(undefined8 *)(this + 0x50) = 0x3fffffffffffffff;
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


