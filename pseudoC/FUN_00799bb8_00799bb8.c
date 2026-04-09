// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799bb8
// Entry Point: 00799bb8
// Size: 452 bytes
// Signature: undefined FUN_00799bb8(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00799bb8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  ENetNetworkManager *this;
  LuauScriptSystem *this_00;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (((DAT_01053c80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01053c80), iVar4 != 0)) {
    DAT_01053c58 = 0;
    DAT_01053c50 = 0;
    DAT_01053c40 = &PTR__ScriptingNetworkManager_00fdb4c0;
    _DAT_01053c68 = 0;
    DAT_01053c60 = (void *)0x0;
    DAT_01053c78 = 0;
    _DAT_01053c70 = 0;
    DAT_01053c48 = &DAT_01053c50;
                    /* try { // try from 00799ce0 to 00799ce3 has its CatchHandler @ 00799d80 */
    lVar5 = ENetNetworkManager::getInstance();
    *(undefined ****)(lVar5 + 0x1c8) = &DAT_01053c40;
    __cxa_atexit(ScriptingNetworkManager::~ScriptingNetworkManager,&DAT_01053c40,&PTR_LOOP_00fd8de0)
    ;
    __cxa_guard_release(&DAT_01053c80);
  }
  uVar1 = *param_1;
  pcVar6 = *(char **)(param_1 + 8);
  uVar2 = param_1[0xc];
  this = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  bVar3 = ENetNetworkManager::startup
                    (this,(ushort)uVar1,10,(ushort)uVar2,pcVar6,&DAT_00518aba,0x40,&DAT_00518afa,
                     0x20);
  *(byte *)(param_1 + 0x40) = bVar3 & 1;
  param_1[0x42] = 3;
  if (param_1[0x16] == 8) {
    uVar7 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    uVar7 = 0;
  }
  if (((DAT_01053c80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01053c80), iVar4 != 0)) {
    DAT_01053c58 = 0;
    DAT_01053c50 = 0;
    DAT_01053c40 = &PTR__ScriptingNetworkManager_00fdb4c0;
    _DAT_01053c68 = 0;
    DAT_01053c60 = (void *)0x0;
    DAT_01053c78 = 0;
    _DAT_01053c70 = 0;
    DAT_01053c48 = &DAT_01053c50;
                    /* try { // try from 00799d4c to 00799d4f has its CatchHandler @ 00799d7c */
    lVar5 = ENetNetworkManager::getInstance();
    *(undefined ****)(lVar5 + 0x1c8) = &DAT_01053c40;
    __cxa_atexit(ScriptingNetworkManager::~ScriptingNetworkManager,&DAT_01053c40,&PTR_LOOP_00fd8de0)
    ;
    __cxa_guard_release(&DAT_01053c80);
  }
  if (DAT_01053c60 != (void *)0x0) {
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,DAT_01053c60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(&DAT_01053c68);
  DAT_01053c60 = (void *)uVar7;
  return;
}


