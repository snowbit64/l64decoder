// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTypeIndex<ParallelogramHelper>
// Entry Point: 00768034
// Size: 792 bytes
// Signature: void __cdecl setTypeIndex<ParallelogramHelper>(ParallelogramHelper * param_1, DensityMapFilter * param_2, DensityMapFilter * param_3, DensityMapFilter * param_4, uint param_5, uint * param_6, uint * param_7)


/* void DensityMapOperations::setTypeIndex<ParallelogramHelper>(ParallelogramHelper&,
   DensityMapFilter const&, DensityMapFilter const*, DensityMapFilter const*, unsigned int, unsigned
   int&, unsigned int&) */

void DensityMapOperations::setTypeIndex<ParallelogramHelper>
               (ParallelogramHelper *param_1,DensityMapFilter *param_2,DensityMapFilter *param_3,
               DensityMapFilter *param_4,uint param_5,uint *param_6,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ChunkedBitSquare *pCVar8;
  BitVector *pBVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 local_d0;
  uint local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  long *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  undefined2 local_74;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar11 = *(long **)param_2;
  if (plVar11 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 007682c8 to 007682d3 has its CatchHandler @ 00768350 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar10 = "DensityMapModifier: filter has NULL density map.\n";
LAB_007681b8:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar10);
  }
  else {
    plVar11 = (long *)(**(code **)(*plVar11 + 0x50))(plVar11);
    if (plVar11 == (long *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00768310 to 0076831b has its CatchHandler @ 0076834c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar10 = "DensityMapModifier: filter has a non-writable density map.\n";
      goto LAB_007681b8;
    }
    lVar7 = (**(code **)(*plVar11 + 0x30))();
    local_c8 = param_5;
    local_88 = plVar11;
    if (lVar7 == 0) {
      local_d0 = 0;
      local_c0 = (**(code **)(**(long **)param_2 + 0x28))();
      uVar1 = *(uint *)(param_2 + 0x10);
      local_b8 = *(uint *)(param_2 + 0x14);
      uVar2 = ~(-1 << (ulong)(local_b8 & 0x1f));
      uStack_bc = uVar1;
      uStack_b4 = uVar2;
      uVar5 = (**(code **)(**(long **)param_2 + 0x28))();
      local_ac = *(undefined8 *)(param_2 + 8);
      local_78 = -1 << (ulong)(uVar5 & 0x1f);
      uVar2 = uVar2 << (ulong)(uVar1 & 0x1f);
      uStack_9c = *(undefined8 *)(param_2 + 0x20);
      local_a4 = *(undefined8 *)(param_2 + 0x18);
      local_b0 = ~local_78;
      local_94 = *(undefined4 *)(param_2 + 0x28);
      local_74 = 0;
      local_70 = 0;
      local_80 = local_78 & (uVar2 ^ 0xffffffff);
      uStack_7c = ~uVar2;
      pBVar9 = (BitVector *)(**(code **)(*plVar11 + 0x38))(plVar11);
      bVar4 = DensityMapModifier::
              applyModuleToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                        ((IDensityPixelSource *)(plVar11 + 0xb),pBVar9,param_1,
                         (SetTypeProcessor *)&local_d0,param_3,param_4);
      if (bVar4) goto LAB_00768168;
    }
    else {
      local_d0 = 0;
      local_c0 = (**(code **)(**(long **)param_2 + 0x28))();
      uVar1 = *(uint *)(param_2 + 0x10);
      local_b8 = *(uint *)(param_2 + 0x14);
      uVar2 = ~(-1 << (ulong)(local_b8 & 0x1f));
      uStack_bc = uVar1;
      uStack_b4 = uVar2;
      uVar5 = (**(code **)(**(long **)param_2 + 0x28))();
      local_ac = *(undefined8 *)(param_2 + 8);
      local_78 = -1 << (ulong)(uVar5 & 0x1f);
      uVar2 = uVar2 << (ulong)(uVar1 & 0x1f);
      uStack_9c = *(undefined8 *)(param_2 + 0x20);
      local_a4 = *(undefined8 *)(param_2 + 0x18);
      local_b0 = ~local_78;
      local_94 = *(undefined4 *)(param_2 + 0x28);
      local_74 = 0;
      local_70 = 0;
      local_80 = local_78 & (uVar2 ^ 0xffffffff);
      uStack_7c = ~uVar2;
      pCVar8 = (ChunkedBitSquare *)(**(code **)(*plVar11 + 0x30))(plVar11);
      bVar4 = DensityMapModifier::
              applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
                        ((IDensityPixelSource *)(plVar11 + 0xb),pCVar8,param_1,
                         (SetTypeProcessor *)&local_d0,param_3,param_4);
      if (bVar4) {
LAB_00768168:
        *param_6 = (uint)local_d0;
        *param_7 = local_d0._4_4_;
        goto LAB_00768288;
      }
    }
  }
  *param_6 = 0;
  *param_7 = 0;
LAB_00768288:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


