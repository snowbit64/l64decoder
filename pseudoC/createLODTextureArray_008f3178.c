// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLODTextureArray
// Entry Point: 008f3178
// Size: 756 bytes
// Signature: undefined __cdecl createLODTextureArray(IRenderDevice * param_1, BaseTerrain * param_2)


/* TerrainLodTexture::createLODTextureArray(IRenderDevice*, BaseTerrain*) */

void TerrainLodTexture::createLODTextureArray(IRenderDevice *param_1,BaseTerrain *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  PIXEL_FORMAT PVar6;
  long lVar7;
  void **ppvVar8;
  void *__s;
  Logger *this;
  ITextureObject *pIVar9;
  BitmapImage *pBVar10;
  uint uVar11;
  void **ppvVar12;
  ulong uVar13;
  ulong uVar14;
  BitmapImage *this_00;
  ulong __n;
  void **ppvVar15;
  uint uVar16;
  long lVar17;
  void **local_1d0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar14 = *(long *)(param_1 + 0x50) - (long)*(BitmapImage ***)(param_1 + 0x48);
  uVar16 = (uint)(uVar14 >> 5);
  if (uVar16 != 0) {
    pBVar10 = **(BitmapImage ***)(param_1 + 0x48);
    uVar2 = *(uint *)(pBVar10 + 0x28);
    __n = (ulong)uVar2;
    lVar7 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
    cVar3 = *(char *)(lVar7 + 0x5b);
    ppvVar8 = (void **)operator_new__(uVar14 >> 2 & 0x7fffffff8);
    if (cVar3 == '\0') {
      ppvVar15 = (void **)operator_new__((ulong)(uVar2 * uVar16));
      local_1d0 = ppvVar15;
    }
    else {
      ppvVar15 = (void **)0x0;
      local_1d0 = ppvVar8;
    }
    uVar11 = 0;
    uVar13 = 0;
    do {
      if (ppvVar15 == (void **)0x0) {
        __s = operator_new__(__n);
      }
      else {
        __s = (void *)((long)ppvVar15 + (ulong)uVar11);
      }
      ppvVar8[uVar13] = __s;
      memset(__s,0,__n);
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + uVar2;
    } while ((uVar14 >> 5 & 0xffffffff) != uVar13);
    lVar7 = 0;
    uVar11 = uVar16;
    if (uVar16 < 2) {
      uVar11 = 1;
    }
    ppvVar12 = ppvVar8;
    do {
      lVar17 = *(long *)(param_1 + 0x48);
      this_00 = *(BitmapImage **)(lVar17 + lVar7);
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uVar14 = BitmapImage::compareProperties(this_00,pBVar10,(char *)&local_1b0,0x140);
      if ((uVar14 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 008f3334 to 008f333b has its CatchHandler @ 008f347c */
          this = (Logger *)operator_new(0x38);
                    /* try { // try from 008f3340 to 008f3343 has its CatchHandler @ 008f346c */
          Logger::Logger(this);
          LogManager::getInstance()::singletonLogManager = this;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        lVar17 = lVar17 + lVar7;
        lVar1 = lVar17 + 9;
        if ((*(byte *)(lVar17 + 8) & 1) != 0) {
          lVar1 = *(long *)(lVar17 + 0x18);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Terrain distance texture \'%s\' must have the same properties as the other textures. %s\n"
                           ,lVar1,&local_1b0);
      }
      else {
        memcpy(*ppvVar12,*(void **)(this_00 + 0x20),__n);
      }
      ppvVar12 = ppvVar12 + 1;
      lVar7 = lVar7 + 0x20;
    } while ((ulong)uVar11 * 0x20 - lVar7 != 0);
    PVar6 = PixelFormatUtil::getPixelFormat(pBVar10,false,"");
    pIVar9 = (ITextureObject *)
             TextureUtil::createTextureArray
                       (*(uint *)(pBVar10 + 8),*(uint *)(pBVar10 + 0xc),*(uint *)(pBVar10 + 4),
                        uVar16,uVar2,PVar6,3,local_1d0,cVar3 != '\0',true,"TerrainLod texture array"
                        ,(IRenderDevice *)param_2);
    if (ppvVar15 == (void **)0x0) {
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      uVar14 = (ulong)uVar16;
      ppvVar15 = ppvVar8;
      do {
        if (*ppvVar15 != (void *)0x0) {
          operator_delete__(*ppvVar15);
        }
        ppvVar15 = ppvVar15 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    else {
      operator_delete__(ppvVar15);
    }
    operator_delete__(ppvVar8);
    Texture::setITextureObject
              (*(Texture **)(param_1 + 0x20),pIVar9,true,*(int *)(pBVar10 + 0x14) == 4);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


