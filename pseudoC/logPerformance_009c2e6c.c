// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: logPerformance
// Entry Point: 009c2e6c
// Size: 436 bytes
// Signature: undefined __thiscall logPerformance(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::logPerformance(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementManager::logPerformance(ProceduralPlacementManager *this,basic_string *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  double dVar7;
  byte local_a8;
  undefined4 local_a7;
  undefined local_a3;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  char acStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = Watch::getCurrentTicks();
  dVar7 = (double)Watch::convertTicksToMs(lVar5 - *(long *)(this + 0x110));
  Watch::formatTimeSec(dVar7 / 1000.0,acStack_58);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 009c2fe4 to 009c2fef has its CatchHandler @ 009c3020 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar2 = *(ulong *)(param_1 + 4);
  local_a3 = 0;
  local_a8 = 8;
  if ((*(byte *)param_1 & 1) == 0) {
    uVar2 = (long)param_1 + 1;
  }
  local_a7 = 0x203a7325;
                    /* try { // try from 009c2efc to 009c2f03 has its CatchHandler @ 009c308c */
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_a8,uVar2);
  local_80 = (void *)puVar6[2];
  uStack_88 = puVar6[1];
  local_90 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
                    /* try { // try from 009c2f1c to 009c2f2b has its CatchHandler @ 009c306c */
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_90);
  local_60 = (void *)puVar6[2];
  uStack_68 = puVar6[1];
  local_70 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  pvVar1 = (void *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pvVar1 = local_60;
  }
                    /* try { // try from 009c2f5c to 009c2f6b has its CatchHandler @ 009c3034 */
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,pvVar1,acStack_58);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


