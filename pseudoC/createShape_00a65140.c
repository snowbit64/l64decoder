// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShape
// Entry Point: 00a65140
// Size: 360 bytes
// Signature: undefined __thiscall createShape(State * this, bool param_1)


/* FoliageSystemDesc::State::createShape(bool) */

ulong __thiscall FoliageSystemDesc::State::createShape(State *this,bool param_1)

{
  undefined4 *puVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  ulong uVar7;
  undefined4 local_58 [2];
  void *local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined4 **)(this + 0x58);
  uVar7 = (ulong)((long)puVar1 - *(long *)(this + 0x50)) >> 5;
  if ((uint)uVar7 < 8) {
    local_58[0] = 0;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_50 = (void *)0x0;
    if (puVar1 < *(undefined4 **)(this + 0x60)) {
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined4 **)(this + 0x58) = puVar1 + 8;
    }
    else {
                    /* try { // try from 00a651dc to 00a651e7 has its CatchHandler @ 00a652c0 */
      std::__ndk1::vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
      ::__push_back_slow_path<FoliageSystemDesc::Shape>
                ((vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                  *)(this + 0x50),(Shape *)local_58);
      pvVar4 = local_50;
      pvVar5 = local_48;
      if (local_50 != (void *)0x0) {
        while (pvVar3 = pvVar5, pvVar3 != pvVar4) {
          pvVar5 = (void *)((long)pvVar3 + -0x40);
          if ((*(byte *)((long)pvVar3 + -0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar3 + -0x28));
          }
        }
        local_48 = pvVar4;
        operator_delete(local_50);
      }
    }
  }
  else {
    if (param_1) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00a6526c to 00a65277 has its CatchHandler @ 00a652a8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: FoliageSystemDesc: %u exceeds maximum shape count\n",
                         uVar7 & 0xffffffff);
    }
    uVar7 = 0xffffffff;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}


