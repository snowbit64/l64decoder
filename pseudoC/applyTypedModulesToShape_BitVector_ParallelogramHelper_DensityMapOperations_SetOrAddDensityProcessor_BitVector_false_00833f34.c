// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 00833f34
// Size: 1360 bytes
// Signature: bool __cdecl applyTypedModulesToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, ParallelogramHelper * param_3, uint param_4, TypedModules * param_5, IDensityPixelSource * param_6, IDensityPixelSource * param_7)


/* bool DensityMapModifier::applyTypedModulesToShape<BitVector, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false> >(IDensityPixelSource*,
   BitVector*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*, IDensityPixelSource const*, IDensityPixelSource const*) */

bool DensityMapModifier::
     applyTypedModulesToShape<BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,ParallelogramHelper *param_3,
               uint param_4,TypedModules *param_5,IDensityPixelSource *param_6,
               IDensityPixelSource *param_7)

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
  
  if (param_1 == (IDensityPixelSource *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0083444c to 00834457 has its CatchHandler @ 00834484 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapModifier: filter has NULL density map.\n");
    bVar1 = false;
  }
  else {
    if (param_7 == (IDensityPixelSource *)0x0) {
      if (param_6 == (IDensityPixelSource *)0x0) {
        bVar1 = applyTypedModulesToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                          (param_1,param_2,param_3,param_4,param_5);
        return bVar1;
      }
      lVar3 = (**(code **)(*(long *)param_6 + 0x38))(param_6);
      if (lVar3 == 0) {
        lVar3 = (**(code **)(*(long *)param_6 + 0x40))(param_6);
        if (lVar3 == 0) {
          pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(*(long *)param_6 + 0x48))(param_6);
          bVar1 = applyTypedModulesToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                            (param_1,param_2,param_6,pPVar9,param_3,param_4,param_5);
          return bVar1;
        }
        pBVar7 = (BitVector *)(**(code **)(*(long *)param_6 + 0x40))(param_6);
        bVar1 = applyTypedModulesToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                          (param_1,param_2,param_6,pBVar7,param_3,param_4,param_5);
        return bVar1;
      }
      pCVar4 = (ChunkedBitSquare *)(**(code **)(*(long *)param_6 + 0x38))(param_6);
      bVar1 = applyTypedModulesToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                        (param_1,param_2,param_6,pCVar4,param_3,param_4,param_5);
      return bVar1;
    }
    lVar3 = (**(code **)(*(long *)param_6 + 0x38))(param_6);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(long *)param_6 + 0x40))(param_6);
      lVar6 = (**(code **)(*(long *)param_7 + 0x38))(param_7);
      if (lVar3 == 0) {
        if (lVar6 == 0) {
          lVar3 = (**(code **)(*(long *)param_7 + 0x40))(param_7);
          pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(*(long *)param_6 + 0x48))(param_6);
          if (lVar3 == 0) {
            pPVar10 = (ProceduralDensityPixelSource *)
                      (**(code **)(*(long *)param_7 + 0x48))(param_7);
            bVar1 = applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                              (param_1,param_2,param_6,pPVar9,param_7,pPVar10,param_3,param_4,
                               param_5);
          }
          else {
            pBVar7 = (BitVector *)(**(code **)(*(long *)param_7 + 0x40))(param_7);
            bVar1 = applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                              (param_1,param_2,param_6,pPVar9,param_7,pBVar7,param_3,param_4,param_5
                              );
          }
        }
        else {
          pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(*(long *)param_6 + 0x48))(param_6);
          pCVar4 = (ChunkedBitSquare *)(**(code **)(*(long *)param_7 + 0x38))(param_7);
          bVar1 = applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                            (param_1,param_2,param_6,pPVar9,param_7,pCVar4,param_3,param_4,param_5);
        }
      }
      else if (lVar6 == 0) {
        lVar3 = (**(code **)(*(long *)param_7 + 0x40))(param_7);
        pBVar7 = (BitVector *)(**(code **)(*(long *)param_6 + 0x40))(param_6);
        if (lVar3 == 0) {
          pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(*(long *)param_7 + 0x48))(param_7);
          bVar1 = applyTypedModulesToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                            (param_1,param_2,param_6,pBVar7,param_7,pPVar9,param_3,param_4,param_5);
        }
        else {
          pBVar8 = (BitVector *)(**(code **)(*(long *)param_7 + 0x40))(param_7);
          bVar1 = applyTypedModulesToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                            (param_1,param_2,param_6,pBVar7,param_7,pBVar8,param_3,param_4,param_5);
        }
      }
      else {
        pBVar7 = (BitVector *)(**(code **)(*(long *)param_6 + 0x40))(param_6);
        pCVar4 = (ChunkedBitSquare *)(**(code **)(*(long *)param_7 + 0x38))(param_7);
        bVar1 = applyTypedModulesToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                          (param_1,param_2,param_6,pBVar7,param_7,pCVar4,param_3,param_4,param_5);
      }
    }
    else {
      lVar3 = (**(code **)(*(long *)param_7 + 0x38))(param_7);
      if (lVar3 == 0) {
        lVar3 = (**(code **)(*(long *)param_7 + 0x40))(param_7);
        pCVar4 = (ChunkedBitSquare *)(**(code **)(*(long *)param_6 + 0x38))(param_6);
        if (lVar3 == 0) {
          pPVar9 = (ProceduralDensityPixelSource *)(**(code **)(*(long *)param_7 + 0x48))(param_7);
          bVar1 = applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                            (param_1,param_2,param_6,pCVar4,param_7,pPVar9,param_3,param_4,param_5);
        }
        else {
          pBVar7 = (BitVector *)(**(code **)(*(long *)param_7 + 0x40))(param_7);
          bVar1 = applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                            (param_1,param_2,param_6,pCVar4,param_7,pBVar7,param_3,param_4,param_5);
        }
      }
      else {
        pCVar4 = (ChunkedBitSquare *)(**(code **)(*(long *)param_6 + 0x38))(param_6);
        pCVar5 = (ChunkedBitSquare *)(**(code **)(*(long *)param_7 + 0x38))(param_7);
        bVar1 = applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                          (param_1,param_2,param_6,pCVar4,param_7,pCVar5,param_3,param_4,param_5);
      }
    }
  }
  return bVar1;
}


