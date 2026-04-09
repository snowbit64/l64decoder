// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SecBlock
// Entry Point: 00bbf39c
// Size: 272 bytes
// Signature: undefined __thiscall SecBlock(SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned char, CryptoPP::AllocatorWithCleanup<unsigned char, false>
   >::SecBlock(CryptoPP::SecBlock<unsigned char, CryptoPP::AllocatorWithCleanup<unsigned char,
   false> > const&) */

void __thiscall
CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
          (SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *this,
          SecBlock *param_1)

{
  long lVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar5;
  __dest = *(void **)(param_1 + 0x10);
  if (__dest != (void *)0x0) {
    __dest = (void *)UnalignedAllocate((ulong)__dest);
  }
  *(void **)(this + 0x18) = __dest;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    if (*(ulong *)(this + 0x10) < *(size_t *)(param_1 + 0x10)) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00bbf428 to 00bbf42f has its CatchHandler @ 00bbf4e8 */
      puVar3 = (undefined8 *)operator_new(0x20);
      puVar3[1] = 0x726566667562203a;
      *puVar3 = 0x735f7970636d656d;
      *(undefined8 *)((long)puVar3 + 0x11) = 0x776f6c667265766f;
      *(undefined8 *)((long)puVar3 + 9) = 0x2072656666756220;
      *(undefined *)((long)puVar3 + 0x19) = 0;
      *(undefined4 *)(puVar2 + 1) = 1;
      *puVar2 = &PTR__Exception_00fe0298;
                    /* try { // try from 00bbf478 to 00bbf47f has its CatchHandler @ 00bbf4c8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar2 + 2));
      *puVar2 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00bbf490 to 00bbf4a7 has its CatchHandler @ 00bbf4ac */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    memcpy(__dest,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


