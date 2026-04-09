// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDestructionShapeConnections
// Entry Point: 00929b2c
// Size: 1128 bytes
// Signature: undefined __cdecl updateDestructionShapeConnections(vector * param_1, vector * param_2)


/* DestructionUtil::updateDestructionShapeConnections(std::__ndk1::vector<DestructionShape*,
   std::__ndk1::allocator<DestructionShape*> > const&, std::__ndk1::vector<DestructionShape*,
   std::__ndk1::allocator<DestructionShape*> > const&) */

void DestructionUtil::updateDestructionShapeConnections(vector *param_1,vector *param_2)

{
  long lVar1;
  ulong uVar2;
  BoundingVolume *pBVar3;
  ulong uVar4;
  DestructionGeometryShared *pDVar5;
  float *pfVar6;
  long ******pppppplVar7;
  long lVar8;
  uint *puVar9;
  long *****ppppplVar10;
  ulong uVar11;
  long *****this;
  long ******pppppplVar12;
  long ******pppppplVar13;
  long *****ppppplVar14;
  long ******pppppplVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  long ******local_100;
  long ******local_f8;
  long local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  BoundingSphere aBStack_c0 [32];
  BoundingSphere aBStack_a0 [32];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  BoundingSphere::BoundingSphere(aBStack_a0);
                    /* try { // try from 00929b6c to 00929b73 has its CatchHandler @ 00929f94 */
  BoundingSphere::BoundingSphere(aBStack_c0);
  lVar8 = *(long *)param_2;
  local_e8 = (void *)0x0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_f8 = (long ******)0x0;
  local_f0 = 0;
  local_100 = (long ******)&local_f8;
  if (*(long *)(param_2 + 8) != lVar8) {
    uVar16 = 0;
    do {
      this = *(long ******)(lVar8 + uVar16 * 8);
                    /* try { // try from 00929bd8 to 00929c6f has its CatchHandler @ 00929f9c */
      uVar2 = DestructionShape::getIsBroken();
      if ((uVar2 & 1) == 0) {
        pBVar3 = (BoundingVolume *)Geometry::getBoundingVolume();
        BoundingSphere::set(aBStack_a0,pBVar3);
        RawTransformGroup::updateWorldTransformation();
        BoundingSphere::transform(aBStack_a0,(Matrix4x4 *)(this + 0x17));
        pppppplVar12 = (long ******)&local_f8;
        pppppplVar15 = (long ******)&local_f8;
        pppppplVar7 = local_f8;
        while (pppppplVar7 != (long ******)0x0) {
          while (pppppplVar13 = pppppplVar7, pppppplVar15 = pppppplVar13, this < pppppplVar13[4]) {
            pppppplVar12 = pppppplVar13;
            pppppplVar7 = (long ******)*pppppplVar13;
            if ((long ******)*pppppplVar13 == (long ******)0x0) {
              if (*pppppplVar13 != (long *****)0x0) goto LAB_00929cb8;
              goto LAB_00929c64;
            }
          }
          if (this <= pppppplVar13[4]) break;
          pppppplVar12 = pppppplVar13 + 1;
          pppppplVar7 = (long ******)*pppppplVar12;
        }
        pppppplVar13 = pppppplVar12;
        if (*pppppplVar13 == (long *****)0x0) {
LAB_00929c64:
          ppppplVar14 = (long *****)operator_new(0x28);
          ppppplVar14[4] = (long ****)this;
          *ppppplVar14 = (long ****)0x0;
          ppppplVar14[1] = (long ****)0x0;
          ppppplVar14[2] = (long ****)pppppplVar15;
          *pppppplVar13 = ppppplVar14;
          if ((long ******)*local_100 != (long ******)0x0) {
            ppppplVar14 = *pppppplVar13;
            local_100 = (long ******)*local_100;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_f8,(__tree_node_base *)ppppplVar14);
          local_f0 = local_f0 + 1;
        }
LAB_00929cb8:
        lVar8 = *(long *)param_1;
        if (*(long *)(param_1 + 8) != lVar8) {
          uVar2 = 0;
          do {
            ppppplVar14 = *(long ******)(lVar8 + uVar2 * 8);
                    /* try { // try from 00929cec to 00929d8b has its CatchHandler @ 00929fa0 */
            if ((this != ppppplVar14) && (uVar4 = DestructionShape::getIsBroken(), (uVar4 & 1) == 0)
               ) {
              pppppplVar12 = (long ******)&local_f8;
              pppppplVar15 = local_f8;
              if (local_f8 != (long ******)0x0) {
                do {
                  pppppplVar13 = pppppplVar15;
                  pppppplVar7 = pppppplVar12;
                  ppppplVar10 = pppppplVar13[4];
                  pppppplVar12 = pppppplVar7;
                  if (ppppplVar10 >= ppppplVar14) {
                    pppppplVar12 = pppppplVar13;
                  }
                  pppppplVar15 = (long ******)pppppplVar13[ppppplVar10 < ppppplVar14];
                } while ((long ******)pppppplVar13[ppppplVar10 < ppppplVar14] != (long ******)0x0);
                if ((long *******)pppppplVar12 != &local_f8) {
                  if (ppppplVar14 <= ppppplVar10) {
                    pppppplVar7 = pppppplVar13;
                  }
                  if (pppppplVar7[4] <= ppppplVar14) goto LAB_00929ccc;
                }
              }
              pBVar3 = (BoundingVolume *)Geometry::getBoundingVolume();
              BoundingSphere::set(aBStack_c0,pBVar3);
              RawTransformGroup::updateWorldTransformation();
              BoundingSphere::transform(aBStack_c0,(Matrix4x4 *)(ppppplVar14 + 0x17));
              uVar4 = BoundingSphere::intersects(aBStack_a0,(BoundingVolume *)aBStack_c0);
              if ((((uVar4 & 1) != 0) &&
                  (uVar4 = getShapesChunksPairs
                                     ((DestructionShape *)this,(DestructionShape *)ppppplVar14,
                                      (vector *)&local_e8,0.01), (uVar4 & 1) != 0)) &&
                 (local_e0 != local_e8)) {
                uVar4 = 0;
                do {
                    /* try { // try from 00929da4 to 00929dbb has its CatchHandler @ 00929fac */
                  pDVar5 = (DestructionGeometryShared *)DestructionGeometry::getShared();
                  DestructionGeometryShared::getChunk
                            (pDVar5,*(uint *)((long)local_e8 + uVar4 * 0x14));
                  pfVar6 = (float *)DestructionChunk::getCenterOfMass();
                  fVar17 = pfVar6[1];
                  fVar21 = *pfVar6;
                  fVar18 = pfVar6[2];
                    /* try { // try from 00929dd4 to 00929def has its CatchHandler @ 00929fa8 */
                  pDVar5 = (DestructionGeometryShared *)DestructionGeometry::getShared();
                  DestructionGeometryShared::getChunk
                            (pDVar5,*(uint *)((long)local_e8 + uVar4 * 0x14 + 4));
                  pfVar6 = (float *)DestructionChunk::getCenterOfMass();
                  fVar19 = pfVar6[1];
                  fVar22 = *pfVar6;
                  fVar20 = pfVar6[2];
                    /* try { // try from 00929e04 to 00929ef3 has its CatchHandler @ 00929fa4 */
                  RawTransformGroup::updateWorldTransformation();
                  uVar23 = NEON_fmadd(fVar21,*(undefined4 *)(this + 0x18),
                                      fVar17 * *(float *)(this + 0x1a));
                  local_c8 = (float)NEON_fmadd(fVar18,*(undefined4 *)(this + 0x1c),uVar23);
                  local_d0._0_4_ =
                       SUB84(this[0x1d],0) +
                       SUB84(this[0x19],0) * fVar17 + SUB84(this[0x17],0) * fVar21 +
                       SUB84(this[0x1b],0) * fVar18;
                  local_d0._4_4_ =
                       (float)((ulong)this[0x1d] >> 0x20) +
                       (float)((ulong)this[0x19] >> 0x20) * fVar17 +
                       (float)((ulong)this[0x17] >> 0x20) * fVar21 +
                       (float)((ulong)this[0x1b] >> 0x20) * fVar18;
                  local_c8 = *(float *)(this + 0x1e) + local_c8;
                  RawTransformGroup::updateWorldTransformation();
                  uVar23 = NEON_fmadd(fVar22,*(undefined4 *)(ppppplVar14 + 0x18),
                                      fVar19 * *(float *)(ppppplVar14 + 0x1a));
                  puVar9 = (uint *)((long)local_e8 + uVar4 * 0x14);
                  fVar17 = (float)NEON_fmadd(fVar20,*(undefined4 *)(ppppplVar14 + 0x1c),uVar23);
                  local_d0 = CONCAT44(((float)((ulong)ppppplVar14[0x1d] >> 0x20) +
                                       (float)((ulong)ppppplVar14[0x19] >> 0x20) * fVar19 +
                                       (float)((ulong)ppppplVar14[0x17] >> 0x20) * fVar22 +
                                       (float)((ulong)ppppplVar14[0x1b] >> 0x20) * fVar20 +
                                      local_d0._4_4_) * 0.5,
                                      (SUB84(ppppplVar14[0x1d],0) +
                                       SUB84(ppppplVar14[0x19],0) * fVar19 +
                                       SUB84(ppppplVar14[0x17],0) * fVar22 +
                                       SUB84(ppppplVar14[0x1b],0) * fVar20 + (float)local_d0) * 0.5)
                  ;
                  local_c8 = (*(float *)(ppppplVar14 + 0x1e) + fVar17 + local_c8) * 0.5;
                  DestructionShape::addInterShapeJoint
                            ((DestructionShape *)this,*puVar9,puVar9[1],
                             (DestructionShape *)ppppplVar14,(Vector3 *)&local_d0);
                  uVar4 = (ulong)((int)uVar4 + 1);
                  uVar11 = ((long)local_e0 - (long)local_e8 >> 2) * -0x3333333333333333;
                } while (uVar4 <= uVar11 && uVar11 - uVar4 != 0);
                if ((long)local_e0 - (long)local_e8 != 0) {
                  local_e0 = local_e8;
                }
              }
            }
LAB_00929ccc:
            lVar8 = *(long *)param_1;
            uVar2 = (ulong)((int)uVar2 + 1);
          } while (uVar2 < (ulong)(*(long *)(param_1 + 8) - lVar8 >> 3));
        }
      }
      lVar8 = *(long *)param_2;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < (ulong)(*(long *)(param_2 + 8) - lVar8 >> 3));
  }
  std::__ndk1::
  __tree<DestructionShape*,std::__ndk1::less<DestructionShape*>,std::__ndk1::allocator<DestructionShape*>>
  ::destroy((__tree<DestructionShape*,std::__ndk1::less<DestructionShape*>,std::__ndk1::allocator<DestructionShape*>>
             *)&local_100,(__tree_node *)local_f8);
  if (local_e8 != (void *)0x0) {
    local_e0 = local_e8;
    operator_delete(local_e8);
  }
  BoundingSphere::~BoundingSphere(aBStack_c0);
  BoundingSphere::~BoundingSphere(aBStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


