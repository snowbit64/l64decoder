// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007f74b4
// Size: 1608 bytes
// Signature: bool __cdecl applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ParallelogramHelper * param_3, AddDensityProcessor * param_4, DensityMapFilter * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShape<ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true> >(IDensityPixelSource*,
   ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const*,
   DensityMapFilter const*) */

bool DensityMapModifier::
     applyModuleToShape<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ParallelogramHelper *param_3,
               AddDensityProcessor *param_4,DensityMapFilter *param_5,DensityMapFilter *param_6)

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
                    /* try { // try from 007f7a34 to 007f7a3f has its CatchHandler @ 007f7b04 */
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
        bVar1 = applyModuleToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,param_3,param_4);
        return bVar1;
      }
    }
    else {
      if (*(long **)param_5 == (long *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 007f7a7c to 007f7a87 has its CatchHandler @ 007f7b00 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar11 = "DensityMapModifier: mask has NULL density map.\n";
        goto LAB_007f7638;
      }
      if (param_6 == (DensityMapFilter *)0x0) {
        lVar3 = (**(code **)(**(long **)param_5 + 0x38))();
        if (lVar3 != 0) {
          pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_5 + 0x38))();
          bVar1 = applyModuleToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pCVar4,param_3,param_4,param_5);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_5 + 0x40))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
          bVar1 = applyModuleToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pBVar7,param_3,param_4,param_5);
          return bVar1;
        }
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
        bVar1 = applyModuleToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
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
          bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pCVar4,pCVar5,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
        pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_5 + 0x38))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
          bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pCVar4,pBVar7,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
        bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,pCVar4,pPVar9,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      lVar3 = (**(code **)(**(long **)param_5 + 0x40))();
      lVar6 = (**(code **)(**(long **)param_6 + 0x38))();
      if (lVar3 == 0) {
        if (lVar6 != 0) {
          pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
          pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_6 + 0x38))();
          bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pPVar9,pCVar4,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
        pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_5 + 0x48))();
        if (lVar3 != 0) {
          pBVar7 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
          bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                            (param_1,param_2,pPVar9,pBVar7,param_3,param_4,param_5,param_6);
          return bVar1;
        }
        pPVar10 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
        bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,pPVar9,pPVar10,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      if (lVar6 != 0) {
        pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
        pCVar4 = (ChunkedBitSquare *)(**(code **)(**(long **)param_6 + 0x38))();
        bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,pBVar7,pCVar4,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      lVar3 = (**(code **)(**(long **)param_6 + 0x40))();
      pBVar7 = (BitVector *)(**(code **)(**(long **)param_5 + 0x40))();
      if (lVar3 != 0) {
        pBVar8 = (BitVector *)(**(code **)(**(long **)param_6 + 0x40))();
        bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                          (param_1,param_2,pBVar7,pBVar8,param_3,param_4,param_5,param_6);
        return bVar1;
      }
      pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(**(long **)param_6 + 0x48))();
      bVar1 = applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
                        (param_1,param_2,pBVar7,pPVar9,param_3,param_4,param_5,param_6);
      return bVar1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007f7ac4 to 007f7acf has its CatchHandler @ 007f7afc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar11 = "DensityMapModifier: mask2 has NULL density map.\n";
  }
LAB_007f7638:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11);
  return false;
}


