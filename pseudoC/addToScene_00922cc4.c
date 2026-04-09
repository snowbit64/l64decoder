// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToScene
// Entry Point: 00922cc4
// Size: 1668 bytes
// Signature: undefined __thiscall addToScene(DestructionShape * this, Bt2ScenegraphPhysicsContext * param_1)


/* DestructionShape::addToScene(Bt2ScenegraphPhysicsContext*) */

void __thiscall
DestructionShape::addToScene(DestructionShape *this,Bt2ScenegraphPhysicsContext *param_1)

{
  __tree_node_base **pp_Var1;
  uint uVar2;
  long lVar3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  DestructionGeometryShared *this_00;
  long lVar6;
  float *pfVar7;
  void *pvVar8;
  __tree_node_base **pp_Var9;
  uint *puVar10;
  ulong uVar11;
  __tree_node_base **pp_Var12;
  __tree_node_base *p_Var13;
  __tree_node_base **pp_Var14;
  long **pplVar15;
  long **pplVar16;
  long *plVar17;
  __tree_node_base *p_Var18;
  __tree_node_base **pp_Var19;
  __tree_node_base **pp_Var20;
  ulong uVar21;
  __tree_node_base **pp_Var22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  *(undefined8 *)(this + 0x308) = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(this + 0x300) = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this + 0x318) = *(undefined8 *)(this + 0xd0);
  *(undefined8 *)(this + 0x310) = *(undefined8 *)(this + 200);
  *(undefined8 *)(this + 0x328) = *(undefined8 *)(this + 0xe0);
  *(undefined8 *)(this + 800) = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(this + 0x338) = *(undefined8 *)(this + 0xf0);
  *(undefined8 *)(this + 0x330) = *(undefined8 *)(this + 0xe8);
  Matrix4x4::invert3x4((Matrix4x4 *)(this + 0x2c0),(Matrix4x4 *)(this + 0x300));
  *(Bt2ScenegraphPhysicsContext **)(this + 0x290) = param_1;
  this_00 = (DestructionGeometryShared *)DestructionGeometry::getShared();
  DestructionGeometry::reset();
  *(undefined4 *)(this + 0x350) = 0;
  local_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
                    /* try { // try from 00922d50 to 00922d5b has its CatchHandler @ 0092334c */
  DestructionGeometryShared::getStartLevelChunks(this_00,(vector *)&local_b0);
  if (local_a8 != local_b0) {
    uVar21 = 0;
    do {
                    /* try { // try from 00922d88 to 00922d8f has its CatchHandler @ 00923350 */
      createActor(this,*(uint *)((long)local_b0 + uVar21 * 4));
                    /* try { // try from 00922d98 to 00922dc3 has its CatchHandler @ 0092339c */
      DestructionGeometryShared::getChunk(this_00,*(uint *)((long)local_b0 + uVar21 * 4));
      lVar6 = DestructionChunk::getHullMin();
      if (*(float *)(lVar6 + 4) < *(float *)(this + 0x2a8)) {
        createWorldJoint(this,*(uint *)((long)local_b0 + uVar21 * 4));
      }
      uVar21 = (ulong)((int)uVar21 + 1);
    } while (uVar21 < (ulong)((long)local_a8 - (long)local_b0 >> 2));
  }
                    /* try { // try from 00922dc8 to 00922dcf has its CatchHandler @ 0092334c */
  DestructionGeometry::updateBoundingVolume();
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
                    /* try { // try from 00922dd8 to 00922df3 has its CatchHandler @ 00923348 */
  RawTransformGroup::updateWorldTransformation();
  DestructionGeometryShared::getChunkPairs
            (this_00,(Matrix4x4 *)(this + 0xb8),(vector *)&local_b0,(vector *)&local_c8);
  pvVar8 = local_c0;
  if (local_c0 != local_c8) {
    uVar21 = 0;
    do {
                    /* try { // try from 00922e20 to 00922e2b has its CatchHandler @ 00923360 */
      DestructionGeometryShared::getChunk(this_00,*(uint *)((long)local_c8 + uVar21 * 0x14));
      pfVar7 = (float *)DestructionChunk::getCenterOfMass();
      fVar25 = *pfVar7;
      fVar26 = pfVar7[1];
      fVar24 = pfVar7[2];
                    /* try { // try from 00922e44 to 00922e4f has its CatchHandler @ 0092335c */
      DestructionGeometryShared::getChunk(this_00,*(uint *)((long)local_c8 + uVar21 * 0x14 + 4));
      pfVar7 = (float *)DestructionChunk::getCenterOfMass();
      fVar28 = *pfVar7;
      fVar29 = pfVar7[1];
      fVar27 = pfVar7[2];
                    /* try { // try from 00922e58 to 00922edb has its CatchHandler @ 00923358 */
      RawTransformGroup::updateWorldTransformation();
      fVar26 = (fVar26 + fVar29) * 0.5;
      fVar25 = (fVar25 + fVar28) * 0.5;
      fVar24 = (fVar24 + fVar27) * 0.5;
      puVar10 = (uint *)((long)local_c8 + uVar21 * 0x14);
      uVar23 = NEON_fmadd(fVar25,*(undefined4 *)(this + 0xc0),fVar26 * *(float *)(this + 0xd0));
      local_90 = (float)NEON_fmadd(fVar24,*(undefined4 *)(this + 0xe0),uVar23);
      local_98 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xe8) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(this + 200) >> 0x20) * fVar26 +
                          (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) * fVar25 +
                          (float)((ulong)*(undefined8 *)(this + 0xd8) >> 0x20) * fVar24,
                          (float)*(undefined8 *)(this + 0xe8) +
                          (float)*(undefined8 *)(this + 200) * fVar26 +
                          (float)*(undefined8 *)(this + 0xb8) * fVar25 +
                          (float)*(undefined8 *)(this + 0xd8) * fVar24);
      local_90 = *(float *)(this + 0xf0) + local_90;
      createJoint(this,*puVar10,puVar10[1],(Vector3 *)&local_98);
      uVar21 = (ulong)((int)uVar21 + 1);
      uVar11 = ((long)local_c0 - (long)local_c8 >> 2) * -0x3333333333333333;
      pvVar8 = local_c8;
    } while (uVar21 <= uVar11 && uVar11 - uVar21 != 0);
  }
  pp_Var22 = *(__tree_node_base ***)(this + 0x278);
