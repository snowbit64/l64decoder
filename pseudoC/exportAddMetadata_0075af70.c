// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportAddMetadata
// Entry Point: 0075af70
// Size: 364 bytes
// Signature: undefined __cdecl exportAddMetadata(char * param_1, char * param_2)


/* ProfilerStats::exportAddMetadata(char const*, char const*) */

void ProfilerStats::exportAddMetadata(char *param_1,char *param_2)

{
  long lVar1;
  Object *this;
  int iVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  this = s_pJsonObject;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (s_pJsonObject == (Object *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0075b0a0 to 0075b0ab has its CatchHandler @ 0075b0dc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: profiler export init missing\n");
    goto LAB_0075b05c;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0075b028;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_70 = uVar3 | 1;
    local_68 = __n;
    local_60 = __dest;
LAB_0075b028:
    memcpy(__dest,param_1,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0075b03c to 0075b04b has its CatchHandler @ 0075b0f4 */
  JSONUtil::Object::addAtom(this,(basic_string *)&local_70,param_2);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0075b05c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


