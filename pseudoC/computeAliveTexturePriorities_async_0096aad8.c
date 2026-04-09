// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeAliveTexturePriorities_async
// Entry Point: 0096aad8
// Size: 844 bytes
// Signature: undefined computeAliveTexturePriorities_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::computeAliveTexturePriorities_async() */

void TextureStreamingManager::computeAliveTexturePriorities_async(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  long in_x0;
  long lVar7;
  vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
  *pvVar8;
  vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
  *pvVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  undefined2 uVar16;
  float fVar17;
  undefined8 uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_a0 [2];
  double local_98;
  ulong local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  DAT_0210ee64 = 0;
  DAT_0210ee34 = 0;
  lVar7 = Watch::getCurrentTicks();
  *(undefined8 *)(in_x0 + 0x1b0) = *(undefined8 *)(in_x0 + 0x1a8);
  *(undefined8 *)(in_x0 + 0x198) = *(undefined8 *)(in_x0 + 400);
  *(undefined8 *)(in_x0 + 0x180) = *(undefined8 *)(in_x0 + 0x178);
  std::__ndk1::
  vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
  ::reserve((vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
             *)(in_x0 + 0x1a8),*(ulong *)(in_x0 + 0x168));
  std::__ndk1::
  vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
  ::reserve((vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
             *)(in_x0 + 400),*(ulong *)(in_x0 + 0x168));
  std::__ndk1::
  vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
  ::reserve((vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
             *)(in_x0 + 0x178),*(ulong *)(in_x0 + 0x168));
  plVar10 = *(long **)(in_x0 + 0x238);
  if (plVar10 != (long *)0x0) {
    uVar11 = *(ulong *)(in_x0 + 0x230);
    uVar18 = NEON_cnt(uVar11,1);
    uVar16 = NEON_uaddlv(uVar18,1);
    do {
      uVar14 = plVar10[2];
      if ((uint)CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar16) < 2) {
        uVar12 = uVar11 - 1 & uVar14;
      }
      else {
        uVar12 = uVar14;
        if (uVar11 <= uVar14) {
          uVar12 = 0;
          if (uVar11 != 0) {
            uVar12 = uVar14 / uVar11;
          }
          uVar12 = uVar14 - uVar12 * uVar11;
        }
      }
      plVar15 = *(long **)(*(long *)(in_x0 + 0x228) + uVar12 * 8);
      do {
        do {
          plVar15 = (long *)*plVar15;
        } while (plVar15[1] != uVar14);
      } while (plVar15[2] != uVar14);
      uVar3 = *(int *)((long)plVar15 + 0x3c) - 1;
      iVar1 = 0;
      if (uVar3 <= *(uint *)(plVar15 + 0x16)) {
        iVar1 = *(uint *)(plVar15 + 0x16) - uVar3;
      }
      DAT_0210ee64 = DAT_0210ee64 + iVar1;
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  for (plVar10 = *(long **)(in_x0 + 0x160); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    fVar17 = *(float *)((long)plVar10 + 0x24);
    uVar11 = plVar10[2];
    if (fVar17 == 3.402823e+38) {
      DAT_0210ee34 = DAT_0210ee34 + 1;
    }
    uVar14 = *(ulong *)(in_x0 + 0x230);
    uVar18 = NEON_cnt(uVar14,1);
    uVar16 = NEON_uaddlv(uVar18,1);
    if ((uint)CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar16) < 2) {
      uVar12 = uVar14 - 1 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uVar14 <= uVar11) {
        uVar12 = 0;
        if (uVar14 != 0) {
          uVar12 = uVar11 / uVar14;
        }
        uVar12 = uVar11 - uVar12 * uVar14;
      }
    }
    plVar15 = *(long **)(*(long *)(in_x0 + 0x228) + uVar12 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != uVar11);
    } while (plVar15[2] != uVar11);
    fVar22 = 0.0;
    fVar21 = *(float *)(plVar15 + 6);
    fVar20 = *(float *)(in_x0 + 0x10);
    uVar3 = *(uint *)(plVar15 + 10) >>
            (ulong)(*(int *)(plVar15 + 0xc) - *(int *)(plVar15 + 0x16) & 0x1f);
    uVar18 = NEON_cnt((ulong)uVar3,1);
    uVar16 = NEON_uaddlv(uVar18,1);
    if ((int)CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar16) == 1) {
      bVar6 = (uVar3 & 0xffff0000) != 0;
      uVar2 = uVar3 >> 0x10;
      if (!bVar6) {
        uVar2 = uVar3;
      }
      uVar13 = (uint)bVar6;
      uVar3 = uVar13 << 4 | 8;
      uVar5 = uVar2 >> 8;
      if (uVar2 < 0x100) {
        uVar3 = uVar13 << 4;
        uVar5 = uVar2;
      }
      uVar2 = uVar3 | 4;
      uVar13 = uVar5 >> 4;
      if (uVar5 < 0x10) {
        uVar2 = uVar3;
        uVar13 = uVar5;
      }
      uVar3 = uVar2 | 2;
      uVar5 = uVar13 >> 2;
      if (uVar13 < 4) {
        uVar3 = uVar2;
        uVar5 = uVar13;
      }
      fVar22 = (float)(ulong)((uVar5 + uVar3) - 1);
    }
    fVar17 = (float)NEON_fmin(fVar17 * fVar17,0x4d800000);
    fVar17 = log2f(fVar17);
    iVar1 = (int)(fVar20 + ((fVar17 - fVar21) * 0.5 - fVar22)) + (int)*(float *)(in_x0 + 0x14);
    dVar19 = (double)Watch::convertTicksToMs(lVar7 - plVar10[3]);
    fVar17 = (float)dVar19;
    pvVar8 = (vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
              *)(in_x0 + 0x1a8);
    if ((iVar1 == 0) ||
       (pvVar9 = (vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
                  *)(in_x0 + 400),
       pvVar8 = (vector<TextureStreamingManager::AliveTextures::SortInfos,std::__ndk1::allocator<TextureStreamingManager::AliveTextures::SortInfos>>
                 *)(in_x0 + 0x178), -1 < iVar1)) {
      fVar17 = (*(float *)(plVar10 + 5) * fVar17) / (float)(ulong)*(uint *)(plVar10 + 4);
      pvVar9 = pvVar8;
    }
    local_98 = (double)fVar17;
    local_a0[0] = iVar1;
    local_90 = uVar11;
    FUN_0096b340(pvVar9,local_a0);
  }
  FUN_009737f4(*(undefined8 *)(in_x0 + 400),*(undefined8 *)(in_x0 + 0x198));
  FUN_00974644(*(undefined8 *)(in_x0 + 0x178),*(undefined8 *)(in_x0 + 0x180));
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


