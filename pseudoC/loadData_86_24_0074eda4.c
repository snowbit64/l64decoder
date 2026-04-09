// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadData<86,24>
// Entry Point: 0074eda4
// Size: 804 bytes
// Signature: void __thiscall loadData<86,24>(LocalizationManager * this, LANGUAGE_TYPE * param_1, char * * param_2)


/* void LocalizationManager::loadData<86, 24>(LanguageUtil::LANGUAGE_TYPE*, char const* (*)
   [(24)+(1)]) */

void __thiscall
LocalizationManager::loadData<86,24>
          (LocalizationManager *this,LANGUAGE_TYPE *param_1,char **param_2)

{
  __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
  *this_00;
  long lVar1;
  pair pVar2;
  pair pVar3;
  size_t __n;
  void *__dest;
  char **ppcVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_98;
  undefined8 local_90;
  size_t local_88;
  void *local_80;
  undefined8 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  lVar8 = 0;
  local_68 = *(long *)(lVar1 + 0x28);
  ppcVar4 = param_2 + 1;
  do {
    pcVar5 = param_2[lVar8 * 0x19];
    __n = strlen(pcVar5);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
      __dest = (void *)((ulong)&local_90 | 1);
      if (__n != 0) goto LAB_0074ee7c;
    }
    else {
      uVar7 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar7);
      local_90 = uVar7 | 1;
      local_88 = __n;
      local_80 = __dest;
LAB_0074ee7c:
      memcpy(__dest,pcVar5,__n);
    }
    local_70 = &local_90;
    *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0074ee94 to 0074eeab has its CatchHandler @ 0074f0c8 */
    pVar2 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x30),(piecewise_construct_t *)&local_90,
                       (tuple *)&DAT_00517bcd,(tuple *)&local_70);
    lVar6 = 0;
    do {
      local_98._0_4_ = param_1[lVar6];
      pcVar5 = ppcVar4[lVar6];
                    /* try { // try from 0074eec4 to 0074eedb has its CatchHandler @ 0074f0cc */
      local_70 = &local_98;
      pVar3 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<LanguageUtil::LANGUAGE_TYPE,char_const*>,std::__ndk1::__unordered_map_hasher<LanguageUtil::LANGUAGE_TYPE,std::__ndk1::__hash_value_type<LanguageUtil::LANGUAGE_TYPE,char_const*>,LocalizationManager::EnumClassHash,true>,std::__ndk1::__unordered_map_equal<LanguageUtil::LANGUAGE_TYPE,std::__ndk1::__hash_value_type<LanguageUtil::LANGUAGE_TYPE,char_const*>,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<LanguageUtil::LANGUAGE_TYPE,char_const*>>>
              ::
              __emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<LanguageUtil::LANGUAGE_TYPE_const&>,std::__ndk1::tuple<>>
                        ((LANGUAGE_TYPE *)((ulong)pVar2 + 0x28),(piecewise_construct_t *)&local_98,
                         (tuple *)&DAT_00517bcd,(tuple *)&local_70);
      lVar6 = lVar6 + 1;
      *(char **)((ulong)pVar3 + 0x18) = pcVar5;
    } while (lVar6 != 0x18);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    lVar8 = lVar8 + 1;
    ppcVar4 = ppcVar4 + 0x19;
    if (lVar8 == 0x56) {
      this_00 = (__hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
                 *)(this + 8);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1,param_1);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 1,param_1 + 1);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 2,param_1 + 2);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 3,param_1 + 3);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 4,param_1 + 4);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 5,param_1 + 5);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 6,param_1 + 6);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 7,param_1 + 7);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 8,param_1 + 8);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 9,param_1 + 9);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 10,param_1 + 10);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0xb,param_1 + 0xb);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0xc,param_1 + 0xc);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0xd,param_1 + 0xd);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0xe,param_1 + 0xe);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0xf,param_1 + 0xf);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0x10,param_1 + 0x10);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0x11,param_1 + 0x11);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0x12,param_1 + 0x12);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0x13,param_1 + 0x13);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0x14,param_1 + 0x14);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0x15,param_1 + 0x15);
      std::__ndk1::
      __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
      ::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                (this_00,param_1 + 0x16,param_1 + 0x16);
      pVar2 = std::__ndk1::
              __hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
              ::
              __emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
                        (this_00,param_1 + 0x17,param_1 + 0x17);
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(pVar2);
      }
      return;
    }
  } while( true );
}


