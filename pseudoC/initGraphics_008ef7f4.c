// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initGraphics
// Entry Point: 008ef7f4
// Size: 672 bytes
// Signature: undefined __thiscall initGraphics(GeoMipMappingTerrain * this, IRenderDevice * param_1)


/* GeoMipMappingTerrain::initGraphics(IRenderDevice*) */

uint __thiscall
GeoMipMappingTerrain::initGraphics(GeoMipMappingTerrain *this,IRenderDevice *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  GeoQuadTree *this_00;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = BaseTerrain::baseInitializationGraphics((BaseTerrain *)this,param_1);
  if ((uVar5 & 1) != 0) {
    if (*(long **)(this + 600) != (long *)0x0) {
      (**(code **)(**(long **)(this + 600) + 8))();
    }
    if (*(long **)(this + 0x260) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x260) + 8))();
    }
    local_54 = 0;
    uStack_9c = 0;
    local_84 = 0;
    local_a4 = 0x500000000;
    uStack_7c = 0xf00000000;
    uStack_ac = 0;
    local_b8 = 2;
    uStack_5c = 0;
    local_64 = 0;
    uStack_6c = 0;
    local_74 = 0;
    uStack_8c = 0;
    local_94 = 0;
    local_4c = 1;
    local_b4 = 0x100000000;
    uVar7 = (**(code **)(*(long *)param_1 + 0x128))(param_1,&local_b8);
    *(undefined8 *)(this + 600) = uVar7;
    uVar7 = GeoMipMappingTerrainPatch::generateVertexData
                      ((1 << (ulong)(*(uint *)(this + 0x198) & 0x1f)) + 1,param_1);
    *(undefined8 *)(this + 0x260) = uVar7;
    GeoMipMappingTerrainPatch::generateTriListIndexData
              ((IndexData *)(this + 0x1d8),0,(1 << (ulong)(*(uint *)(this + 0x198) & 0x1f)) + 1,
               param_1);
    GeoMipMappingTerrainPatch::generateTriListIndexData
              ((IndexData *)(this + 0x1e8),1,(1 << (ulong)(*(uint *)(this + 0x198) & 0x1f)) + 1,
               param_1);
    GeoMipMappingTerrainPatch::generateTriListIndexData
              ((IndexData *)(this + 0x1f8),2,(1 << (ulong)(*(uint *)(this + 0x198) & 0x1f)) + 1,
               param_1);
    GeoMipMappingTerrainPatch::generateTriListIndexData
              ((IndexData *)(this + 0x208),3,(1 << (ulong)(*(uint *)(this + 0x198) & 0x1f)) + 1,
               param_1);
    GeoMipMappingTerrainPatch::generateTriListIndexData
              ((IndexData *)(this + 0x218),4,(1 << (ulong)(*(uint *)(this + 0x198) & 0x1f)) + 1,
               param_1);
    GeoMipMappingTerrainPatch::generateTriListIndexData
              ((IndexData *)(this + 0x228),5,(1 << (ulong)(*(uint *)(this + 0x198) & 0x1f)) + 1,
               param_1);
    GeoMipMappingTerrainPatch::generateTriListIndexData
              ((IndexData *)(this + 0x238),6,(1 << (ulong)(*(uint *)(this + 0x198) & 0x1f)) + 1,
               param_1);
    fVar11 = (float)BaseTerrain::getTerrainHalfSize();
    fVar12 = (float)BaseTerrain::getUnitsPerPixel();
    fVar11 = fVar11 * fVar12;
    iVar6 = BaseTerrain::getHeightMapSize();
    uVar1 = iVar6 - 1;
    uVar9 = 0;
    uVar7 = NEON_cnt((ulong)uVar1,1);
    uVar10 = NEON_uaddlv(uVar7,1);
    if ((int)CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar10) == 1) {
      bVar4 = (uVar1 & 0xffff0000) != 0;
      uVar9 = uVar1 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar1;
      }
      uVar8 = (uint)bVar4;
      uVar1 = uVar8 << 4 | 8;
      uVar3 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar1 = uVar8 << 4;
        uVar3 = uVar9;
      }
      uVar9 = uVar1 | 4;
      uVar8 = uVar3 >> 4;
      if (uVar3 < 0x10) {
        uVar9 = uVar1;
        uVar8 = uVar3;
      }
      uVar1 = uVar9 | 2;
      uVar3 = uVar8 >> 2;
      if (uVar8 < 4) {
        uVar1 = uVar9;
        uVar3 = uVar8;
      }
      uVar9 = (uVar3 + uVar1) - 1;
    }
    this_00 = (GeoQuadTree *)operator_new(0x18);
                    /* try { // try from 008efa4c to 008efa5b has its CatchHandler @ 008efa94 */
    GeoQuadTree::GeoQuadTree
              (this_00,this,uVar9,*(uint *)(this + 0x198),-fVar11,-fVar11,fVar11 + fVar11);
    *(GeoQuadTree **)(this + 400) = this_00;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


