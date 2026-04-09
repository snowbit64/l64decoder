// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SecBlock
// Entry Point: 00d19e88
// Size: 304 bytes
// Signature: undefined __thiscall SecBlock(SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> * this, uchar * param_1, ulong param_2)


/* CryptoPP::SecBlock<unsigned char, CryptoPP::AllocatorWithCleanup<unsigned char, false>
   >::SecBlock(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
          (SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *this,
          uchar *param_1,ulong param_2)

{
  long lVar1;
  void *__s;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong __n;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(ulong *)(this + 0x10) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(this + 0x18) = 0;
  }
  else {
    __s = (void *)UnalignedAllocate(param_2);
    __n = *(ulong *)(this + 0x10);
    *(void **)(this + 0x18) = __s;
    if ((param_1 == (uchar *)0x0) || (__s == (void *)0x0)) {
      if (__n != 0) {
        memset(__s,0,__n);
      }
    }
    else {
      if (__n < param_2) {
        puVar2 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d19f34 to 00d19f3b has its CatchHandler @ 00d19ff4 */
        puVar3 = (undefined8 *)operator_new(0x20);
        puVar3[1] = 0x726566667562203a;
        *puVar3 = 0x735f7970636d656d;
        *(undefined8 *)((long)puVar3 + 0x11) = 0x776f6c667265766f;
        *(undefined8 *)((long)puVar3 + 9) = 0x2072656666756220;
        *(undefined *)((long)puVar3 + 0x19) = 0;
        *(undefined4 *)(puVar2 + 1) = 1;
        *puVar2 = &PTR__Exception_00fe0298;
                    /* try { // try from 00d19f84 to 00d19f8b has its CatchHandler @ 00d19fd4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar2 + 2));
        *puVar2 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00d19f9c to 00d19fb3 has its CatchHandler @ 00d19fb8 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      memcpy(__s,param_1,param_2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


