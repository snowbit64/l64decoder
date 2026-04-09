// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007e0edc
// Size: 1608 bytes
// Signature: bool __cdecl applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ParallelogramHelper * param_3, SetDensityProcessor * param_4, DensityMapFilter * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShape<ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true> >(IDensityPixelSource*,
   ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const*,
   DensityMapFilter const*) */

bool DensityMapModifier::
     applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ParallelogramHelper *param_3,
               SetDensityProcessor *param_4,DensityMapFilter *param_5,DensityMapFilter *param_6)

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
                    /* try { // try from 007e145c to 007e1467 has its CatchHandler @ 007e152c */
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
        bVar1 = applyModuleToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,param_3,param_4);
        return bVar1;
      }
    }
    else {
      if (*(long **)param_5 == (long *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 007e14a4 to 007e14af has its CatchHandler @ 007e1528 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar11 = "DensityMapModifier: mask has NULL density map.\n";
        goto LAB_007e1060;
      }
      if (param_6 == (DensityMapFilter *)0x0) {
        lVar3 = (**(code **)(**(long **)param_5 + 0x38))();
        if (lVar3 != 0) {
          pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_5 + 0x38))();
          bVar1 = applyModuleToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pCVar4,param_3,param_4,param_5);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_5 + 0x40))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
          bVar1 = applyModuleToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pBVar7,param_3,param_4,param_5);
          return bVar1;
        }
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
        bVar1 = applyModuleToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
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
          bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pCVar4,pCVar5,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
        pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_5 + 0x38))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
          bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pCVar4,pBVar7,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
        bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,pCVar4,pPVar9,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      lVar3 = (**(code **)(**(long **)param_5 + 0x40))();
      lVar6 = (**(code **)(**(long **)param_6 + 0x38))();
      if (lVar3 == 0) {
        if (lVar6 != 0) {
          pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
          pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_6 + 0x38))();
          bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pPVar9,pCVar4,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
          bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pPVar9,pBVar7,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        pPVar10 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
        bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,pPVar9,pPVar10,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      if (lVar6 != 0) {
        pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
        pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_6 + 0x38))();
        bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,pBVar7,pCVar4,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
      pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
      if (lVar3 != 0) {
        pBVar8 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
        bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,pBVar7,pBVar8,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
      bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
                        (param_1,param_2,pBVar7,pPVar9,param_3,param_4,param_5,param_6);
      return bVar1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007e14ec to 007e14f7 has its CatchHandler @ 007e1524 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar11 = "DensityMapModifier: mask2 has NULL density map.\n";
  }
LAB_007e1060:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11);
  return false;
}


