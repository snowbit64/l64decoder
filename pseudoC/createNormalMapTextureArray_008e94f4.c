// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createNormalMapTextureArray
// Entry Point: 008e94f4
// Size: 964 bytes
// Signature: undefined __thiscall createNormalMapTextureArray(BaseTerrain * this, IRenderDevice * param_1)


/* BaseTerrain::createNormalMapTextureArray(IRenderDevice*) */

undefined4 __thiscall
BaseTerrain::createNormalMapTextureArray(BaseTerrain *this,IRenderDevice *param_1)

{
  char **ppcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ResourceManager *pRVar6;
  long lVar7;
  char **__s;
  ITextureObject *pIVar8;
  Texture *this_00;
  ulong uVar9;
  char **ppcVar10;
  char **ppcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  bool local_46c [4];
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x138) != 0) {
    pRVar6 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar6,*(Resource **)(this + 0x138));
    *(undefined8 *)(this + 0x138) = 0;
  }
  local_46c[0] = false;
  uVar16 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * 0x286bca1b;
  uVar15 = (*(long *)(this + 0x10) - *(long *)(this + 8)) / 0xb0;
  iVar5 = (int)uVar16;
  uVar2 = iVar5 + (int)uVar15;
  if (uVar2 == 0) {
LAB_008e9694:
    uStack_3c0 = 0x7fff7f7f7fff7f7f;
    local_3c8 = 0x7fff7f7f7fff7f7f;
    uStack_3b0 = 0x7fff7f7f7fff7f7f;
    uStack_3b8 = 0x7fff7f7f7fff7f7f;
    uStack_3e0 = 0x7fff7f7f7fff7f7f;
    local_3e8 = 0x7fff7f7f7fff7f7f;
    uStack_3d0 = 0x7fff7f7f7fff7f7f;
    uStack_3d8 = 0x7fff7f7f7fff7f7f;
    uStack_380 = 0x7fff7f7f7fff7f7f;
    local_388 = 0x7fff7f7f7fff7f7f;
    uStack_370 = 0x7fff7f7f7fff7f7f;
    uStack_378 = 0x7fff7f7f7fff7f7f;
    uStack_3a0 = 0x7fff7f7f7fff7f7f;
    local_3a8 = 0x7fff7f7f7fff7f7f;
    uStack_390 = 0x7fff7f7f7fff7f7f;
    uStack_398 = 0x7fff7f7f7fff7f7f;
    uStack_340 = 0x7fff7f7f7fff7f7f;
    local_348 = 0x7fff7f7f7fff7f7f;
    uStack_330 = 0x7fff7f7f7fff7f7f;
    uStack_338 = 0x7fff7f7f7fff7f7f;
    uStack_360 = 0x7fff7f7f7fff7f7f;
    local_368 = 0x7fff7f7f7fff7f7f;
    uStack_350 = 0x7fff7f7f7fff7f7f;
    uStack_358 = 0x7fff7f7f7fff7f7f;
    uStack_300 = 0x7fff7f7f7fff7f7f;
    local_308 = 0x7fff7f7f7fff7f7f;
    uStack_2f0 = 0x7fff7f7f7fff7f7f;
    uStack_2f8 = 0x7fff7f7f7fff7f7f;
    uStack_320 = 0x7fff7f7f7fff7f7f;
    local_328 = 0x7fff7f7f7fff7f7f;
    uStack_310 = 0x7fff7f7f7fff7f7f;
    uStack_318 = 0x7fff7f7f7fff7f7f;
    uStack_2c0 = 0x7fff7f7f7fff7f7f;
    local_2c8 = 0x7fff7f7f7fff7f7f;
    uStack_2b0 = 0x7fff7f7f7fff7f7f;
    uStack_2b8 = 0x7fff7f7f7fff7f7f;
    uStack_2e0 = 0x7fff7f7f7fff7f7f;
    local_2e8 = 0x7fff7f7f7fff7f7f;
    uStack_2d0 = 0x7fff7f7f7fff7f7f;
    uStack_2d8 = 0x7fff7f7f7fff7f7f;
    uStack_280 = 0x7fff7f7f7fff7f7f;
    local_288 = 0x7fff7f7f7fff7f7f;
    uStack_270 = 0x7fff7f7f7fff7f7f;
    uStack_278 = 0x7fff7f7f7fff7f7f;
    uStack_2a0 = 0x7fff7f7f7fff7f7f;
    local_2a8 = 0x7fff7f7f7fff7f7f;
    uStack_290 = 0x7fff7f7f7fff7f7f;
    uStack_298 = 0x7fff7f7f7fff7f7f;
    uStack_240 = 0x7fff7f7f7fff7f7f;
    local_248 = 0x7fff7f7f7fff7f7f;
    uStack_230 = 0x7fff7f7f7fff7f7f;
    uStack_238 = 0x7fff7f7f7fff7f7f;
    uStack_260 = 0x7fff7f7f7fff7f7f;
    local_268 = 0x7fff7f7f7fff7f7f;
    uStack_250 = 0x7fff7f7f7fff7f7f;
    uStack_258 = 0x7fff7f7f7fff7f7f;
    uStack_200 = 0x7fff7f7f7fff7f7f;
    local_208 = 0x7fff7f7f7fff7f7f;
    uStack_1f0 = 0x7fff7f7f7fff7f7f;
    uStack_1f8 = 0x7fff7f7f7fff7f7f;
    uStack_220 = 0x7fff7f7f7fff7f7f;
    local_228 = 0x7fff7f7f7fff7f7f;
    uStack_210 = 0x7fff7f7f7fff7f7f;
    uStack_218 = 0x7fff7f7f7fff7f7f;
    uStack_1c0 = 0x7fff7f7f7fff7f7f;
    local_1c8 = 0x7fff7f7f7fff7f7f;
    uStack_1b0 = 0x7fff7f7f7fff7f7f;
    uStack_1b8 = 0x7fff7f7f7fff7f7f;
    uStack_1e0 = 0x7fff7f7f7fff7f7f;
    local_1e8 = 0x7fff7f7f7fff7f7f;
    uStack_1d0 = 0x7fff7f7f7fff7f7f;
    uStack_1d8 = 0x7fff7f7f7fff7f7f;
    uStack_180 = 0x7fff7f7f7fff7f7f;
    local_188 = 0x7fff7f7f7fff7f7f;
    uStack_170 = 0x7fff7f7f7fff7f7f;
    uStack_178 = 0x7fff7f7f7fff7f7f;
    uStack_1a0 = 0x7fff7f7f7fff7f7f;
    local_1a8 = 0x7fff7f7f7fff7f7f;
    uStack_190 = 0x7fff7f7f7fff7f7f;
    uStack_198 = 0x7fff7f7f7fff7f7f;
    uStack_140 = 0x7fff7f7f7fff7f7f;
    local_148 = 0x7fff7f7f7fff7f7f;
    uStack_130 = 0x7fff7f7f7fff7f7f;
    uStack_138 = 0x7fff7f7f7fff7f7f;
    uStack_160 = 0x7fff7f7f7fff7f7f;
    local_168 = 0x7fff7f7f7fff7f7f;
    uStack_150 = 0x7fff7f7f7fff7f7f;
    uStack_158 = 0x7fff7f7f7fff7f7f;
    uStack_100 = 0x7fff7f7f7fff7f7f;
    local_108 = 0x7fff7f7f7fff7f7f;
    uStack_f0 = 0x7fff7f7f7fff7f7f;
    uStack_f8 = 0x7fff7f7f7fff7f7f;
    uStack_120 = 0x7fff7f7f7fff7f7f;
    local_128 = 0x7fff7f7f7fff7f7f;
    uStack_110 = 0x7fff7f7f7fff7f7f;
    uStack_118 = 0x7fff7f7f7fff7f7f;
    uStack_c0 = 0x7fff7f7f7fff7f7f;
    local_c8 = 0x7fff7f7f7fff7f7f;
    uStack_b0 = 0x7fff7f7f7fff7f7f;
    uStack_b8 = 0x7fff7f7f7fff7f7f;
    uStack_e0 = 0x7fff7f7f7fff7f7f;
    local_e8 = 0x7fff7f7f7fff7f7f;
    uStack_d0 = 0x7fff7f7f7fff7f7f;
    uStack_d8 = 0x7fff7f7f7fff7f7f;
    uStack_80 = 0x7fff7f7f7fff7f7f;
    local_88 = 0x7fff7f7f7fff7f7f;
    uStack_70 = 0x7fff7f7f7fff7f7f;
    uStack_78 = 0x7fff7f7f7fff7f7f;
    uStack_a0 = 0x7fff7f7f7fff7f7f;
    local_a8 = 0x7fff7f7f7fff7f7f;
    uStack_90 = 0x7fff7f7f7fff7f7f;
    uStack_98 = 0x7fff7f7f7fff7f7f;
    uStack_430 = 0x7fff7f7f7fff7f7f;
    local_438 = 0x7fff7f7f7fff7f7f;
    uStack_440 = 0x7fff7f7f7fff7f7f;
    local_448 = 0x7fff7f7f7fff7f7f;
    uStack_450 = 0x7fff7f7f7fff7f7f;
    local_458 = 0x7fff7f7f7fff7f7f;
    uStack_460 = 0x7fff7f7f7fff7f7f;
    local_468 = 0x7fff7f7f7fff7f7f;
    uStack_3f0 = 0x7fff7f7f7fff7f7f;
    local_3f8 = 0x7fff7f7f7fff7f7f;
    uStack_400 = 0x7fff7f7f7fff7f7f;
    local_408 = 0x7fff7f7f7fff7f7f;
    uStack_410 = 0x7fff7f7f7fff7f7f;
    local_418 = 0x7fff7f7f7fff7f7f;
    uStack_420 = 0x7fff7f7f7fff7f7f;
    local_428 = 0x7fff7f7f7fff7f7f;
    pIVar8 = (ITextureObject *)
             TextureUtil::createTextureArray
                       (0x10,0x10,0,1,0x400,5,3,&local_468,false,true,
                        "BaseTerrain normal texture array",param_1);
    if (pIVar8 == (ITextureObject *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 008e987c to 008e9887 has its CatchHandler @ 008e98b8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to create terrain normal texture array.\n");
      uVar14 = 0;
      goto LAB_008e97f0;
    }
  }
  else {
    lVar7 = EngineManager::getInstance();
    uVar3 = *(uint *)(lVar7 + 0x1fc);
    __s = (char **)operator_new((ulong)uVar2 << 3);
    memset(__s,0,(ulong)uVar2 << 3);
    if ((int)uVar15 != 0) {
      uVar9 = uVar15 & 0xffffffff;
      ppcVar10 = (char **)(*(long *)(this + 8) + 0x50);
      ppcVar11 = __s;
      do {
        ppcVar1 = ppcVar10 + -2;
        pcVar13 = (char *)((long)ppcVar10 + -0xf);
        pcVar12 = *ppcVar10;
        ppcVar10 = ppcVar10 + 0x16;
        if ((*(byte *)ppcVar1 & 1) != 0) {
          pcVar13 = pcVar12;
        }
        uVar9 = uVar9 - 1;
        *ppcVar11 = pcVar13;
        ppcVar11 = ppcVar11 + 1;
      } while (uVar9 != 0);
    }
    if (iVar5 != 0) {
      uVar16 = uVar16 & 0xffffffff;
      ppcVar10 = (char **)(*(long *)(this + 0x20) + 0x70);
      do {
        ppcVar11 = ppcVar10 + -2;
        pcVar13 = (char *)((long)ppcVar10 + -0xf);
        pcVar12 = *ppcVar10;
        ppcVar10 = ppcVar10 + 0x13;
        if ((*(byte *)ppcVar11 & 1) != 0) {
          pcVar13 = pcVar12;
        }
        uVar16 = uVar16 - 1;
        __s[uVar15 & 0xffffffff] = pcVar13;
        uVar15 = uVar15 + 1;
      } while (uVar16 != 0);
    }
                    /* try { // try from 008e9624 to 008e968b has its CatchHandler @ 008e98e8 */
    pIVar8 = (ITextureObject *)
             TextureUtil::createTextureArray
                       (__s,uVar2,1,uVar3,false,true,"BaseTerrain normal texture array",param_1,
                        local_46c);
    if (pIVar8 == (ITextureObject *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 008e9834 to 008e983f has its CatchHandler @ 008e98d0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Failed to create terrain normal texture array, using flat normals instead.\n"
                       );
      operator_delete(__s);
      goto LAB_008e9694;
    }
    operator_delete(__s);
  }
  this_00 = (Texture *)operator_new(0x78);
                    /* try { // try from 008e9784 to 008e979b has its CatchHandler @ 008e98e4 */
  Texture::Texture(this_00,"TerrainNormalMapTextureArray",2,pIVar8,local_46c[0],true);
  *(Texture **)(this + 0x138) = this_00;
  uVar14 = 1;
  FUN_00f276d0(1,this_00 + 8);
  pRVar6 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::add(pRVar6,*(Resource **)(this + 0x138),(ResourceDesc *)0x0,false);
LAB_008e97f0:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}


