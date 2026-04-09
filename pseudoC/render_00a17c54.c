// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 00a17c54
// Size: 1112 bytes
// Signature: undefined render(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceQueue::render() */

void AudioSourceQueue::render(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long *in_x0;
  EntityRegistryManager *pEVar5;
  long lVar6;
  ulong uVar7;
  DeferredDebugRenderer *pDVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  GlobalTimeManager::getInstance();
  fVar16 = (float)GlobalTimeManager::getCurrentDt();
  fVar16 = fVar16 + *(float *)(in_x0 + 3);
  fVar18 = 1.0 / fVar16;
  fVar17 = 0.0;
  if (fVar16 <= 100.0) {
    fVar17 = fVar16;
  }
  *(float *)(in_x0 + 3) = fVar17;
  if (fVar16 <= 100.0) {
    fVar18 = 0.0;
  }
  uVar4 = CullingGrid2D::getEntities
                    ((Vector3 *)(CullingManager::s_cullingManagerInstance + 0x40),
                     *(float *)(in_x0[4] + 0x70),(CullingResult *)(in_x0[4] + 0x60),(uint)in_x0[6]);
  uVar14 = *(uint *)(in_x0 + 5);
  if (uVar4 <= *(uint *)(in_x0 + 5)) {
    uVar14 = uVar4;
  }
  if (uVar14 != 0) {
    uVar4 = 0;
    do {
      lVar11 = in_x0[6];
      lVar12 = *(long *)(lVar11 + (ulong)uVar4 * 0x10);
      lVar6 = 0;
      if (lVar12 != 0) {
        lVar6 = lVar12 + -0x154;
      }
      if ((*(long *)(lVar6 + 0xf8) == 0) || (*(char *)(*(long *)(lVar6 + 0xf8) + 0x20) != '\0')) {
        uVar4 = uVar4 + 1;
        *(uint *)(lVar6 + 0x40) = *(uint *)(lVar6 + 0x40) & 0xfffdffff;
      }
      else {
        uVar14 = uVar14 - 1;
        puVar13 = (undefined8 *)(lVar11 + (ulong)uVar14 * 0x10);
        uVar19 = *puVar13;
        puVar2 = (undefined8 *)(lVar11 + (ulong)uVar4 * 0x10);
        puVar2[1] = puVar13[1];
        *puVar2 = uVar19;
      }
    } while (uVar4 < uVar14);
  }
  pEVar5 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar6 = *in_x0;
  uVar10 = in_x0[1] - lVar6;
  if ((int)(uVar10 >> 4) == 0) {
    iVar15 = 0;
    uVar4 = 0;
  }
  else {
    fVar17 = -fVar18;
    lVar11 = 0;
    uVar4 = 0;
    iVar15 = 0;
    while( true ) {
      lVar6 = EntityRegistryManager::getEntityById(pEVar5,*(uint *)(lVar6 + lVar11));
      if (lVar6 != 0) {
        if ((*(byte *)(lVar6 + 0x42) >> 1 & 1) == 0) {
          if (((*(byte *)(lVar6 + 0x1d0) & 1) == 0) &&
             (uVar7 = AudioSource::isPlaying(), (uVar7 & 1) == 0)) {
            if ((*(uint *)(lVar6 + 0x40) >> 0x10 & 1) != 0) {
              *(uint *)(lVar6 + 0x40) = *(uint *)(lVar6 + 0x40) & 0xfffeffff;
              AudioSource::setAudioSourceCullingDirty();
            }
            iVar15 = iVar15 + 1;
          }
          else {
            puVar13 = (undefined8 *)(*in_x0 + lVar11);
            uVar19 = *puVar13;
            puVar2 = (undefined8 *)(*in_x0 + (ulong)uVar4 * 0x10);
            puVar2[1] = puVar13[1];
            *puVar2 = uVar19;
            local_88 = *(undefined8 *)(lVar6 + 0xe8);
            local_80 = *(float *)(lVar6 + 0xf0);
            lVar12 = *in_x0;
            Sample::setPosition((Sample *)(lVar6 + 0x158),(float *)&local_88);
            if (0.0 < fVar18) {
              lVar12 = lVar12 + (ulong)uVar4 * 0x10;
              puVar13 = (undefined8 *)(lVar12 + 4);
              *puVar13 = CONCAT44(((float)((ulong)*puVar13 >> 0x20) -
                                  (float)((ulong)local_88 >> 0x20)) * fVar17,
                                  ((float)*puVar13 - (float)local_88) * fVar17);
              *(float *)(lVar12 + 0xc) = (*(float *)(lVar12 + 0xc) - local_80) * fVar17;
              Sample::setVelocity((Sample *)(lVar6 + 0x158),(float *)puVar13);
              *(float *)(lVar12 + 0xc) = local_80;
              *puVar13 = local_88;
            }
            AudioSource::update();
            uVar4 = uVar4 + 1;
          }
          *(uint *)(lVar6 + 0x40) = *(uint *)(lVar6 + 0x40) | 0x20000;
        }
        else {
          AudioSource::stop();
        }
      }
      if ((uVar10 >> 4 & 0xffffffff) * 0x10 + -0x10 == lVar11) break;
      lVar6 = *in_x0;
      lVar11 = lVar11 + 0x10;
    }
    lVar6 = *in_x0;
    uVar10 = in_x0[1] - lVar6;
  }
  uVar7 = (ulong)(uVar14 - iVar15);
  uVar10 = (long)uVar10 >> 4;
  if (uVar10 < uVar7) {
    std::__ndk1::vector<AudioSourceQueueItem,std::__ndk1::allocator<AudioSourceQueueItem>>::__append
              ((vector<AudioSourceQueueItem,std::__ndk1::allocator<AudioSourceQueueItem>> *)in_x0,
               uVar7 - uVar10);
  }
  else if (uVar7 < uVar10) {
    in_x0[1] = lVar6 + uVar7 * 0x10;
  }
  if (uVar14 != 0) {
    lVar6 = 0;
    do {
      lVar11 = 0;
      if (*(long *)(in_x0[6] + lVar6) != 0) {
        lVar11 = *(long *)(in_x0[6] + lVar6) + -0x154;
      }
      if ((*(byte *)(lVar11 + 0x42) >> 1 & 1) == 0) {
        if (((*(byte *)(lVar11 + 0x1d0) & 1) != 0) ||
           (uVar10 = AudioSource::isPlaying(), (uVar10 & 1) != 0)) {
          puVar1 = (undefined4 *)(*in_x0 + (ulong)uVar4 * 0x10);
          uVar4 = uVar4 + 1;
          *puVar1 = *(undefined4 *)(lVar11 + 0x18);
          uVar19 = *(undefined8 *)(lVar11 + 0xe8);
          puVar1[3] = *(undefined4 *)(lVar11 + 0xf0);
          *(undefined8 *)(puVar1 + 1) = uVar19;
          Sample::setPosition((Sample *)(lVar11 + 0x158),(float *)(puVar1 + 1));
          local_80 = 0.0;
          local_88 = 0;
          Sample::setVelocity((Sample *)(lVar11 + 0x158),(float *)&local_88);
          AudioSource::play();
        }
        *(uint *)(lVar11 + 0x40) = *(uint *)(lVar11 + 0x40) | 0x20000;
      }
      lVar6 = lVar6 + 0x10;
    } while ((ulong)uVar14 * 0x10 - lVar6 != 0);
  }
  uVar10 = (ulong)uVar4;
  uVar7 = in_x0[1] - *in_x0 >> 4;
  if (uVar7 < uVar10) {
    std::__ndk1::vector<AudioSourceQueueItem,std::__ndk1::allocator<AudioSourceQueueItem>>::__append
              ((vector<AudioSourceQueueItem,std::__ndk1::allocator<AudioSourceQueueItem>> *)in_x0,
               uVar10 - uVar7);
  }
  else if (uVar10 < uVar7) {
    in_x0[1] = *in_x0 + uVar10 * 0x10;
  }
  if ((((*(char *)(in_x0[4] + 0x78) != '\0') &&
       (pDVar8 = *(DeferredDebugRenderer **)(in_x0[4] + 0x80),
       pDVar8 != (DeferredDebugRenderer *)0x0)) &&
      (uVar10 = DeferredDebugRenderer::isCategoryEnabled(pDVar8,4), (uVar10 & 1) != 0)) &&
     (lVar6 = *in_x0, lVar11 = in_x0[1], (int)((ulong)(lVar11 - lVar6) >> 4) != 0)) {
    lVar12 = 0;
    do {
      pEVar5 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
      lVar9 = EntityRegistryManager::getEntityById(pEVar5,*(uint *)(*in_x0 + lVar12));
      if (lVar9 != 0) {
        pDVar8 = *(DeferredDebugRenderer **)(in_x0[4] + 0x80);
        RawTransformGroup::updateWorldTransformation();
        fVar17 = (float)AudioSource::getInnerRange();
        fVar16 = (float)AudioSource::getRange();
        DeferredDebugRenderer::addAudioSource
                  (pDVar8,(Matrix4x4 *)(lVar9 + 0xb8),fVar17,fVar16,(float *)(lVar9 + 0x280),true,4)
        ;
      }
      lVar12 = lVar12 + 0x10;
    } while (((ulong)(lVar11 - lVar6) >> 4 & 0xffffffff) * 0x10 - lVar12 != 0);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


