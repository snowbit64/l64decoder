// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Assign
// Entry Point: 00be8ad4
// Size: 340 bytes
// Signature: undefined __thiscall Assign(SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned char, CryptoPP::AllocatorWithCleanup<unsigned char, false>
   >::Assign(CryptoPP::SecBlock<unsigned char, CryptoPP::AllocatorWithCleanup<unsigned char, false>
   > const&) */

void __thiscall
CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::Assign
          (SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *this,
          SecBlock *param_1)

{
  ulong uVar1;
  long lVar2;
  void *__dest;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (this != (SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)param_1
     ) {
    uVar1 = *(ulong *)(this + 0x10);
    __dest = *(void **)(this + 0x18);
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar1 != uVar6) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined *)((long)__dest + (uVar1 - 1)) = 0;
      }
      UnalignedDeallocate(__dest);
      if (uVar6 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = (void *)UnalignedAllocate(uVar6);
      }
    }
    *(ulong *)(this + 0x10) = uVar6;
    *(void **)(this + 0x18) = __dest;
    *(undefined8 *)(this + 8) = 0xffffffffffffffff;
    if ((__dest != (void *)0x0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      if (uVar6 < *(size_t *)(param_1 + 0x10)) {
        puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00be8ba4 to 00be8bab has its CatchHandler @ 00be8c64 */
        puVar4 = (undefined8 *)operator_new(0x20);
        puVar4[1] = 0x726566667562203a;
        *puVar4 = 0x735f7970636d656d;
        *(undefined8 *)((long)puVar4 + 0x11) = 0x776f6c667265766f;
        *(undefined8 *)((long)puVar4 + 9) = 0x2072656666756220;
        *(undefined *)((long)puVar4 + 0x19) = 0;
        *(undefined4 *)(puVar3 + 1) = 1;
        *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00be8bf4 to 00be8bfb has its CatchHandler @ 00be8c44 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar3 + 2));
        *puVar3 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00be8c0c to 00be8c23 has its CatchHandler @ 00be8c28 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      memcpy(__dest,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 0x10));
    }
  }
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


