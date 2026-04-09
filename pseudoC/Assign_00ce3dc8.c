// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Assign
// Entry Point: 00ce3dc8
// Size: 368 bytes
// Signature: undefined __thiscall Assign(SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::AllocatorWithCleanup<unsigned int, false>
   >::Assign(CryptoPP::SecBlock<unsigned int, CryptoPP::AllocatorWithCleanup<unsigned int, false> >
   const&) */

void __thiscall
CryptoPP::SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
          (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *this,
          SecBlock *param_1)

{
  long lVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (this != (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)param_1)
  {
    uVar4 = *(ulong *)(this + 0x10);
    __dest = *(void **)(this + 0x18);
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar4 != uVar6) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)__dest + uVar4 * 4 + -4) = 0;
      }
      UnalignedDeallocate(__dest);
      AllocatorBase<unsigned_int>::CheckSize(uVar6);
      if (uVar6 == 0) {
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
        goto LAB_00ce3e64;
      }
      __dest = (void *)UnalignedAllocate(uVar6 << 2);
    }
    *(ulong *)(this + 0x10) = uVar6;
    *(void **)(this + 0x18) = __dest;
    *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
    if ((__dest != (void *)0x0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      uVar4 = *(long *)(param_1 + 0x10) * 4;
      if (uVar6 * 4 <= uVar4 && uVar4 + uVar6 * -4 != 0) {
        puVar2 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ce3eb4 to 00ce3ebb has its CatchHandler @ 00ce3f74 */
        puVar3 = (undefined8 *)operator_new(0x20);
        puVar3[1] = 0x726566667562203a;
        *puVar3 = 0x735f7970636d656d;
        *(undefined8 *)((long)puVar3 + 0x11) = 0x776f6c667265766f;
        *(undefined8 *)((long)puVar3 + 9) = 0x2072656666756220;
        *(undefined *)((long)puVar3 + 0x19) = 0;
        *(undefined4 *)(puVar2 + 1) = 1;
        *puVar2 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ce3f04 to 00ce3f0b has its CatchHandler @ 00ce3f54 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar2 + 2));
        *puVar2 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00ce3f1c to 00ce3f33 has its CatchHandler @ 00ce3f38 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      memcpy(__dest,*(void **)(param_1 + 0x18),uVar4);
    }
  }
LAB_00ce3e64:
  *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


