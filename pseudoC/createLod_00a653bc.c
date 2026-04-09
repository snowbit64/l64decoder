// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLod
// Entry Point: 00a653bc
// Size: 372 bytes
// Signature: undefined __thiscall createLod(Shape * this, bool param_1)


/* FoliageSystemDesc::Shape::createLod(bool) */

ulong __thiscall FoliageSystemDesc::Shape::createLod(Shape *this,bool param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_68;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined uStack_34;
  undefined7 uStack_33;
  undefined uStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x10);
  uVar4 = (ulong)((long)puVar1 - *(long *)(this + 8)) >> 6;
  if ((uint)uVar4 < 8) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    local_68 = 0x40a0000042a00000;
    lVar5 = NEON_fmov(0x3f800000,4);
    local_48 = 1;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_44 = 0x3f800000;
    uStack_40 = 0;
    uStack_34 = (undefined)lVar5;
    uStack_33 = (undefined7)((ulong)lVar5 >> 8);
    if (puVar1 < *(undefined8 **)(this + 0x18)) {
      *puVar1 = 0x40a0000042a00000;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[1] = 0;
      uStack_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      puVar1[5] = 0;
      puVar1[4] = 0x3f80000000000001;
      *(ulong *)((long)puVar1 + 0x35) = CONCAT17(uStack_2c,uStack_33);
      *(long *)((long)puVar1 + 0x2d) = lVar5 << 0x38;
      *(undefined8 **)(this + 0x10) = puVar1 + 8;
    }
    else {
                    /* try { // try from 00a654a4 to 00a654af has its CatchHandler @ 00a65548 */
      std::__ndk1::vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::
      __push_back_slow_path<FoliageSystemDesc::Lod>
                ((vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> *)
                 (this + 8),(Lod *)&local_68);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
    }
  }
  else {
    if (param_1) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00a654f4 to 00a654ff has its CatchHandler @ 00a65530 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: FoliageSystemDesc: %u exceeds maximum LOD count\n",
                         uVar4 & 0xffffffff);
    }
    uVar4 = 0xffffffff;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


