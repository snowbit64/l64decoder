// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShaders
// Entry Point: 00a3c458
// Size: 3040 bytes
// Signature: undefined __thiscall createShaders(ScreenSpaceProcessor * this, IRenderDevice * param_1)


/* ScreenSpaceProcessor::createShaders(IRenderDevice*) */

undefined4 __thiscall
ScreenSpaceProcessor::createShaders(ScreenSpaceProcessor *this,IRenderDevice *param_1)

{
  ScreenSpaceProcessor SVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  COLORSPACE CVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  byte local_158 [16];
  char *local_148;
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  AdhocShader::unload();
  uVar9 = AdhocShader::load((AdhocShader *)(this + 0x58),param_1,"copytexture.cg",(char *)0x0,0,
                            *(ShaderStructLayout **)(this + 0x40),
                            (uint)((ulong)(*(long *)(this + 0x48) -
                                          (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
  if ((uVar9 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00a3ce94 to 00a3ce9f has its CatchHandler @ 00a3d04c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar11 = "Error: Cannot load copytexture.cg\n";
LAB_00a3c79c:
    puVar10 = &LogManager::getInstance()::singletonLogManager;
LAB_00a3c7a0:
    LogManager::errorf((char *)puVar10,pcVar11);
  }
  else {
    AdhocShader::unload();
    uVar9 = AdhocShader::load((AdhocShader *)(this + 0x158),param_1,"copytexture.cg",
                              "#define UV_SCALING\n#define BLUE_NOISE_DITHERING\n",1,
                              *(ShaderStructLayout **)(this + 0x40),
                              (uint)((ulong)(*(long *)(this + 0x48) -
                                            (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
    if ((uVar9 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 00a3cedc to 00a3cee7 has its CatchHandler @ 00a3d048 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar11 = "Error: Cannot load copytexture.cg (scaled variation)\n";
      goto LAB_00a3c79c;
    }
    iVar8 = *(int *)(this + 0x1b48);
    if (1 < iVar8 - 1U) {
LAB_00a3c588:
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      FUN_00a3b120(&local_120,0x20,0x20,"#define HISTOGRAM_BINS %u\n",0x100);
      AdhocShader::unload();
      uVar9 = AdhocShader::load((AdhocShader *)(this + 0x458),param_1,"postfx/histogram_cs.cg",
                                (char *)&local_120,0,*(ShaderStructLayout **)(this + 0x40),
                                (uint)((ulong)(*(long *)(this + 0x48) -
                                              (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
      if ((uVar9 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 00a3cf24 to 00a3cf2f has its CatchHandler @ 00a3d044 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar11 = "Error: Cannot load postfx/histogram_cs.cg\n";
        goto LAB_00a3c79c;
      }
      AdhocShader::unload();
      uVar9 = AdhocShader::load((AdhocShader *)(this + 0x558),param_1,"postfx/exposure_cs.cg",
                                (char *)&local_120,0,*(ShaderStructLayout **)(this + 0x40),
                                (uint)((ulong)(*(long *)(this + 0x48) -
                                              (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
      if ((uVar9 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 00a3cfb4 to 00a3cfbf has its CatchHandler @ 00a3d03c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar11 = "Error: Cannot load postfx/exposure_cs.cg\n";
        goto LAB_00a3c79c;
      }
      AdhocShader::unload();
      uVar9 = AdhocShader::load((AdhocShader *)(this + 0x858),param_1,"postfx/blur.cg",
                                "#define H_BLUR\n",0,*(ShaderStructLayout **)(this + 0x40),
                                (uint)((ulong)(*(long *)(this + 0x48) -
                                              (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
      if ((uVar9 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 00a3cffc to 00a3d007 has its CatchHandler @ 00a3d038 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar11 = "Error: Cannot load postfx/blur.cg, H_BLUR\n";
        goto LAB_00a3c79c;
      }
      AdhocShader::unload();
      uVar9 = AdhocShader::load((AdhocShader *)(this + 0x958),param_1,"postfx/blur.cg",
                                "#define V_BLUR\n",1,*(ShaderStructLayout **)(this + 0x40),
                                (uint)((ulong)(*(long *)(this + 0x48) -
                                              (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
      if ((uVar9 & 1) == 0) {
        puVar10 = (undefined8 *)LogManager::getInstance();
        pcVar11 = "Error: Cannot load postfx/blur.cg, V_BLUR\n";
      }
      else {
        if (*(int *)(this + 0x1b3c) != 0) {
          SVar1 = this[0x1b64];
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = (char *)0x0;
          if (SVar1 == (ScreenSpaceProcessor)0x0) {
            local_100._0_1_ = 0;
          }
          else {
                    /* try { // try from 00a3c6b4 to 00a3c6c3 has its CatchHandler @ 00a3d0b8 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_100);
          }
          pcVar11 = (char *)((ulong)&local_100 | 1);
          if (((byte)local_100 & 1) != 0) {
            pcVar11 = local_f0;
          }
                    /* try { // try from 00a3c808 to 00a3c843 has its CatchHandler @ 00a3d0b8 */
          uVar9 = createShaderFromFile
                            (this,"postfx/bloom.cg",pcVar11,
                             (uint)(SVar1 != (ScreenSpaceProcessor)0x0),param_1,
                             (AdhocShader *)(this + 0x758));
          if ((uVar9 & 1) == 0) {
                    /* try { // try from 00a3c96c to 00a3c97b has its CatchHandler @ 00a3d0b8 */
            pcVar11 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar11,"Error: Cannot load postfx/bloom.cg\n");
          }
          else {
            uVar9 = createShaderFromFile
                              (this,"postfx/blur.cg","#define V_BLUR\n#define ADDITIVE_TEXTURE\n",2,
                               param_1,(AdhocShader *)(this + 0xb58));
            if ((uVar9 & 1) != 0) {
              if ((local_100 & 1) != 0) {
                operator_delete(local_f0);
              }
              goto LAB_00a3c858;
            }
                    /* try { // try from 00a3c990 to 00a3c99f has its CatchHandler @ 00a3d0b8 */
            pcVar11 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar11,
                               "Error: Cannot load postfx/blur.cg, V_BLUR, ADDITIVE_TEXTURE\n");
          }
          if ((local_100 & 1) != 0) {
            operator_delete(local_f0);
          }
          goto LAB_00a3c7a4;
        }
LAB_00a3c858:
        if (this[0x1b44] == (ScreenSpaceProcessor)0x0) {
LAB_00a3ca10:
          CVar12 = *(COLORSPACE *)(this + 0x1864);
          ColorspaceUtil::getColorspaceMacros(CVar12,"");
          pcVar11 = (char *)((ulong)local_158 | 1);
          if ((local_158[0] & 1) != 0) {
            pcVar11 = local_148;
          }
                    /* try { // try from 00a3ca44 to 00a3ca5b has its CatchHandler @ 00a3d070 */
          uVar9 = createShaderFromFile
                            (this,"postfx/lutgrading.cg",pcVar11,CVar12,param_1,
                             (AdhocShader *)(this + 0xc58));
          if ((uVar9 & 1) == 0) {
                    /* try { // try from 00a3cc20 to 00a3cc2f has its CatchHandler @ 00a3d070 */
            pcVar11 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar11,"Error: Cannot load postfx/lutgrading.cg\n");
LAB_00a3ce6c:
            uVar13 = 0;
          }
          else {
            bVar5 = false;
            lVar15 = 0;
            bVar7 = true;
            do {
              bVar4 = bVar7;
              iVar8 = *(int *)(this + 0x1b3c);
              local_100 = 0;
              uStack_f8 = 0;
              local_f0 = (char *)0x0;
              if (iVar8 != 0) {
                    /* try { // try from 00a3cab0 to 00a3caff has its CatchHandler @ 00a3d0cc */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_100);
              }
              uVar14 = (uint)(iVar8 != 0);
              if (this[0x1b64] != (ScreenSpaceProcessor)0x0) {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_100);
                uVar14 = uVar14 | 2;
              }
              if (*(int *)(this + 0x1b5c) == 0) {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_100);
                uVar14 = uVar14 | 4;
              }
              CVar12 = *(COLORSPACE *)(this + 0x1864);
              if (bVar4) {
                if (CVar12 - 5 < 2) {
                  CVar12 = 5;
                  if ((*(uint *)(this + 7000) | *(uint *)(this + 0x1b5c)) != 0) {
                    CVar12 = 7;
                  }
                }
                else if ((CVar12 - 2 < 2) &&
                        (CVar12 = 4, (*(uint *)(this + 7000) | *(uint *)(this + 0x1b5c)) == 0)) {
                  CVar12 = 1;
                }
              }
                    /* try { // try from 00a3cb5c to 00a3cb6f has its CatchHandler @ 00a3d080 */
              ColorspaceUtil::getColorspaceMacros(CVar12,"");
              pvVar3 = (void *)((ulong)&local_140 | 1);
              if ((local_140 & 1) != 0) {
                pvVar3 = local_130;
              }
                    /* try { // try from 00a3cb8c to 00a3cb93 has its CatchHandler @ 00a3d084 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_100,(ulong)pvVar3);
              if ((local_140 & 1) != 0) {
                operator_delete(local_130);
              }
              uVar14 = uVar14 | CVar12 << 3;
              if (bVar5) {
                    /* try { // try from 00a3cbac to 00a3cc07 has its CatchHandler @ 00a3d0d0 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_100);
                uVar14 = uVar14 | 0x40;
              }
              pcVar6 = local_f0;
              uVar9 = local_100;
              AdhocShader::unload();
              pcVar11 = (char *)((ulong)&local_100 | 1);
              if ((uVar9 & 1) != 0) {
                pcVar11 = pcVar6;
              }
              uVar9 = AdhocShader::load((AdhocShader *)(this + lVar15 * 0x100 + 0x1658),param_1,
                                        "postfx/tonemapping.cg",pcVar11,uVar14,
                                        *(ShaderStructLayout **)(this + 0x40),
                                        (uint)((ulong)(*(long *)(this + 0x48) -
                                                      (long)*(ShaderStructLayout **)(this + 0x40))
                                              >> 6));
              if ((uVar9 & 1) == 0) {
                    /* try { // try from 00a3cc34 to 00a3cc43 has its CatchHandler @ 00a3d068 */
                pcVar11 = (char *)LogManager::getInstance();
                LogManager::errorf(pcVar11,"Error: Cannot load postfx/tonemapping.cg\n");
                if ((local_100 & 1) != 0) {
                  operator_delete(local_f0);
                }
                goto LAB_00a3ce6c;
              }
              if ((local_100 & 1) != 0) {
                operator_delete(local_f0);
              }
              bVar5 = true;
              lVar15 = 1;
              bVar7 = false;
            } while (bVar4);
            uVar14 = (uint)(1 < *(uint *)(this + 0x1b60));
            uStack_98 = 0;
            local_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_b8 = 0;
            local_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_e8 = 0;
            local_f0 = (char *)0x0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            pcVar11 = "#define MSAA\n";
            if (*(uint *)(this + 0x1b60) < 2) {
              pcVar11 = "";
            }
            uStack_f8 = 0;
            local_100 = 0;
                    /* try { // try from 00a3cc94 to 00a3cd43 has its CatchHandler @ 00a3d06c */
            iVar8 = FUN_00a3b120(&local_100,0x80,0x80,pcVar11);
            if (((*(int *)(this + 0x1b40) != 0) && (*(float *)(this + 0x1b68) < 1.0)) ||
               ((*(long *)(this + 0x1b70) != 0 && (*(int *)(*(long *)(this + 0x1b70) + 0x97c) != 0))
               )) {
              uVar14 = 2;
              if (*(uint *)(this + 0x1b60) < 2) {
                lVar15 = 0x80;
              }
              else {
                uVar14 = 3;
                lVar15 = __strlen_chk("#define MSAA\n",0xe);
                lVar15 = 0x80 - lVar15;
              }
              FUN_00a3b120((long)&local_100 + (long)iVar8,0xffffffffffffffff,lVar15,
                           "#define DOWNSAMPLE_DEPTH_AND_NORMALS\n");
            }
            uVar9 = createShaderFromFile
                              (this,"postfx/depthbufferlinearize_cs.cg",(char *)&local_100,uVar14,
                               param_1,(AdhocShader *)(this + 0x1258));
            if ((uVar9 & 1) == 0) {
                    /* try { // try from 00a3cd80 to 00a3cd93 has its CatchHandler @ 00a3d06c */
              pcVar11 = (char *)LogManager::getInstance();
              LogManager::errorf(pcVar11,
                                 "Error: Cannot load postfx/depthbufferlinearize_cs.cg variant %u\n"
                                 ,0);
              uVar13 = 0;
            }
            else {
              if (*(int *)(this + 0x1b40) != 0) {
                SVar1 = this[0x1b79];
                uStack_138 = 0;
                local_140 = 0;
                uStack_128 = 0;
                local_130 = (void *)0x0;
                if (SVar1 != (ScreenSpaceProcessor)0x0) {
                    /* try { // try from 00a3cd60 to 00a3cd77 has its CatchHandler @ 00a3d064 */
                  FUN_00a3b120(&local_140,0x20,0x20,"#define TEMPORAL\n");
                }
                    /* try { // try from 00a3cdc0 to 00a3ce6b has its CatchHandler @ 00a3d064 */
                uVar9 = createShaderFromFile
                                  (this,"postfx/sao.cg",(char *)&local_140,
                                   (uint)(SVar1 != (ScreenSpaceProcessor)0x0),param_1,
                                   (AdhocShader *)(this + 0x1358));
                if ((uVar9 & 1) == 0) {
                  pcVar11 = (char *)LogManager::getInstance();
                  LogManager::errorf(pcVar11,"Error: Cannot load postfx/sao.cg\n");
                }
                else {
                  uVar9 = createShaderFromFile
                                    (this,"postfx/saoblur.cg",(char *)0x0,0,param_1,
                                     (AdhocShader *)(this + 0x1458));
                  if ((uVar9 & 1) == 0) {
                    pcVar11 = (char *)LogManager::getInstance();
                    LogManager::errorf(pcVar11,"Error: Cannot load postfx/saoblur.cg\n");
                  }
                  else {
                    uVar9 = createShaderFromFile
                                      (this,"postfx/saoupsample.cg",(char *)0x0,0,param_1,
                                       (AdhocShader *)(this + 0x1558));
                    if ((uVar9 & 1) != 0) goto LAB_00a3ce2c;
                    pcVar11 = (char *)LogManager::getInstance();
                    LogManager::errorf(pcVar11,"Error: Cannot load postfx/saoupsample.cg\n");
                  }
                }
                goto LAB_00a3ce6c;
              }
LAB_00a3ce2c:
              uVar13 = 1;
            }
          }
          if ((local_158[0] & 1) != 0) {
            operator_delete(local_148);
          }
          goto LAB_00a3c7a8;
        }
        uVar9 = createShaderFromFile
                          (this,"postfx/initnearcoc.cg",(char *)0x0,0,param_1,
                           (AdhocShader *)(this + 0xd58));
        if ((uVar9 & 1) == 0) {
          puVar10 = (undefined8 *)LogManager::getInstance();
          pcVar11 = "Error: Cannot load postfx/initnearcoc.cg\n";
        }
        else {
          uVar9 = createShaderFromFile
                            (this,"postfx/computenearcoc.cg",(char *)0x0,0,param_1,
                             (AdhocShader *)(this + 0xe58));
          if ((uVar9 & 1) == 0) {
            puVar10 = (undefined8 *)LogManager::getInstance();
            pcVar11 = "Error: Cannot load postfx/computenearcoc.cg\n";
          }
          else {
            uVar9 = createShaderFromFile
                              (this,"postfx/smallblur.cg",(char *)0x0,0,param_1,
                               (AdhocShader *)(this + 0xf58));
            if ((uVar9 & 1) == 0) {
              puVar10 = (undefined8 *)LogManager::getInstance();
              pcVar11 = "Error: Cannot load postfx/smallblur.cg\n";
            }
            else {
              pcVar11 = "#define MSAA";
              if (*(uint *)(this + 0x1b60) < 2) {
                pcVar11 = "";
              }
              uStack_f8 = 0;
              local_100 = 0;
              uStack_e8 = 0;
              local_f0 = (char *)0x0;
              FUN_00a3b120(&local_100,0x20,0x20,&DAT_004d33bb,pcVar11);
              uVar14 = 1;
              if (1 < *(uint *)(this + 0x1b60)) {
                uVar14 = 2;
              }
              uVar9 = createShaderFromFile
                                (this,"postfx/dofcalccoc.cg",(char *)&local_100,uVar14,param_1,
                                 (AdhocShader *)(this + 0x1158));
              if ((uVar9 & 1) != 0) {
                SVar1 = this[0x1b78];
                uStack_138 = 0;
                local_140 = 0;
                uStack_128 = 0;
                local_130 = (void *)0x0;
                if (SVar1 != (ScreenSpaceProcessor)0x0) {
                  FUN_00a3b120(&local_140,0x20,0x20,"#define TAA\n");
                }
                uVar14 = (uint)(SVar1 != (ScreenSpaceProcessor)0x0);
                uVar9 = createShaderFromFile
                                  (this,"postfx/applydof.cg",(char *)&local_140,uVar14,param_1,
                                   (AdhocShader *)(this + 0x1058));
                if ((uVar9 & 1) == 0) {
                  pcVar11 = (char *)LogManager::getInstance();
                  LogManager::errorf(pcVar11,"Error: Cannot load postfx/applydof.cg, variation %u\n"
                                     ,(ulong)uVar14);
                  goto LAB_00a3c7a4;
                }
                goto LAB_00a3ca10;
              }
              puVar10 = (undefined8 *)LogManager::getInstance();
              pcVar11 = "Error: Cannot load postfx/dofcalccoc.cg\n";
            }
          }
        }
      }
      goto LAB_00a3c7a0;
    }
    uVar14 = *(uint *)(this + 0x1b60);
    pcVar11 = "#define MSAA";
    if (uVar14 < 2) {
      pcVar11 = "";
    }
    FUN_00a3b120(&local_100,0x80,0x80,"#define TAA_QUALITY %u\n%s\n",iVar8 != 2,pcVar11);
    uVar9 = AdhocShader::load((AdhocShader *)(this + 600),param_1,"postfx/taa_cs.cg",
                              (char *)&local_100,(uint)(iVar8 != 2) | (uint)(1 < uVar14) << 1,
                              *(ShaderStructLayout **)(this + 0x40),
                              (uint)((ulong)(*(long *)(this + 0x48) -
                                            (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
    if ((uVar9 & 1) != 0) goto LAB_00a3c588;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00a3cf6c to 00a3cf77 has its CatchHandler @ 00a3d040 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Cannot load postfx/taa_cs.cg quality level %u\n",
                       (ulong)*(uint *)(this + 0x1b48));
  }
LAB_00a3c7a4:
  uVar13 = 0;
LAB_00a3c7a8:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


