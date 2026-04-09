// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd9f4
// Entry Point: 007bd9f4
// Size: 180 bytes
// Signature: undefined FUN_007bd9f4(void)


void FUN_007bd9f4(TerrainBrush *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *param_2;
  fVar4 = param_2[4];
  fVar5 = param_2[8];
  fVar6 = param_2[0xc];
  fVar7 = param_2[0x10];
  fVar8 = param_2[0x14];
  fVar9 = param_2[0x18];
  fVar10 = param_2[0x1c];
  fVar2 = param_2[0x20];
  bVar1 = (bool)TerrainBrush::createBrush(*(BaseTerrain **)(param_1 + 0x38),(int)param_2[0x24]);
  TerrainDeformation::addWorldspaceArea
            (fVar3,fVar4,fVar5,fVar6,fVar7,fVar8,fVar9,fVar10,fVar2,param_1,bVar1);
  return;
}


