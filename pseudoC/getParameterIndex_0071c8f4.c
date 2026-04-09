// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParameterIndex
// Entry Point: 0071c8f4
// Size: 340 bytes
// Signature: undefined __thiscall getParameterIndex(CustomShader * this, uint param_1, char * param_2, uint * param_3)


/* CustomShader::getParameterIndex(unsigned int, char const*, unsigned int&) const */

undefined8 __thiscall
CustomShader::getParameterIndex(CustomShader *this,uint param_1,char *param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  __tree_const_iterator _Var3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  void *__dest;
  ulong uVar6;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = (ulong)param_1;
  lVar1 = *(long *)(this + 0x110);
  uVar4 = (*(long *)(this + 0x118) - lVar1 >> 5) * 0x6db6db6db6db6db7;
  if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
    __n = strlen(param_2);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_70 | 1);
      local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_0071c9a4;
    }
    else {
      uVar4 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar4);
      local_70 = uVar4 | 1;
      local_68 = __n;
      local_60 = __dest;
LAB_0071c9a4:
      memcpy(__dest,param_2,__n);
    }
    *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0071c9c8 to 0071c9cf has its CatchHandler @ 0071ca48 */
    _Var3 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                        *)(lVar1 + uVar6 * 0xe0 + 0x10),(basic_string *)&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (lVar1 + uVar6 * 0xe0 + 0x18 != (ulong)_Var3) {
      uVar5 = 1;
      *param_3 = *(uint *)((ulong)_Var3 + 0x38);
      goto LAB_0071ca0c;
    }
  }
  uVar5 = 0;
LAB_0071ca0c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


