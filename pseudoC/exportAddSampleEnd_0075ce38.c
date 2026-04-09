// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportAddSampleEnd
// Entry Point: 0075ce38
// Size: 696 bytes
// Signature: undefined exportAddSampleEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProfilerStats::exportAddSampleEnd() */

void ProfilerStats::exportAddSampleEnd(void)

{
  void **ppvVar1;
  long lVar2;
  Object *pOVar3;
  void **ppvVar4;
  int iVar5;
  char *pcVar6;
  undefined2 *puVar7;
  Object *pOVar8;
  Array *this;
  void *pvVar9;
  byte local_78;
  undefined4 local_77;
  undefined4 uStack_73;
  void *local_68;
  void **local_60;
  void **local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (s_pJsonObject == (Object *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0075d06c to 0075d077 has its CatchHandler @ 0075d0f4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar6 = "Error: profiler export init missing\n";
  }
  else {
    if (s_pJsonSampleObject != (Object *)0x0) {
      local_60 = (void **)0x0;
      local_58 = (void **)0x0;
      local_50 = 0;
                    /* try { // try from 0075ce84 to 0075ceb7 has its CatchHandler @ 0075d158 */
      pcVar6 = (char *)JSONUtil::Object::getAtomNonConst(s_pJsonObject,"samples",0);
      pOVar3 = s_pJsonSampleObject;
      if (((pcVar6 == (char *)0x0) || (*pcVar6 != '\x05')) ||
         (this = *(Array **)(pcVar6 + 8), this == (Array *)0x0)) {
        puVar7 = (undefined2 *)operator_new(0x10);
        *puVar7 = 4;
                    /* try { // try from 0075cf24 to 0075cf2b has its CatchHandler @ 0075d148 */
        pOVar8 = (Object *)operator_new(0x28);
                    /* try { // try from 0075cf30 to 0075cf37 has its CatchHandler @ 0075d138 */
        JSONUtil::Object::Object(pOVar8,pOVar3);
        *(Object **)(puVar7 + 4) = pOVar8;
                    /* try { // try from 0075cf3c to 0075cf47 has its CatchHandler @ 0075d158 */
        JSONUtil::Array::addAtom((Array *)&local_60,(Atom *)puVar7);
        local_78 = 0xe;
        local_77 = 0x706d6173;
        uStack_73 = 0x73656c;
                    /* try { // try from 0075cf70 to 0075cf7b has its CatchHandler @ 0075d120 */
        JSONUtil::Object::addAtom(s_pJsonObject,(basic_string *)&local_78,(Array *)&local_60);
        if ((local_78 & 1) != 0) {
          operator_delete(local_68);
        }
      }
      else {
        puVar7 = (undefined2 *)operator_new(0x10);
        *puVar7 = 4;
                    /* try { // try from 0075cec4 to 0075cecb has its CatchHandler @ 0075d11c */
        pOVar8 = (Object *)operator_new(0x28);
                    /* try { // try from 0075ced0 to 0075ced7 has its CatchHandler @ 0075d10c */
        JSONUtil::Object::Object(pOVar8,pOVar3);
        *(Object **)(puVar7 + 4) = pOVar8;
                    /* try { // try from 0075cedc to 0075cf17 has its CatchHandler @ 0075d158 */
        JSONUtil::Array::addAtom(this,(Atom *)puVar7);
      }
      pOVar3 = s_pJsonSampleObject;
      if (s_pJsonSampleObject != (Object *)0x0) {
        JSONUtil::Object::~Object(s_pJsonSampleObject);
        operator_delete(pOVar3);
      }
      ppvVar4 = local_58;
      s_pJsonSampleObject = (Object *)0x0;
      s_samplingIndex = s_samplingIndex + 1;
      for (ppvVar1 = local_60; ppvVar1 != ppvVar4; ppvVar1 = ppvVar1 + 1) {
        pvVar9 = *ppvVar1;
        if (pvVar9 != (void *)0x0) {
          JSONUtil::Atom::clear();
          operator_delete(pvVar9);
        }
      }
      if (local_60 != (void **)0x0) {
        local_58 = local_60;
        operator_delete(local_60);
      }
      goto LAB_0075d034;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0075d0b4 to 0075d0bf has its CatchHandler @ 0075d0f0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar6 = "Error: profiler export sample begin missing\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6);
LAB_0075d034:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


