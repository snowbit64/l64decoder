// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureIndex
// Entry Point: 007ac7b8
// Size: 300 bytes
// Signature: undefined __thiscall getTextureIndex(CustomShader * this, uint param_1, char * param_2, uint * param_3)


/* CustomShader::getTextureIndex(unsigned int, char const*, unsigned int&) const */

void __thiscall
CustomShader::getTextureIndex(CustomShader *this,uint param_1,char *param_2,uint *param_3)

{
  ulong uVar1;
  long lVar2;
  __tree_const_iterator _Var3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  long lVar5;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(this + 0x110);
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_007ac858;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_70 = uVar4 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_007ac858:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 007ac86c to 007ac873 has its CatchHandler @ 007ac8e4 */
  _Var3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                      *)(lVar5 + (ulong)param_1 * 0xe0 + 0x28),(basic_string *)&local_70);
  uVar4 = (ulong)_Var3;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  uVar1 = lVar5 + (ulong)param_1 * 0xe0 + 0x30;
  if (uVar1 != uVar4) {
    *param_3 = *(uint *)(uVar4 + 0x38);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1 != uVar4);
  }
  return;
}


