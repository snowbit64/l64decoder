// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadBuffer
// Entry Point: 00bb6f84
// Size: 736 bytes
// Signature: undefined __thiscall loadBuffer(LuauScriptSystem * this, lua_State * param_1, uchar * param_2, uint param_3, char * param_4)


/* LuauScriptSystem::loadBuffer(lua_State*, unsigned char const*, unsigned int, char const*) */

int __thiscall
LuauScriptSystem::loadBuffer
          (LuauScriptSystem *this,lua_State *param_1,uchar *param_2,uint param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong __n;
  void *pvVar5;
  ulong uVar6;
  undefined8 local_90;
  ulong local_88;
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 != 0) && (*param_2 == '\x01')) {
    iVar2 = luau_load(param_1,param_4,(char *)(param_2 + 1),(ulong)(param_3 - 1),0);
    if (iVar2 != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00bb71d8 to 00bb71e3 has its CatchHandler @ 00bb7278 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Failed to load the luau script!\n");
    }
    goto LAB_00bb7154;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_68 = 2;
  local_78 = 0;
  local_70 = 0x200000000;
  pcVar4 = (char *)luau_compile((char *)param_2,(ulong)param_3,(lua_CompileOptions *)&local_70,
                                &local_78);
  if ((local_78 == 0) || (*pcVar4 != '\0')) {
    iVar2 = luau_load(param_1,param_4,pcVar4,local_78,0);
    if (iVar2 != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00bb7190 to 00bb719b has its CatchHandler @ 00bb727c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Failed to load the luau script!\n");
    }
    if (pcVar4 == (char *)0x0) goto LAB_00bb7154;
  }
  else {
    __n = local_78 - 1;
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      pvVar5 = (void *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00bb70e4;
    }
    else {
      uVar6 = local_78 + 0xf & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar6);
      local_90 = uVar6 | 1;
      local_88 = __n;
      local_80 = pvVar5;
LAB_00bb70e4:
      memcpy(pvVar5,pcVar4 + 1,__n);
    }
    *(undefined *)((long)pvVar5 + __n) = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00bb7228 to 00bb7233 has its CatchHandler @ 00bb7264 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pvVar5 = (void *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pvVar5 = local_80;
    }
                    /* try { // try from 00bb7120 to 00bb7137 has its CatchHandler @ 00bb7294 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Lua compiler error (%s) %s\n",param_4,pvVar5);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    iVar2 = -1;
  }
  operator_delete__(pcVar4);
LAB_00bb7154:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