joined_r0x00922f04:
  do {
    pp_Var4 = pp_Var22;
    if (pp_Var4 == (__tree_node_base **)(this + 0x280)) {
      *(int *)(this + 0x358) = (int)*(undefined8 *)(this + 600);
      if (pvVar8 != (void *)0x0) {
        local_c0 = pvVar8;
        operator_delete(pvVar8);
      }
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        operator_delete(local_b0);
      }
      if (*(long *)(lVar3 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pp_Var12 = (__tree_node_base **)pp_Var4[1];
    if ((__tree_node_base **)pp_Var4[1] == (__tree_node_base **)0x0) {
      pp_Var12 = pp_Var4 + 2;
      pp_Var22 = (__tree_node_base **)*pp_Var12;
      if ((__tree_node_base **)*pp_Var22 != pp_Var4) {
        do {
          p_Var13 = *pp_Var12;
          pp_Var12 = (__tree_node_base **)(p_Var13 + 0x10);
          pp_Var22 = (__tree_node_base **)*pp_Var12;
        } while (*pp_Var22 != p_Var13);
      }
    }
    else {
      do {
        pp_Var22 = pp_Var12;
        pp_Var12 = (__tree_node_base **)*pp_Var22;
      } while ((__tree_node_base **)*pp_Var22 != (__tree_node_base **)0x0);
    }
    if (pp_Var4[5] == (__tree_node_base *)this) goto LAB_00923028;
                    /* try { // try from 00922f88 to 0092304b has its CatchHandler @ 00923354 */
    lVar6 = RawTransformGroup::getPhysicsObject();
    pvVar8 = local_c8;
  } while ((*(byte *)(lVar6 + 8) & 1) == 0);
  addInterShapeJoint(this,*(uint *)((long)pp_Var4 + 0x24),*(uint *)(pp_Var4 + 4),
                     (DestructionShape *)pp_Var4[5],(Vector3 *)(pp_Var4 + 7));
  p_Var13 = pp_Var4[5];
  pp_Var9 = *(__tree_node_base ***)(p_Var13 + 0x280);
  pp_Var12 = (__tree_node_base **)(p_Var13 + 0x280);
  pp_Var14 = pp_Var12;
  if (pp_Var9 != (__tree_node_base **)0x0) {
    uVar2 = *(uint *)(pp_Var4 + 4);
    p_Var18 = pp_Var4[6];
    pp_Var5 = pp_Var9;
    pp_Var19 = pp_Var12;
    do {
      while ((pp_Var20 = pp_Var5, pp_Var20[5] < p_Var13 ||
             ((pp_Var20[5] == p_Var13 &&
              ((pp_Var20[6] < p_Var18 ||
               ((pp_Var20[6] == p_Var18 &&
                ((*(uint *)(pp_Var20 + 4) < uVar2 ||
                 ((*(uint *)(pp_Var20 + 4) == uVar2 &&
                  (*(uint *)((long)pp_Var20 + 0x24) < *(uint *)((long)pp_Var4 + 0x24)))))))))))))) {
        pp_Var1 = pp_Var20 + 1;
        pp_Var5 = (__tree_node_base **)*pp_Var1;
        pp_Var20 = pp_Var19;
        if ((__tree_node_base **)*pp_Var1 == (__tree_node_base **)0x0) goto LAB_009230cc;
      }
      pp_Var5 = (__tree_node_base **)*pp_Var20;
      pp_Var19 = pp_Var20;
    } while ((__tree_node_base **)*pp_Var20 != (__tree_node_base **)0x0);
LAB_009230cc:
    if ((((pp_Var20 != pp_Var12) && (pp_Var20[5] <= p_Var13)) &&
        (pp_Var14 = pp_Var20, p_Var13 == pp_Var20[5])) &&
       (((pp_Var14 = pp_Var12, pp_Var20[6] <= p_Var18 &&
         (pp_Var14 = pp_Var20, p_Var18 == pp_Var20[6])) &&
        ((pp_Var14 = pp_Var12, *(uint *)(pp_Var20 + 4) <= uVar2 &&
         ((pp_Var14 = pp_Var20, uVar2 == *(uint *)(pp_Var20 + 4) &&
          (pp_Var14 = pp_Var12, *(uint *)((long)pp_Var20 + 0x24) <= *(uint *)((long)pp_Var4 + 0x24))
          ))))))) {
      pp_Var14 = pp_Var20;
    }
  }
  pplVar16 = (long **)pp_Var14[1];
  if ((long **)pp_Var14[1] == (long **)0x0) {
    pplVar16 = (long **)(pp_Var14 + 2);
    pplVar15 = (long **)*pplVar16;
    if ((__tree_node_base **)*pplVar15 != pp_Var14) {
      do {
        plVar17 = *pplVar16;
        pplVar16 = (long **)(plVar17 + 2);
        pplVar15 = (long **)*pplVar16;
      } while (*pplVar15 != plVar17);
    }
  }
  else {
    do {
      pplVar15 = pplVar16;
      pplVar16 = (long **)*pplVar15;
    } while (*pplVar15 != (long *)0x0);
  }
  if (*(__tree_node_base ***)(p_Var13 + 0x278) == pp_Var14) {
    *(long ***)(p_Var13 + 0x278) = pplVar15;
  }
  *(long *)(p_Var13 + 0x288) = *(long *)(p_Var13 + 0x288) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            ((__tree_node_base *)pp_Var9,(__tree_node_base *)pp_Var14);
  operator_delete(pp_Var14);
  pp_Var12 = (__tree_node_base **)pp_Var4[1];
  if ((__tree_node_base **)pp_Var4[1] == (__tree_node_base **)0x0) {
    pp_Var12 = pp_Var4 + 2;
    pp_Var14 = (__tree_node_base **)*pp_Var12;
    if ((__tree_node_base **)*pp_Var14 != pp_Var4) {
      do {
        p_Var13 = *pp_Var12;
        pp_Var12 = (__tree_node_base **)(p_Var13 + 0x10);
        pp_Var14 = (__tree_node_base **)*pp_Var12;
      } while (*pp_Var14 != p_Var13);
    }
  }
  else {
    do {
      pp_Var14 = pp_Var12;
      pp_Var12 = (__tree_node_base **)*pp_Var14;
    } while ((__tree_node_base **)*pp_Var14 != (__tree_node_base **)0x0);
  }
  goto LAB_00923268;
LAB_00923028:
  lVar6 = RawTransformGroup::getPhysicsObject();
  pvVar8 = local_c8;
  if ((*(byte *)(lVar6 + 8) & 1) != 0) {
    addInterShapeJoint(this,*(uint *)(pp_Var4 + 4),*(uint *)((long)pp_Var4 + 0x24),
                       (DestructionShape *)pp_Var4[6],(Vector3 *)(pp_Var4 + 7));
    p_Var13 = pp_Var4[6];
    pp_Var9 = *(__tree_node_base ***)(p_Var13 + 0x280);
    pp_Var12 = (__tree_node_base **)(p_Var13 + 0x280);
    pp_Var14 = pp_Var12;
    if (pp_Var9 != (__tree_node_base **)0x0) {
      uVar2 = *(uint *)(pp_Var4 + 4);
      p_Var18 = pp_Var4[5];
      pp_Var5 = pp_Var9;
      pp_Var19 = pp_Var12;
      do {
        while ((pp_Var20 = pp_Var5, pp_Var20[5] < p_Var18 ||
               ((pp_Var20[5] == p_Var18 &&
                ((pp_Var20[6] < p_Var13 ||
                 ((pp_Var20[6] == p_Var13 &&
                  ((*(uint *)(pp_Var20 + 4) < uVar2 ||
                   ((*(uint *)(pp_Var20 + 4) == uVar2 &&
                    (*(uint *)((long)pp_Var20 + 0x24) < *(uint *)((long)pp_Var4 + 0x24))))))))))))))
        {
          pp_Var1 = pp_Var20 + 1;
          pp_Var5 = (__tree_node_base **)*pp_Var1;
          pp_Var20 = pp_Var19;
          if ((__tree_node_base **)*pp_Var1 == (__tree_node_base **)0x0) goto LAB_009230fc;
        }
        pp_Var5 = (__tree_node_base **)*pp_Var20;
        pp_Var19 = pp_Var20;
      } while ((__tree_node_base **)*pp_Var20 != (__tree_node_base **)0x0);
LAB_009230fc:
      if (((((pp_Var20 != pp_Var12) && (pp_Var20[5] <= p_Var18)) &&
           (pp_Var14 = pp_Var20, p_Var18 == pp_Var20[5])) &&
          ((pp_Var14 = pp_Var12, pp_Var20[6] <= p_Var13 &&
           (pp_Var14 = pp_Var20, p_Var13 == pp_Var20[6])))) &&
         ((pp_Var14 = pp_Var12, *(uint *)(pp_Var20 + 4) <= uVar2 &&
          ((pp_Var14 = pp_Var20, uVar2 == *(uint *)(pp_Var20 + 4) &&
           (pp_Var14 = pp_Var12, *(uint *)((long)pp_Var20 + 0x24) <= *(uint *)((long)pp_Var4 + 0x24)
           )))))) {
        pp_Var14 = pp_Var20;
      }
    }
    pplVar16 = (long **)pp_Var14[1];
    if ((long **)pp_Var14[1] == (long **)0x0) {
      pplVar16 = (long **)(pp_Var14 + 2);
      pplVar15 = (long **)*pplVar16;
      if ((__tree_node_base **)*pplVar15 != pp_Var14) {
        do {
          plVar17 = *pplVar16;
          pplVar16 = (long **)(plVar17 + 2);
          pplVar15 = (long **)*pplVar16;
        } while (*pplVar15 != plVar17);
      }
    }
    else {
      do {
        pplVar15 = pplVar16;
        pplVar16 = (long **)*pplVar15;
      } while (*pplVar15 != (long *)0x0);
    }
    if (*(__tree_node_base ***)(p_Var13 + 0x278) == pp_Var14) {
      *(long ***)(p_Var13 + 0x278) = pplVar15;
    }
    *(long *)(p_Var13 + 0x288) = *(long *)(p_Var13 + 0x288) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)pp_Var9,(__tree_node_base *)pp_Var14);
    operator_delete(pp_Var14);
    pp_Var12 = (__tree_node_base **)pp_Var4[1];
    if ((__tree_node_base **)pp_Var4[1] == (__tree_node_base **)0x0) {
      pp_Var12 = pp_Var4 + 2;
      pp_Var14 = (__tree_node_base **)*pp_Var12;
      if ((__tree_node_base **)*pp_Var14 != pp_Var4) {
        do {
          p_Var13 = *pp_Var12;
          pp_Var12 = (__tree_node_base **)(p_Var13 + 0x10);
          pp_Var14 = (__tree_node_base **)*pp_Var12;
        } while (*pp_Var14 != p_Var13);
      }
    }
    else {
      do {
        pp_Var14 = pp_Var12;
        pp_Var12 = (__tree_node_base **)*pp_Var14;
      } while ((__tree_node_base **)*pp_Var14 != (__tree_node_base **)0x0);
    }
LAB_00923268:
    if (*(__tree_node_base ***)(this + 0x278) == pp_Var4) {
      *(__tree_node_base ***)(this + 0x278) = pp_Var14;
    }
    *(long *)(this + 0x288) = *(long *)(this + 0x288) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x280),(__tree_node_base *)pp_Var4);
    operator_delete(pp_Var4);
    pvVar8 = local_c8;
  }
  goto joined_r0x00922f04;
}


