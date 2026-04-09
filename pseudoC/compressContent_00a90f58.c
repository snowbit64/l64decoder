// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compressContent
// Entry Point: 00a90f58
// Size: 1656 bytes
// Signature: undefined __cdecl compressContent(ImageDesc * param_1, uchar * * param_2, uint * param_3, uint * param_4)


/* GS2DUtil::compressContent(ImageDesc const&, unsigned char*&, unsigned int&, unsigned int*) */

void GS2DUtil::compressContent(ImageDesc *param_1,uchar **param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  ulong uVar2;
  uchar **ppuVar3;
  FORMAT FVar4;
  TYPE TVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void **ppvVar11;
  uchar *puVar12;
  uchar *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  void ***pppvVar18;
  ulong uVar19;
  uint uVar20;
  void **__src;
  ulong __n;
  ulong uVar21;
  void *pvVar22;
  undefined8 uVar23;
  uint uVar24;
  uint local_178;
  uint local_174;
  uint local_170 [4];
  uint local_160 [4];
  uchar *local_150 [4];
  uint local_130 [4];
  uchar *local_120;
  void *local_118;
  void *local_110;
  void *local_108;
  void **local_100;
  void **ppvStack_f8;
  undefined8 local_f0;
  void **ppvStack_e8;
  void **local_e0;
  undefined8 uStack_d8;
  void **local_d0;
  void **local_c8;
  undefined8 local_c0;
  void **ppvStack_b8;
  void **local_b0;
  undefined8 uStack_a8;
  uint local_98 [4];
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  iVar14 = 6;
  if (*(int *)(param_1 + 0x1c) != 1) {
    iVar14 = 1;
  }
  uVar6 = iVar14 * *(int *)(param_1 + 0xc);
  uVar21 = (ulong)uVar6;
  iVar8 = MipMapUtil::getMipRangeSize(param_1,0,*(int *)(param_1 + 0x10) + 1);
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar8 * uVar6 != iVar14) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 00a91594 to 00a9159f has its CatchHandler @ 00a915d0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to compress image (unexpected buffer size)\n");
    goto LAB_00a91528;
  }
  uVar20 = *(uint *)param_1;
  uVar16 = 0;
  uVar23 = *(undefined8 *)(param_1 + 4);
  uVar15 = *(uint *)(param_1 + 0x10);
  FVar4 = *(FORMAT *)(param_1 + 0x40);
  TVar5 = *(TYPE *)(param_1 + 0x18);
  do {
    uVar24 = (uint)((ulong)uVar23 >> 0x20);
    uVar9 = ImageUtil::getMemorySize(uVar20,(uint)uVar23,uVar24,FVar4,TVar5);
    if (uVar16 < 4) {
      local_98[uVar16] = uVar9;
    }
    else {
      local_98[3] = local_98[3] + uVar9;
    }
    uVar20 = uVar20 >> 1;
    uVar16 = uVar16 + 1;
    if (uVar20 < 2) {
      uVar20 = 1;
    }
    uVar23 = NEON_umax(CONCAT44(uVar24 >> 1,(uint)uVar23 >> 1),0x100000001,4);
  } while (uVar16 <= uVar15);
  uVar16 = 4;
  if (*(int *)(param_1 + 0x10) + 1U < 4) {
    uVar16 = *(int *)(param_1 + 0x10) + 1;
  }
  ppvStack_b8 = (void **)0x0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void **)0x0;
  uStack_d8 = 0;
  local_e0 = (void **)0x0;
  local_c8 = (void **)0x0;
  local_d0 = (void **)0x0;
  ppvStack_e8 = (void **)0x0;
  local_f0 = 0;
  ppvStack_f8 = (void **)0x0;
  local_100 = (void **)0x0;
  if (uVar6 != 0) {
    uVar20 = 0;
    pvVar22 = *(void **)(param_1 + 0x28);
    do {
      if (uVar16 != 0) {
        pppvVar18 = &local_100;
        puVar17 = local_98;
        uVar19 = (ulong)uVar16;
        do {
          ppvVar11 = pppvVar18[1];
          if (ppvVar11 == pppvVar18[2]) {
            __src = *pppvVar18;
            __n = (long)ppvVar11 - (long)__src;
            uVar2 = ((long)__n >> 3) + 1;
            if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a91570 to 00a91583 has its CatchHandler @ 00a915f8 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar2 <= (ulong)((long)__n >> 2)) {
              uVar2 = (long)__n >> 2;
            }
            if (0x7ffffffffffffff7 < __n) {
              uVar2 = 0x1fffffffffffffff;
            }
            if (uVar2 == 0) {
              ppvVar11 = (void **)0x0;
            }
            else {
              if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00a91150 to 00a91153 has its CatchHandler @ 00a915f4 */
              ppvVar11 = (void **)operator_new(uVar2 << 3);
            }
            ppvVar11[(long)__n >> 3] = pvVar22;
            if (0 < (long)__n) {
              memcpy(ppvVar11,__src,__n);
            }
            *pppvVar18 = ppvVar11;
            pppvVar18[1] = ppvVar11 + ((long)__n >> 3) + 1;
            pppvVar18[2] = ppvVar11 + uVar2;
            if (__src != (void **)0x0) {
              operator_delete(__src);
            }
          }
          else {
            *ppvVar11 = pvVar22;
            pppvVar18[1] = ppvVar11 + 1;
          }
          pppvVar18 = pppvVar18 + 3;
          uVar19 = uVar19 - 1;
          pvVar22 = (void *)((long)pvVar22 + (ulong)*puVar17);
          puVar17 = puVar17 + 1;
        } while (uVar19 != 0);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar6);
  }
  if (uVar16 == 0) {
    uVar20 = 0;
    *param_3 = 0;
  }
  else {
    local_130[0] = local_98[0] * uVar6;
                    /* try { // try from 00a911b4 to 00a911b7 has its CatchHandler @ 00a915e8 */
    puVar12 = (uchar *)operator_new__((ulong)local_130[0]);
    local_120 = puVar12;
    ppvVar11 = local_100;
    uVar19 = uVar21;
    if (uVar6 != 0) {
      do {
        memcpy(puVar12,*ppvVar11,(ulong)local_98[0]);
        puVar12 = puVar12 + local_98[0];
        uVar19 = uVar19 - 1;
        ppvVar11 = ppvVar11 + 1;
      } while (uVar19 != 0);
    }
    if (uVar16 != 1) {
      local_130[1] = local_98[1] * uVar6;
                    /* try { // try from 00a91200 to 00a91203 has its CatchHandler @ 00a915e8 */
      pvVar22 = operator_new__((ulong)local_130[1]);
      local_118 = pvVar22;
      ppvVar11 = ppvStack_e8;
      uVar19 = uVar21;
      if (uVar6 != 0) {
        do {
          memcpy(pvVar22,*ppvVar11,(ulong)local_98[1]);
          pvVar22 = (void *)((long)pvVar22 + (ulong)local_98[1]);
          uVar19 = uVar19 - 1;
          ppvVar11 = ppvVar11 + 1;
        } while (uVar19 != 0);
      }
      if (uVar16 != 2) {
        local_130[2] = local_98[2] * uVar6;
                    /* try { // try from 00a9124c to 00a9124f has its CatchHandler @ 00a915e8 */
        pvVar22 = operator_new__((ulong)local_130[2]);
        local_110 = pvVar22;
        ppvVar11 = local_d0;
        uVar19 = uVar21;
        if (uVar6 != 0) {
          do {
            memcpy(pvVar22,*ppvVar11,(ulong)local_98[2]);
            pvVar22 = (void *)((long)pvVar22 + (ulong)local_98[2]);
            uVar19 = uVar19 - 1;
            ppvVar11 = ppvVar11 + 1;
          } while (uVar19 != 0);
        }
        if (uVar16 != 3) {
          uVar19 = (ulong)local_98[3];
          local_130[3] = local_98[3] * uVar6;
                    /* try { // try from 00a91298 to 00a9129b has its CatchHandler @ 00a915e8 */
          pvVar22 = operator_new__((ulong)local_130[3]);
          local_108 = pvVar22;
          ppvVar11 = ppvStack_b8;
          if (uVar6 != 0) {
            do {
              memcpy(pvVar22,*ppvVar11,uVar19);
              pvVar22 = (void *)((long)pvVar22 + uVar19);
              uVar21 = uVar21 - 1;
              ppvVar11 = ppvVar11 + 1;
            } while (uVar21 != 0);
          }
        }
      }
    }
    *param_3 = 0;
    if (uVar16 == 0) {
      uVar20 = 0;
    }
    else {
      uVar21 = 0;
      do {
        puVar12 = (&local_120)[uVar21];
        uVar20 = local_130[uVar21];
                    /* try { // try from 00a91318 to 00a91323 has its CatchHandler @ 00a915ec */
        local_178 = ZLIBCompressionUtil::getCompressionBufferSize(puVar12,uVar20);
        puVar17 = local_130 + uVar21;
        if (uVar20 <= local_178) {
          puVar17 = &local_178;
        }
        local_174 = *puVar17;
                    /* try { // try from 00a91338 to 00a9135b has its CatchHandler @ 00a915f0 */
        puVar13 = (uchar *)operator_new__((ulong)local_174);
        ppuVar3 = local_150 + uVar21;
        *ppuVar3 = puVar13;
        ZLIBCompressionUtil::compress(puVar12,uVar20,ppuVar3,&local_174,false);
        uVar15 = local_174;
        if ((uint)(int)((float)(ulong)uVar20 * 0.9) <= local_174) {
          memcpy(*ppuVar3,puVar12,(ulong)uVar20);
          uVar15 = uVar20;
        }
        uVar20 = uVar15 + 0xf & 0xfffffff0;
        uVar9 = *param_3;
        local_170[uVar21] = uVar20;
        local_160[uVar21] = uVar15;
        *param_3 = uVar9 + uVar20;
        while (uVar20 = uVar20 - 1, uVar15 <= uVar20) {
          (*ppuVar3)[uVar20] = '\0';
        }
        if (puVar12 != (uchar *)0x0) {
          operator_delete__(puVar12);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar16);
      uVar20 = *param_3;
    }
  }
                    /* try { // try from 00a91408 to 00a9140b has its CatchHandler @ 00a915e4 */
  puVar12 = (uchar *)operator_new__((ulong)uVar20);
  *param_2 = puVar12;
  uVar21 = (ulong)(uVar16 - 1);
  if (0 < (int)uVar16) {
    do {
      puVar13 = local_150[uVar21];
      memcpy(puVar12,puVar13,(ulong)local_160[uVar21]);
      uVar20 = local_170[uVar21];
      if (puVar13 != (uchar *)0x0) {
        operator_delete__(puVar13);
      }
      puVar12 = puVar12 + uVar20;
      bVar1 = 0 < (long)uVar21;
      uVar21 = uVar21 - 1;
    } while (bVar1);
  }
  if (uVar16 == 0) {
    *(undefined8 *)param_4 = 0;
LAB_00a914d8:
    local_160[3] = 0;
    uVar21 = 3;
    param_4[2] = 0;
  }
  else {
    param_4[uVar16 - 1] = local_160[0];
    if (uVar16 == 1) {
      param_4[1] = 0;
      goto LAB_00a914d8;
    }
    param_4[uVar16 - 2] = local_160[1];
    if (uVar16 < 2 || uVar16 - 2 == 0) goto LAB_00a914d8;
    param_4[uVar16 - 3] = local_160[2];
    if (uVar16 - 3 == 0) {
      uVar21 = 3;
      local_160[3] = 0;
    }
    else {
      uVar21 = (ulong)(uVar16 - 4);
    }
  }
  param_4[uVar21] = local_160[3];
  if (ppvStack_b8 != (void **)0x0) {
    local_b0 = ppvStack_b8;
    operator_delete(ppvStack_b8);
  }
  if (local_d0 != (void **)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (ppvStack_e8 != (void **)0x0) {
    local_e0 = ppvStack_e8;
    operator_delete(ppvStack_e8);
  }
  if (local_100 != (void **)0x0) {
    ppvStack_f8 = local_100;
    operator_delete(local_100);
  }
LAB_00a91528:
  if (*(long *)(lVar7 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8 * uVar6 == iVar14);
  }
  return;
}


