// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b96f0
// Entry Point: 007b96f0
// Size: 240 bytes
// Signature: undefined FUN_007b96f0(void)


long * FUN_007b96f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  VehicleNavigationPlanner **ppVVar6;
  TerrainTransformGroup *pTVar7;
  long *this;
  ulong uVar8;
  char *pcVar9;
  VehicleNavigationPlanner *pVVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar11 = *param_1;
  fVar1 = param_1[4];
  fVar12 = param_1[8];
  pcVar9 = *(char **)(param_1 + 0xc);
  fVar2 = param_1[0x10];
  fVar3 = param_1[0x14];
  fVar4 = param_1[0x18];
  fVar13 = param_1[0x1c];
  cVar5 = *(char *)(param_1 + 0x20);
  ppVVar6 = (VehicleNavigationPlanner **)VehicleNavigationManager::getInstance();
  pVVar10 = *ppVVar6;
  pTVar7 = (TerrainTransformGroup *)
           ReflectionUtil::getEntity((uint)fVar1,0x80,"createVehicleNavigationMap","terrain");
  if (pTVar7 != (TerrainTransformGroup *)0x0) {
    this = (long *)operator_new(0x268);
                    /* try { // try from 007b976c to 007b976f has its CatchHandler @ 007b97e0 */
    VehicleNavigationMapGenerator::VehicleNavigationMapGenerator
              ((VehicleNavigationMapGenerator *)this);
    uVar8 = VehicleNavigationMapGenerator::init
                      ((VehicleNavigationMapGenerator *)this,pVVar10,pTVar7,fVar11,fVar12,pcVar9,
                       (uint)fVar2,(uint)fVar3,(uint)fVar4,fVar13,cVar5 != '\0');
    if ((uVar8 & 1) != 0) {
      return this;
    }
    (**(code **)(*this + 8))(this);
  }
  return (long *)0x0;
}


