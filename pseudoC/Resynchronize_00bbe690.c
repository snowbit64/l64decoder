// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Resynchronize
// Entry Point: 00bbe690
// Size: 252 bytes
// Signature: undefined __thiscall Resynchronize(BlockOrientedCipherModeBase * this, uchar * param_1, int param_2)


/* CryptoPP::BlockOrientedCipherModeBase::Resynchronize(unsigned char const*, int) */

void __thiscall
CryptoPP::BlockOrientedCipherModeBase::Resynchronize
          (BlockOrientedCipherModeBase *this,uchar *param_1,int param_2)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  ulong __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ulong *)(this + 0x28);
  __dest = *(void **)(this + 0x30);
  __n = SimpleKeyingInterface::ThrowIfInvalidIVLength((SimpleKeyingInterface *)this,param_2);
  if (uVar1 < __n) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00bbe708 to 00bbe70f has its CatchHandler @ 00bbe7c8 */
    puVar4 = (undefined8 *)operator_new(0x20);
    puVar4[1] = 0x726566667562203a;
    *puVar4 = 0x735f7970636d656d;
    *(undefined8 *)((long)puVar4 + 0x11) = 0x776f6c667265766f;
    *(undefined8 *)((long)puVar4 + 9) = 0x2072656666756220;
    *(undefined *)((long)puVar4 + 0x19) = 0;
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00bbe758 to 00bbe75f has its CatchHandler @ 00bbe7a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar3 + 2));
    *puVar3 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00bbe770 to 00bbe787 has its CatchHandler @ 00bbe78c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  memcpy(__dest,param_1,__n);
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


