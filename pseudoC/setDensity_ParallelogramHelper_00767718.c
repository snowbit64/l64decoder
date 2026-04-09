// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDensity<ParallelogramHelper>
// Entry Point: 00767718
// Size: 824 bytes
// Signature: uint __cdecl setDensity<ParallelogramHelper>(ParallelogramHelper * param_1, DensityMapFilter * param_2, DensityMapFilter * param_3, DensityMapFilter * param_4, uint param_5, uint param_6, int param_7, uint * param_8, uint * param_9)


/* unsigned int DensityMapOperations::setDensity<ParallelogramHelper>(ParallelogramHelper&,
   DensityMapFilter const&, DensityMapFilter const*, DensityMapFilter const*, unsigned int, unsigned
   int, int, unsigned int&, unsigned int&) */

uint DensityMapOperations::setDensity<ParallelogramHelper>
               (ParallelogramHelper *param_1,DensityMapFilter *param_2,DensityMapFilter *param_3,
               DensityMapFilter *param_4,uint param_5,uint param_6,int param_7,uint *param_8,
               uint *param_9)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ChunkedBitSquare *pCVar9;
  BitVector *pBVar10;
  undefined8 local_d8;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  int iStack_c4;
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
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long **)param_2 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 007679cc to 007679d7 has its CatchHandler @ 00767a54 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapModifier: filter has NULL density map.\n");
  }
  else {
    plVar7 = (long *)(**(code **)(**(long **)param_2 + 0x50))();
    if (plVar7 == (long *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00767a14 to 00767a1f has its CatchHandler @ 00767a50 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: filter has a non-writable density map.\n");
    }
    else {
      lVar8 = (**(code **)(*plVar7 + 0x30))();
      uStack_cc = param_5;
      local_c8 = param_6;
      iStack_c4 = param_7;
      local_88 = plVar7;
      if (lVar8 == 0) {
        local_d8 = 0;
        local_d0 = 0;
        local_c0 = (**(code **)(**(long **)param_2 + 0x28))();
        uVar5 = *(uint *)(param_2 + 0x10);
        local_b8 = *(uint *)(param_2 + 0x14);
        uVar1 = ~(-1 << (ulong)(local_b8 & 0x1f));
        uStack_bc = uVar5;
        uStack_b4 = uVar1;
        uVar4 = (**(code **)(**(long **)param_2 + 0x28))();
        local_ac = *(undefined8 *)(param_2 + 8);
        local_78 = -1 << (ulong)(uVar4 & 0x1f);
        uVar1 = uVar1 << (ulong)(uVar5 & 0x1f);
        uStack_9c = *(undefined8 *)(param_2 + 0x20);
        local_a4 = *(undefined8 *)(param_2 + 0x18);
        local_b0 = ~local_78;
        local_94 = *(undefined4 *)(param_2 + 0x28);
        local_74 = 0;
        local_70 = 0;
        local_80 = local_78 & (uVar1 ^ 0xffffffff);
        uStack_7c = ~uVar1;
        pBVar10 = (BitVector *)(**(code **)(*plVar7 + 0x38))(plVar7);
        bVar3 = DensityMapModifier::
                applyModuleToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>
                          ((IDensityPixelSource *)(plVar7 + 0xb),pBVar10,param_1,
                           (SetDensityProcessor *)&local_d8,param_3,param_4);
        if (bVar3) goto LAB_00767964;
      }
      else {
        local_d8 = 0;
        local_d0 = 0;
        local_c0 = (**(code **)(**(long **)param_2 + 0x28))();
        uVar5 = *(uint *)(param_2 + 0x10);
        local_b8 = *(uint *)(param_2 + 0x14);
        uVar1 = ~(-1 << (ulong)(local_b8 & 0x1f));
        uStack_bc = uVar5;
        uStack_b4 = uVar1;
        uVar4 = (**(code **)(**(long **)param_2 + 0x28))();
        local_ac = *(undefined8 *)(param_2 + 8);
        local_78 = -1 << (ulong)(uVar4 & 0x1f);
        uVar1 = uVar1 << (ulong)(uVar5 & 0x1f);
        uStack_9c = *(undefined8 *)(param_2 + 0x20);
        local_a4 = *(undefined8 *)(param_2 + 0x18);
        local_b0 = ~local_78;
        local_94 = *(undefined4 *)(param_2 + 0x28);
        local_74 = 0;
        local_70 = 0;
        local_80 = local_78 & (uVar1 ^ 0xffffffff);
        uStack_7c = ~uVar1;
        pCVar9 = (ChunkedBitSquare *)(**(code **)(*plVar7 + 0x30))(plVar7);
        bVar3 = DensityMapModifier::
                applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                          ((IDensityPixelSource *)(plVar7 + 0xb),pCVar9,param_1,
                           (SetDensityProcessor *)&local_d8,param_3,param_4);
        if (bVar3) {
LAB_00767964:
          uVar5 = (uint)local_d8;
          *param_8 = local_d8._4_4_;
          *param_9 = local_d0;
          goto LAB_0076798c;
        }
      }
    }
  }
  uVar5 = 0;
  *param_8 = 0;
  *param_9 = 0;
LAB_0076798c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


