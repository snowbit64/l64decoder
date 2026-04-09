// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
// Entry Point: 0080e12c
// Size: 1608 bytes
// Signature: bool __cdecl applyModuleToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ParallelogramHelper * param_3, SetTypeProcessor * param_4, DensityMapFilter * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShape<BitVector, ParallelogramHelper,
   DensityMapOperations::SetTypeProcessor<BitVector> >(IDensityPixelSource*, BitVector*,
   ParallelogramHelper&, DensityMapOperations::SetTypeProcessor<BitVector>&, DensityMapFilter
   const*, DensityMapFilter const*) */

bool DensityMapModifier::
     applyModuleToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,ParallelogramHelper *param_3,
               SetTypeProcessor *param_4,DensityMapFilter *param_5,DensityMapFilter *param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ChunkedBitSquare *pCVar4;
  ChunkedBitSquare *pCVar5;
  long lVar6;
  BitVector *pBVar7;
  BitVector *pBVar8;
  ProceduralDensityPixelSource *pPVar9;
  ProceduralDensityPixelSource *pPVar10;
  char *pcVar11;
  
  if (param_1 == (IDensityPixelSource *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0080e6ac to 0080e6b7 has its CatchHandler @ 0080e77c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar11 = "DensityMapModifier: filter has NULL density map.\n";
  }
  else {
    if (param_5 == (DensityMapFilter *)0x0) {
      if (param_6 == (DensityMapFilter *)0x0) {
        bVar1 = applyModuleToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                          (param_1,param_2,param_3,param_4);
        return bVar1;
      }
    }
    else {
      if (*(long **)param_5 == (long *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 0080e6f4 to 0080e6ff has its CatchHandler @ 0080e778 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar11 = "DensityMapModifier: mask has NULL density map.\n";
        goto LAB_0080e2b0;
      }
      if (param_6 == (DensityMapFilter *)0x0) {
        lVar3 = (**(code **)(**(long **)param_5 + 0x38))();
        if (lVar3 != 0) {
          pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_5 + 0x38))();
          bVar1 = applyModuleToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                            (param_1,param_2,pCVar4,param_3,param_4,param_5);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_5 + 0x40))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
          bVar1 = applyModuleToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                            (param_1,param_2,pBVar7,param_3,param_4,param_5);
          return bVar1;
        }
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
        bVar1 = applyModuleToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                          (param_1,param_2,pPVar9,param_3,param_4,param_5);
        return bVar1;
      }
    }
    if (*(long *)param_6 != 0) {
      lVar3 = (**(code **)(**(long **)param_5 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = (**(code **)(**(long **)param_6 + 0x38))();
        if (lVar3 != 0) {
          pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_5 + 0x38))();
          pCVar5 = (ChunkedBitSquare *)(**(code **)(**(long **)param_6 + 0x38))();
          bVar1 = applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                            (param_1,param_2,pCVar4,pCVar5,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
        pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_5 + 0x38))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
          bVar1 = applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                            (param_1,param_2,pCVar4,pBVar7,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
        bVar1 = applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                          (param_1,param_2,pCVar4,pPVar9,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      lVar3 = (**(code **)(**(long **)param_5 + 0x40))();
      lVar6 = (**(code **)(**(long **)param_6 + 0x38))();
      if (lVar3 == 0) {
        if (lVar6 != 0) {
          pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
          pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_6 + 0x38))();
          bVar1 = applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                            (param_1,param_2,pPVar9,pCVar4,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
          bVar1 = applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                            (param_1,param_2,pPVar9,pBVar7,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        pPVar10 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
        bVar1 = applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                          (param_1,param_2,pPVar9,pPVar10,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      if (lVar6 != 0) {
        pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
        pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_6 + 0x38))();
        bVar1 = applyModuleToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                          (param_1,param_2,pBVar7,pCVar4,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
      pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
      if (lVar3 != 0) {
        pBVar8 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
        bVar1 = applyModuleToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                          (param_1,param_2,pBVar7,pBVar8,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
      bVar1 = applyModuleToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
                        (param_1,param_2,pBVar7,pPVar9,param_3,param_4,param_5,param_6);
      return bVar1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0080e73c to 0080e747 has its CatchHandler @ 0080e774 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar11 = "DensityMapModifier: mask2 has NULL density map.\n";
  }
LAB_0080e2b0:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11);
  return false;
}


