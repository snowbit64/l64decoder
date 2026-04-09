// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bc88c
// Entry Point: 007bc88c
// Size: 384 bytes
// Signature: undefined FUN_007bc88c(void)


void FUN_007bc88c(long param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined **local_80 [6];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DensityMapOperationShapes::Parallelogram::Parallelogram((Parallelogram *)&local_98);
  plVar3 = *(long **)(param_1 + 0x20);
  fVar4 = *param_2;
  fVar5 = param_2[4];
  uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  local_98 = fVar4 / (float)(uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = *(long **)(param_1 + 0x20);
  fVar4 = param_2[8];
  local_94 = fVar5 / (float)(uVar2 & 0xffffffff);
  fVar5 = param_2[0xc];
  uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  local_90 = fVar4 / (float)(uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = *(long **)(param_1 + 0x20);
  fVar4 = param_2[0x10];
  local_8c = fVar5 / (float)(uVar2 & 0xffffffff);
  fVar5 = param_2[0x14];
  uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  local_88 = fVar4 / (float)(uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
  local_84 = fVar5 / (float)(uVar2 & 0xffffffff);
  DensityMapModifier::DensityMapModifier
            ((DensityMapModifier *)local_80,*(DensityMap **)(param_1 + 0x20));
  local_80[0] = &PTR__DensityMapModifier_00fdba88;
                    /* try { // try from 007bc9ac to 007bc9b3 has its CatchHandler @ 007bca10 */
  local_50 = DensityMap::getPolygonRoundingMode();
                    /* try { // try from 007bc9c0 to 007bc9cb has its CatchHandler @ 007bca0c */
  fVar4 = (float)DensityMapOldOperations::getDensityParallelogramSimple
                           ((DensityMapOldOperations *)local_80,(Parallelogram *)&local_98,
                            (uint)param_2[0x18],(uint)param_2[0x1c]);
  param_2[0x40] = fVar4;
  param_2[0x42] = 1.401298e-45;
  DensityMapModifier::~DensityMapModifier((DensityMapModifier *)local_80);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


