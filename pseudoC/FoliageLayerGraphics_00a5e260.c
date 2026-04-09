// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FoliageLayerGraphics
// Entry Point: 00a5e260
// Size: 8876 bytes
// Signature: undefined __thiscall FoliageLayerGraphics(FoliageLayerGraphics * this, uint param_1, uint param_2, FoliageSystemDesc * param_3, uint param_4, TerrainTransformGroup * param_5, STREAM_QUEUE param_6)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* FoliageLayerGraphics::FoliageLayerGraphics(unsigned int, unsigned int, FoliageSystemDesc&,
   unsigned int, TerrainTransformGroup*, StreamManager::STREAM_QUEUE) */

void __thiscall
FoliageLayerGraphics::FoliageLayerGraphics
          (FoliageLayerGraphics *this,uint param_1,uint param_2,FoliageSystemDesc *param_3,
          uint param_4,TerrainTransformGroup *param_5,STREAM_QUEUE param_6)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  long **pplVar5;
  float *pfVar6;
  float *pfVar7;
  char *pcVar8;
  GsMaterial **ppGVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long **pplVar14;
  void **ppvVar15;
  undefined4 *puVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  long **pplVar20;
  long *this_00;
  long **pplVar21;
  GsMaterial *pGVar22;
  long *******ppppppplVar23;
  undefined **ppuVar24;
  Logger *this_01;
  undefined4 *puVar25;
  void *pvVar26;
  uint uVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  long lVar36;
  long ********pppppppplVar37;
  uint *puVar38;
  undefined4 *puVar39;
  long *plVar40;
  uint uVar41;
  long *plVar42;
  ulong uVar43;
  char *pcVar44;
  char **ppcVar45;
  char *pcVar46;
  char **ppcVar47;
  basic_string *pbVar48;
  long lVar49;
  long *******ppppppplVar50;
  int *piVar51;
  long *plVar52;
  ulong uVar53;
  char **ppcVar54;
  long *plVar55;
  long ********pppppppplVar56;
  undefined8 *puVar57;
  uint uVar58;
  long *plVar59;
  undefined8 *puVar60;
  long lVar61;
  float *pfVar62;
  long ********pppppppplVar63;
  long lVar64;
  uint uVar65;
  uint uVar66;
  ulong uVar67;
  ulong uVar68;
  long lVar69;
  void **ppvVar70;
  void *pvVar71;
  void **ppvVar72;
  uint uVar73;
  char **ppcVar74;
  uint **ppuVar75;
  size_t sVar76;
  long ********pppppppplVar77;
  uint **ppuVar78;
  int iVar79;
  undefined4 *puVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined4 uVar90;
  uint local_54c;
  uint local_53c;
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  undefined4 local_4d8 [2];
  void *local_4d0;
  void *local_4c8;
  undefined8 local_4c0;
  int local_4b8;
  bool abStack_4b4 [4];
  uint local_4b0 [2];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_4a8 [8];
  undefined8 uStack_4a0;
  void *local_498;
  long local_490;
  uint local_488;
  undefined8 local_480;
  undefined8 *local_478;
  undefined8 *local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  long **local_458;
  long **local_450;
  long **local_448;
  long ********local_440;
  long ********local_438;
  long local_430;
  uint local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  undefined4 local_414;
  int local_410;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_408 [8];
  undefined8 uStack_400;
  void *local_3f8;
  undefined4 *puStack_3f0;
  undefined4 *local_3e8;
  undefined4 *local_3e0;
  uint local_3d8;
  undefined8 local_3d0;
  char *pcStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 local_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  uint local_37c;
  undefined8 local_378;
  undefined8 local_370;
  CustomShader *pCStack_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  GsMaterial *local_188;
  GsMaterial *pGStack_180;
  GsMaterial *local_178;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  GsMaterial *pGStack_160;
  GsMaterial *local_158;
  GsMaterial *pGStack_150;
  undefined local_148;
  char cStack_147;
  undefined2 uStack_146;
  uint uStack_144;
  float fStack_140;
  int iStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  void *local_110;
  void *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  uint local_f0;
  uint local_ec;
  int local_e8;
  undefined8 local_e0;
  float local_d8;
  int local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  long local_b8;
  
  lVar13 = tpidr_el0;
  local_b8 = *(long *)(lVar13 + 0x28);
  local_430 = 0;
  *(undefined ***)this = &PTR__FoliageLayerGraphics_00fe3a68;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  plVar42 = (long *)(this + 0x38);
  *(undefined8 *)(this + 0x40) = 0;
  *plVar42 = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(void **)(this + 0x68) = (void *)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  plVar31 = (long *)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  fVar88 = *(float *)param_3;
  local_438 = (long ********)0x0;
  local_440 = (long ********)&local_438;
                    /* try { // try from 00a5e340 to 00a5e347 has its CatchHandler @ 00a60544 */
  fVar82 = (float)BaseTerrain::getUnitsPerPixel();
                    /* try { // try from 00a5e34c to 00a5e35f has its CatchHandler @ 00a6053c */
  pplVar20 = (long **)FoliageSystemDesc::getMultiLayer(param_3,param_4,true);
  fVar88 = fVar88 * fVar82;
  local_448 = (long **)0x0;
  local_450 = (long **)0x0;
  plVar40 = pplVar20[1];
  fVar89 = fVar88 * 0.5;
  local_458 = (long **)0x0;
  fVar82 = fVar89;
  if (pplVar20[2] == plVar40) {
    fVar87 = 0.0;
    local_54c._0_1_ = (FoliageLayerGraphics)0x0;
    pplVar21 = local_458;
    pplVar14 = local_450;
  }
  else {
    local_54c = 0;
    fVar87 = 0.0;
    uVar67 = 0;
    uVar18 = 0;
    do {
      plVar28 = plVar40 + uVar67 * 0xe;
      local_4a8[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )0x0;
      uStack_4a0 = 0;
      local_498 = (void *)0x0;
      local_478 = (undefined8 *)0x0;
      local_470 = (undefined8 *)0x0;
      local_480 = 0;
      local_4b0[0] = uVar18;
                    /* try { // try from 00a5e4ac to 00a5e4b3 has its CatchHandler @ 00a605fc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=(local_4a8,(basic_string *)plVar28);
      local_490 = plVar40[uVar67 * 0xe + 9];
      uStack_460 = 0;
      local_488 = ~(-1 << (ulong)(*(uint *)(plVar40 + uVar67 * 0xe + 10) & 0x1f));
      ppcVar45 = (char **)(plVar40 + uVar67 * 0xe + 8);
      pcVar46 = (char *)((long)plVar40 + uVar67 * 0x70 + 0x31);
      plVar52 = plVar40 + uVar67 * 0xe + 6;
      pcVar3 = pcVar46;
      if ((*(byte *)plVar52 & 1) != 0) {
        pcVar3 = *ppcVar45;
      }
                    /* try { // try from 00a5e4fc to 00a5e60b has its CatchHandler @ 00a60604 */
      this_00 = (long *)I3DLoadUtil::loadI3DFile
                                  (pcVar3,false,false,(MeshSplitFileState *)0x0,true,abStack_4b4,
                                   false,(FailedReason *)&local_4b8);
      pplVar14 = local_458;
      if (this_00 == (long *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar35 != 0)) {
                    /* try { // try from 00a5fb04 to 00a5fb0f has its CatchHandler @ 00a6050c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        if ((*(byte *)plVar52 & 1) != 0) {
          pcVar46 = *ppcVar45;
        }
        pcVar3 = "File not found";
        if (local_4b8 != 1) {
          pcVar3 = "Unknown error";
        }
        lVar61 = (long)plVar28 + 1;
        if ((*(byte *)plVar28 & 1) != 0) {
          lVar61 = plVar40[uVar67 * 0xe + 2];
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: FoliageSystem: cannot load \'%s\' (%s) - layer \'%s\' will not be rendered\n"
                           ,pcVar46,pcVar3,lVar61);
      }
      else {
        if (local_450 == local_448) {
          uVar43 = (long)local_450 - (long)local_458;
          uVar68 = ((long)uVar43 >> 3) + 1;
          if (uVar68 >> 0x3d != 0) {
                    /* try { // try from 00a604e0 to 00a604e7 has its CatchHandler @ 00a605ec */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar68 <= (ulong)((long)uVar43 >> 2)) {
            uVar68 = (long)uVar43 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar43) {
            uVar68 = 0x1fffffffffffffff;
          }
          if (uVar68 == 0) {
            pplVar21 = (long **)0x0;
          }
          else {
            if (uVar68 >> 0x3d != 0) {
                    /* try { // try from 00a604f0 to 00a604fb has its CatchHandler @ 00a605ec */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            pplVar21 = (long **)operator_new(uVar68 << 3);
          }
          pplVar5 = pplVar21 + ((long)uVar43 >> 3);
          *pplVar5 = this_00;
          if (0 < (long)uVar43) {
            memcpy(pplVar21,pplVar14,uVar43);
          }
          local_448 = pplVar21 + uVar68;
          local_458 = pplVar21;
          local_450 = pplVar5 + 1;
          if (pplVar14 != (long **)0x0) {
            operator_delete(pplVar14);
          }
        }
        else {
          *local_450 = this_00;
          local_450 = local_450 + 1;
        }
        lVar61 = plVar40[uVar67 * 0xe + 0xb];
        if (plVar40[uVar67 * 0xe + 0xc] != lVar61) {
          uVar68 = 0;
          uVar41 = 0;
          ppcVar47 = (char **)(plVar40 + uVar67 * 0xe + 2);
          pcVar3 = (char *)((long)plVar28 + 1);
          do {
            pbVar48 = (basic_string *)(lVar61 + uVar68 * 0x68);
            puStack_3f0 = (undefined4 *)0x0;
            local_3f8 = (void *)0x0;
            local_3e0 = (undefined4 *)0x0;
            local_3e8 = (undefined4 *)0x0;
            uStack_400 = 0;
            local_408[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            )0x0;
            fVar83 = (float)pbVar48[0xd];
            lVar36 = *(long *)(this + 0x28) - *(long *)(this + 0x20);
            uVar43 = (lVar36 >> 3) * -0x5555555555555555;
            iVar35 = (int)(fVar88 * fVar83);
            local_428 = uVar41;
            if (lVar36 != 0) {
              uVar53 = 0;
              do {
                local_410 = (int)uVar53;
                if (*(int *)(*(long *)(this + 0x20) + uVar53 * 0x18) == iVar35) {
                  if (local_410 != -1) goto LAB_00a5e788;
                  break;
                }
                uVar53 = (ulong)(local_410 + 1);
              } while (uVar53 <= uVar43 && uVar43 - uVar53 != 0);
            }
            local_410 = (int)uVar43;
            local_3d0 = (undefined **)CONCAT44(param_1,iVar35);
                    /* try { // try from 00a5e774 to 00a5e787 has its CatchHandler @ 00a60650 */
            BlockDensity::generate();
            FUN_00a60944(this + 0x20,&local_3d0);
LAB_00a5e788:
            lVar36 = lVar61 + uVar68 * 0x68;
            fStack_41c = (float)*(undefined8 *)(lVar36 + 0x40);
            fStack_418 = (float)((ulong)*(undefined8 *)(lVar36 + 0x40) >> 0x20);
            fStack_424 = (float)*(undefined8 *)(lVar36 + 0x38);
            fStack_420 = (float)((ulong)*(undefined8 *)(lVar36 + 0x38) >> 0x20);
            local_414 = *(undefined4 *)(lVar36 + 0x48);
                    /* try { // try from 00a5e7a4 to 00a5e7af has its CatchHandler @ 00a60644 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=(local_408,pbVar48);
            uVar90 = local_414;
            local_3d8 = 0;
            fVar86 = (float)NEON_fmadd(fStack_420,0x3f000000,fStack_424);
            if ((((8.0 < fVar86) ||
                 (fVar86 = (float)NEON_fmadd(fStack_420,0xbf000000,fStack_424), fVar86 < -8.0)) ||
                (fVar86 = (float)NEON_fmadd(fStack_418,0x3f000000,fStack_41c), 8.0 < fVar86)) ||
               (fVar86 = (float)NEON_fmadd(fStack_418,0xbf000000,fStack_41c), fVar86 < -8.0)) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar35 != 0)) {
                    /* try { // try from 00a5fa38 to 00a5fa3f has its CatchHandler @ 00a60520 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              pcVar4 = pcVar3;
              if ((*(byte *)plVar28 & 1) != 0) {
                pcVar4 = *ppcVar47;
              }
                    /* try { // try from 00a5e838 to 00a5e84b has its CatchHandler @ 00a60634 */
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "Warning: width and height scale range is -8 to +8, can be broken by foliage \'%s\' for state %u.\n"
                                ,pcVar4,(ulong)uVar41);
            }
            lVar61 = lVar61 + uVar68 * 0x68;
            lVar36 = *(long *)(lVar61 + 0x50);
            if (*(long *)(lVar61 + 0x58) != lVar36) {
              uVar68 = 0;
              ppcVar54 = (char **)(lVar61 + 0x10);
              local_53c = 0;
              fVar83 = (float)NEON_ucvtf((int)(fVar88 * fVar83));
              pcVar4 = (char *)((long)pbVar48 + 1);
              uVar90 = NEON_fmsub(uVar90,0x3f000000,(fVar88 / fVar83) * 0.5);
              do {
                lVar69 = lVar36 + uVar68 * 0x20;
                local_4d0 = (void *)0x0;
                local_4c8 = (void *)0x0;
                local_4c0 = 0;
                plVar59 = (long *)(lVar69 + 0x10);
                lVar49 = *plVar59;
                plVar55 = (long *)(lVar69 + 8);
                lVar69 = *plVar55;
                local_4d8[0] = *(undefined4 *)(lVar36 + uVar68 * 0x20);
                uVar58 = (uint)((ulong)(lVar49 - lVar69) >> 6);
                if (uVar58 <= local_3d8) {
                  uVar58 = local_3d8;
                }
                local_3d8 = uVar58;
                if (lVar49 != lVar69) {
                  uVar68 = 0;
                  uVar58 = 0;
                  do {
                    pfVar6 = (float *)(lVar69 + uVar68 * 0x40);
                    pfVar7 = (float *)0x0;
                    if (uVar58 != 0) {
                      pfVar7 = (float *)(lVar69 + (ulong)(uVar58 - 1) * 0x40);
                    }
                    fVar83 = *pfVar6;
                    if (*pfVar6 <= (float)uStack_460) {
                      fVar83 = (float)uStack_460;
                    }
                    uStack_460 = CONCAT44(uStack_460._4_4_,fVar83);
                    pfVar62 = pfVar6 + 2;
                    bVar11 = *(byte *)pfVar62;
                    uVar43 = (ulong)(bVar11 >> 1);
                    if ((bVar11 & 1) != 0) {
                      uVar43 = *(ulong *)(pfVar6 + 4);
                    }
                    if (uVar43 == 0) {
                      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                         (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                        singletonLogManager), iVar35 != 0)) {
                    /* try { // try from 00a5f640 to 00a5f647 has its CatchHandler @ 00a60564 */
                        this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a5f64c to 00a5f64f has its CatchHandler @ 00a60554 */
                        Logger::Logger(this_01);
                        LogManager::getInstance()::singletonLogManager = this_01;
                        __cxa_atexit(LogManager::~LogManager,
                                     &LogManager::getInstance()::singletonLogManager,
                                     &PTR_LOOP_00fd8de0);
                        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                      }
                      pcVar44 = pcVar3;
                      if ((*(byte *)plVar28 & 1) != 0) {
                        pcVar44 = *ppcVar47;
                      }
                    /* try { // try from 00a5ea40 to 00a5ea5f has its CatchHandler @ 00a60710 */
                      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                        "Warning: FoliageTransformGroup: LOD %u Shape %u State %u for layer %s has no shape defined.\n"
                                        ,(ulong)uVar41,(ulong)local_53c,(ulong)uVar58,pcVar44);
                    }
                    else {
                      ppcVar74 = (char **)(pfVar6 + 6);
                      pcVar44 = *ppcVar74;
                      if ((bVar11 & 1) == 0) {
                        pcVar44 = (char *)((long)pfVar6 + 9);
                      }
                    /* try { // try from 00a5e9a8 to 00a5ea13 has its CatchHandler @ 00a608d8 */
                      lVar36 = Node::getNodeFromReference((Node *)this_00,pcVar44);
                      pcVar44 = (char *)((long)pfVar6 + 9);
                      if (lVar36 == 0) {
                        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                           (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                          singletonLogManager), iVar35 != 0)) {
                    /* try { // try from 00a5f690 to 00a5f69f has its CatchHandler @ 00a60584 */
                          LogManager::LogManager
                                    ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                          __cxa_atexit(LogManager::~LogManager,
                                       &LogManager::getInstance()::singletonLogManager,
                                       &PTR_LOOP_00fd8de0);
                          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                        }
                        if ((*(byte *)pfVar62 & 1) != 0) {
                          pcVar44 = *ppcVar74;
                        }
                        pcVar8 = pcVar46;
                        if ((*(byte *)plVar52 & 1) != 0) {
                          pcVar8 = *ppcVar45;
                        }
                    /* try { // try from 00a5eaa0 to 00a5eb3f has its CatchHandler @ 00a608d8 */
                        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                           "Error: FoliageTransformGroup: cannot get reference \'%s\' in %s\n"
                                           ,pcVar44,pcVar8);
                      }
                      else if ((*(byte *)(lVar36 + 0x11) >> 3 & 1) == 0) {
                        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                           (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                          singletonLogManager), iVar35 != 0)) {
                    /* try { // try from 00a5f6d8 to 00a5f6e7 has its CatchHandler @ 00a60588 */
                          LogManager::LogManager
                                    ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                          __cxa_atexit(LogManager::~LogManager,
                                       &LogManager::getInstance()::singletonLogManager,
                                       &PTR_LOOP_00fd8de0);
                          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                        }
                        if ((*(byte *)pfVar62 & 1) != 0) {
                          pcVar44 = *ppcVar74;
                        }
                        pcVar8 = pcVar46;
                        if ((*(byte *)plVar52 & 1) != 0) {
                          pcVar8 = *ppcVar45;
                        }
                        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                           "Error: FoliageTransformGroup: reference \'%s\' in %s is not a shape\n"
                                           ,pcVar44,pcVar8);
                      }
                      else if ((*(long *)(lVar36 + 0x170) == 0) ||
                              (lVar49 = Geometry::getCollisionProxyMesh(),
                              (*(byte *)(lVar49 + 0x8d) & 1) != 0)) {
                        ppGVar9 = (GsMaterial **)(lVar36 + 0x178);
                        if (*(short *)(lVar36 + 0x196) != 1) {
                          ppGVar9 = *(GsMaterial ***)(lVar36 + 0x178);
                        }
                        local_188 = *ppGVar9;
                        local_110 = (void *)0x0;
                        local_108 = (void *)0x0;
                        local_100 = 0;
                        if (pfVar7 == (float *)0x0) {
                          local_168 = 0.0;
                          local_178 = (GsMaterial *)0xc0a00000;
                        }
                        else {
                          fVar83 = pfVar7[1];
                          if (pfVar7[1] <= 0.01) {
                            fVar83 = 0.01;
                          }
                          fVar83 = *pfVar7 - fVar83;
                          local_168 = fVar83 * fVar83;
                          local_178 = (GsMaterial *)CONCAT44(*pfVar7,fVar83);
                        }
                        lVar69 = lVar69 + uVar68 * 0x40;
                        uVar19 = *(uint *)(lVar36 + 400) & 0x100;
                        local_148 = uVar19 == 0;
                        fStack_170 = *pfVar6 - *(float *)(lVar69 + 4);
                        fStack_16c = *pfVar6;
                        fStack_164 = *pfVar6 * *pfVar6;
                        cStack_147 = *(char *)(lVar69 + 0x3c);
                        iStack_13c = *(int *)(lVar69 + 0x20);
                        if (iStack_13c == 0) {
                          iStack_13c = 1;
                        }
                        local_138 = *(float *)(lVar69 + 0x24);
                        fStack_134 = *(float *)(lVar69 + 0x28);
                        fStack_130 = *(float *)(lVar69 + 0x2c);
                        fStack_12c = *(float *)(lVar69 + 0x30);
                        fStack_128 = *(float *)(lVar69 + 0x34);
                        fStack_124 = *(float *)(lVar69 + 0x38);
                        fStack_11c = fStack_41c;
                        fStack_118 = fStack_420;
                        local_120 = fStack_424;
                        fStack_114 = fStack_418;
                        lVar49 = *(long *)(this + 0x50);
                        if (fVar87 < *pfVar6) {
                          fVar87 = *pfVar6;
                        }
                        uVar68 = (*(long *)(this + 0x58) - lVar49 >> 3) * -0x79435e50d79435e5;
                        uStack_144 = uVar18;
                        if (*(long *)(this + 0x58) - lVar49 != 0) {
                          uVar43 = 0;
                          do {
                            local_ec = (uint)uVar43;
                            if (((((((*(GsMaterial **)(lVar49 + uVar43 * 0x98) == local_188) &&
                                    (lVar29 = lVar49 + uVar43 * 0x98,
                                    (*(ulong *)(lVar29 + 0x10) ^ (ulong)local_178 |
                                    *(ulong *)(lVar29 + 0x18) ^ CONCAT44(fStack_16c,fStack_170)) ==
                                    0)) && (*(float *)(lVar49 + uVar43 * 0x98 + 0x20) == local_168))
                                  && (((*(float *)(lVar49 + uVar43 * 0x98 + 0x24) == fStack_164 &&
                                       (*(char *)(lVar49 + uVar43 * 0x98 + 0x41) == cStack_147)) &&
                                      ((*(uint *)(lVar49 + uVar43 * 0x98 + 0x44) == uVar18 &&
                                       ((*(float *)(lVar49 + uVar43 * 0x98 + 0x48) == fStack_140 &&
                                        (*(int *)(lVar49 + uVar43 * 0x98 + 0x4c) == iStack_13c))))))
                                     )) && ((*(float *)(lVar49 + uVar43 * 0x98 + 0x50) == local_138
                                            && (((*(float *)(lVar49 + uVar43 * 0x98 + 0x54) ==
                                                  fStack_134 &&
                                                 (*(float *)(lVar49 + uVar43 * 0x98 + 0x58) ==
                                                  fStack_130)) &&
                                                (*(float *)(lVar49 + uVar43 * 0x98 + 0x5c) ==
                                                 fStack_12c)))))) &&
                                (((*(float *)(lVar49 + uVar43 * 0x98 + 0x60) == fStack_128 &&
                                  (*(float *)(lVar49 + uVar43 * 0x98 + 100) == fStack_124)) &&
                                 (((*(float *)(lVar49 + uVar43 * 0x98 + 0x68) == fStack_424 &&
                                   ((*(float *)(lVar49 + uVar43 * 0x98 + 0x6c) == fStack_41c &&
                                    (*(float *)(lVar49 + uVar43 * 0x98 + 0x70) == fStack_420)))) &&
                                  (*(float *)(lVar49 + uVar43 * 0x98 + 0x74) == fStack_418)))))) &&
                               (*(char *)(lVar49 + uVar43 * 0x98 + 0x40) == local_148)) {
                              if (local_ec != 0xffffffff) goto LAB_00a5f154;
                              break;
                            }
                            uVar43 = (ulong)(local_ec + 1);
                          } while (uVar43 <= uVar68 && uVar68 - uVar43 != 0);
                        }
                        local_ec = (uint)uVar68;
                        local_3d0 = &PTR__MaterialDesc_00fd99f8;
                        local_3c0 = CONCAT71((int7)((ulong)local_3c0 >> 8),1);
                        local_37c = local_37c & 0xffffff00;
                        pcStack_3c8 = "UnnamedMaterial";
                        local_370 = CONCAT17(local_370._7_1_,0x100000000);
                        uStack_384 = 0x3fc00000;
                        uStack_380 = 0x3f000000;
                        uStack_38c = 0x3f000000;
                        uStack_388 = 0x3f000000;
                        local_394 = 0xffffffff;
                        uStack_390 = 0xffffffff;
                        local_378 = 0x3f0000003f800000;
                        local_370 = CONCAT44(local_370._4_4_,0x3d0f5c29);
                        pCStack_368 = (CustomShader *)0x0;
                        local_360._0_4_ = 0;
                        uStack_2c8 = 0;
                        local_2d0 = 0;
                        uStack_2b8 = 0;
                        uStack_2c0 = 0;
                        uStack_2a8 = 0;
                        local_2b0 = 0;
                        uStack_298 = 0;
                        uStack_2a0 = 0;
                        uStack_288 = 0;
                        local_290 = 0;
                        uStack_278 = 0;
                        uStack_280 = 0;
                        uStack_268 = 0;
                        local_270 = 0;
                        uStack_258 = 0;
                        uStack_260 = 0;
                        uStack_248 = 0;
                        local_250 = 0;
                        uStack_238 = 0;
                        uStack_240 = 0;
                        uStack_228 = 0;
                        local_230 = 0;
                        uStack_218 = 0;
                        uStack_220 = 0;
                        uStack_208 = 0;
                        local_210 = 0;
                        uStack_1f8 = 0;
                        uStack_200 = 0;
                        uStack_1e8 = 0;
                        local_1f0 = 0;
                        uStack_1d8 = 0;
                        uStack_1e0 = 0;
                        uStack_1c8 = 0;
                        local_1d0 = 0;
                        uStack_1b8 = 0;
                        uStack_1c0 = 0;
                        uStack_1a8 = 0;
                        local_1b0 = 0;
                        uStack_198 = 0;
                        uStack_1a0 = 0;
                        local_190 = 0;
                    /* try { // try from 00a5ef00 to 00a5ef07 has its CatchHandler @ 00a60714 */
                        GsMaterial::saveToDesc(local_188,(MaterialDesc *)&local_3d0);
                        if (pCStack_368 != (CustomShader *)0x0) {
                    /* try { // try from 00a5ef14 to 00a5ef23 has its CatchHandler @ 00a606ec */
                          uVar68 = CustomShader::getParameterIndex
                                             (pCStack_368,(uint)local_360,"sizeAndSizeVariance",
                                              &local_4dc);
                          if ((uVar68 & 1) != 0) {
                            uVar81 = CONCAT44(fStack_11c,local_120);
                            (&uStack_2c8)[(ulong)local_4dc * 2] = CONCAT44(fStack_114,fStack_118);
                            (&local_2d0)[(ulong)local_4dc * 2] = uVar81;
                          }
                    /* try { // try from 00a5ef44 to 00a5ef53 has its CatchHandler @ 00a606e4 */
                          uVar68 = CustomShader::getParameterIndex
                                             (pCStack_368,(uint)local_360,
                                              "horizontalPosVarAtlasSizeAtlasOffset",&local_4e0);
                          if ((uVar68 & 1) != 0) {
                            uVar68 = (ulong)local_4e0;
                            uVar84 = NEON_ucvtf(iStack_13c);
                            uVar81 = CONCAT44(fStack_134,local_138);
                            *(float *)(&local_2d0 + uVar68 * 2) = fStack_140;
                            *(undefined4 *)((long)&local_2d0 + uVar68 * 0x10 + 4) = uVar84;
                            (&uStack_2c8)[uVar68 * 2] = uVar81;
                          }
                    /* try { // try from 00a5ef84 to 00a5ef93 has its CatchHandler @ 00a606e8 */
                          uVar68 = CustomShader::getParameterIndex
                                             (pCStack_368,(uint)local_360,"texCoordOffsetAndScale",
                                              &local_4e4);
                          if ((uVar68 & 1) != 0) {
                            uVar81 = CONCAT44(fStack_12c,fStack_130);
                            (&uStack_2c8)[(ulong)local_4e4 * 2] = CONCAT44(fStack_124,fStack_128);
                            (&local_2d0)[(ulong)local_4e4 * 2] = uVar81;
                          }
                    /* try { // try from 00a5efb4 to 00a5efc3 has its CatchHandler @ 00a606e0 */
                          uVar68 = CustomShader::getParameterIndex
                                             (pCStack_368,(uint)local_360,
                                              "cellSizeTerrainSizeScaleXZScaleY",&local_4e8);
                          if ((uVar68 & 1) != 0) {
                            *(float *)(&local_2d0 + (ulong)local_4e8 * 2) =
                                 fVar88 / (float)(ulong)param_2;
                    /* try { // try from 00a5efd4 to 00a5effb has its CatchHandler @ 00a606dc */
                            iVar35 = BaseTerrain::getHeightMapSize();
                            *(float *)((long)&local_2d0 + (ulong)local_4e8 * 0x10 + 4) =
                                 (float)(ulong)(iVar35 - 1);
                            uVar84 = BaseTerrain::getUnitsPerPixel();
                            uVar85 = *(undefined4 *)(param_5 + 0x210);
                            *(undefined4 *)(&uStack_2c8 + (ulong)local_4e8 * 2) = uVar84;
                            *(undefined4 *)((long)&uStack_2c8 + (ulong)local_4e8 * 0x10 + 4) =
                                 uVar85;
                          }
                        }
                        if (cStack_147 != '\0') {
                          uStack_3b8 = 0;
                        }
                    /* try { // try from 00a5f028 to 00a5f02f has its CatchHandler @ 00a60714 */
                        pGVar22 = (GsMaterial *)operator_new(0x178);
                    /* try { // try from 00a5f034 to 00a5f03b has its CatchHandler @ 00a606f8 */
                        GsMaterial::GsMaterial(pGVar22,(MaterialDesc *)&local_3d0);
                        pGStack_180 = pGVar22;
                    /* try { // try from 00a5f040 to 00a5f053 has its CatchHandler @ 00a60714 */
                        GsMaterial::initMaterialAttributes();
                        GsMaterial::validateTextures(pGStack_180,param_6);
                        FUN_00f276d0(1,pGStack_180 + 0x28);
                        ppGVar9 = *(GsMaterial ***)(this + 0x58);
                        if (ppGVar9 == *(GsMaterial ***)(this + 0x60)) {
                    /* try { // try from 00a5f140 to 00a5f14b has its CatchHandler @ 00a60714 */
                          std::__ndk1::
                          vector<FoliageLayerGraphics::BlockMeshMaterial,std::__ndk1::allocator<FoliageLayerGraphics::BlockMeshMaterial>>
                          ::__push_back_slow_path<FoliageLayerGraphics::BlockMeshMaterial_const&>
                                    ((vector<FoliageLayerGraphics::BlockMeshMaterial,std::__ndk1::allocator<FoliageLayerGraphics::BlockMeshMaterial>>
                                      *)(this + 0x50),(BlockMeshMaterial *)&local_188);
                        }
                        else {
                          ppGVar9[0xf] = (GsMaterial *)0x0;
                          ppGVar9[0x10] = (GsMaterial *)0x0;
                          ppGVar9[0x11] = (GsMaterial *)0x0;
                          ppGVar9[5] = pGStack_160;
                          ppGVar9[4] = (GsMaterial *)CONCAT44(fStack_164,local_168);
                          ppGVar9[7] = pGStack_150;
                          ppGVar9[6] = local_158;
                          ppGVar9[1] = pGStack_180;
                          *ppGVar9 = local_188;
                          ppGVar9[3] = (GsMaterial *)CONCAT44(fStack_16c,fStack_170);
                          ppGVar9[2] = local_178;
                          ppGVar9[0xe] = (GsMaterial *)CONCAT44(fStack_114,fStack_118);
                          ppGVar9[0xb] = (GsMaterial *)CONCAT44(fStack_12c,fStack_130);
                          ppGVar9[10] = (GsMaterial *)CONCAT44(fStack_134,local_138);
                          ppGVar9[0xd] = (GsMaterial *)CONCAT44(fStack_11c,local_120);
                          ppGVar9[0xc] = (GsMaterial *)CONCAT44(fStack_124,fStack_128);
                          ppGVar9[9] = (GsMaterial *)CONCAT44(iStack_13c,fStack_140);
                          ppGVar9[8] = (GsMaterial *)
                                       CONCAT44(uStack_144,
                                                CONCAT22(uStack_146,CONCAT11(cStack_147,local_148)))
                          ;
                          uVar68 = (long)local_108 - (long)local_110;
                          if (uVar68 != 0) {
                            if ((long)uVar68 < 0) {
                    /* try { // try from 00a60488 to 00a6048f has its CatchHandler @ 00a606b8 */
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__vector_base_common<true>::__throw_length_error();
                            }
                    /* try { // try from 00a5f0e0 to 00a5f0e7 has its CatchHandler @ 00a606bc */
                            pGVar22 = (GsMaterial *)operator_new(uVar68);
                            ppGVar9[0xf] = pGVar22;
                            ppGVar9[0x10] = pGVar22;
                            sVar76 = (long)local_108 - (long)local_110;
                            ppGVar9[0x11] = pGVar22 + ((long)uVar68 >> 2) * 4;
                            if (0 < (long)sVar76) {
                              memcpy(pGVar22,local_110,sVar76);
                              pGVar22 = pGVar22 + sVar76;
                            }
                            ppGVar9[0x10] = pGVar22;
                          }
                          *(undefined4 *)(ppGVar9 + 0x12) = local_f8;
                          *(GsMaterial ***)(this + 0x58) = ppGVar9 + 0x13;
                        }
LAB_00a5f154:
                    /* try { // try from 00a5f158 to 00a5f15b has its CatchHandler @ 00a606f4 */
                        ppppppplVar23 = (long *******)Geometry::getCollisionProxyMesh();
                        pppppppplVar63 = (long ********)&local_438;
                        pppppppplVar77 = local_438;
                        if (local_438 == (long ********)0x0) {
LAB_00a5f1b0:
                          pcVar44 = pcVar3;
                          if ((*(byte *)plVar28 & 1) != 0) {
                            pcVar44 = *ppcVar47;
                          }
                          pcVar8 = pcVar4;
                          if ((*(byte *)pbVar48 & 1) != 0) {
                            pcVar8 = *ppcVar54;
                          }
                    /* try { // try from 00a5f1e4 to 00a5f1f3 has its CatchHandler @ 00a6070c */
                          ppuVar24 = (undefined **)
                                     convertMesh((IndexedTriangleSet *)ppppppplVar23,pcVar44,pcVar8,
                                                 *(char **)(lVar36 + 8),(float *)&local_e0,
                                                 (float *)((long)&local_e0 + 4),&local_d8);
                          if (uVar58 != 0) {
                            fVar83 = *(float *)((long)local_4d0 + 0x14) -
                                     *(float *)((long)local_4d0 + 0x10);
                            fVar86 = (float)NEON_fmadd(fVar83,0x3dcccccd,
                                                       *(float *)((long)local_4d0 + 0x14));
                            if (local_e0._4_4_ <= fVar86) {
                              fVar83 = (float)NEON_fmadd(fVar83,0xbdcccccd,
                                                         *(float *)((long)local_4d0 + 0x10));
                              if (fVar83 <= (float)local_e0) goto LAB_00a5f2b8;
                            }
                            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                               (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                              singletonLogManager), iVar35 != 0)) {
                    /* try { // try from 00a5f7b0 to 00a5f7bf has its CatchHandler @ 00a6058c */
                              LogManager::LogManager
                                        ((LogManager *)
                                         &LogManager::getInstance()::singletonLogManager);
                              __cxa_atexit(LogManager::~LogManager,
                                           &LogManager::getInstance()::singletonLogManager,
                                           &PTR_LOOP_00fd8de0);
                              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                            }
                            pcVar44 = pcVar3;
                            if ((*(byte *)plVar28 & 1) != 0) {
                              pcVar44 = *ppcVar47;
                            }
                            pcVar8 = pcVar4;
                            if ((*(byte *)pbVar48 & 1) != 0) {
                              pcVar8 = *ppcVar54;
                            }
                    /* try { // try from 00a5f2a0 to 00a5f2b7 has its CatchHandler @ 00a606b4 */
                            LogManager::warnf((char *)&LogManager::getInstance()::
                                                       singletonLogManager,(double)(float)local_e0,
                                              (double)local_e0._4_4_,
                                              (double)*(float *)((long)local_4d0 + 0x10),
                                              (double)*(float *)((long)local_4d0 + 0x14),
                                              "Warning (performance): Foliage lod %u mesh \'%s\' \'%s\' \'%s\' is much larger than lod 0 mesh (min/maxY (%.3f/%.3f vs %.3f/%.3f).\n"
                                              ,(ulong)uVar58,pcVar44,pcVar8,
                                              *(undefined8 *)(lVar36 + 8));
                          }
