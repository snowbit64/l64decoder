// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b2a1e0
// Size: 920 bytes
// Signature: undefined __thiscall init(JSONTranslationManager * this, char * param_1)


/* JSONTranslationManager::init(char const*) */

uint __thiscall JSONTranslationManager::init(JSONTranslationManager *this,char *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  __tree_iterator _Var4;
  int iVar5;
  char *__s;
  size_t sVar6;
  void *__dest;
  int iVar7;
  ulong uVar8;
  undefined8 local_1e0;
  size_t local_1d8;
  void *local_1d0;
  char acStack_1c8 [128];
  DomXMLFile aDStack_148 [216];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_148);
                    /* try { // try from 00b2a220 to 00b2a233 has its CatchHandler @ 00b2a5a0 */
  uVar2 = DomXMLFile::loadFromFile(aDStack_148,param_1,true);
  if ((uVar2 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b2a53c to 00b2a547 has its CatchHandler @ 00b2a578 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b2a4c8 to 00b2a4df has its CatchHandler @ 00b2a5a0 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "ERROR: JSONTranslationManager can\'t load file \'%s\'\n",param_1);
  }
  else {
                    /* try { // try from 00b2a23c to 00b2a24b has its CatchHandler @ 00b2a598 */
    iVar3 = DomXMLFile::getNumChildren(aDStack_148,"objects");
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
                    /* try { // try from 00b2a298 to 00b2a2a3 has its CatchHandler @ 00b2a5c8 */
        FUN_00b2a5e0(acStack_1c8);
                    /* try { // try from 00b2a2a4 to 00b2a313 has its CatchHandler @ 00b2a5cc */
        __s = (char *)AttributedProperties::getStringAttribute
                                ((AttributedProperties *)aDStack_148,acStack_1c8,(char *)0x0,"name",
                                 (char *)0x0);
        if (__s == (char *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 00b2a434 to 00b2a43f has its CatchHandler @ 00b2a57c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: <object> tag with no key in file \'%s\'\n",param_1);
        }
        else {
          sVar6 = strlen(__s);
          if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00b2a524 to 00b2a52b has its CatchHandler @ 00b2a5ac */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar6 < 0x17) {
            local_1e0 = (char *)CONCAT71(local_1e0._1_7_,(char)((int)sVar6 << 1));
            __dest = (void *)((ulong)&local_1e0 | 1);
            if (sVar6 != 0) goto LAB_00b2a340;
          }
          else {
            uVar8 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b2a320 to 00b2a327 has its CatchHandler @ 00b2a5a4 */
            __dest = operator_new(uVar8);
            local_1e0 = (char *)(uVar8 | 1);
            local_1d8 = sVar6;
            local_1d0 = __dest;
LAB_00b2a340:
            memcpy(__dest,__s,sVar6);
          }
          *(undefined *)((long)__dest + sVar6) = 0;
                    /* try { // try from 00b2a354 to 00b2a35f has its CatchHandler @ 00b2a5b0 */
          _Var4 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                              *)this,(basic_string *)&local_1e0);
          if (((ulong)local_1e0 & 1) != 0) {
            operator_delete(local_1d0);
          }
          if (this + 8 == (JSONTranslationManager *)(ulong)_Var4) {
                    /* try { // try from 00b2a3a4 to 00b2a3db has its CatchHandler @ 00b2a5a8 */
            sVar6 = DomXMLFile::getValue(aDStack_148,acStack_1c8,false);
            if (sVar6 == 0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar5 != 0)) {
                    /* try { // try from 00b2a47c to 00b2a487 has its CatchHandler @ 00b2a580 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "Warning: no message for key \'%s\' in file \'%s\'\n",__s,param_1);
            }
            else {
                    /* try { // try from 00b2a280 to 00b2a28b has its CatchHandler @ 00b2a59c */
              local_1e0 = __s;
              local_1d8 = sVar6;
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::__emplace_unique_impl<std::__ndk1::pair<char_const*,char_const*>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                          *)this,(pair *)&local_1e0);
            }
          }
          else {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar5 != 0)) {
                    /* try { // try from 00b2a3ec to 00b2a3f7 has its CatchHandler @ 00b2a584 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00b2a384 to 00b2a39f has its CatchHandler @ 00b2a5cc */
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: duplicate key \'%s\' in file \'%s\'\n",__s,param_1);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
  }
  DomXMLFile::~DomXMLFile(aDStack_148);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


