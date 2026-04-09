// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTerrainDetailTransformGroupDesc
// Entry Point: 00a66f14
// Size: 132 bytes
// Signature: undefined __thiscall createTerrainDetailTransformGroupDesc(FoliageSystemDesc * this, uint param_1, uint param_2, TerrainDetailTransformGroupDesc * param_3)


/* FoliageSystemDesc::createTerrainDetailTransformGroupDesc(unsigned int, unsigned int,
   TerrainDetailTransformGroupDesc&) */

bool __thiscall
FoliageSystemDesc::createTerrainDetailTransformGroupDesc
          (FoliageSystemDesc *this,uint param_1,uint param_2,
          TerrainDetailTransformGroupDesc *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long **pplVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  
  pplVar3 = (long **)getMultiLayer(this,param_1,true);
  if (pplVar3 != (long **)0x0) {
    fVar6 = *(float *)this;
    uVar1 = *(undefined4 *)(this + 4);
    *(undefined4 *)(param_3 + 0x18) = 0;
    plVar4 = *pplVar3;
    *(undefined4 *)(param_3 + 4) = uVar1;
    lVar5 = *plVar4;
    *(long **)(param_3 + 0x10) = plVar4;
    *(float *)param_3 = fVar6 / (float)(ulong)param_2;
    uVar2 = (**(code **)(lVar5 + 0x58))();
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    *(undefined4 *)(param_3 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_3 + 8) = uVar1;
  }
  return pplVar3 != (long **)0x0;
}


