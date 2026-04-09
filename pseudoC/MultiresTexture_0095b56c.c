// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiresTexture
// Entry Point: 0095b56c
// Size: 2400 bytes
// Signature: undefined __thiscall MultiresTexture(MultiresTexture * this, MultiresTextureDesc * param_1)


/* MultiresTexture::MultiresTexture(MultiresTextureDesc const&) */

void __thiscall MultiresTexture::MultiresTexture(MultiresTexture *this,MultiresTextureDesc *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  MultiresTexture MVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  SoftVirtualTexture *this_00;
  size_t sVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  uint uVar23;
  void *pvVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  *(undefined ***)this = &PTR__MultiresTexture_00fe04b0;
  uVar31 = *(undefined8 *)(param_1 + 0x18);
  uVar34 = *(undefined8 *)(param_1 + 0x10);
  auVar25 = *(undefined (*) [16])(param_1 + 0x20);
  uVar35 = *(undefined8 *)(param_1 + 8);
  uVar33 = *(undefined8 *)param_1;
  *(long *)(this + 0x30) = auVar25._8_8_;
  *(long *)(this + 0x28) = auVar25._0_8_;
  *(undefined8 *)(this + 0x20) = uVar31;
  *(undefined8 *)(this + 0x18) = uVar34;
  *(undefined8 *)(this + 0x10) = uVar35;
  *(undefined8 *)(this + 8) = uVar33;
  uVar35 = *(undefined8 *)(param_1 + 0x48);
  uVar33 = *(undefined8 *)(param_1 + 0x40);
  auVar25 = *(undefined (*) [16])(param_1 + 0x50);
  uVar5 = *(undefined4 *)(param_1 + 0x60);
  uVar31 = *(undefined8 *)(param_1 + 0x38);
  uVar34 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(this + 0x60) = auVar25._8_8_;
  *(long *)(this + 0x58) = auVar25._0_8_;
  *(undefined4 *)(this + 0x68) = uVar5;
  *(undefined8 *)(this + 0x50) = uVar35;
  *(undefined8 *)(this + 0x48) = uVar33;
  *(undefined8 *)(this + 0x40) = uVar31;
  *(undefined8 *)(this + 0x38) = uVar34;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x70));
  MVar6 = *(MultiresTexture *)(param_1 + 0x82);
  *(undefined2 *)(this + 0x88) = *(undefined2 *)(param_1 + 0x80);
  this[0x8a] = MVar6;
  *(MultiresTexture **)(this + 0x90) = this + 0x34;
                    /* try { // try from 0095b610 to 0095b617 has its CatchHandler @ 0095bf20 */
  SoftVirtualTextureDesc::SoftVirtualTextureDesc((SoftVirtualTextureDesc *)(this + 0x98));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  fVar29 = *(float *)(param_1 + 0xc);
  fVar37 = *(float *)(param_1 + 4);
  fVar38 = *(float *)(param_1 + 8);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  fVar29 = tanf(fVar29 * 0.5);
  fVar30 = (fVar37 / fVar38) * fVar29;
  fVar37 = fVar37 * 0.5;
  fVar38 = fVar38 * 0.5;
  *(float *)(this + 300) = fVar29;
  fVar36 = (float)NEON_fmadd(fVar29,fVar29,0x3f800000);
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  fVar32 = (float)NEON_fmadd(fVar30,fVar30,0x3f800000);
  *(float *)(this + 0x124) = fVar30;
  *(float *)(this + 0x128) = fVar37;
  *(float *)(this + 0x130) = fVar38;
  *(undefined4 *)(this + 0x164) = 0x3f800000;
  *(undefined8 *)(this + 400) = 0;
  fVar32 = SQRT(fVar32);
  *(float *)(this + 0x134) = fVar30 / fVar37;
  *(float *)(this + 0x13c) = fVar32;
  *(float *)(this + 0x154) = fVar32;
  fVar36 = SQRT(fVar36);
  *(float *)(this + 0x140) = fVar36;
  *(float *)(this + 0x158) = fVar36;
  fVar32 = 1.0 / fVar32;
  uVar34 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x15c) = uVar34;
  fVar36 = 1.0 / fVar36;
  *(float *)(this + 0x168) = fVar32;
  *(float *)(this + 0x170) = fVar32 * fVar32;
  auVar25 = NEON_fmov(0x3f800000,4);
  *(float *)(this + 0x16c) = fVar36;
  *(long *)(this + 0x14c) = auVar25._8_8_;
  *(long *)(this + 0x144) = auVar25._0_8_;
  *(float *)(this + 0x174) = fVar36 * fVar36;
  *(float *)(this + 0x138) = fVar29 / fVar38;
                    /* try { // try from 0095b6ec to 0095b6f3 has its CatchHandler @ 0095bf1c */
  MultiresTextureDesc::validateAndFix();
  *(undefined2 *)(this + 0x1b8) = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar9 = *(int *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x1b0) = 0;
  uVar18 = **(uint **)(this + 0x90);
  uVar13 = (*(uint **)(this + 0x90))[1];
  fVar29 = *(float *)(param_1 + 0x10);
  uVar7 = iVar9 - uVar18;
  iVar9 = iVar2 - uVar18;
  fVar30 = 1.0 / *(float *)(param_1 + 0x14);
  uVar19 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar19 = uVar7;
  }
  *(float *)(this + 0x148) = *(float *)(param_1 + 0x14);
  *(uint *)(this + 0x178) = uVar7;
  *(int *)(this + 0x17c) = iVar9;
  *(uint *)(this + 0x180) = uVar18;
  fVar36 = (float)(ulong)(uint)(1 << (ulong)(uVar19 & 0x1f));
  iVar10 = (int)(1L << ((ulong)uVar18 & 0x3f));
  *(int *)(this + 0x184) = iVar10;
  *(uint *)(this + 0x188) = iVar10 + uVar13 * 2;
  *(float *)(this + 0x15c) = fVar30;
  fVar32 = 1.0 / fVar36;
  if ((int)uVar7 < 1) {
    fVar32 = fVar36;
  }
  *(float *)(this + 0x144) = fVar32;
  fVar36 = (float)*(undefined8 *)(this + 0x160) *
           (float)*(undefined8 *)(this + 0x168) *
           (float)*(undefined8 *)(this + 0x134) * fVar32 * fVar30 * fVar29;
  fVar29 = (float)((ulong)*(undefined8 *)(this + 0x160) >> 0x20) *
           (float)((ulong)*(undefined8 *)(this + 0x168) >> 0x20) *
           (float)((ulong)*(undefined8 *)(this + 0x134) >> 0x20) * fVar32 * fVar30 * fVar29;
  if (fVar29 <= fVar36) {
    fVar30 = fVar36 / *(float *)(this + 0x120);
    if (fVar30 <= fVar29) {
      fVar30 = fVar29;
    }
  }
  else {
    fVar30 = fVar29 / *(float *)(this + 0x120);
    if (fVar30 <= fVar36) {
      fVar30 = fVar36;
    }
  }
  fVar29 = log2f(fVar30);
  uVar13 = (uint)(fVar29 + (float)uVar7);
  uVar19 = -uVar13;
  if (-1 < (int)uVar13) {
    uVar19 = uVar13;
  }
  *(uint *)(this + 0x178) = uVar13;
  *(uint *)(this + 0x28) = uVar18 + uVar13;
  fVar30 = (float)(ulong)(uint)(1 << (ulong)(uVar19 & 0x1f));
  fVar29 = 1.0 / fVar30;
  if ((int)uVar13 < 1) {
    fVar29 = fVar30;
  }
  *(float *)(this + 0x144) = fVar29;
  if (0xf < iVar9 - uVar13) {
    iVar9 = uVar13 + 0xf;
    *(int *)(this + 0x17c) = iVar9;
  }
  if (*(char *)(this + 0x88) != '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 0095bd2c to 0095bd37 has its CatchHandler @ 0095bee0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 0095b810 to 0095b873 has its CatchHandler @ 0095bf2c */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Calculation setup:\n"
                     );
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 0095bd74 to 0095bd7f has its CatchHandler @ 0095bedc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    fVar29 = (float)MathUtil::radianToDegree(*(float *)(param_1 + 0xc));
    auVar25._0_8_ = (double)fVar29;
    auVar25._8_8_ = 0;
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,auVar25,
                      "- Vertical FOV = %g degrees\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 0095bdbc to 0095bdc7 has its CatchHandler @ 0095bed8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    auVar26._0_8_ = (double)*(float *)(param_1 + 4);
    auVar26._8_8_ = 0;
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,auVar26,
                      (double)*(float *)(param_1 + 8),"- Resolution = %g x %g\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 0095be04 to 0095be0f has its CatchHandler @ 0095bed4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar7 = iVar2 - (uVar18 + uVar13);
    uVar13 = *(uint *)(this + 0x178);
    fVar29 = ldexpf(1.0,uVar13);
    uVar19 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar19 = uVar7;
    }
    fVar30 = (float)(ulong)(uint)(1 << (ulong)(uVar19 & 0x1f));
    auVar27._0_8_ = (double)(fVar29 * 1000.0);
    auVar27._8_8_ = 0;
    fVar29 = 1.0 / fVar30;
    if (-1 < (int)uVar7) {
      fVar29 = fVar30;
    }
                    /* try { // try from 0095b8c4 to 0095b8db has its CatchHandler @ 0095bf2c */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,auVar27,(double)fVar29
                      ,"- Min scale = %d (%g mm texels, %g tiles across the world)\n",(ulong)uVar13)
    ;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 0095be94 to 0095be9f has its CatchHandler @ 0095becc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar13 = *(uint *)(this + 0x17c);
    uVar18 = iVar2 - (uVar18 + iVar9);
    fVar29 = ldexpf(1.0,uVar13);
    uVar19 = -uVar18;
    if (-1 < (int)uVar18) {
      uVar19 = uVar18;
    }
    fVar30 = (float)(ulong)(uint)(1 << (ulong)(uVar19 & 0x1f));
    auVar28._0_8_ = (double)(fVar29 * 1000.0);
    auVar28._8_8_ = 0;
    fVar29 = 1.0 / fVar30;
    if (-1 < (int)uVar18) {
      fVar29 = fVar30;
    }
                    /* try { // try from 0095b930 to 0095b94f has its CatchHandler @ 0095bf2c */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,auVar28,(double)fVar29
                      ,"- Max scale = %d (%g mm texels, %g tile(s) across the world)\n",
                      (ulong)uVar13);
  }
  initGridLayers();
  lVar22 = *(long *)(this + 400);
  lVar4 = *(long *)(this + 0x198);
  if (lVar22 == lVar4) {
    uVar19 = 0;
  }
  else {
    uVar15 = (lVar4 - lVar22) - 0xf0;
    if (uVar15 < 0xf0) {
      lVar16 = lVar22;
      uVar19 = 0;
    }
    else {
      uVar15 = uVar15 / 0xf0 + 1;
      uVar20 = uVar15 & 0x3fffffffffffffe;
      lVar16 = lVar22 + uVar20 * 0xf0;
      puVar21 = (uint *)(lVar22 + 0x104);
      uVar14 = uVar20;
      uVar18 = 0;
      uVar13 = 0;
      do {
        puVar1 = puVar21 + -0x3c;
        uVar7 = *puVar21;
        puVar21 = puVar21 + 0x78;
        uVar19 = *puVar1;
        if (*puVar1 <= uVar18) {
          uVar19 = uVar18;
        }
        if (uVar7 <= uVar13) {
          uVar7 = uVar13;
        }
        uVar14 = uVar14 - 2;
        uVar18 = uVar19;
        uVar13 = uVar7;
      } while (uVar14 != 0);
      if (uVar19 <= uVar7) {
        uVar19 = uVar7;
      }
      if (uVar15 == uVar20) goto LAB_0095b9fc;
    }
    do {
      puVar21 = (uint *)(lVar16 + 0x14);
      lVar16 = lVar16 + 0xf0;
      uVar18 = *puVar21;
      if (*puVar21 <= uVar19) {
        uVar18 = uVar19;
      }
      uVar19 = uVar18;
    } while (lVar16 != lVar4);
  }
