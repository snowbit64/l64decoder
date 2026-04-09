// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProfilerStringData
// Entry Point: 00bbb238
// Size: 776 bytes
// Signature: undefined __thiscall getProfilerStringData(LuauScriptSystem * this, basic_string * param_1, basic_string * param_2, uint param_3, bool param_4)


/* LuauScriptSystem::getProfilerStringData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned int, bool) */

void __thiscall
LuauScriptSystem::getProfilerStringData
          (LuauScriptSystem *this,basic_string *param_1,basic_string *param_2,uint param_3,
          bool param_4)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  pair *ppVar5;
  pair *ppVar6;
  pair *ppVar7;
  int iVar8;
  ulong uVar9;
  pair *ppVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  pair *local_138;
  pair *local_130;
  undefined8 local_128;
  linesCmp alStack_120 [144];
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  local_138 = (pair *)0x0;
  local_130 = (pair *)0x0;
  local_128 = 0;
                    /* try { // try from 00bbb288 to 00bbb29f has its CatchHandler @ 00bbb554 */
  uVar9 = LuaScriptProfiler::getSortedHitCountMap
                    (*(LuaScriptProfiler **)(this + 0x110),(vector *)&local_138);
  std::__ndk1::
  __sort<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
            (local_138,local_130,alStack_120);
                    /* try { // try from 00bbb2a0 to 00bbb307 has its CatchHandler @ 00bbb558 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  FUN_00bb947c(alStack_120,0x89,&DAT_004f80ce,uVar9 & 0xffffffff);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_2);
  FUN_00bb947c(alStack_120,0x89,&DAT_00504e76,(ulong)param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_2);
  ppVar10 = local_130;
  if (local_130 != local_138) {
    lVar11 = 0;
    uVar12 = 0;
    do {
      uVar2 = (long)local_138 + lVar11 + 9;
      if ((*(byte *)((long)local_138 + lVar11 + 8) & 1) != 0) {
        uVar2 = *(ulong *)((long)local_138 + lVar11 + 0x18);
      }
                    /* try { // try from 00bbb368 to 00bbb3a3 has its CatchHandler @ 00bbb564 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,uVar2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      FUN_00bb947c(alStack_120,0x89,&DAT_004f80ce,*(undefined4 *)((long)local_138 + lVar11));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)((long)local_138 + lVar11));
      fVar13 = fVar13 / (float)(uVar9 & 0xffffffff);
                    /* try { // try from 00bbb3bc to 00bbb3d7 has its CatchHandler @ 00bbb55c */
      FUN_00bb947c((double)(fVar13 * (float)(ulong)param_3),alStack_120,0x89," %8.0f");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
                    /* try { // try from 00bbb3e4 to 00bbb447 has its CatchHandler @ 00bbb560 */
      FUN_00bb947c((double)(fVar13 * 100.0),alStack_120,0x89," %3.2f\n");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
      if (param_4) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 00bbb47c to 00bbb487 has its CatchHandler @ 00bbb540 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        puVar1 = (uint *)((long)local_138 + lVar11);
        lVar3 = (long)puVar1 + 9;
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          lVar3 = *(long *)(puVar1 + 6);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s %d\n",lVar3,
                          (ulong)*puVar1);
      }
      ppVar10 = local_138;
      if (lVar11 == 0x460) break;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x20;
    } while (uVar12 < (ulong)((long)local_130 - (long)local_138 >> 5));
  }
  ppVar5 = ppVar10;
  ppVar7 = local_130;
  if (ppVar10 != (pair *)0x0) {
    while (ppVar6 = ppVar7, ppVar6 != ppVar10) {
      ppVar5 = local_138;
      ppVar7 = ppVar6 + -8;
      if ((*(byte *)(ppVar6 + -6) & 1) != 0) {
        operator_delete(*(void **)(ppVar6 + -2));
        ppVar5 = local_138;
      }
    }
    local_130 = ppVar10;
    operator_delete(ppVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


