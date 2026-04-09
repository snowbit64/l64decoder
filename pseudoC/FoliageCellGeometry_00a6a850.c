// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FoliageCellGeometry
// Entry Point: 00a6a850
// Size: 436 bytes
// Signature: undefined __thiscall FoliageCellGeometry(FoliageCellGeometry * this, char * param_1, FoliageLayerGraphics * param_2)


/* FoliageCellGeometry::FoliageCellGeometry(char const*, FoliageLayerGraphics*) */

void __thiscall
FoliageCellGeometry::FoliageCellGeometry
          (FoliageCellGeometry *this,char *param_1,FoliageLayerGraphics *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  Geometry::Geometry((Geometry *)this,param_1,false);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  lVar5 = *(long *)(param_2 + 0x68);
  lVar7 = *(long *)(param_2 + 0x70);
  *(FoliageLayerGraphics **)(this + 0x58) = param_2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__FoliageCellGeometry_00fe3c28;
  *(undefined ***)(this + 0x10) = &PTR__FoliageCellGeometry_00fe3c78;
  uVar6 = (ulong)(lVar7 - lVar5) >> 6 & 0xffffffff;
  if (uVar6 == 0) {
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
                    /* try { // try from 00a6a8b4 to 00a6a9cf has its CatchHandler @ 00a6aa04 */
    std::__ndk1::
    vector<FoliageCellGeometry::RenderPartitionInfo,std::__ndk1::allocator<FoliageCellGeometry::RenderPartitionInfo>>
    ::__append((vector<FoliageCellGeometry::RenderPartitionInfo,std::__ndk1::allocator<FoliageCellGeometry::RenderPartitionInfo>>
                *)(this + 0x70),uVar6);
    lVar5 = *(long *)(this + 0x88);
    lVar7 = *(long *)(this + 0x90);
  }
  uVar6 = lVar7 - lVar5 >> 2;
  uVar8 = (ulong)(uint)((int)((ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50)) >> 3) *
                       0x286bca1b);
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
    if (uVar8 < uVar6) {
      *(ulong *)(this + 0x90) = lVar5 + uVar8 * 4;
    }
  }
  else {
    std::__ndk1::
    vector<FoliageCellGeometry::MaterialInfo,std::__ndk1::allocator<FoliageCellGeometry::MaterialInfo>>
    ::__append((vector<FoliageCellGeometry::MaterialInfo,std::__ndk1::allocator<FoliageCellGeometry::MaterialInfo>>
                *)(this + 0x88),uVar8 - uVar6);
  }
  lVar5 = *(long *)(this + 0x70);
  lVar7 = *(long *)(this + 0x78) - lVar5;
  if (lVar7 != 0) {
    uVar8 = 0;
    uVar6 = (lVar7 >> 3) * -0x5555555555555555;
    lVar9 = *(long *)(param_2 + 0x68);
    do {
      lVar1 = uVar8 * 0x40;
      lVar3 = uVar8 * 0x18;
      uVar8 = (ulong)((int)uVar8 + 1);
      *(undefined8 *)(lVar5 + lVar3 + 0x10) = *(undefined8 *)(lVar9 + lVar1 + 8);
    } while (uVar8 <= uVar6 && uVar6 - uVar8 != 0);
    if (lVar7 != 0) {
      uVar8 = 0;
      do {
        puVar10 = (undefined8 *)(lVar5 + uVar8 * 0x18);
        uVar8 = (ulong)((int)uVar8 + 1);
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
      } while (uVar8 <= uVar6 && uVar6 - uVar8 != 0);
    }
  }
  lVar5 = *(long *)(this + 0x88);
  lVar7 = *(long *)(this + 0x90) - lVar5;
  if (lVar7 != 0) {
    uVar6 = 0;
    do {
      *(undefined4 *)(lVar5 + uVar6 * 4) = 0;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(lVar7 >> 2));
  }
  pvVar4 = operator_new__(((ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50)) >> 3) *
                          0xa1af286c & 0x3fffffffc);
  *(void **)(this + 0xa0) = pvVar4;
  *(undefined4 *)(this + 0xa8) = 0;
  this[0xad] = (FoliageCellGeometry)0x0;
  lVar5 = EngineManager::getInstance();
  bVar2 = *(byte *)(lVar5 + 0x1d4);
  *(undefined8 *)(this + 0x60) = 0;
  this[0xac] = (FoliageCellGeometry)(bVar2 ^ 1);
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
  *(uint *)(this + 0x34) = *(uint *)(this + 0x34) & 0xffffffe3 | 4;
  return;
}


