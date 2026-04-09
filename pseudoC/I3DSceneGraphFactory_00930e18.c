// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DSceneGraphFactory
// Entry Point: 00930e18
// Size: 628 bytes
// Signature: undefined __thiscall ~I3DSceneGraphFactory(I3DSceneGraphFactory * this)


/* I3DSceneGraphFactory::~I3DSceneGraphFactory() */

void __thiscall I3DSceneGraphFactory::~I3DSceneGraphFactory(I3DSceneGraphFactory *this)

{
  byte **ppbVar1;
  I3DSceneGraphFactory IVar2;
  int iVar3;
  bool bVar4;
  ResourceManager *this_00;
  I3DSceneGraphFactory *pIVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  I3DSceneGraphFactory **ppIVar9;
  byte *pbVar10;
  void *pvVar11;
  FoliageSystemDesc *this_01;
  ulong uVar12;
  void *pvVar13;
  byte *pbVar14;
  I3DSceneGraphFactory **ppIVar15;
  byte *pbVar16;
  
  if (*(long **)(this + 0x1e0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1e0) + 8))();
  }
  this_01 = *(FoliageSystemDesc **)(this + 600);
  *(undefined8 *)(this + 0x1e0) = 0;
  if (this_01 != (FoliageSystemDesc *)0x0) {
    FoliageSystemDesc::~FoliageSystemDesc(this_01);
    operator_delete(this_01);
  }
  ppbVar1 = (byte **)(this + 0x1e8);
  *(undefined8 *)(this + 600) = 0;
  if (*(long *)(this + 0x1f0) != *(long *)(this + 0x1e8)) {
    uVar12 = 0;
    do {
                    /* try { // try from 00930e8c to 00930ea3 has its CatchHandler @ 0093108c */
      this_00 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(this_00,*(Resource **)(*ppbVar1 + uVar12 * 0x2d8 + 0x28));
      uVar12 = (ulong)((int)uVar12 + 1);
      uVar8 = (*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3) * 0x2fd2fd2fd2fd2fd3;
    } while (uVar12 <= uVar8 && uVar8 - uVar12 != 0);
  }
  ppIVar15 = *(I3DSceneGraphFactory ***)(this + 0x30);
  do {
    while( true ) {
      if (ppIVar15 == (I3DSceneGraphFactory **)(this + 0x38)) {
        pvVar6 = *(void **)(this + 0x240);
        if (pvVar6 != (void *)0x0) {
          *(void **)(this + 0x248) = pvVar6;
          operator_delete(pvVar6);
        }
        if (((byte)this[0x228] & 1) == 0) {
          IVar2 = this[0x208];
        }
        else {
          operator_delete(*(void **)(this + 0x238));
          IVar2 = this[0x208];
        }
        if (((byte)IVar2 & 1) == 0) {
          pbVar14 = *ppbVar1;
        }
        else {
          operator_delete(*(void **)(this + 0x218));
          pbVar14 = *ppbVar1;
        }
        if (pbVar14 != (byte *)0x0) {
          pbVar10 = *(byte **)(this + 0x1f0);
          pbVar16 = pbVar14;
          if (pbVar10 != pbVar14) {
            do {
              pbVar16 = pbVar10 + -0x2d8;
              TerrainLayerTransformGroupDesc::~TerrainLayerTransformGroupDesc
                        ((TerrainLayerTransformGroupDesc *)(pbVar10 + -0x2c0));
              if ((*pbVar16 & 1) != 0) {
                operator_delete(*(void **)(pbVar10 + -0x2c8));
              }
              pbVar10 = pbVar16;
            } while (pbVar16 != pbVar14);
            pbVar16 = *ppbVar1;
          }
          *(byte **)(this + 0x1f0) = pbVar14;
          operator_delete(pbVar16);
        }
        TerrainTransformGroupDesc::~TerrainTransformGroupDesc
                  ((TerrainTransformGroupDesc *)(this + 0x68));
        pvVar6 = *(void **)(this + 0x48);
        if (pvVar6 != (void *)0x0) {
          *(void **)(this + 0x50) = pvVar6;
          operator_delete(pvVar6);
        }
        std::__ndk1::
        __tree<std::__ndk1::__value_type<MeshSplitShapeSharedData::SharedDataDesc,MeshSplitShapeSharedData*>,std::__ndk1::__map_value_compare<MeshSplitShapeSharedData::SharedDataDesc,std::__ndk1::__value_type<MeshSplitShapeSharedData::SharedDataDesc,MeshSplitShapeSharedData*>,std::__ndk1::less<MeshSplitShapeSharedData::SharedDataDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitShapeSharedData::SharedDataDesc,MeshSplitShapeSharedData*>>>
        ::destroy((__tree<std::__ndk1::__value_type<MeshSplitShapeSharedData::SharedDataDesc,MeshSplitShapeSharedData*>,std::__ndk1::__map_value_compare<MeshSplitShapeSharedData::SharedDataDesc,std::__ndk1::__value_type<MeshSplitShapeSharedData::SharedDataDesc,MeshSplitShapeSharedData*>,std::__ndk1::less<MeshSplitShapeSharedData::SharedDataDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitShapeSharedData::SharedDataDesc,MeshSplitShapeSharedData*>>>
                   *)(this + 0x30),*(__tree_node **)(this + 0x38));
        pvVar6 = *(void **)(this + 0x18);
        if (pvVar6 != (void *)0x0) {
          *(void **)(this + 0x20) = pvVar6;
          operator_delete(pvVar6);
        }
        pvVar6 = *(void **)this;
        if (pvVar6 == (void *)0x0) {
          return;
        }
        pvVar7 = pvVar6;
        pvVar11 = *(void **)(this + 8);
        if (*(void **)(this + 8) != pvVar6) {
          do {
            pvVar7 = *(void **)((long)pvVar11 + -0x18);
            pvVar13 = (void *)((long)pvVar11 + -0x20);
            if (pvVar7 != (void *)0x0) {
              *(void **)((long)pvVar11 + -0x10) = pvVar7;
              operator_delete(pvVar7);
            }
            pvVar11 = pvVar13;
          } while (pvVar13 != pvVar6);
          pvVar7 = *(void **)this;
        }
        *(void **)(this + 8) = pvVar6;
        operator_delete(pvVar7);
        return;
      }
      pIVar5 = ppIVar15[7];
      iVar3 = *(int *)(pIVar5 + 0x14) + -1;
      if (*(int *)(pIVar5 + 0x14) == 0 || iVar3 == 0) break;
      *(int *)(pIVar5 + 0x14) = iVar3;
      ppIVar9 = (I3DSceneGraphFactory **)ppIVar15[1];
      if ((I3DSceneGraphFactory **)ppIVar15[1] == (I3DSceneGraphFactory **)0x0) goto LAB_00930f18;
LAB_00930f08:
      do {
        ppIVar15 = ppIVar9;
        ppIVar9 = (I3DSceneGraphFactory **)*ppIVar15;
      } while ((I3DSceneGraphFactory **)*ppIVar15 != (I3DSceneGraphFactory **)0x0);
    }
    operator_delete(pIVar5);
    ppIVar9 = (I3DSceneGraphFactory **)ppIVar15[1];
    if ((I3DSceneGraphFactory **)ppIVar15[1] != (I3DSceneGraphFactory **)0x0) goto LAB_00930f08;
LAB_00930f18:
    ppIVar9 = ppIVar15 + 2;
    bVar4 = *(I3DSceneGraphFactory ***)*ppIVar9 != ppIVar15;
    ppIVar15 = (I3DSceneGraphFactory **)*ppIVar9;
    if (bVar4) {
      do {
        pIVar5 = *ppIVar9;
        ppIVar9 = (I3DSceneGraphFactory **)(pIVar5 + 0x10);
        ppIVar15 = (I3DSceneGraphFactory **)*ppIVar9;
      } while (*ppIVar15 != pIVar5);
    }
  } while( true );
}


