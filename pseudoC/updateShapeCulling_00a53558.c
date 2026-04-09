// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateShapeCulling
// Entry Point: 00a53558
// Size: 836 bytes
// Signature: undefined updateShapeCulling(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsShape::updateShapeCulling() */

void GsShape::updateShapeCulling(void)

{
  BoundingVolume *pBVar1;
  BoundingVolume *pBVar2;
  uint uVar3;
  Node NVar4;
  ushort uVar5;
  long lVar6;
  Node *this;
  Node *pNVar7;
  uint uVar8;
  Node *in_x0;
  Node *pNVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(uint *)(in_x0 + 0x40);
  *(uint *)(in_x0 + 0x40) = uVar8 & 0xffff7fff;
  if ((uVar8 >> 0xe & 1) == 0) goto LAB_00a53868;
  uVar10 = uVar8 & 0xffff3fff;
  *(uint *)(in_x0 + 0x40) = uVar10;
  if (((uVar8 >> 1 & 1) == 0) || (uVar3 = *(uint *)(in_x0 + 400), (uVar3 & 0x1001400) == 0x400)) {
    if ((uVar8 >> 0xd & 1) != 0) {
      *(uint *)(in_x0 + 0x40) = uVar8 & 0xffff1fff;
      CullingGrid2D::removeEntity
                ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
                 (CullingEntity *)(in_x0 + 0x168));
      uVar10 = *(uint *)(in_x0 + 0x40);
    }
    if ((uVar10 >> 0x13 & 1) == 0) goto LAB_00a53868;
    *(uint *)(in_x0 + 0x40) = uVar10 & 0xfff7ffff;
  }
  else {
    updateShapeWorldBoundingVolume();
    uVar8 = *(uint *)(in_x0 + 0x40);
    if (0.0 < *(float *)(in_x0 + 0x1b0)) {
      if ((((uVar8 >> 3 & 1) != 0) && (*(long *)(in_x0 + 0x188) == 0)) &&
         (pNVar9 = *(Node **)(in_x0 + 0x20), pNVar9 != (Node *)0x0)) {
        NVar4 = pNVar9[0x10];
        pNVar7 = in_x0;
        while (this = pNVar9, ((byte)NVar4 >> 6 & 1) == 0) {
          pNVar9 = *(Node **)(this + 0x20);
          if (pNVar9 == (Node *)0x0) goto LAB_00a536d8;
          NVar4 = pNVar9[0x10];
          pNVar7 = (Node *)this;
        }
        uVar8 = Node::getChildIndex(this,pNVar7);
        if ((uVar8 == 0) ||
           (fVar12 = (float)LODTransformGroup::getDistance((LODTransformGroup *)this,uVar8),
           fVar12 != 0.0)) {
          *(Node **)(in_x0 + 0x188) = this;
          *(short *)(in_x0 + 0x194) = (short)uVar8;
        }
        else {
          *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xfffffff7;
        }
      }
LAB_00a536d8:
      lVar11 = *(long *)(in_x0 + 0x188);
      if (lVar11 == 0) {
        local_70 = *(undefined4 *)(in_x0 + 0x1ac);
        fVar14 = *(float *)(in_x0 + 0x124);
        local_78 = *(undefined8 *)(in_x0 + 0x1a4);
        fVar13 = *(float *)(in_x0 + 0x128);
        fVar12 = *(float *)(in_x0 + 0x1b0);
        if (((byte)in_x0[0x191] & 8) != 0) {
          fVar12 = *(float *)(in_x0 + 0x1b0) + 3.0;
        }
      }
      else {
        RawTransformGroup::updateWorldTransformation();
        uVar5 = *(ushort *)(in_x0 + 0x194);
        local_78 = *(undefined8 *)(lVar11 + 0xe8);
        uVar8 = uVar5 + 1;
        local_70 = *(undefined4 *)(lVar11 + 0xf0);
        fVar14 = *(float *)(in_x0 + 0x124);
        fVar12 = 0.0;
        if ((*(uint *)(*(LODTransformGroup **)(in_x0 + 0x188) + 0x40) & 0x1000) != 0) {
          fVar12 = 1.5;
        }
        fVar13 = (float)LODTransformGroup::getDistance(*(LODTransformGroup **)(in_x0 + 0x188),uVar8)
        ;
        if (((fVar13 != 0.0) &&
            (uVar8 < (uint)((ulong)(*(long *)(*(long *)(in_x0 + 0x188) + 0x30) -
                                   *(long *)(*(long *)(in_x0 + 0x188) + 0x28)) >> 3))) &&
           (fVar13 <= fVar14)) {
          fVar14 = fVar13;
        }
        if (uVar5 == 0) {
          fVar13 = -3.402823e+38;
        }
        else {
          fVar13 = (float)LODTransformGroup::getDistance
                                    (*(LODTransformGroup **)(in_x0 + 0x188),(uint)uVar5);
        }
      }
      pBVar1 = (BoundingVolume *)(in_x0 + 0x198);
      if ((uVar3 & 0x1400) != 0x400) {
        uVar8 = *(uint *)(in_x0 + 0x40);
        if ((uVar8 >> 0xd & 1) == 0) {
          *(uint *)(in_x0 + 0x40) = uVar8 | 0x2000;
          pBVar2 = pBVar1;
          if ((uVar8 & 4) != 0) {
            pBVar2 = (BoundingVolume *)0x0;
          }
          CullingGrid2D::addEntity
                    ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
                     (CullingEntity *)(in_x0 + 0x168),pBVar2,(Vector3 *)&local_78,fVar12,fVar14,
                     fVar13,lVar11 != 0);
        }
        else {
          pBVar2 = pBVar1;
          if ((uVar8 & 4) != 0) {
            pBVar2 = (BoundingVolume *)0x0;
          }
          CullingGrid2D::updateEntity
                    ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
                     (CullingEntity *)(in_x0 + 0x168),pBVar2,(Vector3 *)&local_78,fVar12,fVar14,
                     fVar13,lVar11 != 0);
        }
      }
      if ((uVar3 >> 0x18 & 1) != 0) {
        uVar8 = *(uint *)(in_x0 + 0x40);
        if ((uVar8 >> 0x13 & 1) == 0) {
          if ((uVar8 & 4) != 0) {
            pBVar1 = (BoundingVolume *)0x0;
          }
          *(uint *)(in_x0 + 0x40) = uVar8 | 0x80000;
          DecalCullingStructure::addEntity
                    ((DecalCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xd8),
                     (CullingEntity *)(in_x0 + 0x16c),pBVar1);
        }
        else {
          if ((uVar8 & 4) != 0) {
            pBVar1 = (BoundingVolume *)0x0;
          }
          DecalCullingStructure::updateEntity
                    ((DecalCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xd8),
                     (CullingEntity *)(in_x0 + 0x16c),pBVar1);
        }
      }
      goto LAB_00a53868;
    }
    if ((uVar8 >> 0xd & 1) != 0) {
      *(uint *)(in_x0 + 0x40) = uVar8 & 0xffffdfff;
      CullingGrid2D::removeEntity
                ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
                 (CullingEntity *)(in_x0 + 0x168));
      uVar8 = *(uint *)(in_x0 + 0x40);
    }
    if ((uVar8 >> 0x13 & 1) == 0) goto LAB_00a53868;
    *(uint *)(in_x0 + 0x40) = uVar8 & 0xfff7ffff;
  }
  DecalCullingStructure::removeEntity
            ((DecalCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xd8),
             (CullingEntity *)(in_x0 + 0x16c));
LAB_00a53868:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


