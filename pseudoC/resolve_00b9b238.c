// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolve
// Entry Point: 00b9b238
// Size: 260 bytes
// Signature: undefined __thiscall resolve(StringStream * this, basic_string * param_1)


/* StringStream::resolve(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void __thiscall StringStream::resolve(StringStream *this,basic_string *param_1)

{
  long lVar1;
  char *__src;
  size_t __n;
  void *__dest;
  ulong uVar2;
  undefined8 local_70;
  size_t sStack_68;
  void *local_60;
  uint uStack_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  resolve(this,&local_50,&uStack_54,true);
  __src = local_50;
  __n = strlen(local_50);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00b9b2d8;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_70 = uVar2 | 1;
    sStack_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,__src,__n);
LAB_00b9b2d8:
  *(undefined *)((long)__dest + __n) = 0;
  if ((*(byte *)param_1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 4));
  }
  *(size_t *)(param_1 + 2) = sStack_68;
  *(ulong *)param_1 = local_70;
  *(void **)(param_1 + 4) = local_60;
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


