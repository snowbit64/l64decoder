// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transformObject
// Entry Point: 00b2a684
// Size: 304 bytes
// Signature: undefined __thiscall transformObject(JSONTranslationManager * this, char * param_1, ParamSet * param_2, Object * param_3)


/* JSONTranslationManager::transformObject(char const*, JSONUtil::ParamSet const&,
   JSONUtil::Object&) const */

uint __thiscall
JSONTranslationManager::transformObject
          (JSONTranslationManager *this,char *param_1,ParamSet *param_2,Object *param_3)

{
  JSONTranslationManager *pJVar1;
  long lVar2;
  __tree_const_iterator _Var3;
  uint uVar4;
  size_t __n;
  void *__dest;
  ulong uVar6;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  JSONTranslationManager *pJVar5;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00b2a720;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    local_70 = uVar6 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00b2a720:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b2a724 to 00b2a72f has its CatchHandler @ 00b2a7b4 */
  _Var3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      *)this,(basic_string *)&local_70);
  pJVar5 = (JSONTranslationManager *)(ulong)_Var3;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (this + 8 == pJVar5) {
    uVar4 = 0;
  }
  else {
    pJVar1 = pJVar5 + 0x39;
    if (((byte)pJVar5[0x38] & 1) != 0) {
      pJVar1 = *(JSONTranslationManager **)(pJVar5 + 0x48);
    }
    uVar4 = JSONUtil::deserializeObject((char *)pJVar1,param_3,param_2);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


