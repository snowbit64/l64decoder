// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LocalizationManager
// Entry Point: 00b00160
// Size: 84 bytes
// Signature: undefined __thiscall ~LocalizationManager(LocalizationManager * this)


/* LocalizationManager::~LocalizationManager() */

void __thiscall LocalizationManager::~LocalizationManager(LocalizationManager *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>>
  ::~__hash_table((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>>
                   *)(this + 0x30));
  ppvVar1 = (void **)*(void **)(this + 0x18);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