LAB_00a5f2b8:
                          if (cStack_147 != '\0') {
                    /* try { // try from 00a5f2c4 to 00a5f32b has its CatchHandler @ 00a6070c */
                            ppppppplVar23 =
                                 (long *******)
                                 IndexedTriangleSet::createCuboid
                                           (-0.05,0.05,(float)local_e0,local_e0._4_4_,-0.05,0.05);
                            pcVar44 = pcVar3;
                            if ((*(byte *)plVar28 & 1) != 0) {
                              pcVar44 = *ppcVar47;
                            }
                            pcVar8 = pcVar4;
                            if ((*(byte *)pbVar48 & 1) != 0) {
                              pcVar8 = *ppcVar54;
                            }
                            ppuVar24 = (undefined **)
                                       convertMesh((IndexedTriangleSet *)ppppppplVar23,pcVar44,
                                                   pcVar8,*(char **)(lVar36 + 8),(float *)&local_e0,
                                                   (float *)((long)&local_e0 + 4),&local_d8);
                          }
                          lVar36 = *(long *)(this + 0x40) - *(long *)(this + 0x38);
                          uVar68 = (lVar36 >> 3) * -0x5555555555555555;
                          if (lVar36 != 0) {
                            uVar43 = 0;
                            do {
                              local_f0 = (uint)uVar43;
                              if (ppuVar24 ==
                                  *(undefined ***)(*(long *)(this + 0x38) + uVar43 * 0x18)) {
                                if (local_f0 != 0xffffffff) goto joined_r0x00a5f380;
                                break;
                              }
                              uVar43 = (ulong)(local_f0 + 1);
                            } while (uVar43 <= uVar68 && uVar68 - uVar43 != 0);
                          }
                          local_f0 = (uint)uVar68;
                          pcStack_3c8 = local_e0;
                          local_3c0 = CONCAT44(local_3c0._4_4_,local_d8);
                    /* try { // try from 00a5f3dc to 00a5f3e7 has its CatchHandler @ 00a606f0 */
                          local_3d0 = ppuVar24;
                          FUN_00a60f1c(plVar42,&local_3d0);
                          uVar43 = (ulong)local_f0;
