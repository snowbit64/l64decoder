// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateUnblocked
// Entry Point: 009a14ac
// Size: 4880 bytes
// Signature: undefined updateUnblocked(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2ScenegraphPhysicsContext::updateUnblocked() */

void Bt2ScenegraphPhysicsContext::updateUnblocked(void)

{
  void **ppvVar1;
  Bt2ScenegraphPhysicsContext **ppBVar2;
  btRigidBody **ppbVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  Bt2ScenegraphPhysicsContext *in_x0;
  void *pvVar10;
  DeferredDebugRenderer *this;
  Bt2PhysicsCharacterController *this_00;
  btCollisionObject *this_01;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  TransformGroup **ppTVar14;
  Bt2ScenegraphPhysicsContext *pBVar15;
  undefined4 *puVar16;
  long **pplVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  TransformGroup *pTVar22;
  Bt2ScenegraphPhysicsContext **ppBVar23;
  Bt2ScenegraphPhysicsContext **ppBVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  void *pvVar28;
  long **pplVar29;
  ulong uVar30;
  AddRopeDesc *pAVar31;
  RawTransformGroup *this_02;
  uint *puVar32;
  btRigidBody **ppbVar33;
  long lVar34;
  size_t sVar35;
  long **pplVar36;
  AddRopeDesc *pAVar37;
  uint *puVar38;
  uint *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  long **pplVar42;
  long lVar43;
  undefined2 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  float local_c0;
  float local_bc;
  float fStack_b8;
  undefined4 local_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  uVar46 = *(undefined8 *)(in_x0 + 0x3b0);
  uVar20 = *(undefined8 *)(in_x0 + 0x3a8);
  uVar18 = *(undefined8 *)(in_x0 + 0x3b8);
  *(undefined8 *)(in_x0 + 0x3a8) = *(undefined8 *)(in_x0 + 0x3c0);
  *(undefined8 *)(in_x0 + 0x3b8) = *(undefined8 *)(in_x0 + 0x3d0);
  *(undefined8 *)(in_x0 + 0x3b0) = *(undefined8 *)(in_x0 + 0x3c8);
  *(undefined8 *)(in_x0 + 0x3c8) = uVar46;
  *(undefined8 *)(in_x0 + 0x3c0) = uVar20;
  *(undefined8 *)(in_x0 + 0x3d0) = uVar18;
  FUN_009b20a4();
  lVar27 = *(long *)(in_x0 + 0x3f8);
  lVar34 = *(long *)(in_x0 + 0x400);
  uVar18 = *(undefined8 *)(in_x0 + 1000);
  *(undefined8 *)(in_x0 + 0x3f8) = *(undefined8 *)(in_x0 + 0x3e0);
  *(long *)(in_x0 + 0x3e0) = lVar27;
  uVar20 = *(undefined8 *)(in_x0 + 0x3f0);
  *(long *)(in_x0 + 1000) = lVar34;
  *(undefined8 *)(in_x0 + 0x400) = uVar18;
  *(undefined8 *)(in_x0 + 0x3f0) = *(undefined8 *)(in_x0 + 0x408);
  *(undefined8 *)(in_x0 + 0x408) = uVar20;
  for (; lVar34 != lVar27; lVar34 = lVar34 + -0x40) {
    if ((*(void **)(lVar34 + -0x28) != (void *)0x0) && (*(char *)(lVar34 + -0x20) != '\0')) {
                    /* try { // try from 009a1570 to 009a1573 has its CatchHandler @ 009a27c0 */
      btAlignedFreeInternal(*(void **)(lVar34 + -0x28));
    }
    *(undefined *)(lVar34 + -0x20) = 1;
    *(undefined8 *)(lVar34 + -0x28) = 0;
    *(undefined8 *)(lVar34 + -0x34) = 0;
  }
  *(long *)(in_x0 + 1000) = lVar27;
  lVar27 = *(long *)(in_x0 + 0x430);
  lVar34 = *(long *)(in_x0 + 0x438);
  uVar18 = *(undefined8 *)(in_x0 + 0x420);
  *(undefined8 *)(in_x0 + 0x430) = *(undefined8 *)(in_x0 + 0x418);
  *(long *)(in_x0 + 0x418) = lVar27;
  uVar20 = *(undefined8 *)(in_x0 + 0x428);
  *(long *)(in_x0 + 0x420) = lVar34;
  *(undefined8 *)(in_x0 + 0x438) = uVar18;
  *(undefined8 *)(in_x0 + 0x428) = *(undefined8 *)(in_x0 + 0x440);
  *(undefined8 *)(in_x0 + 0x440) = uVar20;
  if (lVar34 != lVar27) {
    do {
      lVar34 = lVar34 + -0xb0;
      FUN_009b213c(in_x0 + 0x428,lVar34);
    } while (lVar34 != lVar27);
  }
  *(long *)(in_x0 + 0x420) = lVar27;
  lVar27 = *(long *)(in_x0 + 0x468);
  lVar34 = *(long *)(in_x0 + 0x470);
  uVar18 = *(undefined8 *)(in_x0 + 0x458);
  *(undefined8 *)(in_x0 + 0x468) = *(undefined8 *)(in_x0 + 0x450);
  *(long *)(in_x0 + 0x450) = lVar27;
  uVar20 = *(undefined8 *)(in_x0 + 0x460);
  *(long *)(in_x0 + 0x458) = lVar34;
  *(undefined8 *)(in_x0 + 0x470) = uVar18;
  *(undefined8 *)(in_x0 + 0x460) = *(undefined8 *)(in_x0 + 0x478);
  *(undefined8 *)(in_x0 + 0x478) = uVar20;
  for (; lVar34 != lVar27; lVar34 = lVar34 + -0x50) {
    if ((*(void **)(lVar34 + -0x10) != (void *)0x0) && (*(char *)(lVar34 + -8) != '\0')) {
                    /* try { // try from 009a1640 to 009a1643 has its CatchHandler @ 009a27bc */
      btAlignedFreeInternal(*(void **)(lVar34 + -0x10));
    }
    *(undefined *)(lVar34 + -8) = 1;
    *(undefined8 *)(lVar34 + -0x10) = 0;
    *(undefined8 *)(lVar34 + -0x1c) = 0;
  }
  puVar41 = *(undefined8 **)(in_x0 + 0x598);
  puVar40 = *(undefined8 **)(in_x0 + 0x5a0);
  *(long *)(in_x0 + 0x458) = lVar27;
  if (puVar41 != puVar40) {
    pvVar28 = *(void **)(in_x0 + 0x5b0);
    sVar35 = *(long *)(in_x0 + 0x5b8) - (long)pvVar28;
    uVar30 = ((long)sVar35 >> 4) + ((long)puVar40 - (long)puVar41 >> 3);
    if ((ulong)(*(long *)(in_x0 + 0x5c0) - (long)pvVar28 >> 4) < uVar30) {
      if (uVar30 >> 0x3c != 0) {
LAB_009a27a4:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar10 = operator_new(uVar30 * 0x10);
      if (0 < (long)sVar35) {
        memcpy(pvVar10,pvVar28,sVar35);
      }
      *(void **)(in_x0 + 0x5b0) = pvVar10;
      *(void **)(in_x0 + 0x5b8) = (void *)((long)pvVar10 + ((long)sVar35 >> 4) * 0x10);
      *(void **)(in_x0 + 0x5c0) = (void *)((long)pvVar10 + uVar30 * 0x10);
      if (pvVar28 != (void *)0x0) {
        operator_delete(pvVar28);
        puVar41 = *(undefined8 **)(in_x0 + 0x598);
        puVar40 = *(undefined8 **)(in_x0 + 0x5a0);
      }
    }
    if (puVar41 != puVar40) {
      do {
        puVar19 = *(undefined8 **)(in_x0 + 0x5b8);
        uVar18 = *puVar41;
        if (puVar19 < *(undefined8 **)(in_x0 + 0x5c0)) {
          *puVar19 = uVar18;
          *(undefined *)(puVar19 + 1) = 0;
          *(undefined8 **)(in_x0 + 0x5b8) = puVar19 + 2;
        }
        else {
          pvVar28 = *(void **)(in_x0 + 0x5b0);
          sVar35 = (long)puVar19 - (long)pvVar28;
          uVar30 = ((long)sVar35 >> 4) + 1;
          if (uVar30 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar12 = (long)*(undefined8 **)(in_x0 + 0x5c0) - (long)pvVar28;
          uVar21 = (long)uVar12 >> 3;
          if (uVar30 <= uVar21) {
            uVar30 = uVar21;
          }
          if (0x7fffffffffffffef < uVar12) {
            uVar30 = 0xfffffffffffffff;
          }
          if (uVar30 >> 0x3c != 0) goto LAB_009a27a4;
          pvVar10 = operator_new(uVar30 * 0x10);
          puVar19 = (undefined8 *)((long)pvVar10 + ((long)sVar35 >> 4) * 0x10);
          *puVar19 = uVar18;
          *(undefined *)(puVar19 + 1) = 0;
          if (0 < (long)sVar35) {
            memcpy(pvVar10,pvVar28,sVar35);
          }
          *(void **)(in_x0 + 0x5b0) = pvVar10;
          *(undefined8 **)(in_x0 + 0x5b8) = puVar19 + 2;
          *(void **)(in_x0 + 0x5c0) = (void *)((long)pvVar10 + uVar30 * 0x10);
          if (pvVar28 != (void *)0x0) {
            operator_delete(pvVar28);
          }
        }
        puVar41 = puVar41 + 1;
      } while (puVar41 != puVar40);
      puVar40 = *(undefined8 **)(in_x0 + 0x598);
    }
    *(undefined8 **)(in_x0 + 0x5a0) = puVar40;
  }
  pplVar36 = *(long ***)(in_x0 + 0x3c8);
  for (pplVar29 = *(long ***)(in_x0 + 0x3c0); pplVar29 != pplVar36; pplVar29 = pplVar29 + 0x14) {
    (**(code **)(**pplVar29 + 0x10))();
  }
  pplVar36 = *(long ***)(in_x0 + 0x400);
  for (pplVar29 = *(long ***)(in_x0 + 0x3f8); pplVar29 != pplVar36; pplVar29 = pplVar29 + 8) {
    (**(code **)(**pplVar29 + 0x10))();
  }
  pplVar36 = *(long ***)(in_x0 + 0x438);
  for (pplVar29 = *(long ***)(in_x0 + 0x430); pplVar29 != pplVar36; pplVar29 = pplVar29 + 0x16) {
    (**(code **)(**pplVar29 + 0x10))();
  }
  lVar27 = *(long *)(in_x0 + 0x470);
  for (lVar34 = *(long *)(in_x0 + 0x468); lVar34 != lVar27; lVar34 = lVar34 + 0x50) {
    (**(code **)(**(long **)(lVar34 + 0x18) + 0x10))();
  }
  this = *(DeferredDebugRenderer **)(in_x0 + 0x388);
  if ((this != (DeferredDebugRenderer *)0x0) &&
     (this = (DeferredDebugRenderer *)DeferredDebugRenderer::isCategoryEnabled(this,0x40),
     ((ulong)this & 1) != 0)) {
    this = (DeferredDebugRenderer *)renderDebugData();
  }
  uVar4 = *(uint *)(in_x0 + 0x138);
  *(undefined4 *)(in_x0 + 0x138) = 0;
  if (uVar4 != 0) {
    lVar34 = 0;
    do {
      this = (DeferredDebugRenderer *)
             addTransformGroup(in_x0,*(TransformGroup **)(*(long *)(in_x0 + 0x130) + lVar34));
      lVar34 = lVar34 + 8;
    } while ((ulong)uVar4 * 8 - lVar34 != 0);
  }
  lVar34 = *(long *)(in_x0 + 0x1e0);
  if (lVar34 != *(long *)(in_x0 + 0x1d8)) {
    uVar30 = 0;
    lVar34 = *(long *)(in_x0 + 0x1d8);
    do {
      this = (DeferredDebugRenderer *)
             addLightJoint(in_x0,(AddLightJointDesc *)(lVar34 + uVar30 * 0x160));
      lVar34 = *(long *)(in_x0 + 0x1d8);
      uVar30 = (ulong)((int)uVar30 + 1);
      uVar12 = (*(long *)(in_x0 + 0x1e0) - lVar34 >> 5) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar30 <= uVar12 && uVar12 - uVar30 != 0);
  }
  pAVar31 = *(AddRopeDesc **)(in_x0 + 0x2d8);
  *(long *)(in_x0 + 0x1e0) = lVar34;
  pAVar37 = *(AddRopeDesc **)(in_x0 + 0x2e0);
  *(undefined8 *)(in_x0 + 0x280) = *(undefined8 *)(in_x0 + 0x278);
  if (pAVar31 != pAVar37) {
    do {
      this = (DeferredDebugRenderer *)addRope(in_x0,pAVar31);
      pAVar31 = pAVar31 + 0x58;
    } while (pAVar31 != pAVar37);
    pAVar31 = *(AddRopeDesc **)(in_x0 + 0x2d8);
  }
  lVar34 = *(long *)(in_x0 + 0x348);
  pplVar29 = (long **)(in_x0 + 0x330);
  *(AddRopeDesc **)(in_x0 + 0x2e0) = pAVar31;
  if (lVar34 != *(long *)(in_x0 + 0x340)) {
    uVar30 = 0;
    lVar34 = *(long *)(in_x0 + 0x340);
    do {
      this_00 = (Bt2PhysicsCharacterController *)operator_new(0x70);
      lVar27 = lVar34 + uVar30 * 0x30;
                    /* try { // try from 009a19cc to 009a19d3 has its CatchHandler @ 009a27c4 */
      this = (DeferredDebugRenderer *)
             Bt2PhysicsCharacterController::Bt2PhysicsCharacterController
                       (this_00,in_x0,*(TransformGroup **)(lVar27 + 8),*(float *)(lVar27 + 0x10),
                        *(float *)(lVar27 + 0x14),*(float *)(lVar27 + 0x18),
                        *(float *)(lVar27 + 0x1c),*(float *)(lVar27 + 0x20),*(uint *)(lVar27 + 0x24)
                        ,*(float *)(lVar27 + 0x28));
      uVar4 = *(uint *)(lVar34 + uVar30 * 0x30);
      pplVar42 = (long **)*pplVar29;
      pplVar36 = pplVar29;
      pplVar17 = pplVar29;
      while (pplVar42 != (long **)0x0) {
        while (pplVar17 = pplVar42, uVar4 < *(uint *)(pplVar17 + 4)) {
          pplVar36 = pplVar17;
          pplVar42 = (long **)*pplVar17;
          if ((long **)*pplVar17 == (long **)0x0) {
            plVar13 = *pplVar17;
            goto joined_r0x009a1a6c;
          }
        }
        if (uVar4 <= *(uint *)(pplVar17 + 4)) break;
        pplVar36 = pplVar17 + 1;
        pplVar42 = (long **)*pplVar36;
      }
      plVar13 = *pplVar36;
joined_r0x009a1a6c:
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)operator_new(0x30);
        *(uint *)(plVar13 + 4) = uVar4;
        plVar13[5] = (long)this_00;
        *plVar13 = 0;
        plVar13[1] = 0;
        plVar13[2] = (long)pplVar17;
        *pplVar36 = plVar13;
        if (**(long **)(in_x0 + 0x328) != 0) {
          *(long *)(in_x0 + 0x328) = **(long **)(in_x0 + 0x328);
          plVar13 = *pplVar36;
        }
        this = *(DeferredDebugRenderer **)(in_x0 + 0x330);
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)this,(__tree_node_base *)plVar13);
        *(long *)(in_x0 + 0x338) = *(long *)(in_x0 + 0x338) + 1;
      }
      uVar30 = (ulong)((int)uVar30 + 1);
      lVar34 = *(long *)(in_x0 + 0x340);
      uVar12 = (*(long *)(in_x0 + 0x348) - lVar34 >> 4) * -0x5555555555555555;
    } while (uVar30 <= uVar12 && uVar12 - uVar30 != 0);
  }
  uVar4 = *(uint *)(in_x0 + 4);
  *(long *)(in_x0 + 0x348) = lVar34;
  if (0 < (int)uVar4) {
    iVar5 = *(int *)(in_x0 + 0x20);
    uVar30 = 0;
    do {
      lVar43 = *(long *)(*(long *)(in_x0 + 0x10) + uVar30 * 8);
      lVar27 = *(long *)(lVar43 + 8);
      lVar34 = *(long *)(lVar27 + 0x108);
      if ((lVar34 != 0) && ((*(byte *)(lVar34 + 1) & 1) == 0)) {
        local_b0 = *(undefined4 *)(lVar43 + 0x18);
        local_a0 = *(undefined4 *)(lVar43 + 0x1c);
        fStack_ac = *(float *)(lVar43 + 0x28);
        local_9c = *(float *)(lVar43 + 0x2c);
        *(undefined4 *)(lVar43 + 0x9c) = *(undefined4 *)(lVar27 + 0x17c);
        local_90 = *(undefined4 *)(lVar43 + 0x20);
        local_a8 = *(undefined4 *)(lVar43 + 0x38);
        local_98 = *(undefined4 *)(lVar43 + 0x3c);
        fStack_8c = *(float *)(lVar43 + 0x30);
        *(undefined4 *)(lVar43 + 0xa0) = *(undefined4 *)(lVar27 + 0x180);
        local_80 = *(undefined8 *)(lVar43 + 0x48);
        *(undefined4 *)(lVar43 + 0xa4) = *(undefined4 *)(lVar27 + 0x184);
        *(undefined4 *)(lVar43 + 0xa8) = *(undefined4 *)(lVar27 + 0x18c);
        *(undefined4 *)(lVar43 + 0xac) = *(undefined4 *)(lVar27 + 400);
        *(undefined4 *)(lVar43 + 0xb0) = *(undefined4 *)(lVar27 + 0x194);
        local_88 = *(undefined4 *)(lVar43 + 0x40);
        this_02 = *(RawTransformGroup **)(lVar34 + 8);
        local_78 = *(undefined4 *)(lVar43 + 0x50);
        local_84 = 0;
        local_74 = 0x3f800000;
        lVar34 = *(long *)(this_02 + 0x20);
        local_a4 = 0;
        local_94 = 0;
        if (lVar34 == 0) {
          RawTransformGroup::setTransformation(this_02,(Matrix4x4 *)&local_b0,1);
        }
        else {
          RawTransformGroup::updateWorldTransformation();
          Matrix4x4::invert3x4((Matrix4x4 *)&local_f0,(Matrix4x4 *)(lVar34 + 0xb8));
          uVar49 = NEON_fmadd(local_b0,local_f0,fStack_ac * local_e0);
          uVar52 = NEON_fmadd(local_b0,local_ec,fStack_ac * fStack_dc);
          uVar48 = NEON_fmadd(local_b0,uStack_e8,fStack_ac * local_d8);
          local_130 = NEON_fmadd(local_a8,local_d0,uVar49);
          uStack_12c = NEON_fmadd(local_a8,uStack_cc,uVar52);
          local_128 = NEON_fmadd(local_a8,local_c8,uVar48);
          uVar48 = NEON_fmadd(local_a0,local_f0,local_e0 * local_9c);
          uVar49 = NEON_fmadd(local_a0,local_ec,fStack_dc * local_9c);
          local_120 = NEON_fmadd(local_98,local_d0,uVar48);
          uStack_11c = NEON_fmadd(local_98,uStack_cc,uVar49);
          uVar48 = NEON_fmadd(local_a0,uStack_e8,local_d8 * local_9c);
          local_124 = 0;
          local_118 = NEON_fmadd(local_98,local_c8,uVar48);
          uVar53 = NEON_fmadd(local_90,local_f0,local_e0 * fStack_8c);
          uVar50 = NEON_fmadd(local_90,uStack_e8,local_d8 * fStack_8c);
          local_114 = 0;
          uVar48 = NEON_fmadd((undefined4)local_80,local_f0,local_e0 * local_80._4_4_);
          uVar51 = NEON_fmadd(local_90,local_ec,fStack_dc * fStack_8c);
          uVar52 = NEON_fmadd((undefined4)local_80,local_ec,fStack_dc * local_80._4_4_);
          uVar49 = NEON_fmadd((undefined4)local_80,uStack_e8,local_d8 * local_80._4_4_);
          local_110 = NEON_fmadd(local_88,local_d0,uVar53);
          local_108 = NEON_fmadd(local_88,local_c8,uVar50);
          local_104 = 0;
          uStack_10c = NEON_fmadd(local_88,uStack_cc,uVar51);
          local_100 = (float)NEON_fmadd(local_78,local_d0,uVar48);
          fStack_fc = (float)NEON_fmadd(local_78,uStack_cc,uVar52);
          local_f8 = (float)NEON_fmadd(local_78,local_c8,uVar49);
          local_100 = local_c0 + local_100;
          local_f4 = 0x3f800000;
          fStack_fc = fStack_fc + local_bc;
          local_f8 = local_f8 + fStack_b8;
          RawTransformGroup::setTransformation(this_02,(Matrix4x4 *)&local_130,1);
          lVar34 = RawTransformGroup::getPhysicsObject();
          if ((*(byte *)(lVar34 + 8) >> 4 & 1) != 0) {
            RawTransformGroup::updateWorldTransformation();
          }
        }
        this = (DeferredDebugRenderer *)RawTransformGroup::getPhysicsObject();
        if (((byte)this[10] >> 3 & 1) != 0) {
          uVar11 = *(uint *)(lVar43 + 0x98);
          if ((iVar5 - 1U & 0x7fffffff) != uVar11 >> 1) {
            pplVar36 = *(long ***)(in_x0 + 0x100);
            pplVar17 = *(long ***)(in_x0 + 0xf8);
            if (*(long ***)(in_x0 + 0xf8) != pplVar36) {
              do {
                pplVar42 = pplVar17 + 1;
                this = (DeferredDebugRenderer *)(**(code **)(**pplVar17 + 0x10))(*pplVar17,this_02);
                pplVar17 = pplVar42;
              } while (pplVar42 != pplVar36);
              uVar11 = *(uint *)(lVar43 + 0x98);
            }
          }
          *(uint *)(lVar43 + 0x98) = uVar11 & 1 | *(int *)(in_x0 + 0x20) << 1;
        }
      }
      uVar30 = uVar30 + 1;
      *(uint *)(lVar43 + 0x98) = *(uint *)(lVar43 + 0x98) & 0xfffffffe;
    } while (uVar30 != uVar4);
    uVar4 = *(uint *)(in_x0 + 4);
  }
  if ((int)uVar4 < 0) {
    if (*(int *)(in_x0 + 8) < 0) {
      this = *(DeferredDebugRenderer **)(in_x0 + 0x10);
      if ((this != (DeferredDebugRenderer *)0x0) &&
         (in_x0[0x18] != (Bt2ScenegraphPhysicsContext)0x0)) {
        this = (DeferredDebugRenderer *)btAlignedFreeInternal(this);
      }
      *(undefined8 *)(in_x0 + 0x10) = 0;
      *(undefined4 *)(in_x0 + 8) = 0;
      in_x0[0x18] = (Bt2ScenegraphPhysicsContext)0x1;
    }
    lVar34 = (long)(int)uVar4;
    do {
      *(undefined8 *)(*(long *)(in_x0 + 0x10) + lVar34 * 8) = 0;
      bVar9 = lVar34 != -1;
      lVar34 = lVar34 + 1;
    } while (bVar9);
  }
  *(undefined4 *)(in_x0 + 4) = 0;
  uVar4 = *(uint *)(in_x0 + 0x178);
  *(int *)(in_x0 + 0x20) = *(int *)(in_x0 + 0x20) + 1;
  if (uVar4 == 0) {
LAB_009a2114:
    *(undefined4 *)(in_x0 + 0x178) = 0;
    uVar4 = *(uint *)(in_x0 + 0x210);
  }
  else {
    uVar30 = 0;
    ppvVar1 = (void **)(in_x0 + 0x170);
    ppBVar2 = (Bt2ScenegraphPhysicsContext **)(in_x0 + 400);
    do {
      pvVar28 = *ppvVar1;
      ppTVar14 = (TransformGroup **)((long)pvVar28 + uVar30 * 0x50);
      switch(*(undefined4 *)(ppTVar14 + 1)) {
      case 0:
        this = (DeferredDebugRenderer *)
               addForce((Bt2ScenegraphPhysicsContext *)this,*ppTVar14,
                        (AddForce *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 1:
        this = (DeferredDebugRenderer *)
               addTorque((Bt2ScenegraphPhysicsContext *)this,*ppTVar14,
                         (AddTorque *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 2:
        this = (DeferredDebugRenderer *)RawTransformGroup::getPhysicsObject();
        if (((byte)((TransformGroup *)this)[8] >> 3 & 1) != 0) {
          lVar34 = RawTransformGroup::getPhysicsObject();
          this = *(DeferredDebugRenderer **)(lVar34 + 0x30);
          if ((this != (DeferredDebugRenderer *)0x0) &&
             (((byte)((btCollisionObject *)this)[0xe0] & 3) == 0)) {
            uVar52 = *(undefined4 *)((long)pvVar28 + uVar30 * 0x50 + 0x10);
            uVar48 = *(undefined4 *)((long)pvVar28 + uVar30 * 0x50 + 0x14);
            cVar6 = *(char *)((long)pvVar28 + uVar30 * 0x50 + 0x1c);
            uVar49 = *(undefined4 *)((long)pvVar28 + uVar30 * 0x50 + 0x18);
            *(int *)((btCollisionObject *)this + 0x148) =
                 *(int *)((btCollisionObject *)this + 0x148) + 1;
            if (cVar6 == '\0') {
              puVar16 = (undefined4 *)((btCollisionObject *)this + 0x198);
              *(undefined4 *)((btCollisionObject *)this + 0x18c) = uVar52;
              *(undefined4 *)((btCollisionObject *)this + 400) = uVar48;
              *(undefined4 *)((btCollisionObject *)this + 0x194) = uVar49;
            }
            else {
              *(undefined4 *)((btCollisionObject *)this + 0x17c) = uVar52;
              puVar16 = (undefined4 *)((btCollisionObject *)this + 0x188);
              *(undefined4 *)((btCollisionObject *)this + 0x180) = uVar48;
              *(undefined4 *)((btCollisionObject *)this + 0x184) = uVar49;
            }
            *puVar16 = 0;
            this = (DeferredDebugRenderer *)
                   btCollisionObject::activate((btCollisionObject *)this,false);
          }
        }
        break;
      case 3:
        this = (DeferredDebugRenderer *)
               createWheelShape(in_x0,*ppTVar14,
                                (CreateWheel *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 4:
        this = (DeferredDebugRenderer *)
               controlWheelShape(in_x0,*ppTVar14,
                                 (ControlWheel *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 5:
        this = (DeferredDebugRenderer *)
               setWheelShapeTireFriction((TransformGroup *)in_x0,(SetWheelTireFriction *)*ppTVar14);
        break;
      case 6:
        this = (DeferredDebugRenderer *)
               setWheelShapeForcePoint
                         (in_x0,*ppTVar14,
                          (SetWheelForcePoint *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 7:
        this = (DeferredDebugRenderer *)
               setWheelShapeDirection
                         (in_x0,*ppTVar14,
                          (SetWheelDirection *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 8:
        this = (DeferredDebugRenderer *)
               setWheelShapeSteeringCenter
                         (in_x0,*ppTVar14,
                          (SetWheelSteeringCenter *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 9:
        this = (DeferredDebugRenderer *)
               setWheelShapeWidth(in_x0,*ppTVar14,
                                  (SetWheelWidth *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 10:
        this = (DeferredDebugRenderer *)
               setWheelShapeAutoHoldBrakeForce
                         (in_x0,*ppTVar14,
                          (SetWheelAutoHoldBrakeForce *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 0xb:
        this = (DeferredDebugRenderer *)
               addDifferential(in_x0,*ppTVar14,
                               (AddDifferential *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 0xc:
        this = (DeferredDebugRenderer *)RawTransformGroup::getPhysicsObject();
        pBVar15 = *(Bt2ScenegraphPhysicsContext **)((TransformGroup *)this + 0x30);
        if ((pBVar15 != (Bt2ScenegraphPhysicsContext *)0x0) &&
           (ppBVar24 = (Bt2ScenegraphPhysicsContext **)*ppBVar2,
           ((byte)pBVar15[0xe0] & 3) == 0 && ppBVar24 != (Bt2ScenegraphPhysicsContext **)0x0)) {
          ppBVar23 = ppBVar2;
          do {
            if (ppBVar24[4] >= pBVar15) {
              ppBVar23 = ppBVar24;
            }
            ppBVar24 = (Bt2ScenegraphPhysicsContext **)ppBVar24[ppBVar24[4] < pBVar15];
          } while (ppBVar24 != (Bt2ScenegraphPhysicsContext **)0x0);
          if ((ppBVar23 != ppBVar2) && (ppBVar23[4] <= pBVar15)) {
            this = (DeferredDebugRenderer *)
                   Bt2RaycastVehicle::updateDifferential
                             ((Bt2RaycastVehicle *)ppBVar23[5],
                              *(uint *)((long)pvVar28 + uVar30 * 0x50 + 0x10),
                              *(float *)((long)pvVar28 + uVar30 * 0x50 + 0x14),
                              *(float *)((long)pvVar28 + uVar30 * 0x50 + 0x18));
          }
        }
        break;
      case 0xd:
        this = (DeferredDebugRenderer *)RawTransformGroup::getPhysicsObject();
        pBVar15 = *(Bt2ScenegraphPhysicsContext **)((TransformGroup *)this + 0x30);
        if ((pBVar15 != (Bt2ScenegraphPhysicsContext *)0x0) &&
           (ppBVar23 = (Bt2ScenegraphPhysicsContext **)*ppBVar2, ppBVar24 = ppBVar2,
           ((byte)pBVar15[0xe0] & 3) == 0 && ppBVar23 != (Bt2ScenegraphPhysicsContext **)0x0)) {
          do {
            if (ppBVar23[4] >= pBVar15) {
              ppBVar24 = ppBVar23;
            }
            ppBVar23 = (Bt2ScenegraphPhysicsContext **)ppBVar23[ppBVar23[4] < pBVar15];
          } while (ppBVar23 != (Bt2ScenegraphPhysicsContext **)0x0);
          if ((ppBVar24 != ppBVar2) && (ppBVar24[4] <= pBVar15)) {
            this = (DeferredDebugRenderer *)Bt2RaycastVehicle::removeAllDifferentials();
          }
        }
        break;
      case 0xe:
        this = (DeferredDebugRenderer *)
               controlVehicle(in_x0,*ppTVar14,
                              (ControlVehicle *)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 0xf:
        this = (DeferredDebugRenderer *)
               setMotorProperties(in_x0,*ppTVar14,
                                  (SetMotorProperties *)((long)pvVar28 + uVar30 * 0x50 + 0x10),true)
        ;
        break;
      case 0x10:
        this = (DeferredDebugRenderer *)*ppTVar14;
        ppTVar14 = (TransformGroup **)((long)pvVar28 + uVar30 * 0x50 + 0x10);
        if (this != (DeferredDebugRenderer *)0x0) {
          this = (DeferredDebugRenderer *)RawTransformGroup::getPhysicsObject();
          if ((*(long *)((TransformGroup *)this + 0x30) != 0) &&
             (this = *(DeferredDebugRenderer **)(*(long *)((TransformGroup *)this + 0x30) + 200),
             this != (DeferredDebugRenderer *)0x0)) {
            pTVar22 = *ppTVar14;
            if (*(char *)((long)pvVar28 + uVar30 * 0x50 + 0x28) != '\0') {
              pTVar22 = (TransformGroup *)0x0;
            }
            this = (DeferredDebugRenderer *)
                   Bt2HeightfieldTerrainShape::setDeltaHeightfield
                             ((Bt2HeightfieldTerrainShape *)this,(uchar *)pTVar22,
                              *(int *)((long)pvVar28 + uVar30 * 0x50 + 0x18),
                              *(int *)((long)pvVar28 + uVar30 * 0x50 + 0x1c),
                              *(float *)((long)pvVar28 + uVar30 * 0x50 + 0x20),
                              *(uint *)((long)pvVar28 + uVar30 * 0x50 + 0x24),
                              Bt2PhysicsUtil::shapeTerrainDeltaPairCallback);
          }
        }
        if ((*(char *)((long)pvVar28 + uVar30 * 0x50 + 0x28) != '\0') &&
           (this = (DeferredDebugRenderer *)*ppTVar14, this != (DeferredDebugRenderer *)0x0)) {
          operator_delete__(this);
        }
        break;
      case 0x11:
        this = (DeferredDebugRenderer *)
               setPairCollision((TransformGroup *)this,*ppTVar14,
                                *(SetPairCollision **)((long)pvVar28 + uVar30 * 0x50 + 0x10));
        break;
      case 0x12:
        this = (DeferredDebugRenderer *)addVehicleLink((TransformGroup *)in_x0,*ppTVar14);
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar4);
    if (uVar4 < 0x81) goto LAB_009a2114;
    operator_delete__(*ppvVar1);
    *ppvVar1 = (void *)0x0;
    *(undefined8 *)(in_x0 + 0x178) = 0;
    uVar4 = *(uint *)(in_x0 + 0x210);
  }
  if (uVar4 != 0) {
    uVar30 = 0;
    ppvVar1 = (void **)(in_x0 + 0x208);
    ppBVar2 = (Bt2ScenegraphPhysicsContext **)(in_x0 + 0x1c8);
    do {
      pvVar28 = *ppvVar1;
      puVar32 = (uint *)((long)pvVar28 + uVar30 * 0x30);
      switch(puVar32[1]) {
      case 0:
        setJointLimits(in_x0,*puVar32,(SetJointLimit *)((long)pvVar28 + uVar30 * 0x30 + 8));
        break;
      case 1:
        setJointLimitsSpring
                  (in_x0,*puVar32,(SetJointLimitSpring *)((long)pvVar28 + uVar30 * 0x30 + 8));
        break;
      case 2:
        ppBVar24 = (Bt2ScenegraphPhysicsContext **)*ppBVar2;
        if (ppBVar24 != (Bt2ScenegraphPhysicsContext **)0x0) {
          uVar11 = *puVar32;
          ppBVar23 = ppBVar2;
          do {
            if (*(uint *)(ppBVar24 + 4) >= uVar11) {
              ppBVar23 = ppBVar24;
            }
            ppBVar24 = (Bt2ScenegraphPhysicsContext **)ppBVar24[*(uint *)(ppBVar24 + 4) < uVar11];
          } while (ppBVar24 != (Bt2ScenegraphPhysicsContext **)0x0);
          if ((ppBVar23 != ppBVar2) && (*(uint *)(ppBVar23 + 4) <= uVar11)) {
            pBVar15 = ppBVar23[6];
            fVar47 = *(float *)((long)pvVar28 + uVar30 * 0x30 + 0x10);
            uVar11 = *(uint *)((long)pvVar28 + uVar30 * 0x30 + 0xc);
            this_01 = *(btCollisionObject **)(pBVar15 + 0x28);
            fVar45 = 3.402823e+38;
            if (0.0 <= fVar47) {
              fVar45 = *(float *)(*(long *)(in_x0 + 0x30) + 0x9c) * fVar47;
            }
            lVar34 = (long)(int)uVar11 * 0x44 + 0x1cc;
            if (*(char *)((long)pvVar28 + uVar30 * 0x30 + 8) != '\0') {
              lVar34 = (ulong)uVar11 * 4 + 0xfc;
            }
            *(float *)(pBVar15 + lVar34) = fVar45;
            btCollisionObject::activate(this_01,false);
            btCollisionObject::activate(*(btCollisionObject **)(pBVar15 + 0x30),false);
          }
        }
        break;
      case 3:
        setJointFrame(in_x0,*puVar32,(SetJointFrame *)((long)pvVar28 + uVar30 * 0x30 + 8));
        break;
      case 4:
        setJointPosition(in_x0,*puVar32,(SetJointPosition *)((long)pvVar28 + uVar30 * 0x30 + 8));
        break;
      case 5:
        ppBVar24 = (Bt2ScenegraphPhysicsContext **)*ppBVar2;
        if (ppBVar24 != (Bt2ScenegraphPhysicsContext **)0x0) {
          uVar11 = *puVar32;
          ppBVar23 = ppBVar2;
          do {
            if (*(uint *)(ppBVar24 + 4) >= uVar11) {
              ppBVar23 = ppBVar24;
            }
            ppBVar24 = (Bt2ScenegraphPhysicsContext **)ppBVar24[*(uint *)(ppBVar24 + 4) < uVar11];
          } while (ppBVar24 != (Bt2ScenegraphPhysicsContext **)0x0);
          if ((ppBVar23 != ppBVar2) && (*(uint *)(ppBVar23 + 4) <= uVar11)) {
            pBVar15 = ppBVar23[6];
            cVar6 = *(char *)((long)pvVar28 + uVar30 * 0x30 + 9);
            if (*(char *)((long)pvVar28 + uVar30 * 0x30 + 8) == '\0') {
              if (cVar6 == '\0') {
                *(undefined4 *)(pBVar15 + 0x1e4) =
                     *(undefined4 *)((long)pvVar28 + uVar30 * 0x30 + 0xc);
                *(undefined4 *)(pBVar15 + 0x228) =
                     *(undefined4 *)((long)pvVar28 + uVar30 * 0x30 + 0x10);
                *(undefined4 *)(pBVar15 + 0x26c) =
                     *(undefined4 *)((long)pvVar28 + uVar30 * 0x30 + 0x14);
              }
            }
            else if (cVar6 == '\0') {
              *(undefined4 *)(pBVar15 + 0x164) =
                   *(undefined4 *)((long)pvVar28 + uVar30 * 0x30 + 0xc);
              *(undefined4 *)(pBVar15 + 0x168) =
                   *(undefined4 *)((long)pvVar28 + uVar30 * 0x30 + 0x10);
              uVar48 = *(undefined4 *)((long)pvVar28 + uVar30 * 0x30 + 0x14);
              *(undefined4 *)(pBVar15 + 0x170) = 0;
              *(undefined4 *)(pBVar15 + 0x16c) = uVar48;
            }
          }
        }
        break;
      case 6:
        setJointDriveAxis(in_x0,*puVar32,(SetJointDriveAxis *)((long)pvVar28 + uVar30 * 0x30 + 8));
        break;
      case 7:
        setJointBreakForce(in_x0,*puVar32,(SetJointBreakForce *)((long)pvVar28 + uVar30 * 0x30 + 8))
        ;
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar4);
    if (0x80 < uVar4) {
      operator_delete__(*ppvVar1);
      *ppvVar1 = (void *)0x0;
      *(undefined8 *)(in_x0 + 0x210) = 0;
      goto LAB_009a2368;
    }
  }
  *(undefined4 *)(in_x0 + 0x210) = 0;
LAB_009a2368:
  puVar32 = *(uint **)(in_x0 + 0x308);
  puVar38 = *(uint **)(in_x0 + 0x310);
  if (puVar32 != puVar38) {
    do {
      if (puVar32[1] == 1) {
        setRopeAnchor(in_x0,*puVar32,(SetRopeAnchor *)(puVar32 + 2));
      }
      else if ((puVar32[1] == 0) && (uVar30 = *(ulong *)(in_x0 + 0x2b8), uVar30 != 0)) {
        uVar4 = *puVar32;
        uVar12 = (ulong)uVar4;
        uVar18 = NEON_cnt(uVar30,1);
        uVar44 = NEON_uaddlv(uVar18,1);
        uVar21 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar44) & 0xffffffff;
        if (uVar21 < 2) {
          uVar25 = (ulong)((int)uVar30 - 1U & uVar4);
        }
        else {
          uVar25 = uVar12;
          if (uVar30 <= uVar12) {
            uVar25 = 0;
            if (uVar30 != 0) {
              uVar25 = uVar12 / uVar30;
            }
            uVar25 = uVar12 - uVar25 * uVar30;
          }
        }
        pplVar36 = *(long ***)(*(long *)(in_x0 + 0x2b0) + uVar25 * 8);
        if ((pplVar36 != (long **)0x0) && (plVar13 = *pplVar36, plVar13 != (long *)0x0)) {
          do {
            uVar26 = plVar13[1];
            if (uVar26 == uVar12) {
              if (*(uint *)(plVar13 + 2) == uVar4) {
                Bt2Rope::setMaxLength((Bt2Rope *)plVar13[3],(float)puVar32[2]);
                break;
              }
            }
            else {
              if (uVar21 < 2) {
                uVar26 = uVar26 & uVar30 - 1;
              }
              else if (uVar30 <= uVar26) {
                uVar7 = 0;
                if (uVar30 != 0) {
                  uVar7 = uVar26 / uVar30;
                }
                uVar26 = uVar26 - uVar7 * uVar30;
              }
              if (uVar26 != uVar25) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
      puVar32 = puVar32 + 0xc;
    } while (puVar32 != puVar38);
    puVar32 = *(uint **)(in_x0 + 0x308);
  }
  plVar13 = *(long **)(in_x0 + 0x2c0);
  *(uint **)(in_x0 + 0x310) = puVar32;
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    Bt2Rope::update((Bt2ScenegraphPhysicsContext *)plVar13[3]);
  }
  pplVar36 = *(long ***)(in_x0 + 0x328);
  while (pplVar36 != pplVar29) {
    Bt2PhysicsCharacterController::update();
    pplVar17 = (long **)pplVar36[1];
    if ((long **)pplVar36[1] == (long **)0x0) {
      pplVar17 = pplVar36 + 2;
      bVar9 = (long **)**pplVar17 != pplVar36;
      pplVar36 = (long **)*pplVar17;
      if (bVar9) {
        do {
          plVar13 = *pplVar17;
          pplVar17 = (long **)(plVar13 + 2);
          pplVar36 = (long **)*pplVar17;
        } while (*pplVar36 != plVar13);
      }
    }
    else {
      do {
        pplVar36 = pplVar17;
        pplVar17 = (long **)*pplVar36;
      } while ((long **)*pplVar36 != (long **)0x0);
    }
  }
  lVar34 = *(long *)(in_x0 + 0xb0);
  lVar27 = *(long *)(in_x0 + 0xb8);
  if (lVar34 != lVar27) {
    do {
      lVar34 = lVar34 + 8;
      Bt2PhysicsRBObject::update();
    } while (lVar34 != lVar27);
    lVar34 = *(long *)(in_x0 + 0xb0);
  }
  lVar27 = *(long *)(in_x0 + 200);
  lVar43 = *(long *)(in_x0 + 0xd0);
  *(long *)(in_x0 + 0xb8) = lVar34;
  if (lVar27 != lVar43) {
    do {
      lVar27 = lVar27 + 8;
      Bt2PhysicsJointObject::updatePose();
    } while (lVar27 != lVar43);
    lVar27 = *(long *)(in_x0 + 200);
  }
  lVar34 = *(long *)(in_x0 + 0x360);
  *(long *)(in_x0 + 0xd0) = lVar27;
  if (lVar34 != *(long *)(in_x0 + 0x358)) {
    uVar30 = 0;
    lVar27 = *(long *)(in_x0 + 0x358);
    lVar43 = lVar34;
    do {
      lVar34 = lVar27;
      pplVar36 = (long **)*pplVar29;
      if (pplVar36 != (long **)0x0) {
        uVar4 = *(uint *)(lVar34 + uVar30 * 4);
        pplVar17 = pplVar29;
        do {
          if (*(uint *)(pplVar36 + 4) >= uVar4) {
            pplVar17 = pplVar36;
          }
          pplVar36 = (long **)pplVar36[*(uint *)(pplVar36 + 4) < uVar4];
        } while (pplVar36 != (long **)0x0);
        if ((pplVar17 != pplVar29) && (*(uint *)(pplVar17 + 4) <= uVar4)) {
          if (pplVar17[5] != (long *)0x0) {
            (**(code **)(*pplVar17[5] + 8))();
          }
          pplVar36 = (long **)pplVar17[1];
          if ((long **)pplVar17[1] == (long **)0x0) {
            pplVar36 = pplVar17 + 2;
            pplVar42 = (long **)*pplVar36;
            if ((long **)*pplVar42 != pplVar17) {
              do {
                plVar13 = *pplVar36;
                pplVar36 = (long **)(plVar13 + 2);
                pplVar42 = (long **)*pplVar36;
              } while (*pplVar42 != plVar13);
            }
          }
          else {
            do {
              pplVar42 = pplVar36;
              pplVar36 = (long **)*pplVar42;
            } while ((long **)*pplVar42 != (long **)0x0);
          }
          if (*(long ***)(in_x0 + 0x328) == pplVar17) {
            *(long ***)(in_x0 + 0x328) = pplVar42;
          }
          *(long *)(in_x0 + 0x338) = *(long *)(in_x0 + 0x338) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(in_x0 + 0x330),(__tree_node_base *)pplVar17);
          operator_delete(pplVar17);
          lVar43 = *(long *)(in_x0 + 0x360);
          lVar34 = *(long *)(in_x0 + 0x358);
        }
      }
      uVar30 = (ulong)((int)uVar30 + 1);
      lVar27 = lVar34;
    } while (uVar30 < (ulong)(lVar43 - lVar34 >> 2));
  }
  lVar27 = *(long *)(in_x0 + 0x1f8);
  *(long *)(in_x0 + 0x360) = lVar34;
  if (lVar27 != *(long *)(in_x0 + 0x1f0)) {
    uVar30 = 0;
    lVar27 = *(long *)(in_x0 + 0x1f0);
    do {
      removeLightJoint(in_x0,*(uint *)(lVar27 + uVar30 * 4));
      lVar27 = *(long *)(in_x0 + 0x1f0);
      uVar30 = (ulong)((int)uVar30 + 1);
    } while (uVar30 < (ulong)(*(long *)(in_x0 + 0x1f8) - lVar27 >> 2));
  }
  lVar34 = *(long *)(in_x0 + 0x160);
  *(long *)(in_x0 + 0x1f8) = lVar27;
  if (lVar34 != *(long *)(in_x0 + 0x158)) {
    uVar30 = 0;
    lVar34 = *(long *)(in_x0 + 0x158);
    do {
      plVar13 = *(long **)(lVar34 + uVar30 * 8);
      lVar27 = plVar13[5];
      lVar34 = btTypedConstraint::getFixedBody();
      if (lVar27 != lVar34) {
        btCollisionObject::activate((btCollisionObject *)plVar13[5],false);
      }
      lVar27 = plVar13[6];
      lVar34 = btTypedConstraint::getFixedBody();
      if (lVar27 != lVar34) {
        btCollisionObject::activate((btCollisionObject *)plVar13[6],false);
      }
      (**(code **)(**(long **)(in_x0 + 0x30) + 0x78))(*(long **)(in_x0 + 0x30),plVar13);
      if ((void *)plVar13[2] != (void *)0x0) {
        operator_delete((void *)plVar13[2]);
      }
      (**(code **)(*plVar13 + 8))(plVar13);
      lVar34 = *(long *)(in_x0 + 0x158);
      uVar30 = (ulong)((int)uVar30 + 1);
    } while (uVar30 < (ulong)(*(long *)(in_x0 + 0x160) - lVar34 >> 3));
  }
  ppbVar33 = *(btRigidBody ***)(in_x0 + 0x140);
  ppbVar3 = *(btRigidBody ***)(in_x0 + 0x148);
  *(long *)(in_x0 + 0x160) = lVar34;
  if (ppbVar33 != ppbVar3) {
    do {
      removeActor(in_x0,*ppbVar33,*(bool *)(ppbVar33 + 1));
      ppbVar33 = ppbVar33 + 2;
    } while (ppbVar33 != ppbVar3);
    ppbVar33 = *(btRigidBody ***)(in_x0 + 0x140);
  }
  puVar32 = *(uint **)(in_x0 + 0x2f0);
  *(btRigidBody ***)(in_x0 + 0x148) = ppbVar33;
  puVar38 = *(uint **)(in_x0 + 0x2f8);
  *(undefined8 *)(in_x0 + 0x298) = *(undefined8 *)(in_x0 + 0x290);
  if (puVar32 != puVar38) {
    do {
      puVar39 = puVar32 + 1;
      removeRope(in_x0,*puVar32);
      puVar32 = puVar39;
    } while (puVar39 != puVar38);
    puVar32 = *(uint **)(in_x0 + 0x2f0);
  }
  *(uint **)(in_x0 + 0x2f8) = puVar32;
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


