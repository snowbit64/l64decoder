// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Assign
// Entry Point: 00be8c78
// Size: 416 bytes
// Signature: undefined __thiscall Assign(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::FixedSizeAllocatorWithCleanup<unsigned int, 16ul,
   CryptoPP::NullAllocator<unsigned int>, false> >::Assign(CryptoPP::SecBlock<unsigned int,
   CryptoPP::FixedSizeAllocatorWithCleanup<unsigned int, 16ul, CryptoPP::NullAllocator<unsigned
   int>, false> > const&) */

void __thiscall
CryptoPP::
SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
::Assign(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
         *this,SecBlock *param_1)

{
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  *pSVar1;
  long lVar2;
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  *__dest;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (this != (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
               *)param_1) {
    uVar6 = *(ulong *)(this + 0x50);
    pSVar1 = *(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
               **)(this + 0x58);
    uVar7 = *(ulong *)(param_1 + 0x50);
    if ((uVar7 < 0x11) && (this == pSVar1)) {
      __dest = pSVar1;
      if (uVar7 < uVar6) {
        for (; uVar6 != uVar7; uVar6 = uVar6 - 1) {
          *(undefined4 *)(pSVar1 + uVar6 * 4 + -4) = 0;
        }
      }
    }
    else {
      if ((uVar7 < 0x11) &&
         (this[0x41] ==
          (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
           )0x0)) {
        this[0x41] = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
                      )0x1;
        __dest = this;
      }
      else {
        __dest = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
                  *)0x0;
      }
      if (this == pSVar1) {
        this[0x41] = (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
                      )0x0;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)(pSVar1 + uVar6 * 4 + -4) = 0;
        }
      }
    }
    *(ulong *)(this + 0x50) = uVar7;
    *(SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
      **)(this + 0x58) = __dest;
    *(undefined8 *)(this + 0x48) = 0x3fffffffffffffff;
    if ((__dest != (SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
                    *)0x0) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
      uVar6 = *(long *)(param_1 + 0x50) * 4;
      if (uVar7 * 4 <= uVar6 && uVar6 + uVar7 * -4 != 0) {
        puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00be8d94 to 00be8d9b has its CatchHandler @ 00be8e54 */
        puVar4 = (undefined8 *)operator_new(0x20);
        puVar4[1] = 0x726566667562203a;
        *puVar4 = 0x735f7970636d656d;
        *(undefined8 *)((long)puVar4 + 0x11) = 0x776f6c667265766f;
        *(undefined8 *)((long)puVar4 + 9) = 0x2072656666756220;
        *(undefined *)((long)puVar4 + 0x19) = 0;
        *(undefined4 *)(puVar3 + 1) = 1;
        *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00be8de4 to 00be8deb has its CatchHandler @ 00be8e34 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar3 + 2));
        *puVar3 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00be8dfc to 00be8e13 has its CatchHandler @ 00be8e18 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      memcpy(__dest,*(void **)(param_1 + 0x58),uVar6);
    }
  }
  *(undefined8 *)(this + 0x48) = 0x3fffffffffffffff;
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


