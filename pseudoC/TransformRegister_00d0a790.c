// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransformRegister
// Entry Point: 00d0a790
// Size: 464 bytes
// Signature: undefined TransformRegister(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CFB_ModePolicy::TransformRegister() */

void CryptoPP::CFB_ModePolicy::TransformRegister(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong __n;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(*(long *)(in_x0 + 0x10) + 8);
  __n = (ulong)(uint)(*(int *)(in_x0 + 0x28) - *(int *)(in_x0 + 0x60));
  (**(code **)(*plVar2 + 0x28))
            (plVar2,*(undefined8 *)(in_x0 + 0x30),0,*(undefined8 *)(in_x0 + 0x58));
  if (*(ulong *)(in_x0 + 0x28) < __n) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0a850 to 00d0a857 has its CatchHandler @ 00d0a9a8 */
    puVar4 = (undefined8 *)operator_new(0x20);
    puVar4[1] = 0x6566667562203a73;
    *puVar4 = 0x5f65766f6d6d656d;
    *(undefined8 *)((long)puVar4 + 0x12) = 0x776f6c667265766f;
    *(undefined8 *)((long)puVar4 + 10) = 0x2072656666756220;
    *(undefined *)((long)puVar4 + 0x1a) = 0;
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00d0a8a0 to 00d0a8a7 has its CatchHandler @ 00d0a984 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar3 + 2));
    *puVar3 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00d0a8b8 to 00d0a8cf has its CatchHandler @ 00d0a968 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  memmove(*(void **)(in_x0 + 0x30),
          (void *)((long)*(void **)(in_x0 + 0x30) + (ulong)*(uint *)(in_x0 + 0x60)),__n);
  if ((ulong)*(uint *)(in_x0 + 0x60) <= *(long *)(in_x0 + 0x28) - __n) {
    memcpy((void *)(*(long *)(in_x0 + 0x30) + __n),*(void **)(in_x0 + 0x58),
           (ulong)*(uint *)(in_x0 + 0x60));
    if (*(long *)(lVar1 + 0x28) == lVar5) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0a8dc to 00d0a8e3 has its CatchHandler @ 00d0a9a4 */
  puVar4 = (undefined8 *)operator_new(0x20);
  puVar4[1] = 0x726566667562203a;
  *puVar4 = 0x735f7970636d656d;
  *(undefined8 *)((long)puVar4 + 0x11) = 0x776f6c667265766f;
  *(undefined8 *)((long)puVar4 + 9) = 0x2072656666756220;
  *(undefined *)((long)puVar4 + 0x19) = 0;
  *(undefined4 *)(puVar3 + 1) = 1;
  *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00d0a92c to 00d0a933 has its CatchHandler @ 00d0a964 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar3 + 2));
  *puVar3 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00d0a944 to 00d0a95b has its CatchHandler @ 00d0a960 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&InvalidArgument::typeinfo,Exception::~Exception);
}


