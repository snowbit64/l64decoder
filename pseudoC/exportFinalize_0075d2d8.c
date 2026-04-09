// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportFinalize
// Entry Point: 0075d2d8
// Size: 616 bytes
// Signature: undefined __cdecl exportFinalize(char * param_1)


/* ProfilerStats::exportFinalize(char const*) */

undefined4 ProfilerStats::exportFinalize(char *param_1)

{
  long lVar1;
  Object *pOVar2;
  int iVar3;
  undefined4 uVar4;
  undefined **local_1a0;
  basic_filebuf<char,std::__ndk1::char_traits<char>> abStack_198 [120];
  FILE *local_120;
  undefined4 local_100;
  undefined **local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (s_pJsonObject == (Object *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0075d4bc to 0075d4c7 has its CatchHandler @ 0075d554 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: profiler export init missing\n");
    uVar4 = 0;
    goto LAB_0075d47c;
  }
  local_1a0 = (undefined **)0xfdb3c8;
  local_f0[0] = (undefined **)0xfdb3f0;
                    /* try { // try from 0075d338 to 0075d343 has its CatchHandler @ 0075d5ac */
  std::__ndk1::ios_base::init(local_f0);
  local_68 = 0;
  local_60 = 0xffffffff;
  local_1a0 = &PTR__basic_ofstream_00fdb358;
  local_f0[0] = &PTR__basic_ofstream_00fdb380;
                    /* try { // try from 0075d368 to 0075d36f has its CatchHandler @ 0075d590 */
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf();
  if (local_120 == (FILE *)0x0) {
    local_120 = fopen(param_1,"we");
    if (local_120 == (FILE *)0x0) goto LAB_0075d378;
    local_100 = 0x10;
LAB_0075d418:
                    /* try { // try from 0075d41c to 0075d427 has its CatchHandler @ 0075d57c */
    JSONUtil::serializeObject(s_pJsonObject,(basic_ostream *)&local_1a0,4);
    pOVar2 = s_pJsonObject;
    if (s_pJsonObject != (Object *)0x0) {
      JSONUtil::Object::~Object(s_pJsonObject);
      operator_delete(pOVar2);
    }
    uVar4 = 1;
    s_pJsonObject = (Object *)0x0;
  }
  else {
LAB_0075d378:
                    /* try { // try from 0075d390 to 0075d393 has its CatchHandler @ 0075d56c */
    std::__ndk1::ios_base::clear((int)&local_1a0 + (int)local_1a0[-3]);
    if (local_120 != (FILE *)0x0) goto LAB_0075d418;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0075d504 to 0075d50f has its CatchHandler @ 0075d540 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 0075d3ac to 0075d3c3 has its CatchHandler @ 0075d57c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t create json file \'%s\'\n",param_1);
    uVar4 = 0;
  }
  local_1a0 = &PTR__basic_ofstream_00fdb358;
  local_f0[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf(abStack_198);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_f0);
LAB_0075d47c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


