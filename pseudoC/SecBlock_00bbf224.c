// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SecBlock
// Entry Point: 00bbf224
// Size: 296 bytes
// Signature: undefined __thiscall SecBlock(SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::AllocatorWithCleanup<unsigned int, true>
   >::SecBlock(CryptoPP::SecBlock<unsigned int, CryptoPP::AllocatorWithCleanup<unsigned int, true> >
   const&) */

void __thiscall
CryptoPP::SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::SecBlock
          (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *this,
          SecBlock *param_1)

{
  long lVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar6;
  uVar5 = *(ulong *)(param_1 + 0x10);
  AllocatorBase<unsigned_int>::CheckSize(uVar5);
  if (uVar5 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar5 << 2);
  }
  *(void **)(this + 0x18) = __dest;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    uVar5 = *(long *)(param_1 + 0x10) * 4;
    if ((ulong)(*(long *)(this + 0x10) * 4) <= uVar5 && uVar5 + *(long *)(this + 0x10) * -4 != 0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00bbf2c8 to 00bbf2cf has its CatchHandler @ 00bbf388 */
      puVar3 = (undefined8 *)operator_new(0x20);
      puVar3[1] = 0x726566667562203a;
      *puVar3 = 0x735f7970636d656d;
      *(undefined8 *)((long)puVar3 + 0x11) = 0x776f6c667265766f;
      *(undefined8 *)((long)puVar3 + 9) = 0x2072656666756220;
      *(undefined *)((long)puVar3 + 0x19) = 0;
      *(undefined4 *)(puVar2 + 1) = 1;
      *puVar2 = &PTR__Exception_00fe0298;
                    /* try { // try from 00bbf318 to 00bbf31f has its CatchHandler @ 00bbf368 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar2 + 2));
      *puVar2 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00bbf330 to 00bbf347 has its CatchHandler @ 00bbf34c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    memcpy(__dest,*(void **)(param_1 + 0x18),uVar5);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


