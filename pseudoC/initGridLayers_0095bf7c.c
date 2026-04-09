// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initGridLayers
// Entry Point: 0095bf7c
// Size: 1572 bytes
// Signature: undefined initGridLayers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MultiresTexture::initGridLayers() */

void MultiresTexture::initGridLayers(void)

{
  GridLayer *this;
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint __exponent;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_1a0;
  uint uStack_19c;
  uint local_198;
  char local_194;
  uint local_190;
  uint local_18c;
  float local_188;
  int local_184;
  float local_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  int local_168;
  int local_164;
  uint uStack_160;
  uint local_15c;
  int iStack_158;
  undefined8 local_154;
  undefined local_14c;
  uint local_148;
  uint uStack_144;
  undefined local_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  void *local_108;
  undefined8 uStack_fc;
  void *local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined local_b8;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  if ((int)*(uint *)(in_x0 + 0x178) <= *(int *)(in_x0 + 0x17c)) {
    uVar5 = *(uint *)(in_x0 + 0x24);
    uVar1 = uVar5 & 0x1f;
    __exponent = *(uint *)(in_x0 + 0x178);
    while( true ) {
      iVar3 = uVar5 - __exponent;
      uVar7 = iVar3 - *(int *)(in_x0 + 0x180);
      uVar5 = 1 << (ulong)(uVar7 & 0x1f);
      fVar15 = (float)(ulong)(uint)(1 << (ulong)uVar1) / (float)(ulong)uVar5;
      fVar12 = ldexpf(1.0,__exponent);
      fVar13 = ldexpf(1.0,(__exponent + 1) - *(int *)(in_x0 + 0x178));
      fVar14 = fVar13 / ((float)*(undefined8 *)(in_x0 + 0x134) * *(float *)(in_x0 + 0x144) *
                         *(float *)(in_x0 + 0x15c) * (float)*(undefined8 *)(in_x0 + 0x170) *
                        (float)*(undefined8 *)(in_x0 + 0x160));
      fVar13 = fVar13 / ((float)((ulong)*(undefined8 *)(in_x0 + 0x134) >> 0x20) *
                         *(float *)(in_x0 + 0x144) * *(float *)(in_x0 + 0x15c) *
                         (float)((ulong)*(undefined8 *)(in_x0 + 0x170) >> 0x20) *
                        (float)((ulong)*(undefined8 *)(in_x0 + 0x160) >> 0x20));
      if (fVar13 <= fVar14) {
        fVar13 = fVar14;
      }
      if (*(char *)(in_x0 + 0x88) == '\0') {
        uVar11 = (uint)(fVar13 / fVar15);
        uVar9 = uVar11 << 1 | 1;
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 0095c48c to 0095c493 has its CatchHandler @ 0095c5bc */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          (double)(fVar12 * 1000.0),(double)((fVar12 + fVar12) * 1000.0),
                          (double)fVar13,(double)(fVar13 / fVar12),(double)(fVar13 / fVar15),
                          "Scale %d (%f-%f mm) is completed at %f meters distance from the player (%f texels; %f tiles)\n"
                          ,(ulong)__exponent);
        uVar11 = (uint)(fVar13 / fVar15);
        uVar9 = uVar11 << 1 | 1;
        if (*(char *)(in_x0 + 0x88) != '\0') {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 0095c518 to 0095c523 has its CatchHandler @ 0095c5a4 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar15,
                            "- Scale has tiles that are %f meters wide; world is then %u x %u tiles large\n"
                            ,(ulong)uVar5,(ulong)uVar5);
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 0095c564 to 0095c56b has its CatchHandler @ 0095c5a0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "- Unclamped & unexpanded area in tiles is then %u x %u\n",(ulong)uVar9,
                            (ulong)uVar9);
        }
      }
      local_140 = 0;
      uStack_144 = 0;
      local_148 = 0;
      local_f0 = (void *)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
      local_138 = (void *)0x0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_d0 = 0;
      local_d8 = (void *)0x0;
      local_c0 = (void *)0x0;
      uStack_c8 = 0;
      uStack_fc = 0;
      uStack_118 = 0;
      local_120 = (void *)0x0;
      uStack_110 = 0;
      local_1a0 = __exponent - *(int *)(in_x0 + 0x178);
      uStack_160 = (*(uint **)(in_x0 + 0x90))[1];
      uVar6 = 1L << ((ulong)**(uint **)(in_x0 + 0x90) & 0x3f);
      local_168 = (int)uVar6;
      local_164 = local_168 + uStack_160 * 2;
      local_184 = 0;
      fStack_16c = (float)(ulong)uStack_160 / (float)(uVar6 & 0xffffffff);
      fStack_174 = 1.0 / (float)(ulong)uVar5;
      local_170 = (float)NEON_fmadd(fStack_16c,0x40000000,0x3f800000);
      local_178 = fVar15 * fStack_16c;
      fStack_17c = fVar15 * local_170;
      local_170 = fStack_174 * local_170;
      fStack_16c = fStack_174 * fStack_16c;
      uVar10 = uVar9;
      local_190 = uVar11;
      local_188 = fVar13;
      if (uVar5 <= uVar9) {
        local_190 = 0;
        local_188 = 0.0;
        uVar10 = uVar5;
      }
      local_194 = uVar5 > uVar9;
      uStack_19c = __exponent;
      local_198 = uVar5;
      local_18c = uVar10;
      local_180 = fVar15;
      local_15c = uVar7;
      iStack_158 = iVar3;
      if (*(char *)(in_x0 + 0x88) == '\0') {
        local_14c = 0;
        local_154 = 0;
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 0095c4d0 to 0095c4d7 has its CatchHandler @ 0095c5a8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 0095c2ac to 0095c2f7 has its CatchHandler @ 0095c5e0 */
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "- Scale area in tiles is then %u x %u\n",(ulong)local_18c,
                          (ulong)local_18c);
        uVar10 = local_18c;
        local_154 = 0;
        local_14c = 0;
        if (local_138 != (void *)0x0) {
          operator_delete__(local_138);
        }
      }
      uVar5 = uVar10 * uVar10;
      local_138 = operator_new__((ulong)uVar5);
      local_140 = 0;
      local_b8 = 0;
      local_148 = uVar10;
      uStack_144 = uVar10;
      if (local_194 == '\0') {
        if (uVar5 != 0) {
          memset(local_138,1,(ulong)uVar5);
        }
        local_14c = 1;
        local_184 = local_18c * local_18c;
      }
      else if (local_18c != 0) {
        iVar4 = 0;
        uVar5 = 0;
        iVar3 = local_184;
        do {
          uVar7 = uVar5 - local_190;
          if (uVar5 < local_190 || uVar5 - local_190 == 0) {
            uVar7 = local_190 - uVar5;
          }
          uVar6 = 0;
          fVar12 = local_180 * (float)(ulong)uVar7 - local_180;
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          uVar7 = local_190;
          do {
            uVar9 = (int)uVar6 - local_190;
            if (uVar6 <= local_190) {
              uVar9 = uVar7;
            }
            uVar8 = (ulong)(uint)(iVar4 + (int)uVar6);
            fVar14 = local_180 * (float)(ulong)uVar9 - local_180;
            if (fVar14 <= 0.0) {
              fVar14 = 0.0;
            }
            if (fVar13 * fVar13 <= fVar12 * fVar12 + fVar14 * fVar14) {
              *(undefined *)((long)local_138 + uVar8) = 0;
            }
            else {
              iVar3 = iVar3 + 1;
              *(undefined *)((long)local_138 + uVar8) = 1;
              local_184 = iVar3;
            }
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (local_18c != uVar6);
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + uVar10;
        } while (uVar5 != local_18c);
      }
      this = *(GridLayer **)(in_x0 + 0x198);
      if (this == *(GridLayer **)(in_x0 + 0x1a0)) {
                    /* try { // try from 0095c410 to 0095c41b has its CatchHandler @ 0095c5e0 */
        std::__ndk1::
        vector<MultiresTexture::GridLayer,std::__ndk1::allocator<MultiresTexture::GridLayer>>::
        __push_back_slow_path<MultiresTexture::GridLayer_const&>
                  ((vector<MultiresTexture::GridLayer,std::__ndk1::allocator<MultiresTexture::GridLayer>>
                    *)(in_x0 + 400),(GridLayer *)&local_1a0);
      }
      else {
                    /* try { // try from 0095c3f8 to 0095c403 has its CatchHandler @ 0095c5d4 */
        GridLayer::GridLayer(this,(GridLayer *)&local_1a0);
        *(GridLayer **)(in_x0 + 0x198) = this + 0xf0;
      }
      if (local_c0 != (void *)0x0) {
        operator_delete__(local_c0);
      }
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
      }
      if (local_f0 != (void *)0x0) {
        operator_delete__(local_f0);
      }
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      if (local_138 != (void *)0x0) {
        operator_delete__(local_138);
      }
      if (*(int *)(in_x0 + 0x17c) <= (int)__exponent) break;
      uVar5 = *(uint *)(in_x0 + 0x24);
      __exponent = __exponent + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


