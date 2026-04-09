// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createNewShape
// Entry Point: 0097e0ac
// Size: 2420 bytes
// Signature: undefined __thiscall createNewShape(MeshSplitManager * this, Node * param_1, MeshSplitShape * param_2, uint param_3, uint param_4, uint param_5, bool param_6, Brep * param_7, uint param_8, Brep * * param_9, GsShape * param_10, vector * param_11, bool param_12, bool param_13, STREAM_QUEUE param_14)


/* MeshSplitManager::createNewShape(Node*, MeshSplitShape*, unsigned int, unsigned int, unsigned
   int, bool, Brep*, unsigned int, Brep**, GsShape*,
   std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment> >&, bool, bool,
   StreamManager::STREAM_QUEUE) */

MeshSplitShape * __thiscall
MeshSplitManager::createNewShape
          (MeshSplitManager *this,Node *param_1,MeshSplitShape *param_2,uint param_3,uint param_4,
          uint param_5,bool param_6,Brep *param_7,uint param_8,Brep **param_9,GsShape *param_10,
          vector *param_11,bool param_12,bool param_13,STREAM_QUEUE param_14)

{
  ulong uVar1;
  int iVar2;
  MeshSplitShape **ppMVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  IndexedTriangleSet *this_00;
  MeshSplitGeometry *this_01;
  StreamManager *this_02;
  MeshSplitShape *this_03;
  long lVar8;
  Bt2PhysicsRBObject *this_04;
  Bt2PhysicsRBObject *this_05;
  void *pvVar9;
  Bt2ScenegraphPhysicsContext *this_06;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long **pplVar17;
  void *pvVar18;
  size_t __n;
  undefined8 *puVar19;
  long **pplVar20;
  long **pplVar21;
  long **pplVar22;
  uint uVar23;
  undefined8 *puVar24;
  LODTransformGroup *this_07;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  uint local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  float local_90;
  float local_8c;
  float fStack_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  local_104 = param_3;
  Geometry::getCollisionProxyMesh();
  uVar5 = TriangleSet::getAttributes();
  this_00 = (IndexedTriangleSet *)
            BrepUtil::createIndexedTriangleSetFromBrep
                      (param_7,uVar5 & 0x83,*(Vector2 **)(param_2 + 0x200) + 8,
                       *(Vector2 **)(param_2 + 0x200),(ushort **)0x0);
  IndexedTriangleSet::buildTangents(this_00,0);
  *(uint *)(this_00 + 0x8c) = *(uint *)(this_00 + 0x8c) | 0x10;
  iVar6 = TriangleSet::getNumVertices();
  iVar7 = IndexedTriangleSet::getNumIndices();
  uVar5 = iVar6 * 0x18 + iVar7 * 2;
  this_01 = (MeshSplitGeometry *)operator_new(0x1b0);
  local_c0 = 0;
  local_b8 = 0;
                    /* try { // try from 0097e178 to 0097e1a3 has its CatchHandler @ 0097ea2c */
  MeshSplitGeometry::MeshSplitGeometry
            (this_01,"splitGeom",this_00,(Vector3 *)&local_c0,0.0,param_7,param_8,param_9,uVar5);
  this_02 = (StreamManager *)StreamManager::getInstance();
  StreamManager::addStreamable(this_02,(Streamable *)(this_01 + 0x58),param_14);
  this_03 = (MeshSplitShape *)operator_new(0x218);
                    /* try { // try from 0097e1c8 to 0097e1d7 has its CatchHandler @ 0097ea20 */
  MeshSplitShape::MeshSplitShape
            (this_03,"splitGeom",this_01,*(MeshSplitShapeSharedData **)(param_2 + 0x200));
  GsShape::copyShapePropertiesFrom((GsShape *)this_03,(GsShape *)param_2);
  this_07 = *(LODTransformGroup **)(param_2 + 0x20);
  fVar31 = *(float *)(param_2 + 0x124);
  fVar25 = fVar31;
  if ((this_07 != (LODTransformGroup *)0x0) && (((byte)this_07[0x10] >> 6 & 1) != 0)) {
    iVar6 = LODTransformGroup::getNumLevels();
    fVar25 = (float)LODTransformGroup::getDistance(this_07,iVar6 - 1);
    if (fVar31 <= fVar25) {
      fVar25 = fVar31;
    }
  }
  if (*(float *)(this + 0x34) < fVar25) {
    lVar8 = Geometry::getBoundingVolume();
    fVar25 = (float)NEON_fmin(*(float *)(lVar8 + 0x18) / *(float *)(this + 0x28),0x3f800000);
    fVar31 = powf(fVar25,*(float *)(this + 0x2c));
    fVar27 = *(float *)(this + 0x30);
    fVar25 = *(float *)(param_2 + 0x124);
    if (fVar27 <= *(float *)(param_2 + 0x124)) {
      fVar25 = fVar27;
    }
    fVar26 = *(float *)(this + 0x34);
    if (*(float *)(this + 0x34) <= fVar27 * fVar31) {
      fVar26 = fVar27 * fVar31;
    }
    if (fVar26 <= fVar25) {
      fVar25 = fVar26;
    }
  }
  RawTransformGroup::setClipDistance((RawTransformGroup *)this_03,fVar25);
  uVar13 = 0xc0;
  if (!param_6) {
    uVar13 = 0x40;
  }
  if (!param_12) {
    uVar13 = uVar13 | 0x100;
  }
  *(uint *)(this_03 + 0x208) = param_4;
  *(uint *)(this_03 + 0x20c) = param_5;
  *(uint *)(this_03 + 0x210) = *(uint *)(this_03 + 0x210) & 0xfffffe3f | uVar13;
  GsShape::setShapeFlags((GsShape *)this_03,*(uint *)(this_03 + 400) | 0x100);
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(this + 0xb8);
    *(uint *)(this + 0xb8) = param_3 + 1;
    local_104 = param_3;
  }
  *(uint *)(this_03 + 0x214) = param_3;
  if (param_6) {
    applySplitShapeShaderParameterOverwrites(this,(GsShape *)this_03);
  }
  if ((param_10 != (GsShape *)0x0) && (*(long *)param_11 != *(long *)(param_11 + 8))) {
    createAttachmentsShape(this,this_03,param_10,param_11,param_6,param_14);
  }
  this_04 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  (**(code **)(*(long *)(this_01 + 0x168) + 8))(this_01 + 0x168);
  if (*(undefined8 **)(this_04 + 0x50) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this_04 + 0x50))();
  }
  *(MeshSplitGeometry **)(this_04 + 0x50) = this_01 + 0x168;
  fVar25 = 0.0;
  if ((((int)((ulong)(*(long *)(this_03 + 0x30) - (long)*(long **)(this_03 + 0x28)) >> 3) != 0) &&
      (lVar8 = **(long **)(this_03 + 0x28), (*(byte *)(lVar8 + 0x11) >> 3 & 1) != 0)) &&
     (lVar8 = *(long *)(lVar8 + 0x170), (*(byte *)(lVar8 + 0x31) >> 1 & 1) != 0)) {
    fVar25 = (float)((ulong)(*(long *)(lVar8 + 0x98) - *(long *)(lVar8 + 0x90)) >> 2 & 0xffffffff) *
             0.25 * 0.1;
  }
  fVar31 = (float)NEON_fminnm(fVar25,0x3dcccccd);
  fVar25 = (float)NEON_fminnm(fVar25,0x3d4ccccd);
  this_05 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  Bt2PhysicsRBObject::setAngularDamping(this_05,fVar25 + 0.1);
  Bt2PhysicsRBObject::setRollingFriction(this_05,fVar31 + 0.17);
  if (this[0x24] == (MeshSplitManager)0x0) {
    if ((param_6) && ((*(uint *)(this_04 + 8) >> 7 & 1) == 0)) {
      uVar23 = 0x80;
      uVar13 = *(uint *)(this_04 + 8) & 0xfffffebf;
      uVar10 = 0x140;
      goto LAB_0097e450;
    }
  }
  else if ((param_6) && ((*(uint *)(this_04 + 8) >> 8 & 1) == 0)) {
    uVar13 = *(uint *)(this_04 + 8) & 0xffffff3f;
    uVar23 = 0x100;
    uVar10 = 0xc0;
LAB_0097e450:
    *(uint *)(this_04 + 8) = uVar13;
    Bt2PhysicsRBObject::raiseDirtyFlags(this_04,uVar10);
    *(uint *)(this_04 + 8) = *(uint *)(this_04 + 8) | uVar23;
    Bt2PhysicsRBObject::raiseDirtyFlags(this_04,uVar23);
  }
  if (((byte)param_1[0x10] >> 5 & 1) == 0) {
    RawTransformGroup::updateWorldTransformation();
    puVar11 = (undefined4 *)(param_2 + 0xb8);
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_c0,(Matrix4x4 *)(param_1 + 0xb8));
    RawTransformGroup::updateWorldTransformation();
    uVar28 = *(undefined4 *)(param_2 + 0xb8);
    fVar25 = *(float *)(param_2 + 0xbc);
    local_f4 = 0;
    uVar30 = *(undefined4 *)(param_2 + 0xc0);
    uVar34 = *(undefined4 *)(param_2 + 200);
    fVar31 = *(float *)(param_2 + 0xcc);
    local_e4 = 0;
    uVar29 = NEON_fmadd(uVar28,(undefined4)local_c0,fVar25 * local_b0);
    uVar32 = NEON_fmadd(uVar28,local_c0._4_4_,fVar25 * fStack_ac);
    uVar28 = NEON_fmadd(uVar28,local_b8,fVar25 * local_a8);
    local_d4 = 0;
    puVar11 = &local_100;
    local_f8 = NEON_fmadd(uVar30,local_98,uVar28);
    local_c4 = 0x3f800000;
    local_100 = NEON_fmadd(uVar30,local_a0,uVar29);
    uStack_fc = NEON_fmadd(uVar30,uStack_9c,uVar32);
    uVar32 = NEON_fmadd(uVar34,local_c0._4_4_,fStack_ac * fVar31);
    uVar29 = NEON_fmadd(uVar34,(undefined4)local_c0,local_b0 * fVar31);
    uVar30 = *(undefined4 *)(param_2 + 0xd0);
    uVar28 = *(undefined4 *)(param_2 + 0xd8);
    fVar25 = *(float *)(param_2 + 0xdc);
    uStack_ec = NEON_fmadd(uVar30,uStack_9c,uVar32);
    local_f0 = NEON_fmadd(uVar30,local_a0,uVar29);
    uVar29 = NEON_fmadd(uVar34,local_b8,local_a8 * fVar31);
    uVar36 = *(undefined4 *)(param_2 + 0xe8);
    fVar31 = *(float *)(param_2 + 0xec);
    local_e8 = NEON_fmadd(uVar30,local_98,uVar29);
    uVar34 = NEON_fmadd(uVar28,(undefined4)local_c0,local_b0 * fVar25);
    uVar35 = NEON_fmadd(uVar28,local_c0._4_4_,fStack_ac * fVar25);
    uVar30 = NEON_fmadd(uVar28,local_b8,local_a8 * fVar25);
    uVar33 = *(undefined4 *)(param_2 + 0xe0);
    uVar28 = NEON_fmadd(uVar36,(undefined4)local_c0,local_b0 * fVar31);
    uVar32 = NEON_fmadd(uVar36,local_c0._4_4_,fStack_ac * fVar31);
    uVar29 = NEON_fmadd(uVar36,local_b8,local_a8 * fVar31);
    uVar36 = *(undefined4 *)(param_2 + 0xf0);
    local_e0 = NEON_fmadd(uVar33,local_a0,uVar34);
    uStack_dc = NEON_fmadd(uVar33,uStack_9c,uVar35);
    local_d8 = NEON_fmadd(uVar33,local_98,uVar30);
    local_d0 = (float)NEON_fmadd(uVar36,local_a0,uVar28);
    fStack_cc = (float)NEON_fmadd(uVar36,uStack_9c,uVar32);
    local_c8 = (float)NEON_fmadd(uVar36,local_98,uVar29);
    local_d0 = local_90 + local_d0;
    fStack_cc = fStack_cc + local_8c;
    local_c8 = local_c8 + fStack_88;
  }
  RawTransformGroup::setTransformation((RawTransformGroup *)this_03,(Matrix4x4 *)puVar11,0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,this_03,0xffffffff);
  Mutex::enterCriticalSection();
  ppMVar3 = *(MeshSplitShape ***)(this + 0x68);
  *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
  *(uint *)(this + 0x7c) = *(int *)(this + 0x7c) + uVar5;
  if (ppMVar3 == *(MeshSplitShape ***)(this + 0x70)) {
    pvVar18 = *(void **)(this + 0x60);
    uVar15 = (long)ppMVar3 - (long)pvVar18;
    uVar1 = ((long)uVar15 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0097ea0c;
    if (uVar1 <= (ulong)((long)uVar15 >> 2)) {
      uVar1 = (long)uVar15 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0097ea10;
      pvVar9 = operator_new(uVar1 << 3);
    }
    ppMVar3 = (MeshSplitShape **)((long)pvVar9 + ((long)uVar15 >> 3) * 8);
    *ppMVar3 = this_03;
    if (0 < (long)uVar15) {
      memcpy(pvVar9,pvVar18,uVar15);
    }
    *(void **)(this + 0x60) = pvVar9;
    *(MeshSplitShape ***)(this + 0x68) = ppMVar3 + 1;
    *(void **)(this + 0x70) = (void *)((long)pvVar9 + uVar1 * 8);
    if (pvVar18 != (void *)0x0) {
      operator_delete(pvVar18);
    }
  }
  else {
    *ppMVar3 = this_03;
    *(MeshSplitShape ***)(this + 0x68) = ppMVar3 + 1;
  }
  puVar19 = (undefined8 *)(this + 0xa8);
  puVar24 = (undefined8 *)*puVar19;
  puVar12 = puVar19;
  if (puVar24 != (undefined8 *)0x0) {
    puVar19 = (undefined8 *)(this + 0xa8);
    do {
      while (puVar12 = puVar24, param_4 < *(uint *)((long)puVar12 + 0x1c)) {
        puVar19 = puVar12;
        puVar24 = (undefined8 *)*puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
          puVar24 = (undefined8 *)*puVar12;
          goto joined_r0x0097e738;
        }
      }
      if (param_4 <= *(uint *)((long)puVar12 + 0x1c)) break;
      puVar19 = puVar12 + 1;
      puVar24 = (undefined8 *)*puVar19;
    } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
  }
  puVar24 = (undefined8 *)*puVar19;