LAB_0095b9fc:
  uVar7 = *(uint *)(this + 0x188);
  uVar18 = *(uint *)(param_1 + 0x34);
  uVar13 = *(uint *)(param_1 + 0x38);
  uVar19 = uVar19 - 1 | uVar19 - 1 >> 1;
  uVar19 = uVar19 | uVar19 >> 2;
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar18 / uVar7;
  }
  uVar19 = uVar19 | uVar19 >> 4;
  uVar23 = 0;
  if (uVar7 != 0) {
    uVar23 = uVar13 / uVar7;
  }
  uVar19 = uVar19 | uVar19 >> 8;
  uVar19 = uVar19 | uVar19 >> 0x10;
  uVar7 = uVar19 + 1;
  if (uVar19 == 0xffffffff) {
    uVar7 = 1;
  }
  if (this[0x88] != (MultiresTexture)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 0095be4c to 0095be57 has its CatchHandler @ 0095bed0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 0095ba44 to 0095ba6b has its CatchHandler @ 0095bf08 */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Texture size %u x %u allows for %u x %u = %u tiles out of %u\n",(ulong)uVar18
                      ,(ulong)uVar13,(ulong)uVar8,(ulong)uVar23,(ulong)(uVar23 * uVar8),
                      (ulong)*(uint *)(this + 0x1a8));
  }
  uVar23 = uVar23 * uVar8;
  uVar15 = (ulong)(uVar23 - 2);
  pvVar24 = *(void **)(this + 0x108);
  *(uint *)(this + 0x100) = uVar23;
  if ((ulong)(*(long *)(this + 0x118) - (long)pvVar24 >> 2) < uVar15) {
    lVar22 = *(long *)(this + 0x110);
                    /* try { // try from 0095baa4 to 0095baa7 has its CatchHandler @ 0095bf28 */
    pvVar11 = operator_new(uVar15 << 2);
    sVar12 = lVar22 - (long)pvVar24;
    if (0 < (long)sVar12) {
      memcpy(pvVar11,pvVar24,sVar12);
    }
    *(void **)(this + 0x108) = pvVar11;
    *(size_t *)(this + 0x110) = (long)pvVar11 + sVar12;
    *(void **)(this + 0x118) = (void *)((long)pvVar11 + uVar15 * 4);
    if (pvVar24 != (void *)0x0) {
      operator_delete(pvVar24);
      uVar23 = *(uint *)(this + 0x100);
    }
  }
  if (2 < uVar23) {
    uVar19 = 2;
    iVar9 = -1;
    do {
      piVar3 = *(int **)(this + 0x110);
      if (piVar3 < *(int **)(this + 0x118)) {
        *piVar3 = uVar23 + iVar9;
        *(int **)(this + 0x110) = piVar3 + 1;
      }
      else {
        pvVar24 = *(void **)(this + 0x108);
        sVar12 = (long)piVar3 - (long)pvVar24;
        uVar15 = ((long)sVar12 >> 2) + 1;
        if (uVar15 >> 0x3e != 0) {
                    /* try { // try from 0095bcc0 to 0095bcd3 has its CatchHandler @ 0095bf34 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar14 = (long)*(int **)(this + 0x118) - (long)pvVar24;
        uVar20 = (long)uVar14 >> 1;
        if (uVar15 <= uVar20) {
          uVar15 = uVar20;
        }
        if (0x7ffffffffffffffb < uVar14) {
          uVar15 = 0x3fffffffffffffff;
        }
        if (uVar15 == 0) {
          pvVar11 = (void *)0x0;
        }
        else {
          if (uVar15 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0095bb70 to 0095bb73 has its CatchHandler @ 0095bf30 */
          pvVar11 = operator_new(uVar15 << 2);
        }
        piVar3 = (int *)((long)pvVar11 + ((long)sVar12 >> 2) * 4);
        *piVar3 = uVar23 + iVar9;
        if (0 < (long)sVar12) {
          memcpy(pvVar11,pvVar24,sVar12);
        }
        *(void **)(this + 0x108) = pvVar11;
        *(int **)(this + 0x110) = piVar3 + 1;
        *(void **)(this + 0x118) = (void *)((long)pvVar11 + uVar15 * 4);
        if (pvVar24 != (void *)0x0) {
          operator_delete(pvVar24);
        }
      }
      uVar23 = *(uint *)(this + 0x100);
      uVar19 = uVar19 + 1;
      iVar9 = iVar9 + -1;
    } while (uVar19 < uVar23);
  }
                    /* try { // try from 0095bbbc to 0095bc47 has its CatchHandler @ 0095bf28 */
  finalizeGridLayers(this,uVar7);
  uVar15 = *(ulong *)(this + 0x44);
  *(uint *)(this + 0x98) = uVar7;
  *(int *)(this + 0x9c) =
       (int)((ulong)(*(long *)(this + 0x198) - *(long *)(this + 400)) >> 4) * -0x11111111;
  *(uint *)(this + 0xa8) = uVar18;
  *(uint *)(this + 0xac) = uVar13;
  uVar34 = **(undefined8 **)(this + 0x90);
  *(ulong *)(this + 0xb0) = uVar15;
  *(undefined8 *)(this + 0xa0) = uVar34;
  if ((int)uVar15 != 0) {
    uVar15 = uVar15 & 0xffffffff;
    puVar17 = (undefined4 *)(this + 0xb8);
    do {
      uVar15 = uVar15 - 1;
      *puVar17 = puVar17[-0x1b];
      *(undefined *)(puVar17 + 1) = *(undefined *)(puVar17 + -0x1a);
      puVar17 = puVar17 + 2;
    } while (uVar15 != 0);
  }
  this[0xd8] = this[0x8a];
  this_00 = (SoftVirtualTexture *)operator_new(0x1c0);
                    /* try { // try from 0095bc4c to 0095bc53 has its CatchHandler @ 0095bf0c */
  SoftVirtualTexture::SoftVirtualTexture(this_00,(SoftVirtualTextureDesc *)(this + 0x98));
  *(SoftVirtualTexture **)(this + 0xe0) = this_00;
                    /* try { // try from 0095bc58 to 0095bc7f has its CatchHandler @ 0095bf28 */
  SoftVirtualTexture::initialize();
  if (((PlayerCenteredSystem::Manager::getInstance()::mgr & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(&PlayerCenteredSystem::Manager::getInstance()::mgr), iVar9 != 0))
  {
                    /* try { // try from 0095bce4 to 0095bcef has its CatchHandler @ 0095bef4 */
    PlayerCenteredSystem::Manager::Manager
              ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr);
    __cxa_atexit(PlayerCenteredSystem::Manager::~Manager,
                 PlayerCenteredSystem::Manager::getInstance()::mgr,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&PlayerCenteredSystem::Manager::getInstance()::mgr);
  }
  PlayerCenteredSystem::Manager::add
            ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr,
             (PlayerCenteredSystem *)this);
  if (m_pCurrentInstance == (MultiresTexture *)0x0) {
    m_pCurrentInstance = this;
  }
  return;
}


