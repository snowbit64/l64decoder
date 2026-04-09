// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLightSourceCulling
// Entry Point: 00a553d0
// Size: 584 bytes
// Signature: undefined updateLightSourceCulling(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::updateLightSourceCulling() */

void LightSource::updateLightSourceCulling(void)

{
  BoundingVolume *pBVar1;
  Node NVar2;
  long lVar3;
  Node *this;
  Node *pNVar4;
  uint uVar5;
  Node *in_x0;
  Node *pNVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = *(uint *)(in_x0 + 0x40);
  *(uint *)(in_x0 + 0x40) = uVar5 & 0xffff7fff;
  if ((uVar5 >> 0xe & 1) != 0) {
    *(uint *)(in_x0 + 0x40) = uVar5 & 0xffff3fff;
    updateLightSourceWorldBoundingVolume();
    uVar5 = *(uint *)(in_x0 + 0x40);
    if (((uVar5 >> 1 & 1) == 0) || (((byte)in_x0[0x20c] & 1) == 0)) {
      if ((uVar5 >> 0xd & 1) != 0) {
        *(uint *)(in_x0 + 0x40) = uVar5 & 0xffffdfff;
        CullingGrid2D::removeEntity
                  ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),
                   (CullingEntity *)(in_x0 + 0x154));
      }
    }
    else {
      if ((((uVar5 >> 3 & 1) != 0) && (*(long *)(in_x0 + 0x160) == 0)) &&
         (pNVar6 = *(Node **)(in_x0 + 0x20), pNVar6 != (Node *)0x0)) {
        NVar2 = pNVar6[0x10];
        pNVar4 = in_x0;
        while (this = pNVar6, ((byte)NVar2 >> 6 & 1) == 0) {
          pNVar6 = *(Node **)(this + 0x20);
          if (pNVar6 == (Node *)0x0) goto LAB_00a554c4;
          NVar2 = pNVar6[0x10];
          pNVar4 = (Node *)this;
        }
        uVar5 = Node::getChildIndex(this,pNVar4);
        if ((uVar5 == 0) ||
           (fVar8 = (float)LODTransformGroup::getDistance((LODTransformGroup *)this,uVar5),
           fVar8 != 0.0)) {
          *(Node **)(in_x0 + 0x160) = this;
          *(uint *)(in_x0 + 0x168) = uVar5;
        }
        else {
          *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xfffffff7;
        }
      }
LAB_00a554c4:
      lVar7 = *(long *)(in_x0 + 0x160);
      if (lVar7 == 0) {
        local_50 = *(undefined4 *)(in_x0 + 0x224);
        fVar8 = *(float *)(in_x0 + 0x228);
        fVar10 = *(float *)(in_x0 + 0x124);
        local_58 = *(undefined8 *)(in_x0 + 0x21c);
        fVar9 = *(float *)(in_x0 + 0x128);
        uVar5 = *(uint *)(in_x0 + 0x40);
      }
      else {
        RawTransformGroup::updateWorldTransformation();
        local_58 = *(undefined8 *)(lVar7 + 0xe8);
        local_50 = *(undefined4 *)(lVar7 + 0xf0);
        fVar10 = *(float *)(in_x0 + 0x124);
        fVar8 = (float)LODTransformGroup::getDistance
                                 (*(LODTransformGroup **)(in_x0 + 0x160),*(int *)(in_x0 + 0x168) + 1
                                 );
        uVar5 = *(uint *)(in_x0 + 0x168);
        if (((fVar8 != 0.0) &&
            (uVar5 + 1 <
             (uint)((ulong)(*(long *)(*(long *)(in_x0 + 0x160) + 0x30) -
                           *(long *)(*(long *)(in_x0 + 0x160) + 0x28)) >> 3))) && (fVar8 <= fVar10))
        {
          fVar10 = fVar8;
        }
        fVar8 = 0.0;
        if (uVar5 == 0) {
          fVar9 = -3.402823e+38;
          uVar5 = *(uint *)(in_x0 + 0x40);
        }
        else {
          fVar9 = (float)LODTransformGroup::getDistance
                                   (*(LODTransformGroup **)(in_x0 + 0x160),uVar5);
          uVar5 = *(uint *)(in_x0 + 0x40);
        }
      }
      if ((uVar5 >> 0xd & 1) == 0) {
        pBVar1 = (BoundingVolume *)(in_x0 + 0x210);
        if ((uVar5 & 4) != 0) {
          pBVar1 = (BoundingVolume *)0x0;
        }
        *(uint *)(in_x0 + 0x40) = uVar5 | 0x2000;
        CullingGrid2D::addEntity
                  ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),
                   (CullingEntity *)(in_x0 + 0x154),pBVar1,(Vector3 *)&local_58,fVar8,fVar10,fVar9,
                   false);
      }
      else {
        pBVar1 = (BoundingVolume *)(in_x0 + 0x210);
        if ((uVar5 & 4) != 0) {
          pBVar1 = (BoundingVolume *)0x0;
        }
        CullingGrid2D::updateEntity
                  ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),
                   (CullingEntity *)(in_x0 + 0x154),pBVar1,(Vector3 *)&local_58,fVar8,fVar10,fVar9,
                   false);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


