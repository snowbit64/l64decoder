// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensity<ParallelogramHelper>
// Entry Point: 007672d4
// Size: 756 bytes
// Signature: uint __cdecl getDensity<ParallelogramHelper>(ParallelogramHelper * param_1, DensityMapFilter * param_2, DensityMapFilter * param_3, DensityMapFilter * param_4, int param_5, uint * param_6, uint * param_7)


/* unsigned int DensityMapOperations::getDensity<ParallelogramHelper>(ParallelogramHelper&,
   DensityMapFilter const&, DensityMapFilter const*, DensityMapFilter const*, int, unsigned int&,
   unsigned int&) */

uint DensityMapOperations::getDensity<ParallelogramHelper>
               (ParallelogramHelper *param_1,DensityMapFilter *param_2,DensityMapFilter *param_3,
               DensityMapFilter *param_4,int param_5,uint *param_6,uint *param_7)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ChunkedBitSquare *pCVar6;
  BitVector *pBVar7;
  ProceduralDensityPixelSource *pPVar8;
  long *plVar9;
  undefined8 local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar9 = *(long **)param_2;
  if (plVar9 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0076758c to 00767597 has its CatchHandler @ 007675c8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapModifier: filter has NULL density map.\n");
  }
  else {
    lVar5 = (**(code **)(*plVar9 + 0x38))(plVar9);
    iStack_94 = param_5;
    if (lVar5 == 0) {
      lVar5 = (**(code **)(**(long **)param_2 + 0x40))();
      if (lVar5 == 0) {
        local_a0 = 0;
        local_98 = 0;
        local_90 = (**(code **)(**(long **)param_2 + 0x28))();
        uStack_8c = *(undefined4 *)(param_2 + 0x10);
        local_88 = *(uint *)(param_2 + 0x14);
        uStack_84 = ~(-1 << (ulong)(local_88 & 0x1f));
        uVar3 = (**(code **)(**(long **)param_2 + 0x28))();
        uStack_6c = *(undefined8 *)(param_2 + 0x20);
        local_74 = *(undefined8 *)(param_2 + 0x18);
        local_64 = *(undefined4 *)(param_2 + 0x28);
        local_80 = ~(-1 << (ulong)(uVar3 & 0x1f));
        plVar9 = *(long **)param_2;
        local_7c = *(undefined8 *)(param_2 + 8);
        pPVar8 = (ProceduralDensityPixelSource *)(**(code **)(*plVar9 + 0x48))(plVar9);
        bVar2 = DensityMapModifier::
                applyModuleToShape<ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
                          ((IDensityPixelSource *)plVar9,pPVar8,param_1,
                           (GetDensityProcessor *)&local_a0,param_3,param_4);
        if (bVar2) goto LAB_00767540;
      }
      else {
        local_a0 = 0;
        local_98 = 0;
        local_90 = (**(code **)(**(long **)param_2 + 0x28))();
        uStack_8c = *(undefined4 *)(param_2 + 0x10);
        local_88 = *(uint *)(param_2 + 0x14);
        uStack_84 = ~(-1 << (ulong)(local_88 & 0x1f));
        uVar3 = (**(code **)(**(long **)param_2 + 0x28))();
        uStack_6c = *(undefined8 *)(param_2 + 0x20);
        local_74 = *(undefined8 *)(param_2 + 0x18);
        local_64 = *(undefined4 *)(param_2 + 0x28);
        local_80 = ~(-1 << (ulong)(uVar3 & 0x1f));
        plVar9 = *(long **)param_2;
        local_7c = *(undefined8 *)(param_2 + 8);
        pBVar7 = (BitVector *)(**(code **)(*plVar9 + 0x40))(plVar9);
        bVar2 = DensityMapModifier::
                applyModuleToShape<BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
                          ((IDensityPixelSource *)plVar9,pBVar7,param_1,
                           (GetDensityProcessor *)&local_a0,param_3,param_4);
        if (bVar2) {
LAB_00767540:
          uVar3 = (uint)local_a0;
          *param_6 = local_a0._4_4_;
          *param_7 = local_98;
          goto LAB_00767550;
        }
      }
    }
    else {
      local_a0 = 0;
      local_98 = 0;
      local_90 = (**(code **)(**(long **)param_2 + 0x28))();
      uStack_8c = *(undefined4 *)(param_2 + 0x10);
      local_88 = *(uint *)(param_2 + 0x14);
      uStack_84 = ~(-1 << (ulong)(local_88 & 0x1f));
      uVar3 = (**(code **)(**(long **)param_2 + 0x28))();
      local_64 = *(undefined4 *)(param_2 + 0x28);
      uStack_6c = *(undefined8 *)(param_2 + 0x20);
      local_74 = *(undefined8 *)(param_2 + 0x18);
      local_80 = ~(-1 << (ulong)(uVar3 & 0x1f));
      plVar9 = *(long **)param_2;
      local_7c = *(undefined8 *)(param_2 + 8);
      pCVar6 = (ChunkedBitSquare *)(**(code **)(*plVar9 + 0x38))(plVar9);
      bVar2 = DensityMapModifier::
              applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
                        ((IDensityPixelSource *)plVar9,pCVar6,param_1,
                         (GetDensityProcessor *)&local_a0,param_3,param_4);
      if (bVar2) goto LAB_00767540;
    }
  }
  uVar3 = 0;
  *param_6 = 0;
  *param_7 = 0;
LAB_00767550:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