joined_r0x00a5f380:
                          pppppppplVar63 = (long ********)&local_438;
                          pppppppplVar77 = (long ********)&local_438;
                          pppppppplVar37 = local_438;
                          while (pppppppplVar37 != (long ********)0x0) {
                            while (pppppppplVar77 = pppppppplVar37,
                                  ppppppplVar23 < pppppppplVar77[4]) {
                              pppppppplVar63 = pppppppplVar77;
                              pppppppplVar37 = (long ********)*pppppppplVar77;
                              if ((long ********)*pppppppplVar77 == (long ********)0x0) {
                                ppppppplVar50 = *pppppppplVar77;
                                goto joined_r0x00a5f488;
                              }
                            }
                            if (ppppppplVar23 <= pppppppplVar77[4]) break;
                            pppppppplVar63 = pppppppplVar77 + 1;
                            pppppppplVar37 = (long ********)*pppppppplVar63;
                          }
                          ppppppplVar50 = *pppppppplVar63;
joined_r0x00a5f488:
                          uVar27 = (uint)uVar43;
                          if (ppppppplVar50 == (long *******)0x0) {
                    /* try { // try from 00a5f404 to 00a5f40f has its CatchHandler @ 00a606b0 */
                            ppppppplVar50 = (long *******)operator_new(0x30);
                            ppppppplVar50[4] = (long ******)ppppppplVar23;
                            *(uint *)(ppppppplVar50 + 5) = (uint)uVar43;
                            *ppppppplVar50 = (long ******)0x0;
                            ppppppplVar50[1] = (long ******)0x0;
                            ppppppplVar50[2] = (long ******)pppppppplVar77;
                            *pppppppplVar63 = ppppppplVar50;
                            if ((long ********)*local_440 != (long ********)0x0) {
                              ppppppplVar50 = *pppppppplVar63;
                              local_440 = (long ********)*local_440;
                            }
                            std::__ndk1::
                            __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                                      ((__tree_node_base *)local_438,
                                       (__tree_node_base *)ppppppplVar50);
                            local_430 = local_430 + 1;
                            uVar27 = local_f0;
                          }
                        }
                        else {
                          do {
                            pppppppplVar56 = pppppppplVar77;
                            pppppppplVar37 = pppppppplVar63;
                            ppppppplVar50 = pppppppplVar56[4];
                            pppppppplVar63 = pppppppplVar37;
                            if (ppppppplVar50 >= ppppppplVar23) {
                              pppppppplVar63 = pppppppplVar56;
                            }
                            pppppppplVar77 =
                                 (long ********)pppppppplVar56[ppppppplVar50 < ppppppplVar23];
                          } while ((long ********)pppppppplVar56[ppppppplVar50 < ppppppplVar23] !=
                                   (long ********)0x0);
                          if ((long *********)pppppppplVar63 == &local_438) goto LAB_00a5f1b0;
                          if (ppppppplVar23 <= ppppppplVar50) {
                            pppppppplVar37 = pppppppplVar56;
                          }
                          if (ppppppplVar23 < pppppppplVar37[4]) goto LAB_00a5f1b0;
                          uVar27 = *(uint *)(pppppppplVar63 + 5);
                          lVar36 = *plVar42 + (ulong)uVar27 * 0x18;
                          local_e0 = *(char **)(lVar36 + 8);
                          local_d8 = *(float *)(lVar36 + 0x10);
                          local_f0 = uVar27;
                        }
                        lVar36 = *(long *)(this + 0x50);
                        lVar49 = lVar36 + (ulong)local_ec * 0x98;
                        ppvVar72 = (void **)(lVar49 + 0x78);
                        pvVar71 = *ppvVar72;
                        ppuVar78 = (uint **)(lVar49 + 0x80);
                        puVar38 = *ppuVar78;
                        uVar68 = (long)puVar38 - (long)pvVar71;
                        uVar43 = (long)uVar68 >> 2;
                        if (uVar68 != 0) {
                          uVar53 = 0;
                          do {
                            local_e8 = (int)uVar53;
                            if (*(uint *)((long)pvVar71 + uVar53 * 4) == uVar27) {
                              if (local_e8 != -1) goto LAB_00a5f598;
                              break;
                            }
                            uVar53 = (ulong)(local_e8 + 1);
                          } while (uVar53 < uVar43);
                        }
                        local_e8 = (int)(uVar68 >> 2);
                        ppuVar75 = (uint **)(lVar36 + (ulong)local_ec * 0x98 + 0x88);
                        if (puVar38 == *ppuVar75) {
                          uVar53 = uVar43 + 1;
                          if (uVar53 >> 0x3e != 0) {
                    /* try { // try from 00a60490 to 00a604a7 has its CatchHandler @ 00a606d8 */
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__vector_base_common<true>::__throw_length_error();
                          }
                          if (uVar53 <= (ulong)((long)uVar68 >> 1)) {
                            uVar53 = (long)uVar68 >> 1;
                          }
                          if (0x7ffffffffffffffb < uVar68) {
                            uVar53 = 0x3fffffffffffffff;
                          }
                          if (uVar53 == 0) {
                            pvVar26 = (void *)0x0;
                          }
                          else {
                            if (uVar53 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_006d1f18(
                                          "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                          );
                            }
                    /* try { // try from 00a5f548 to 00a5f54b has its CatchHandler @ 00a60694 */
                            pvVar26 = operator_new(uVar53 << 2);
                          }
                          puVar38 = (uint *)((long)pvVar26 + uVar43 * 4);
                          *puVar38 = uVar27;
                          if (0 < (long)uVar68) {
                            memcpy(pvVar26,pvVar71,uVar68);
                          }
                          *ppvVar72 = pvVar26;
                          *ppuVar78 = puVar38 + 1;
                          *ppuVar75 = (uint *)((long)pvVar26 + uVar53 * 4);
                          if (pvVar71 != (void *)0x0) {
                            operator_delete(pvVar71);
                          }
                        }
                        else {
                          *puVar38 = uVar27;
                          *ppuVar78 = puVar38 + 1;
                        }
LAB_00a5f598:
                        fVar17 = local_d8;
                        fVar86 = fStack_420;
                        fVar83 = fStack_424;
                        local_d4 = *(int *)(lVar69 + 0x20);
                        if (local_d4 == 0) {
                          local_d4 = 1;
                        }
                        local_d0 = *(float *)(lVar69 + 0x24);
                        local_cc = *(float *)(lVar69 + 0x28);
                        local_c8 = *(float *)(lVar69 + 0x2c);
                        local_c4 = *(float *)(lVar69 + 0x30);
                        local_c0 = *(float *)(lVar69 + 0x34);
                        local_bc = *(float *)(lVar69 + 0x38);
                    /* try { // try from 00a5f600 to 00a5f60b has its CatchHandler @ 00a60708 */
                        FUN_00a61050(&local_4d0,&local_f0);
                        uVar84 = NEON_fmadd(fVar86,0x3f000000,fVar83);
                        fVar83 = (float)NEON_fmsub(fVar17,uVar84,uVar90);
                        if (fVar83 < fVar82) {
                          fVar82 = fVar83;
                        }
                        if (local_110 != (void *)0x0) {
                          local_108 = local_110;
                          operator_delete(local_110);
                        }
                        local_54c = local_54c | uVar19 >> 8;
                      }
                      else {
                        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                           (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                          singletonLogManager), iVar35 != 0)) {
                    /* try { // try from 00a5f720 to 00a5f72f has its CatchHandler @ 00a605a4 */
                          LogManager::LogManager
                                    ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                          __cxa_atexit(LogManager::~LogManager,
                                       &LogManager::getInstance()::singletonLogManager,
                                       &PTR_LOOP_00fd8de0);
                          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                        }
                        if ((*(byte *)pfVar62 & 1) != 0) {
                          pcVar44 = *ppcVar74;
                        }
                        pcVar8 = pcVar46;
                        if ((*(byte *)plVar52 & 1) != 0) {
                          pcVar8 = *ppcVar45;
                        }
                        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                           "Error: FoliageTransformGroup: reference \'%s\' in %s must be marked as a CPU Mesh\n"
                                           ,pcVar44,pcVar8);
                        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                           (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                          singletonLogManager), iVar35 != 0)) {
                    /* try { // try from 00a5f768 to 00a5f777 has its CatchHandler @ 00a605a0 */
                          LogManager::LogManager
                                    ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                          __cxa_atexit(LogManager::~LogManager,
                                       &LogManager::getInstance()::singletonLogManager,
                                       &PTR_LOOP_00fd8de0);
                          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                        }
                        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                           "Error: FoliageTransformGroup cannot be initialized\n");
                      }
                    }
                    uVar58 = uVar58 + 1;
                    uVar68 = (ulong)uVar58;
                    lVar69 = *plVar55;
                  } while (uVar68 < (ulong)(*plVar59 - lVar69 >> 6));
                }
                puVar80 = local_3e8;
                if (local_3e8 == local_3e0) {
                    /* try { // try from 00a5f824 to 00a5f82f has its CatchHandler @ 00a60660 */
                  std::__ndk1::
                  vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
                  ::__push_back_slow_path<FoliageLayerGraphics::Shape_const&>
                            ((vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
                              *)&puStack_3f0,(Shape *)local_4d8);
                }
                else {
                  *local_3e8 = local_4d8[0];
                    /* try { // try from 00a5f804 to 00a5f80b has its CatchHandler @ 00a6069c */
                  std::__ndk1::
                  vector<FoliageLayerGraphics::Lod,std::__ndk1::allocator<FoliageLayerGraphics::Lod>>
                  ::vector((vector<FoliageLayerGraphics::Lod,std::__ndk1::allocator<FoliageLayerGraphics::Lod>>
                            *)(local_3e8 + 2),(vector *)&local_4d0);
                  local_3e8 = puVar80 + 8;
                }
                if (local_4d0 != (void *)0x0) {
                  local_4c8 = local_4d0;
                  operator_delete(local_4d0);
                }
                lVar36 = *(long *)(lVar61 + 0x50);
                local_53c = local_53c + 1;
                uVar68 = (ulong)local_53c;
              } while (uVar68 < (ulong)(*(long *)(lVar61 + 0x58) - lVar36 >> 5));
            }
            puVar60 = local_478;
            lVar61 = (long)local_3e8 - (long)puStack_3f0;
            if (lVar61 != 0) {
              fVar83 = 0.0;
              uVar43 = lVar61 >> 5;
              uVar68 = 0;
              do {
                uVar53 = (ulong)((int)uVar68 + 1);
                fVar83 = fVar83 + (float)puStack_3f0[uVar68 * 8];
                uVar68 = uVar53;
              } while (uVar53 < uVar43);
              if (fVar83 == 0.0) {
                if (lVar61 != 0) {
                  uVar68 = 0;
                  do {
                    uVar53 = (ulong)((int)uVar68 + 1);
                    puStack_3f0[uVar68 * 8] = 1.0 / (float)(unkuint9)uVar43;
                    uVar68 = uVar53;
                  } while (uVar53 < uVar43);
                }
              }
              else if (lVar61 != 0) {
                uVar68 = 0;
                do {
                  uVar53 = (ulong)((int)uVar68 + 1);
                  puStack_3f0[uVar68 * 8] = (float)puStack_3f0[uVar68 * 8] / fVar83;
                  uVar68 = uVar53;
                } while (uVar53 < uVar43);
              }
            }
            if (local_478 == local_470) {
                    /* try { // try from 00a5f9b8 to 00a5f9c3 has its CatchHandler @ 00a60610 */
              std::__ndk1::
              vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
              ::__push_back_slow_path<FoliageLayerGraphics::State_const&>
                        ((vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
                          *)&local_480,(State *)&local_428);
            }
            else {
              *(ulong *)((long)local_478 + 0x14) = CONCAT44(local_410,local_414);
              *(ulong *)((long)local_478 + 0xc) = CONCAT44(fStack_418,fStack_41c);
              local_478[1] = CONCAT44(fStack_41c,fStack_420);
              *local_478 = CONCAT44(fStack_424,local_428);
                    /* try { // try from 00a5f90c to 00a5f917 has its CatchHandler @ 00a6062c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)(local_478 + 4));
              puVar60[7] = 0;
              puVar60[8] = 0;
              puVar60[9] = 0;
              uVar68 = (long)local_3e8 - (long)puStack_3f0;
              if (uVar68 != 0) {
                if ((long)uVar68 < 0) {
                    /* try { // try from 00a604cc to 00a604d3 has its CatchHandler @ 00a60614 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                    /* try { // try from 00a5f938 to 00a5f93f has its CatchHandler @ 00a60620 */
                puVar25 = (undefined4 *)operator_new(uVar68);
                puVar16 = local_3e8;
                puVar60[7] = puVar25;
                puVar60[8] = puVar25;
                puVar60[9] = puVar25 + ((long)uVar68 >> 5) * 8;
                puVar80 = puStack_3f0;
                if (puStack_3f0 != local_3e8) {
                  do {
                    puVar39 = puVar25;
                    *puVar39 = *puVar80;
                    /* try { // try from 00a5f974 to 00a5f97f has its CatchHandler @ 00a60664 */
                    std::__ndk1::
                    vector<FoliageLayerGraphics::Lod,std::__ndk1::allocator<FoliageLayerGraphics::Lod>>
                    ::vector((vector<FoliageLayerGraphics::Lod,std::__ndk1::allocator<FoliageLayerGraphics::Lod>>
                              *)(puVar39 + 2),(vector *)(puVar80 + 2));
                    puVar80 = puVar80 + 8;
                    puVar25 = puVar39 + 8;
                  } while (puVar80 != puVar16);
                  puVar25 = puVar39 + 8;
                }
                puVar60[8] = puVar25;
              }
              local_478 = puVar60 + 0xb;
              *(uint *)(puVar60 + 10) = local_3d8;
            }
            puVar80 = puStack_3f0;
            puVar25 = local_3e8;
            if (puStack_3f0 != (undefined4 *)0x0) {
              while (puVar16 = puVar25, puVar16 != puVar80) {
                pvVar71 = *(void **)(puVar16 + -6);
                puVar25 = puVar16 + -8;
                if (pvVar71 != (void *)0x0) {
                  *(void **)(puVar16 + -4) = pvVar71;
                  operator_delete(pvVar71);
                }
              }
              local_3e8 = puVar80;
              operator_delete(puStack_3f0);
            }
            if (((byte)local_408[0] & 1) != 0) {
              operator_delete(local_3f8);
            }
            lVar61 = plVar40[uVar67 * 0xe + 0xb];
            uVar41 = uVar41 + 1;
            uVar68 = (ulong)uVar41;
            uVar43 = (plVar40[uVar67 * 0xe + 0xc] - lVar61 >> 3) * 0x4ec4ec4ec4ec4ec5;
          } while (uVar68 <= uVar43 && uVar43 - uVar68 != 0);
        }
        puVar38 = *(uint **)(this + 0x10);
        uStack_460 = CONCAT44((float)uStack_460,(float)uStack_460);
        if (puVar38 == *(uint **)(this + 0x18)) {
                    /* try { // try from 00a5facc to 00a5fad7 has its CatchHandler @ 00a60604 */
          std::__ndk1::
          vector<FoliageLayerGraphics::Layer,std::__ndk1::allocator<FoliageLayerGraphics::Layer>>::
          __push_back_slow_path<FoliageLayerGraphics::Layer_const&>
                    ((vector<FoliageLayerGraphics::Layer,std::__ndk1::allocator<FoliageLayerGraphics::Layer>>
                      *)(this + 8),(Layer *)local_4b0);
        }
        else {
          *puVar38 = local_4b0[0];
                    /* try { // try from 00a5fa88 to 00a5fa93 has its CatchHandler @ 00a605c4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(puVar38 + 2);
          puVar38[10] = local_488;
          *(long *)(puVar38 + 8) = local_490;
                    /* try { // try from 00a5faac to 00a5fab3 has its CatchHandler @ 00a605cc */
          std::__ndk1::
          vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>::
          vector((vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
                  *)(puVar38 + 0xc),(vector *)&local_480);
          *(undefined8 *)(puVar38 + 0x14) = uStack_460;
          *(undefined8 *)(puVar38 + 0x12) = local_468;
          *(uint **)(this + 0x10) = puVar38 + 0x16;
        }
      }
      std::__ndk1::
      __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
      ::~__vector_base((__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
                        *)&local_480);
      if (((byte)local_4a8[0] & 1) != 0) {
        operator_delete(local_498);
      }
      plVar40 = pplVar20[1];
      uVar18 = uVar18 + 1;
      uVar67 = (ulong)uVar18;
      uVar68 = ((long)pplVar20[2] - (long)plVar40 >> 4) * 0x6db6db6db6db6db7;
      pplVar21 = local_458;
      pplVar14 = local_450;
    } while (uVar67 <= uVar68 && uVar68 - uVar67 != 0);
  }
  for (; pplVar21 != pplVar14; pplVar21 = pplVar21 + 1) {
    if (*pplVar21 != (long *)0x0) {
      (**(code **)(**pplVar21 + 8))();
    }
  }
  lVar61 = *(long *)(this + 0x58);
  *(float *)(this + 0x9c) = fVar89 / (float)(ulong)param_2 - fVar82;
  if (lVar61 != *(long *)(this + 0x50)) {
    uVar67 = 0;
    lVar69 = *(long *)(this + 0x50);
    lVar36 = lVar61;
    do {
      lVar61 = lVar69;
      lVar49 = lVar61 + uVar67 * 0x98;
      piVar51 = *(int **)(this + 0x70);
      lVar69 = *(long *)(lVar49 + 0x78);
      *(int *)(lVar49 + 0x90) = (int)((ulong)((long)piVar51 - *(long *)(this + 0x68)) >> 6);
      iVar35 = (int)uVar67;
      if (*(long *)(lVar49 + 0x80) != lVar69) {
        uVar67 = 0;
        while( true ) {
          uVar81 = *(undefined8 *)
                    (*(long *)(this + 0x38) + (ulong)*(uint *)(lVar69 + uVar67 * 4) * 0x18);
          iVar79 = (int)uVar67;
          if (piVar51 == *(int **)(this + 0x78)) {
            pvVar71 = *(void **)(this + 0x68);
            uVar68 = (long)piVar51 - (long)pvVar71;
            uVar67 = ((long)uVar68 >> 6) + 1;
            if (uVar67 >> 0x3a != 0) {
                    /* try { // try from 00a604a8 to 00a604b3 has its CatchHandler @ 00a60648 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar67 <= (ulong)((long)uVar68 >> 5)) {
              uVar67 = (long)uVar68 >> 5;
            }
            if (0x7fffffffffffffbf < uVar68) {
              uVar67 = 0x3ffffffffffffff;
            }
            if (uVar67 == 0) {
              pvVar26 = (void *)0x0;
            }
            else {
              if (uVar67 >> 0x3a != 0) {
                    /* try { // try from 00a604bc to 00a604cb has its CatchHandler @ 00a60648 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00a5fc88 to 00a5fc8b has its CatchHandler @ 00a60628 */
              pvVar26 = operator_new(uVar67 << 6);
            }
            piVar51 = (int *)((long)pvVar26 + ((long)uVar68 >> 6) * 0x40);
            *piVar51 = iVar35;
            piVar51[1] = iVar79;
            *(undefined8 *)(piVar51 + 2) = uVar81;
            *(undefined8 *)(piVar51 + 6) = 0;
            *(undefined8 *)(piVar51 + 4) = 0;
            *(undefined8 *)(piVar51 + 10) = 0;
            *(undefined8 *)(piVar51 + 8) = 0;
            *(undefined8 *)(piVar51 + 0xe) = 0;
            *(undefined8 *)(piVar51 + 0xc) = 0;
            if (0 < (long)uVar68) {
              memcpy(pvVar26,pvVar71,uVar68);
            }
            *(void **)(this + 0x68) = pvVar26;
            *(int **)(this + 0x70) = piVar51 + 0x10;
            *(void **)(this + 0x78) = (void *)((long)pvVar26 + uVar67 * 0x40);
            if (pvVar71 != (void *)0x0) {
              operator_delete(pvVar71);
            }
          }
          else {
            *piVar51 = iVar35;
            piVar51[1] = iVar79;
            *(undefined8 *)(piVar51 + 2) = uVar81;
            *(undefined8 *)(piVar51 + 6) = 0;
            *(undefined8 *)(piVar51 + 4) = 0;
            *(undefined8 *)(piVar51 + 10) = 0;
            *(undefined8 *)(piVar51 + 8) = 0;
            *(undefined8 *)(piVar51 + 0xe) = 0;
            *(undefined8 *)(piVar51 + 0xc) = 0;
            *(int **)(this + 0x70) = piVar51 + 0x10;
          }
          uVar67 = (ulong)(iVar79 + 1);
          lVar69 = *(long *)(lVar49 + 0x78);
          if ((ulong)(*(long *)(lVar49 + 0x80) - lVar69 >> 2) <= uVar67) break;
          piVar51 = *(int **)(this + 0x70);
        }
        lVar61 = *(long *)(this + 0x50);
        lVar36 = *(long *)(this + 0x58);
      }
      uVar67 = (ulong)(iVar35 + 1);
      uVar68 = (lVar36 - lVar61 >> 3) * -0x79435e50d79435e5;
      lVar69 = lVar61;
    } while (uVar67 <= uVar68 && uVar68 - uVar67 != 0);
  }
  lVar36 = *(long *)(this + 8);
  lVar69 = *(long *)(this + 0x10) - lVar36;
  if (lVar69 != 0) {
    uVar67 = 0;
    uVar68 = (lVar69 >> 3) * 0x2e8ba2e8ba2e8ba3;
    do {
      lVar49 = lVar36 + uVar67 * 0x58;
      lVar69 = *(long *)(lVar49 + 0x30);
      lVar49 = *(long *)(lVar49 + 0x38) - lVar69;
      if (lVar49 != 0) {
        uVar43 = 0;
        uVar53 = (lVar49 >> 3) * 0x2e8ba2e8ba2e8ba3;
        do {
          lVar29 = lVar69 + uVar43 * 0x58;
          lVar49 = *(long *)(lVar29 + 0x38);
          lVar29 = *(long *)(lVar29 + 0x40) - lVar49;
          if (lVar29 != 0) {
            uVar30 = 0;
            do {
              lVar64 = lVar49 + uVar30 * 0x20;
              lVar10 = *(long *)(lVar64 + 8);
              lVar64 = *(long *)(lVar64 + 0x10) - lVar10;
              if (lVar64 != 0) {
                uVar34 = 0;
                uVar33 = (lVar64 >> 3) * 0x6db6db6db6db6db7;
                do {
                  lVar64 = lVar10 + uVar34 * 0x38;
                  uVar34 = (ulong)((int)uVar34 + 1);
                  *(int *)(lVar64 + 0xc) =
                       *(int *)(lVar64 + 8) +
                       *(int *)(lVar61 + (ulong)*(uint *)(lVar64 + 4) * 0x98 + 0x90);
                } while (uVar34 <= uVar33 && uVar33 - uVar34 != 0);
              }
              uVar30 = uVar30 + 1;
            } while ((uVar30 & 0xffffffff) < (ulong)(lVar29 >> 5));
          }
          uVar43 = uVar43 + 1;
        } while ((uVar43 & 0xffffffff) <= uVar53 && uVar53 - (uVar43 & 0xffffffff) != 0);
      }
      uVar67 = uVar67 + 1;
    } while ((uVar67 & 0xffffffff) <= uVar68 && uVar68 - (uVar67 & 0xffffffff) != 0);
  }
                    /* try { // try from 00a5fe10 to 00a5fe47 has its CatchHandler @ 00a6054c */
  uVar18 = (**(code **)(**pplVar20 + 0x60))();
  uVar68 = (ulong)(uint)(1 << (ulong)(uVar18 & 0x1f));
  lVar61 = (long)*(void ***)(this + 0x88) - *(long *)(this + 0x80) >> 3;
  uVar67 = lVar61 * -0x5555555555555555;
  if (uVar68 <= uVar67) {
    if (uVar68 <= uVar67 && uVar67 - uVar68 != 0) {
      ppvVar70 = (void **)(*(long *)(this + 0x80) + uVar68 * 0x18);
      ppvVar72 = *(void ***)(this + 0x88);
      while (ppvVar15 = ppvVar72, ppvVar15 != ppvVar70) {
        ppvVar72 = ppvVar15 + -3;
        pvVar71 = *ppvVar72;
        if (pvVar71 != (void *)0x0) {
          ppvVar15[-2] = pvVar71;
          operator_delete(pvVar71);
        }
      }
      *(void ***)(this + 0x88) = ppvVar70;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::vector<FoliageLayerGraphics::Layer_const*,std::__ndk1::allocator<FoliageLayerGraphics::Layer_const*>>,std::__ndk1::allocator<std::__ndk1::vector<FoliageLayerGraphics::Layer_const*,std::__ndk1::allocator<FoliageLayerGraphics::Layer_const*>>>>
    ::__append((vector<std::__ndk1::vector<FoliageLayerGraphics::Layer_const*,std::__ndk1::allocator<FoliageLayerGraphics::Layer_const*>>,std::__ndk1::allocator<std::__ndk1::vector<FoliageLayerGraphics::Layer_const*,std::__ndk1::allocator<FoliageLayerGraphics::Layer_const*>>>>
                *)plVar31,uVar68 + lVar61 * 0x5555555555555555);
  }
  lVar61 = *(long *)(this + 8);
  lVar36 = *(long *)(this + 0x10);
  if (lVar36 != lVar61) {
    uVar67 = 0;
    do {
      lVar69 = lVar61 + uVar67 * 0x58;
      if (*(int *)(lVar69 + 0x20) == -1) {
        lVar61 = 0;
        uVar43 = uVar68;
        do {
          lVar49 = *plVar31;
          lVar36 = lVar49 + lVar61;
          plVar40 = *(long **)(lVar36 + 8);
          if (plVar40 < *(long **)(lVar36 + 0x10)) {
            *plVar40 = lVar69;
            *(long **)(lVar36 + 8) = plVar40 + 1;
          }
          else {
            pvVar71 = *(void **)(lVar49 + lVar61);
            sVar76 = (long)plVar40 - (long)pvVar71;
            uVar53 = ((long)sVar76 >> 3) + 1;
            if (uVar53 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a604b8 to 00a604bb has its CatchHandler @ 00a60638 */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar30 = (long)*(long **)(lVar36 + 0x10) - (long)pvVar71;
            uVar33 = (long)uVar30 >> 2;
            if (uVar53 <= uVar33) {
              uVar53 = uVar33;
            }
            if (0x7ffffffffffffff7 < uVar30) {
              uVar53 = 0x1fffffffffffffff;
            }
            if (uVar53 == 0) {
              pvVar26 = (void *)0x0;
            }
            else {
              if (uVar53 >> 0x3d != 0) {
                    /* try { // try from 00a604d4 to 00a604df has its CatchHandler @ 00a60638 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00a5ff80 to 00a5ff83 has its CatchHandler @ 00a6060c */
              pvVar26 = operator_new(uVar53 << 3);
            }
            plVar40 = (long *)((long)pvVar26 + ((long)sVar76 >> 3) * 8);
            *plVar40 = lVar69;
            if (0 < (long)sVar76) {
              memcpy(pvVar26,pvVar71,sVar76);
            }
            *(void **)(lVar49 + lVar61) = pvVar26;
            *(long **)(lVar36 + 8) = plVar40 + 1;
            *(void **)(lVar36 + 0x10) = (void *)((long)pvVar26 + uVar53 * 8);
            if (pvVar71 != (void *)0x0) {
              operator_delete(pvVar71);
            }
          }
          lVar61 = lVar61 + 0x18;
          uVar43 = uVar43 - 1;
        } while (uVar43 != 0);
        lVar61 = *(long *)(this + 8);
        lVar36 = *(long *)(this + 0x10);
      }
      uVar67 = (ulong)((int)uVar67 + 1);
      uVar43 = (lVar36 - lVar61 >> 3) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar67 <= uVar43 && uVar43 - uVar67 != 0);
    if (lVar36 != lVar61) {
      uVar67 = 0;
      do {
        lVar61 = lVar61 + uVar67 * 0x58;
        if (*(uint *)(lVar61 + 0x20) != 0xffffffff) {
          ppvVar72 = (void **)(*plVar31 + (ulong)*(uint *)(lVar61 + 0x20) * 0x18);
          pplVar20 = (long **)(ppvVar72 + 1);
          plVar42 = *pplVar20;
          plVar40 = (long *)ppvVar72[2];
          if (plVar42 < plVar40) {
            *plVar42 = lVar61;
            *pplVar20 = plVar42 + 1;
          }
          else {
            pvVar71 = *ppvVar72;
            sVar76 = (long)plVar42 - (long)pvVar71;
            uVar43 = ((long)sVar76 >> 3) + 1;
            if (uVar43 >> 0x3d != 0) {
                    /* try { // try from 00a604e8 to 00a604ef has its CatchHandler @ 00a605c0 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar53 = (long)plVar40 - (long)pvVar71;
            uVar30 = (long)uVar53 >> 2;
            if (uVar43 <= uVar30) {
              uVar43 = uVar30;
            }
            if (0x7ffffffffffffff7 < uVar53) {
              uVar43 = 0x1fffffffffffffff;
            }
            if (uVar43 == 0) {
              pvVar26 = (void *)0x0;
            }
            else {
              if (uVar43 >> 0x3d != 0) {
                    /* try { // try from 00a604fc to 00a60507 has its CatchHandler @ 00a605c0 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00a600a8 to 00a600ab has its CatchHandler @ 00a60550 */
              pvVar26 = operator_new(uVar43 << 3);
            }
            plVar40 = (long *)((long)pvVar26 + ((long)sVar76 >> 3) * 8);
            *plVar40 = lVar61;
            if (0 < (long)sVar76) {
              memcpy(pvVar26,pvVar71,sVar76);
            }
            *ppvVar72 = pvVar26;
            *pplVar20 = plVar40 + 1;
            ppvVar72[2] = (long *)((long)pvVar26 + uVar43 * 8);
            if (pvVar71 != (void *)0x0) {
              operator_delete(pvVar71);
            }
          }
        }
        lVar61 = *(long *)(this + 8);
        lVar36 = *(long *)(this + 0x10);
        uVar67 = (ulong)((int)uVar67 + 1);
        uVar43 = (lVar36 - lVar61 >> 3) * 0x2e8ba2e8ba2e8ba3;
      } while (uVar67 <= uVar43 && uVar43 - uVar67 != 0);
      for (; lVar61 != lVar36; lVar61 = lVar61 + 0x58) {
        uVar41 = *(uint *)(lVar61 + 0x28);
                    /* try { // try from 00a6014c to 00a6014f has its CatchHandler @ 00a605f8 */
        pvVar71 = operator_new__((ulong)(uVar41 + 1) << 3);
        uVar18 = 0;
        *(void **)(lVar61 + 0x48) = pvVar71;
        do {
          if (uVar18 == 0) {
LAB_00a6015c:
            lVar69 = 0;
          }
          else {
            uVar43 = (*(long *)(lVar61 + 0x38) - *(long *)(lVar61 + 0x30) >> 3) * 0x2e8ba2e8ba2e8ba3
            ;
            uVar67 = (ulong)(uVar18 - 1);
            if (uVar43 < uVar67 || uVar43 - uVar67 == 0) goto LAB_00a6015c;
            lVar49 = *(long *)(lVar61 + 0x30) + uVar67 * 0x58;
            lVar69 = 0;
            if (*(long *)(lVar49 + 0x40) != *(long *)(lVar49 + 0x38)) {
              lVar69 = lVar49;
            }
          }
          *(long *)(*(long *)(lVar61 + 0x48) + (ulong)uVar18 * 8) = lVar69;
          uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar41);
      }
    }
  }
  *(undefined4 *)(this + 0xa0) = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_348 = 0;
  local_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  pCStack_368 = (CustomShader *)0x0;
  local_370 = 0;
  local_358 = 0;
  local_360 = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  local_378 = 0;
  uStack_380 = 0;
  local_37c = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  local_394 = 0;
  uStack_3a0 = 0;
  pcStack_3c8 = (char *)0x0;
  local_3d0._0_4_ = 0;
  local_3d0._4_4_ = 0;
  uStack_3b8 = 0;
  local_3c0 = 0;
  if (param_1 != 0) {
    uVar18 = 0;
    iVar35 = 0;
    uVar41 = 0;
    if (param_2 != 0) {
      uVar41 = param_1 / param_2;
    }
    lVar61 = *(long *)(this + 0x80);
    lVar36 = *(long *)(this + 0x20);
    do {
      uVar58 = 0;
      if (uVar41 != 0) {
        uVar58 = uVar18 / uVar41;
      }
      uVar19 = 0;
      do {
        uVar67 = 0;
        uVar27 = 0;
        do {
          pplVar20 = (long **)(lVar61 + uVar67 * 0x18);
          plVar31 = *pplVar20;
          plVar40 = pplVar20[1];
          if (plVar31 == plVar40) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            do {
              lVar69 = *(long *)(*plVar31 + 0x30);
              lVar49 = *(long *)(*plVar31 + 0x38);
              if (lVar69 == lVar49) {
                uVar65 = 0;
              }
              else {
                uVar43 = (lVar49 - lVar69) - 0x58;
                if (uVar43 < 0x58) {
                  lVar29 = lVar69;
                  uVar66 = 0;
                }
                else {
                  uVar43 = uVar43 / 0x58 + 1;
                  uVar30 = uVar43 & 0x7fffffffffffffe;
                  lVar29 = lVar69 + uVar30 * 0x58;
                  puVar38 = (uint *)(lVar69 + 0x70);
                  uVar53 = uVar30;
                  uVar66 = 0;
                  uVar73 = 0;
                  do {
                    lVar69 = lVar36 + (ulong)puVar38[-0x16] * 0x18;
                    lVar64 = lVar36 + (ulong)*puVar38 * 0x18;
                    puVar2 = puVar38 + -8;
                    puVar1 = puVar38 + 0xe;
                    puVar38 = puVar38 + 0x2c;
                    uVar65 = *puVar2 * *(int *)(*(long *)(lVar69 + 0x10) +
                                               (ulong)(uVar19 + *(int *)(lVar69 + 4) * uVar18) *
                                               0x10);
                    uVar12 = *puVar1 * *(int *)(*(long *)(lVar64 + 0x10) +
                                               (ulong)(uVar19 + *(int *)(lVar64 + 4) * uVar18) *
                                               0x10);
                    if (uVar65 <= uVar66) {
                      uVar65 = uVar66;
                    }
                    if (uVar12 <= uVar73) {
                      uVar12 = uVar73;
                    }
                    uVar53 = uVar53 - 2;
                    uVar66 = uVar65;
                    uVar73 = uVar12;
                  } while (uVar53 != 0);
                  if (uVar65 <= uVar12) {
                    uVar65 = uVar12;
                  }
                  uVar66 = uVar65;
                  if (uVar43 == uVar30) goto LAB_00a602a0;
                }
                do {
                  lVar69 = lVar36 + (ulong)*(uint *)(lVar29 + 0x18) * 0x18;
                  piVar51 = (int *)(lVar29 + 0x50);
                  lVar29 = lVar29 + 0x58;
                  uVar65 = *piVar51 *
                           *(int *)(*(long *)(lVar69 + 0x10) +
                                   (ulong)(uVar19 + *(int *)(lVar69 + 4) * uVar18) * 0x10);
                  if (uVar65 <= uVar66) {
                    uVar65 = uVar66;
                  }
                  uVar66 = uVar65;
                } while (lVar29 != lVar49);
              }
LAB_00a602a0:
              uVar32 = uVar65 + uVar32;
              plVar31 = plVar31 + 1;
            } while (plVar31 != plVar40);
          }
          uVar67 = uVar67 + 1;
          if (uVar32 <= uVar27) {
            uVar32 = uVar27;
          }
          uVar27 = uVar32;
        } while (uVar67 != uVar68);
        uVar27 = 0;
        if (uVar41 != 0) {
          uVar27 = uVar19 / uVar41;
        }
        lVar69 = (ulong)uVar58 * 0x20 + -0x3d0;
        iVar35 = iVar35 + uVar32;
        uVar19 = uVar19 + 1;
        *(uint *)((long)&local_3d0 + (ulong)uVar27 * 4 + lVar69 + 0x3d0) =
             *(int *)((long)&local_3d0 + (ulong)uVar27 * 4 + lVar69 + 0x3d0) + uVar32;
      } while (uVar19 != param_1);
      uVar18 = uVar18 + 1;
    } while (uVar18 != param_1);
    *(int *)(this + 0xa0) = iVar35;
  }
  if (param_2 != 0) {
    uVar67 = 0;
    uVar43 = (ulong)param_2;
    puVar60 = &local_3d0;
    uVar68 = uVar43;
    puVar57 = puVar60;
    do {
      do {
        uVar18 = *(uint *)puVar60;
        if (*(uint *)puVar60 <= (uint)local_3d0) {
          uVar18 = (uint)local_3d0;
        }
        uVar68 = uVar68 - 1;
        local_3d0._0_4_ = uVar18;
        puVar60 = puVar60 + 4;
      } while (uVar68 != 0);
      uVar67 = uVar67 + 1;
      puVar60 = (undefined8 *)((long)puVar57 + 4);
      uVar68 = uVar43;
      puVar57 = puVar60;
    } while (uVar67 != uVar43);
  }
  *(uint *)(this + 0xa4) = (uint)local_3d0;
  *(float *)(this + 0xa8) = fVar87;
  this[0x98] = local_54c._0_1_;
  if (local_458 != (long **)0x0) {
    local_450 = local_458;
    operator_delete(local_458);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<IndexedTriangleSet*,unsigned_int>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,unsigned_int>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<IndexedTriangleSet*,unsigned_int>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,unsigned_int>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,unsigned_int>>>
             *)&local_440,(__tree_node *)local_438);
  if (*(long *)(lVar13 + 0x28) != local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


