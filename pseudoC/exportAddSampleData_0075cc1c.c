// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportAddSampleData
// Entry Point: 0075cc1c
// Size: 484 bytes
// Signature: undefined __cdecl exportAddSampleData(char * param_1, char * param_2)


/* ProfilerStats::exportAddSampleData(char const*, char const*) */

void ProfilerStats::exportAddSampleData(char *param_1,char *param_2)

{
  long lVar1;
  Object *this;
  int iVar2;
  size_t __n;
  char *pcVar3;
  void *__dest;
  ulong uVar4;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  this = s_pJsonSampleObject;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (s_pJsonObject == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0075cd7c to 0075cd87 has its CatchHandler @ 0075ce04 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Error: profiler export init missing\n";
  }
  else {
    if (s_pJsonSampleObject != (Object *)0x0) {
      __n = strlen(param_1);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        __dest = (void *)((ulong)&local_70 | 1);
        local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
        if (__n != 0) goto LAB_0075cd04;
      }
      else {
        uVar4 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar4);
        local_70 = uVar4 | 1;
        local_68 = __n;
        local_60 = __dest;
LAB_0075cd04:
        memcpy(__dest,param_1,__n);
      }
      *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0075cd18 to 0075cd27 has its CatchHandler @ 0075ce1c */
      JSONUtil::Object::addAtom(this,(basic_string *)&local_70,param_2);
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      goto LAB_0075cd38;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0075cdc4 to 0075cdcf has its CatchHandler @ 0075ce00 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Error: profiler export sample begin missing\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar3);
LAB_0075cd38:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