joined_r0x0097e738:
  if (puVar24 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)operator_new(0x28);
    puVar24[4] = 0;
    *(uint *)((long)puVar24 + 0x1c) = param_4;
    *puVar24 = 0;
    puVar24[1] = 0;
    puVar24[2] = puVar12;
    *puVar19 = puVar24;
    puVar12 = puVar24;
    if (**(long **)(this + 0xa0) != 0) {
      *(long *)(this + 0xa0) = **(long **)(this + 0xa0);
      puVar12 = (undefined8 *)*puVar19;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xa8),(__tree_node_base *)puVar12);
    *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + 1;
  }
  *(int *)(puVar24 + 4) = *(int *)(puVar24 + 4) + 1;
  pplVar17 = (long **)(this + 200);
  pplVar20 = (long **)*pplVar17;
  uVar5 = *(uint *)(this_03 + 0x214);
  pplVar22 = pplVar17;
  if (pplVar20 != (long **)0x0) {
    pplVar17 = (long **)(this + 200);
    do {
      while (pplVar21 = pplVar20, pplVar22 = pplVar21, uVar5 < *(uint *)(pplVar21 + 4)) {
        pplVar17 = pplVar21;
        pplVar20 = (long **)*pplVar21;
        if ((long **)*pplVar21 == (long **)0x0) {
          plVar14 = *pplVar21;
          goto joined_r0x0097e7bc;
        }
      }
      if (uVar5 <= *(uint *)(pplVar21 + 4)) break;
      pplVar17 = pplVar21 + 1;
      pplVar20 = (long **)*pplVar17;
    } while ((long **)*pplVar17 != (long **)0x0);
  }
  plVar14 = *pplVar17;
  pplVar21 = pplVar17;
