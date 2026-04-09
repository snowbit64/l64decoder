// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: postStat
// Entry Point: 00b072a8
// Size: 344 bytes
// Signature: undefined __thiscall postStat(NgGameStats * this, char * param_1, ParamSet * param_2)


/* NgGameStats::postStat(char const*, JSONUtil::ParamSet const&) */

uint __thiscall NgGameStats::postStat(NgGameStats *this,char *param_1,ParamSet *param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte local_78 [16];
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    local_40 = 0x3f800000;
                    /* try { // try from 00b072e8 to 00b072ef has its CatchHandler @ 00b07430 */
    uVar5 = JSONTranslationManager::transformObject
                      ((JSONTranslationManager *)this,param_1,param_2,(Object *)&local_60);
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      if (this[0x20] != (NgGameStats)0x0) {
                    /* try { // try from 00b072fc to 00b0730b has its CatchHandler @ 00b0742c */
        JSONUtil::serializeObject((Object *)&local_60,2);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00b073c4 to 00b073cf has its CatchHandler @ 00b07400 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pvVar1 = (void *)((ulong)local_78 | 1);
        if ((local_78[0] & 1) != 0) {
          pvVar1 = local_68;
        }
                    /* try { // try from 00b07334 to 00b0734b has its CatchHandler @ 00b07414 */
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "postStat(%s):\n%s\n",param_1,pvVar1);
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
      }
                    /* try { // try from 00b07368 to 00b0736f has its CatchHandler @ 00b07430 */
      uVar3 = (**(code **)(**(long **)(this + 0x18) + 0x10))(*(long **)(this + 0x18),&local_60);
    }
    JSONUtil::Object::~Object((Object *)&local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


