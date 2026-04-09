// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endTerrain
// Entry Point: 00935ce4
// Size: 1320 bytes
// Signature: undefined __cdecl endTerrain(void * param_1, char * param_2)


/* I3DSceneGraphFactory::endTerrain(void*, char const*) */

void I3DSceneGraphFactory::endTerrain(void *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  long *this;
  Bt2PhysicsRBObject *this_00;
  StreamManager *pSVar5;
  void *__dest;
  TerrainFillDataPlane *this_01;
  TerrainLayerTransformGroup *this_02;
  ResourceManager *this_03;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  FoliageSystemDesc *this_04;
  byte *pbVar11;
  long lVar12;
  void *__src;
  ulong uVar13;
  char *pcVar14;
  uint uVar15;
  long **pplVar16;
  long **pplVar17;
  long **pplVar18;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)((long)param_1 + 0x280);
  lVar12 = *(long *)(lVar10 + 0x1e0);
  uVar15 = *(uint *)(lVar12 + 0x40);
  pcVar14 = *(char **)(lVar12 + 8);
  if ((uVar15 >> 0xb & 1) == 0) {
    local_78 = *(undefined8 *)(lVar12 + 0x130);
    local_70 = *(undefined4 *)(lVar12 + 0x138);
  }
  else {
    TransformGroup::updateEulerFromMatrix();
    uVar15 = *(uint *)(lVar12 + 0x40);
    local_78 = *(undefined8 *)(lVar12 + 0x130);
    local_70 = *(undefined4 *)(lVar12 + 0x138);
    if ((uVar15 >> 0xb & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
      uVar15 = *(uint *)(lVar12 + 0x40);
    }
  }
  local_88 = *(undefined8 *)(lVar12 + 0x13c);
  local_80 = *(undefined4 *)(lVar12 + 0x144);
  if (*(long *)(lVar10 + 0xa8) == *(long *)(lVar10 + 0xa0)) {
    lVar10 = *(long *)((long)param_1 + 0x280);
    this_04 = *(FoliageSystemDesc **)(lVar10 + 600);
    if (this_04 != (FoliageSystemDesc *)0x0) {
      FoliageSystemDesc::~FoliageSystemDesc(this_04);
      operator_delete(this_04);
      lVar10 = *(long *)((long)param_1 + 0x280);
    }
    *(undefined8 *)(lVar10 + 600) = 0;
  }
  else {
    uVar1 = *(uint *)(lVar12 + 0x120);
    this = (long *)operator_new(0x560);
                    /* try { // try from 00935da0 to 00935dab has its CatchHandler @ 00936218 */
    TerrainTransformGroup::TerrainTransformGroup
              ((TerrainTransformGroup *)this,pcVar14,(TerrainTransformGroupDesc *)(lVar10 + 0x68),
               *(STREAM_QUEUE *)((long)param_1 + 0x254));
    uVar2 = *(uint *)(*(long *)((long)param_1 + 0x280) + 0x220);
    if (uVar2 != 0) {
      pplVar16 = (long **)((long)param_1 + 0x138);
      pplVar17 = *(long ***)((long)param_1 + 0x138);
      pplVar18 = pplVar16;
      while (pplVar17 != (long **)0x0) {
        while (pplVar18 = pplVar17, uVar2 < *(uint *)(pplVar18 + 4)) {
          pplVar16 = pplVar18;
          pplVar17 = (long **)*pplVar18;
          if ((long **)*pplVar18 == (long **)0x0) {
            plVar6 = *pplVar18;
            goto joined_r0x00935e78;
          }
        }
        if (uVar2 <= *(uint *)(pplVar18 + 4)) break;
        pplVar16 = pplVar18 + 1;
        pplVar17 = (long **)*pplVar16;
      }
      plVar6 = *pplVar16;
joined_r0x00935e78:
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)operator_new(0x30);
        *(uint *)(plVar6 + 4) = uVar2;
        plVar6[5] = (long)this;
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = (long)pplVar18;
        *pplVar16 = plVar6;
        if (**(long **)((long)param_1 + 0x130) != 0) {
          *(long *)((long)param_1 + 0x130) = **(long **)((long)param_1 + 0x130);
          plVar6 = *pplVar16;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)((long)param_1 + 0x138),(__tree_node_base *)plVar6);
        *(long *)((long)param_1 + 0x140) = *(long *)((long)param_1 + 0x140) + 1;
      }
    }
    TransformGroup::setTranslation((TransformGroup *)this,(Vector3 *)&local_78);
    TransformGroup::setRotation((TransformGroup *)this,(Vector3 *)&local_88);
    ScenegraphNode::setVisibility((ScenegraphNode *)this,(bool)((byte)uVar15 & 1));
    RawTransformGroup::setObjectMask
              ((RawTransformGroup *)this,uVar1 & (int)(uVar15 << 0x15) >> 0x1f);
    plVar6 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
    (**(code **)(*plVar6 + 0x18))(plVar6,this,0xffffffff);
    lVar10 = RawTransformGroup::getPhysicsObject();
    if (((lVar10 != 0) && ((*(uint *)(lVar10 + 8) >> 3 & 1) != 0)) &&
       ((*(uint *)(lVar10 + 8) >> 6 & 1) != 0)) {
      this_00 = (Bt2PhysicsRBObject *)operator_new(0x90);
                    /* try { // try from 00935f10 to 00935f17 has its CatchHandler @ 0093620c */
      Bt2PhysicsRBObject::Bt2PhysicsRBObject(this_00,(TransformGroup *)this);
      Bt2PhysicsRBObject::setCollisionMask(this_00,*(uint *)(lVar10 + 0x58));
      Bt2PhysicsRBObject::setRestitution(this_00,*(float *)(lVar10 + 0x5c));
      Bt2PhysicsRBObject::setDynamicFriction(this_00,*(float *)(lVar10 + 100));
      Bt2PhysicsRBObject::setStaticFriction(this_00,*(float *)(lVar10 + 0x60));
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x48;
      Bt2PhysicsRBObject::raiseDirtyFlags(this_00,0x48);
      RawTransformGroup::setPhysicsObject((RawTransformGroup *)this,(PhysicsObject *)this_00);
    }
    pSVar5 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable
              (pSVar5,(Streamable *)(this + 0x2c),*(STREAM_QUEUE *)((long)param_1 + 0x254));
    lVar10 = *(long *)((long)param_1 + 0x280);
    if (*(long *)(lVar10 + 600) != 0) {
      *(long **)(*(long *)(lVar10 + 600) + 0x28) = this;
      puVar7 = *(undefined8 **)(lVar10 + 0x248);
      if (puVar7 == *(undefined8 **)(lVar10 + 0x250)) {
        __src = *(void **)(lVar10 + 0x240);
        uVar9 = (long)puVar7 - (long)__src;
        uVar13 = ((long)uVar9 >> 3) + 1;
        if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar13 <= (ulong)((long)uVar9 >> 2)) {
          uVar13 = (long)uVar9 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar13 = 0x1fffffffffffffff;
        }
        if (uVar13 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar13 << 3);
        }
        puVar7 = (undefined8 *)((long)__dest + ((long)uVar9 >> 3) * 8);
        *puVar7 = *(undefined8 *)(lVar10 + 600);
        if (0 < (long)uVar9) {
          memcpy(__dest,__src,uVar9);
        }
        *(void **)(lVar10 + 0x240) = __dest;
        *(undefined8 **)(lVar10 + 0x248) = puVar7 + 1;
        *(void **)(lVar10 + 0x250) = (void *)((long)__dest + uVar13 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar7 = *(undefined8 *)(lVar10 + 600);
        *(undefined8 **)(lVar10 + 0x248) = puVar7 + 1;
      }
      lVar10 = *(long *)((long)param_1 + 0x280);
      *(undefined8 *)(lVar10 + 600) = 0;
    }
    pbVar11 = *(byte **)(lVar10 + 0x1e8);
    if (pbVar11 != *(byte **)(lVar10 + 0x1f0)) {
      do {
        pbVar8 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar8 = pbVar11 + 1;
        }
        this_01 = (TerrainFillDataPlane *)operator_new(0xb0);
                    /* try { // try from 0093607c to 0093608b has its CatchHandler @ 00936224 */
        TerrainFillDataPlane::TerrainFillDataPlane
                  (this_01,(char *)pbVar8,(TerrainLayerTransformGroupDesc *)(pbVar11 + 0x18),
                   (TerrainTransformGroup *)this);
        TerrainTransformGroup::addDataPlane
                  ((TerrainTransformGroup *)this,(TerrainDataPlane *)this_01);
        this_02 = (TerrainLayerTransformGroup *)operator_new(0x728);
                    /* try { // try from 009360a4 to 009360bb has its CatchHandler @ 00936230 */
        TerrainLayerTransformGroup::TerrainLayerTransformGroup
                  (this_02,(char *)pbVar8,(TerrainLayerTransformGroupDesc *)(pbVar11 + 0x18),
                   (TerrainTransformGroup *)this,this_01,true);
        pSVar5 = (StreamManager *)StreamManager::getInstance();
        StreamManager::addStreamable
                  (pSVar5,(Streamable *)(this_02 + 0x1e0),*(STREAM_QUEUE *)((long)param_1 + 0x254));
        (**(code **)(*this + 0x18))(this,this_02,0xffffffff);
        lVar10 = *(long *)((long)param_1 + 0x280);
        pbVar11 = pbVar11 + 0x2d8;
      } while (pbVar11 != *(byte **)(lVar10 + 0x1f0));
    }
  }
  if (*(long **)(lVar10 + 0x1e0) != (long *)0x0) {
    (**(code **)(**(long **)(lVar10 + 0x1e0) + 8))();
    lVar10 = *(long *)((long)param_1 + 0x280);
  }
  pbVar11 = *(byte **)(lVar10 + 0x1f0);
  *(undefined8 *)(lVar10 + 0x1e0) = 0;
  if (pbVar11 != *(byte **)(lVar10 + 0x1e8)) {
    uVar13 = 0;
    do {
      this_03 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release
                (this_03,*(Resource **)
                          (*(long *)(*(long *)((long)param_1 + 0x280) + 0x1e8) + uVar13 * 0x2d8 +
                          0x28));
      lVar10 = *(long *)((long)param_1 + 0x280);
      uVar13 = (ulong)((int)uVar13 + 1);
      pbVar11 = *(byte **)(lVar10 + 0x1e8);
      uVar9 = ((long)*(byte **)(lVar10 + 0x1f0) - (long)pbVar11 >> 3) * 0x2fd2fd2fd2fd2fd3;
      pbVar8 = *(byte **)(lVar10 + 0x1f0);
    } while (uVar13 <= uVar9 && uVar9 - uVar13 != 0);
    while (pbVar4 = pbVar8, pbVar4 != pbVar11) {
      pbVar8 = pbVar4 + -0x2d8;
      TerrainLayerTransformGroupDesc::~TerrainLayerTransformGroupDesc
                ((TerrainLayerTransformGroupDesc *)(pbVar4 + -0x2c0));
      if ((*pbVar8 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x2c8));
      }
    }
  }
  *(byte **)(lVar10 + 0x1f0) = pbVar11;
  TerrainTransformGroupDesc::setToDefault();
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


