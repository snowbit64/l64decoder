// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyOrZero
// Entry Point: 00d0aa00
// Size: 260 bytes
// Signature: undefined __cdecl CopyOrZero(void * param_1, ulong param_2, void * param_3, ulong param_4)


/* CryptoPP::CopyOrZero(void*, unsigned long, void const*, unsigned long) */

void CryptoPP::CopyOrZero(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_3 == (void *)0x0) {
    memset(param_1,0,param_2);
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    if (param_2 < param_4) {
      puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0aa84 to 00d0aa8b has its CatchHandler @ 00d0ab40 */
      puVar2 = (undefined8 *)operator_new(0x20);
      puVar2[1] = 0x726566667562203a;
      *puVar2 = 0x735f7970636d656d;
      *(undefined8 *)((long)puVar2 + 0x11) = 0x776f6c667265766f;
      *(undefined8 *)((long)puVar2 + 9) = 0x2072656666756220;
      *(undefined *)((long)puVar2 + 0x19) = 0;
      *(undefined4 *)(puVar1 + 1) = 1;
      *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00d0aad4 to 00d0aadb has its CatchHandler @ 00d0ab20 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar1 + 2));
      *puVar1 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00d0aaec to 00d0ab03 has its CatchHandler @ 00d0ab04 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar1,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    memcpy(param_1,param_3,param_4);
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  if (lVar3 == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


