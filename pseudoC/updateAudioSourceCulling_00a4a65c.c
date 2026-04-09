// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAudioSourceCulling
// Entry Point: 00a4a65c
// Size: 656 bytes
// Signature: undefined updateAudioSourceCulling(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSource::updateAudioSourceCulling() */

void AudioSource::updateAudioSourceCulling(void)

{
  BoundingVolume *pBVar1;
  Node NVar2;
  long lVar3;
  Node *this;
  Node *pNVar4;
  uint uVar5;
  Node *in_x0;
  Node *pNVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = *(uint *)(in_x0 + 0x40);
  *(uint *)(in_x0 + 0x40) = uVar5 & 0xffff7fff;
  if ((uVar5 >> 0xe & 1) == 0) goto LAB_00a4a690;
  uVar7 = uVar5 & 0xffff3fff;
  *(uint *)(in_x0 + 0x40) = uVar7;
  if (((uVar5 ^ 0xffffffff) & 0x10002) != 0) {
    if ((uVar5 >> 0xd & 1) != 0) {
      *(uint *)(in_x0 + 0x40) = uVar5 & 0xffff1fff;
      CullingGrid2D::removeEntity
                ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x40),
                 (CullingEntity *)(in_x0 + 0x154));
    }
    goto LAB_00a4a690;
  }
  if ((uVar5 >> 0xc & 1) != 0) {
    *(uint *)(in_x0 + 0x40) = uVar5 & 0xffff2fff;
    RawTransformGroup::updateWorldTransformation();
    local_58 = *(undefined8 *)(in_x0 + 0xe8);
    local_50 = *(undefined4 *)(in_x0 + 0xf0);
    fVar9 = (float)Sample::getMaxDistance();
    BoundingSphere::assign((BoundingSphere *)(in_x0 + 0x260),(Vector3 *)&local_58,fVar9);
    uVar7 = *(uint *)(in_x0 + 0x40);
  }
  if ((((uVar7 >> 3 & 1) == 0) || (*(long *)(in_x0 + 0x290) != 0)) ||
     (pNVar6 = *(Node **)(in_x0 + 0x20), pNVar6 == (Node *)0x0)) {
LAB_00a4a7a8:
    lVar8 = *(long *)(in_x0 + 0x290);
    if (lVar8 != 0) goto LAB_00a4a7b0;
LAB_00a4a884:
    local_50 = *(undefined4 *)(in_x0 + 0x274);
    fVar9 = *(float *)(in_x0 + 0x278);
    fVar11 = *(float *)(in_x0 + 0x124);
    local_58 = *(undefined8 *)(in_x0 + 0x26c);
    fVar10 = *(float *)(in_x0 + 0x128);
    uVar5 = *(uint *)(in_x0 + 0x40);
  }
  else {
    NVar2 = pNVar6[0x10];
    pNVar4 = in_x0;
    while (this = pNVar6, ((byte)NVar2 >> 6 & 1) == 0) {
      pNVar6 = *(Node **)(this + 0x20);
      if (pNVar6 == (Node *)0x0) goto LAB_00a4a7a8;
      NVar2 = pNVar6[0x10];
      pNVar4 = (Node *)this;
    }
    uVar5 = Node::getChildIndex(this,pNVar4);
    if ((uVar5 == 0) ||
       (fVar9 = (float)LODTransformGroup::getDistance((LODTransformGroup *)this,uVar5), fVar9 != 0.0
       )) {
      *(Node **)(in_x0 + 0x290) = this;
      *(uint *)(in_x0 + 0x28c) = uVar5;
      goto LAB_00a4a7a8;
    }
    *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xfffffff7;
    lVar8 = *(long *)(in_x0 + 0x290);
    if (lVar8 == 0) goto LAB_00a4a884;
LAB_00a4a7b0:
    RawTransformGroup::updateWorldTransformation();
    local_58 = *(undefined8 *)(lVar8 + 0xe8);
    local_50 = *(undefined4 *)(lVar8 + 0xf0);
    fVar11 = *(float *)(in_x0 + 0x124);
    fVar9 = (float)LODTransformGroup::getDistance
                             (*(LODTransformGroup **)(in_x0 + 0x290),*(int *)(in_x0 + 0x28c) + 1);
    uVar5 = *(uint *)(in_x0 + 0x28c);
    if (((fVar9 != 0.0) &&
        (uVar5 + 1 <
         (uint)((ulong)(*(long *)(*(long *)(in_x0 + 0x290) + 0x30) -
                       *(long *)(*(long *)(in_x0 + 0x290) + 0x28)) >> 3))) && (fVar9 <= fVar11)) {
      fVar11 = fVar9;
    }
    fVar9 = 0.0;
    if (uVar5 == 0) {
      fVar10 = -3.402823e+38;
      uVar5 = *(uint *)(in_x0 + 0x40);
    }
    else {
      fVar10 = (float)LODTransformGroup::getDistance(*(LODTransformGroup **)(in_x0 + 0x290),uVar5);
      uVar5 = *(uint *)(in_x0 + 0x40);
    }
  }
  if ((uVar5 >> 0xd & 1) == 0) {
    pBVar1 = (BoundingVolume *)(in_x0 + 0x260);
    if ((uVar5 & 4) != 0) {
      pBVar1 = (BoundingVolume *)0x0;
    }
    *(uint *)(in_x0 + 0x40) = uVar5 | 0x2000;
    CullingGrid2D::addEntity
              ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x40),
               (CullingEntity *)(in_x0 + 0x154),pBVar1,(Vector3 *)&local_58,fVar9,fVar11,fVar10,
               false);
  }
  else {
    pBVar1 = (BoundingVolume *)(in_x0 + 0x260);
    if ((uVar5 & 4) != 0) {
      pBVar1 = (BoundingVolume *)0x0;
    }
    CullingGrid2D::updateEntity
              ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x40),
               (CullingEntity *)(in_x0 + 0x154),pBVar1,(Vector3 *)&local_58,fVar9,fVar11,fVar10,
               false);
  }
LAB_00a4a690:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


