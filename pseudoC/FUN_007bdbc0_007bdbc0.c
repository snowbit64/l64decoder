// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bdbc0
// Entry Point: 007bdbc0
// Size: 120 bytes
// Signature: undefined FUN_007bdbc0(void)


void FUN_007bdbc0(TerrainDeformation *param_1,float *param_2)

{
  float fVar1;
  TerrainBrush *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = *param_2;
  fVar4 = param_2[4];
  fVar1 = param_2[8];
  fVar5 = param_2[0xc];
  fVar6 = param_2[0x10];
  fVar7 = param_2[0x14];
  pTVar2 = (TerrainBrush *)
           TerrainBrush::createBrush(*(BaseTerrain **)(param_1 + 0x38),(int)param_2[0x18]);
  TerrainDeformation::addWorldspaceSoftBrush
            (param_1,fVar3,fVar4,(BRUSH_TYPE)fVar1,fVar5,fVar6,fVar7,pTVar2);
  return;
}


