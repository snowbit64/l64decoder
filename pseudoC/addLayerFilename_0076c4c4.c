// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLayerFilename
// Entry Point: 0076c4c4
// Size: 268 bytes
// Signature: undefined __thiscall addLayerFilename(TextureArrayConstructor * this, MethodInvocation * param_1)


/* TextureArrayConstructor::addLayerFilename(MethodInvocation*) */

void __thiscall
TextureArrayConstructor::addLayerFilename(TextureArrayConstructor *this,MethodInvocation *param_1)

{
  ulong *puVar1;
  long lVar2;
  size_t __n;
  char *__s;
  void *__dest;
  ulong uVar3;
  undefined8 local_60;
  size_t sStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __s = *(char **)param_1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0076c554;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_60 = uVar3 | 1;
    sStack_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_0076c554:
  *(undefined *)((long)__dest + __n) = 0;
  puVar1 = *(ulong **)(this + 8);
  if (puVar1 < *(ulong **)(this + 0x10)) {
    puVar1[2] = (ulong)local_50;
    puVar1[1] = sStack_58;
    *puVar1 = local_60;
    *(ulong **)(this + 8) = puVar1 + 3;
  }
  else {
                    /* try { // try from 0076c580 to 0076c58b has its CatchHandler @ 0076c5d0 */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)this,(basic_string *)&local_60);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


