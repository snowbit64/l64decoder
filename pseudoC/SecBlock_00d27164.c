// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SecBlock
// Entry Point: 00d27164
// Size: 300 bytes
// Signature: undefined __thiscall SecBlock(SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>> * this, SecBlock * param_1)


/* CryptoPP::SecBlock<unsigned long, CryptoPP::FixedSizeAllocatorWithCleanup<unsigned long, 16ul,
   CryptoPP::NullAllocator<unsigned long>, false> >::SecBlock(CryptoPP::SecBlock<unsigned long,
   CryptoPP::FixedSizeAllocatorWithCleanup<unsigned long, 16ul, CryptoPP::NullAllocator<unsigned
   long>, false> > const&) */

void __thiscall
CryptoPP::
SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>>
::SecBlock(SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>>
           *this,SecBlock *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__src;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  this[0x81] = (SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>>
                )0x0;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  lVar5 = *(long *)(param_1 + 0x90);
  *(long *)(this + 0x90) = lVar5;
  uVar6 = *(ulong *)(param_1 + 0x90);
  if (uVar6 < 0x11) {
    this[0x81] = (SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>>
                  )0x1;
    *(SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>>
      **)(this + 0x98) = this;
    __src = *(void **)(param_1 + 0x98);
  }
  else {
    *(undefined8 *)(this + 0x98) = 0;
    __src = *(void **)(param_1 + 0x98);
    this = (SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>>
            *)0x0;
  }
  if (__src != (void *)0x0) {
    uVar6 = uVar6 * 8;
    if ((ulong)(lVar5 * 8) <= uVar6 && uVar6 + lVar5 * -8 != 0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d2720c to 00d27213 has its CatchHandler @ 00d272cc */
      puVar3 = (undefined8 *)operator_new(0x20);
      puVar3[1] = 0x726566667562203a;
      *puVar3 = 0x735f7970636d656d;
      *(undefined8 *)((long)puVar3 + 0x11) = 0x776f6c667265766f;
      *(undefined8 *)((long)puVar3 + 9) = 0x2072656666756220;
      *(undefined *)((long)puVar3 + 0x19) = 0;
      *(undefined4 *)(puVar2 + 1) = 1;
      *puVar2 = &PTR__Exception_00fe0298;
                    /* try { // try from 00d2725c to 00d27263 has its CatchHandler @ 00d272ac */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar2 + 2));
      *puVar2 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00d27274 to 00d2728b has its CatchHandler @ 00d27290 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    memcpy(this,__src,uVar6);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


