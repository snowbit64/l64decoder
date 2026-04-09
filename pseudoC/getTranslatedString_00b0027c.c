// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTranslatedString
// Entry Point: 00b0027c
// Size: 440 bytes
// Signature: undefined __thiscall getTranslatedString(LocalizationManager * this, char * param_1)


/* LocalizationManager::getTranslatedString(char const*) const */

char * __thiscall LocalizationManager::getTranslatedString(LocalizationManager *this,char *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  __hash_const_iterator _Var4;
  int iVar5;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long **pplVar9;
  long *plVar10;
  ulong uVar11;
  char *__s1;
  void *__dest;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  ulong uVar14;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00b0030c;
  }
  else {
    uVar11 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar11);
    local_60 = uVar11 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00b0030c:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b00314 to 00b0031b has its CatchHandler @ 00b00434 */
  _Var4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>>
                      *)(this + 0x30),(basic_string *)&local_60);
  uVar11 = (ulong)_Var4;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((uVar11 != 0) && (uVar6 = *(ulong *)(uVar11 + 0x30), uVar6 != 0)) {
    uVar1 = *(uint *)this;
    uVar7 = (ulong)uVar1;
    uVar13 = NEON_cnt(uVar6,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar14 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12);
    if ((uVar14 & 0xffffffff) < 2) {
      uVar8 = (ulong)((int)uVar6 - 1U & uVar1);
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        uVar8 = uVar7 - uVar8 * uVar6;
      }
    }
    pplVar9 = *(long ***)(*(long *)(uVar11 + 0x28) + uVar8 * 8);
    if ((pplVar9 != (long **)0x0) && (plVar10 = *pplVar9, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar7) {
          if (*(uint *)(plVar10 + 2) == uVar1) {
            __s1 = (char *)plVar10[3];
            iVar5 = strcmp(__s1,"TODO");
            if (iVar5 != 0) goto LAB_00b003fc;
            break;
          }
        }
        else {
          if ((uVar14 & 0xffffffff) < 2) {
            uVar11 = uVar11 & uVar6 - 1;
          }
          else if (uVar6 <= uVar11) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar11 / uVar6;
            }
            uVar11 = uVar11 - uVar2 * uVar6;
          }
          if (uVar11 != uVar8) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  __s1 = param_1;
LAB_00b003fc:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __s1;
}