joined_r0x0097e7bc:
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)operator_new(0x30);
    *(uint *)(plVar14 + 4) = uVar5;
    plVar14[5] = (long)this_03;
    *plVar14 = 0;
    plVar14[1] = 0;
    plVar14[2] = (long)pplVar22;
    *pplVar21 = plVar14;
    if (**(long **)(this + 0xc0) != 0) {
      *(long *)(this + 0xc0) = **(long **)(this + 0xc0);
      plVar14 = *pplVar21;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 200),(__tree_node_base *)plVar14);
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 1;
  }
  uVar5 = local_104;
  if (*(long *)(this + 0x198) != *(long *)(this + 0x1a0)) {
    ppMVar3 = *(MeshSplitShape ***)(this + 0x158);
    if (ppMVar3 < *(MeshSplitShape ***)(this + 0x160)) {
      *ppMVar3 = this_03;
      *(uint *)(ppMVar3 + 1) = local_104;
      *(undefined4 *)((long)ppMVar3 + 0xc) = 0xffffffff;
      *(MeshSplitShape ***)(this + 0x158) = ppMVar3 + 2;
    }
    else {
      pvVar18 = *(void **)(this + 0x150);
      __n = (long)ppMVar3 - (long)pvVar18;
      uVar1 = ((long)__n >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
LAB_0097ea0c:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar15 = (long)*(MeshSplitShape ***)(this + 0x160) - (long)pvVar18;
      uVar16 = (long)uVar15 >> 3;
      if (uVar1 <= uVar16) {
        uVar1 = uVar16;
      }
      if (0x7fffffffffffffef < uVar15) {
        uVar1 = 0xfffffffffffffff;
      }
      if (uVar1 >> 0x3c != 0) {
LAB_0097ea10:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar9 = operator_new(uVar1 * 0x10);
      ppMVar3 = (MeshSplitShape **)((long)pvVar9 + ((long)__n >> 4) * 0x10);
      *ppMVar3 = this_03;
      *(uint *)(ppMVar3 + 1) = uVar5;
      *(undefined4 *)((long)ppMVar3 + 0xc) = 0xffffffff;
      if (0 < (long)__n) {
        memcpy(pvVar9,pvVar18,__n);
      }
      *(void **)(this + 0x150) = pvVar9;
      *(MeshSplitShape ***)(this + 0x158) = ppMVar3 + 2;
      *(void **)(this + 0x160) = (void *)((long)pvVar9 + uVar1 * 0x10);
      if (pvVar18 != (void *)0x0) {
        operator_delete(pvVar18);
      }
    }
  }
  uVar5 = (uint)((ulong)(*(long *)(this + 0x1a0) - *(long *)(this + 0x198)) >> 4);
  if (uVar5 != 0) {
    lVar8 = *(long *)(this + 0x180);
    iVar7 = (int)((ulong)(*(long *)(this + 0x188) - lVar8) >> 2);
    iVar6 = iVar7 + -1;
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      do {
        while( true ) {
          iVar2 = iVar7 + iVar6;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          uVar13 = *(uint *)(lVar8 + (long)iVar2 * 4);
          if (uVar13 < local_104) break;
          if (uVar13 <= local_104) goto LAB_0097e9b4;
          iVar6 = iVar2 + -1;
          if (iVar6 < iVar7) goto LAB_0097e95c;
        }
        iVar7 = iVar2 + 1;
      } while (iVar7 <= iVar6);
    }
LAB_0097e95c:
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::insert
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x180),
               (int)lVar8 + iVar7 * 4,&local_104);
    lVar8 = 0;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    do {
      puVar19 = (undefined8 *)(*(long *)(*(long *)(this + 0x198) + lVar8 + 8) + 8);
      local_a8 = 0.0;
      std::__ndk1::
      vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
      ::insert((vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
                *)puVar19,(int)*puVar19 + iVar7 * 0x1c,(ConnectionShapeData *)&local_c0);
      lVar8 = lVar8 + 0x10;
    } while ((ulong)uVar5 * 0x10 - lVar8 != 0);
  }
LAB_0097e9b4:
  Mutex::leaveCriticalSection();
  if (param_13) {
    ScenegraphPhysicsContextManager::getInstance();
    this_06 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this_06,(TransformGroup *)this_03);
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return this_03;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


