// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainDetailLayerGroupOption
// Entry Point: 00939e04
// Size: 304 bytes
// Signature: undefined __cdecl startTerrainDetailLayerGroupOption(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainDetailLayerGroupOption(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainDetailLayerGroupOption
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  pair pVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Logger *this;
  long lVar6;
  ulong local_50;
  long lStack_48;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = ExpatUtil::getAttr("name",param_3);
  local_3c = 0;
  ExpatUtil::getUIntAttr("value",&local_3c,param_3);
  if (lVar4 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00939ef0 to 00939ef7 has its CatchHandler @ 00939f44 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00939efc to 00939eff has its CatchHandler @ 00939f34 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar5 = LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: TerrainDetailLayer group option definition error.\n");
  }
  else {
    lVar6 = *(long *)((long)param_1 + 0x280);
    local_50 = (ulong)local_3c;
    lStack_48 = lVar4;
    pVar2 = std::__ndk1::
            __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::__emplace_unique<std::__ndk1::pair<unsigned_int,char_const*>>
                      ((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)(*(long *)(*(long *)(lVar6 + 0x1e8) +
                                     (ulong)*(uint *)(lVar6 + 0x200) * 0x2d8 + 0x2c0) +
                           (ulong)*(uint *)(lVar6 + 0x204) * 0x40 + 0x28),(pair *)&local_50);
    uVar5 = (ulong)pVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


