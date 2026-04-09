// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerCallback
// Entry Point: 00864efc
// Size: 164 bytes
// Signature: undefined __thiscall registerCallback(ConditionalAnimationPlayer * this, basic_string param_1, _func_void_void_ptr * param_2, void * param_3)


/* ConditionalAnimationPlayer::registerCallback(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, void (*)(void*), void*) */

void __thiscall
ConditionalAnimationPlayer::registerCallback
          (ConditionalAnimationPlayer *this,basic_string param_1,_func_void_void_ptr *param_2,
          void *param_3)

{
  long lVar1;
  pair pVar2;
  piecewise_construct_t *ppVar3;
  piecewise_construct_t *local_50;
  long local_48;
  
  ppVar3 = (piecewise_construct_t *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = ppVar3;
  pVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x50),ppVar3,(tuple *)&DAT_00518e97,(tuple *)&local_50)
  ;
  *(_func_void_void_ptr **)((ulong)pVar2 + 0x38) = param_2;
  local_50 = ppVar3;
  pVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x50),ppVar3,(tuple *)&DAT_00518e97,(tuple *)&local_50)
  ;
  *(void **)((ulong)pVar2 + 0x40) = param_3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


