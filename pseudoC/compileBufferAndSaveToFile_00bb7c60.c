// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileBufferAndSaveToFile
// Entry Point: 00bb7c60
// Size: 1084 bytes
// Signature: undefined __thiscall compileBufferAndSaveToFile(LuauScriptSystem * this, char * param_1, uint param_2, char * param_3, char * param_4, uint param_5)


/* LuauScriptSystem::compileBufferAndSaveToFile(char const*, unsigned int, char*, char const*,
   unsigned int) */

void __thiscall
LuauScriptSystem::compileBufferAndSaveToFile
          (LuauScriptSystem *this,char *param_1,uint param_2,char *param_3,char *param_4,
          uint param_5)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined local_2b4 [4];
  undefined8 local_2b0;
  ulong local_2a8;
  void *local_2a0;
  ulong local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined local_258 [512];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  checkYieldState();
  if ((((2 < param_2) && (*param_1 == -0x11)) && (param_1[1] == -0x45)) && (param_1[2] == -0x41)) {
    param_1 = param_1 + 3;
    param_2 = param_2 - 3;
  }
  if (param_4 == (char *)0x0) {
    uVar8 = param_2;
    if (*param_1 == '=') {
      puVar3 = (undefined *)((ulong)local_258 | 1);
      if (0x1fd < param_2) {
        uVar8 = 0x1fe;
      }
      local_258[0] = 0x20;
      uVar7 = 0x1ff;
    }
    else {
      if (0x1fe < param_2) {
        uVar8 = 0x1ff;
      }
      puVar3 = local_258;
      uVar7 = 0x200;
    }
    __memcpy_chk(puVar3,param_1,uVar8,uVar7);
    uVar8 = param_2;
    if (0x1fe < param_2) {
      uVar8 = 0x1ff;
    }
    local_258[uVar8] = 0;
  }
  else {
    FUN_00bb6bf0(local_258,0x200,0x200,&DAT_00510d4c,param_4);
  }
  local_278 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_270 = 0;
  local_288 = 0;
  local_280 = 2;
  pcVar4 = (char *)luau_compile(param_1,(ulong)param_2,(lua_CompileOptions *)&local_280,&local_288);
  if ((local_288 == 0) || (*pcVar4 != '\0')) {
    sVar5 = strlen(param_3);
    if (((sVar5 & 0xfffffffc) != 0) && (local_288 != 0)) {
      sVar5 = strlen(param_3);
      param_3[sVar5 - 3] = COMPILED_EXTENSION[1];
      param_3[sVar5 - 2] = COMPILED_EXTENSION[2];
      param_3[sVar5 - 1] = COMPILED_EXTENSION[3];
      NativeFile::NativeFile((NativeFile *)&local_2b0);
                    /* try { // try from 00bb7df8 to 00bb7e0b has its CatchHandler @ 00bb80e4 */
      uVar6 = NativeFile::open((char *)&local_2b0,(ACCESS_MODE)param_3,true);
      if ((uVar6 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00bb8060 to 00bb806b has its CatchHandler @ 00bb809c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 00bb7eb8 to 00bb7ecf has its CatchHandler @ 00bb80e4 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Can\'t create file \'%s\'.\n",param_3);
      }
      else {
        local_2b4[0] = 2;
        if (param_5 != 0) {
          local_2b4[0] = 3;
        }
                    /* try { // try from 00bb7e20 to 00bb7e2f has its CatchHandler @ 00bb80e0 */
        NativeFile::write((NativeFile *)&local_2b0,local_2b4,1);
        uVar6 = local_288;
        if (param_5 == 0) {
          if (local_288 == 0) goto LAB_00bb7fa4;
          uVar9 = 0;
          do {
            pcVar4[uVar9] = pcVar4[uVar9] - ((&LUC_ENCRYPT_SHIFTS1)[uVar9 & 7] + (char)uVar9);
            uVar9 = (ulong)((int)uVar9 + 1);
          } while (uVar9 < local_288);
        }
        else if (local_288 == 0) {
LAB_00bb7fa4:
          uVar6 = 0;
        }
        else {
          uVar9 = 0;
          do {
            pcVar4[uVar9] = (pcVar4[uVar9] + ~(byte)uVar9) - (&LUC_ENCRYPT_SHIFTS2)[uVar9 & 0xf];
            uVar9 = (ulong)((int)uVar9 + 1);
          } while (uVar9 < local_288);
        }
                    /* try { // try from 00bb7fa8 to 00bb7fbb has its CatchHandler @ 00bb80e0 */
        NativeFile::write((NativeFile *)&local_2b0,pcVar4,(uint)uVar6);
        NativeFile::close();
      }
      NativeFile::~NativeFile((NativeFile *)&local_2b0);
    }
    if (pcVar4 != (char *)0x0) {
      operator_delete__(pcVar4);
    }
    uVar7 = 1;
    goto LAB_00bb7fd4;
  }
  uVar6 = local_288 - 1;
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    pvVar10 = (void *)((ulong)&local_2b0 | 1);
    local_2b0 = CONCAT71(local_2b0._1_7_,(char)((int)uVar6 << 1));
    if (uVar6 != 0) goto LAB_00bb7ef4;
  }
  else {
    uVar9 = local_288 + 0xf & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar9);
    local_2b0 = uVar9 | 1;
    local_2a8 = uVar6;
    local_2a0 = pvVar10;
LAB_00bb7ef4:
    memcpy(pvVar10,pcVar4 + 1,uVar6);
  }
  *(undefined *)((long)pvVar10 + uVar6) = 0;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00bb8018 to 00bb8023 has its CatchHandler @ 00bb80b0 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  pvVar10 = (void *)((ulong)&local_2b0 | 1);
  if ((local_2b0 & 1) != 0) {
    pvVar10 = local_2a0;
  }
                    /* try { // try from 00bb7f30 to 00bb7f47 has its CatchHandler @ 00bb80c4 */
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Lua compiler error (%s) %s\n",param_4,pvVar10);
  operator_delete__(pcVar4);
  if ((local_2b0 & 1) != 0) {
    operator_delete(local_2a0);
  }
  uVar7 = 0;
LAB_00bb7fd4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


