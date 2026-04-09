// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTerrainDetailTransformGroupDesc
// Entry Point: 00a66e74
// Size: 160 bytes
// Signature: undefined __thiscall createTerrainDetailTransformGroupDesc(FoliageSystemDesc * this, uint param_1, uint param_2, uint param_3, TerrainDetailTransformGroupDesc * param_4)


/* FoliageSystemDesc::createTerrainDetailTransformGroupDesc(unsigned int, unsigned int, unsigned
   int, TerrainDetailTransformGroupDesc&) */

undefined8 * __thiscall
FoliageSystemDesc::createTerrainDetailTransformGroupDesc
          (FoliageSystemDesc *this,uint param_1,uint param_2,uint param_3,
          TerrainDetailTransformGroupDesc *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)getMultiLayer(this,param_1,true);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = getLayer(this,param_1,param_2,true);
    if (lVar3 != 0) {
      fVar5 = *(float *)this;
      uVar1 = *(undefined4 *)(this + 8);
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(this + 4);
      uVar4 = *puVar2;
      uVar6 = *(undefined8 *)(lVar3 + 0x4c);
      *(undefined4 *)(param_4 + 8) = uVar1;
      *(undefined8 *)(param_4 + 0x10) = uVar4;
      *(undefined8 *)(param_4 + 0x18) = uVar6;
      *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(lVar3 + 0x48);
      *(float *)param_4 = fVar5 / (float)(ulong)param_3;
    }
    puVar2 = (undefined8 *)(ulong)(lVar3 != 0);
  }
  return puVar2;
}


