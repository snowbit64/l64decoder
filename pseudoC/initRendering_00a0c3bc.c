// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initRendering
// Entry Point: 00a0c3bc
// Size: 2008 bytes
// Signature: undefined __thiscall initRendering(IndirectLightRenderController * this, AtmosphereRenderControllerShared * param_1, uint param_2)


/* IndirectLightRenderController::initRendering(AtmosphereRenderControllerShared*, unsigned int) */

void __thiscall
IndirectLightRenderController::initRendering
          (IndirectLightRenderController *this,AtmosphereRenderControllerShared *param_1,
          uint param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  DisplayTexture *this_00;
  AtmosphereRenderController *this_01;
  ScreenSpaceProcessor *pSVar8;
  ulong uVar9;
  RenderTextureController *this_02;
  void *pvVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  PIXEL_FORMAT PVar14;
  uint uVar15;
  void *pvVar16;
  size_t __n;
  ulong uVar17;
  double dVar18;
  uint in_stack_fffffffffffffa70;
  uint in_stack_fffffffffffffad0;
  uint in_stack_fffffffffffffb08;
  uint in_stack_fffffffffffffb14;
  undefined4 local_4b8 [2];
  float *local_4b0;
  undefined4 local_4a8;
  float afStack_4a0 [16];
  float local_460;
  undefined4 local_45c;
  float local_458;
  float local_454;
  float local_450;
  undefined4 local_44c;
  Matrix4x4 aMStack_448 [64];
  Matrix4x4 aMStack_408 [64];
  Matrix4x4 aMStack_3c8 [64];
  Matrix4x4 aMStack_388 [64];
  Matrix4x4 aMStack_348 [64];
  Matrix4x4 aMStack_308 [64];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  char *local_2b0;
  float afStack_288 [16];
  float afStack_248 [16];
  float afStack_208 [16];
  float afStack_1c8 [16];
  float afStack_188 [16];
  undefined8 local_148;
  undefined2 local_140;
  int local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  char *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  ulong local_d4;
  uint local_cc;
  uint uStack_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  char *local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  lVar4 = EngineManager::getInstance();
  uVar15 = param_2 - 1 | param_2 - 1 >> 1;
  uVar15 = uVar15 | uVar15 >> 2;
  uVar15 = uVar15 | uVar15 >> 4;
  uVar15 = uVar15 | uVar15 >> 8;
  uVar15 = uVar15 | uVar15 >> 0x10;
  uVar11 = uVar15 + 1;
  if (uVar15 == 0xffffffff) {
    uVar11 = 1;
  }
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  EnvMapBlender::update();
  if (((this[0xc] == (IndirectLightRenderController)0x0) || (uVar11 != *(uint *)this)) ||
     (this[0xd] != *(IndirectLightRenderController *)(lVar4 + 0x24b))) {
    cleanup();
    this[0xc] = (IndirectLightRenderController)0x1;
    dVar18 = log2((double)(ulong)uVar11);
    *(uint *)this = uVar11;
    uVar11 = (uint)(dVar18 + 0.5);
    if (4 < uVar11) {
      uVar11 = 5;
    }
    if (uVar11 < 3) {
      uVar11 = 2;
    }
    *(uint *)(this + 4) = uVar11;
    *(uint *)(this + 8) = uVar11 - 1;
    uVar5 = (**(code **)(**(long **)(this + 0x18) + 0x138))();
    lVar6 = (**(code **)(**(long **)(this + 0x18) + 0x28))();
    cVar1 = *(char *)(lVar6 + 0x95);
    uVar11 = *(uint *)(lVar4 + 0x24c);
    this[0xd] = *(IndirectLightRenderController *)(lVar4 + 0x24b);
    local_d4 = 0xffffffffffffffff;
    PVar14 = 0x1d;
    if (cVar1 != '\0') {
      PVar14 = 0x1e;
    }
    local_c4 = 0x100000001;
    if (1 < uVar11) {
      uVar11 = 2;
    }
    local_e0 = 0;
    local_d8 = 0;
    uStack_9c = 0x3f80000000000000;
    local_a4 = 0;
    local_bc = 0;
    local_b4 = 0x16;
    local_b0 = 0;
    local_94 = 0;
    local_a8 = 1;
    local_cc = param_2;
    uStack_c8 = param_2;
    RenderDeviceManager::getInstance();
    iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
    if (iVar3 == 0) {
      local_d4 = local_d4 & 0xffffffff00000000;
    }
    local_b8 = 2;
    local_ac = 0x410;
    local_90 = "Indirect Lighting Cube RT";
    uVar7 = (**(code **)(**(long **)(this + 0x18) + 0x100))(*(long **)(this + 0x18),uVar5,&local_e0)
    ;
    *(undefined8 *)(this + 0x188) = uVar7;
    this_00 = (DisplayTexture *)operator_new(0x28);
                    /* try { // try from 00a0c58c to 00a0c5a3 has its CatchHandler @ 00a0cba8 */
    DisplayTexture::DisplayTexture(this_00,param_2,param_2,1.0,0,true);
    *(DisplayTexture **)(this + 0x20) = this_00;
    *(undefined8 *)(this_00 + 0x20) = *(undefined8 *)(this + 0x188);
    this_01 = (AtmosphereRenderController *)operator_new(0x9a0);
                    /* try { // try from 00a0c5c0 to 00a0c5cf has its CatchHandler @ 00a0cba4 */
    AtmosphereRenderController::AtmosphereRenderController
              (this_01,*(IRenderDevice **)(this + 0x18),param_1,
               "AtmosphereRenderController used for IndirectLightRenderController");
    *(AtmosphereRenderController **)(this + 0x38) = this_01;
    AtmosphereRenderController::init
              (this_01,*(IRenderDevice **)(this + 0x18),uVar11,param_2,param_2,false);
    uStack_e8 = 0x3f8000003f800000;
    local_f0 = 0;
    pSVar8 = (ScreenSpaceProcessor *)operator_new(0x1b98);
                    /* try { // try from 00a0c614 to 00a0c61f has its CatchHandler @ 00a0cb98 */
    ScreenSpaceProcessor::ScreenSpaceProcessor
              (pSVar8,*(AtmosphereRenderController **)(this + 0x38),*(IDisplay **)(this + 0x20),0,
               *(IRenderDevice **)(this + 0x18),(float *)&local_f0);
    *(ScreenSpaceProcessor **)(this + 0x30) = pSVar8;
    uVar9 = ScreenSpaceProcessor::init
                      ((IRenderDevice *)pSVar8,(uint)*(undefined8 *)(this + 0x18),param_2,param_2,
                       param_2,(float *)(ulong)param_2,0,true,in_stack_fffffffffffffa70 & 0xffffff00
                       ,PVar14,1,0,5,0,4,0,0,0,5,false,in_stack_fffffffffffffad0 & 0xffffff00,
                       SUB41(uVar11,0),false,true,false,1.0,true,false,
                       in_stack_fffffffffffffb08 & 0xffffff00,
                       (char *)((ulong)in_stack_fffffffffffffb14 << 0x20));
    if ((uVar9 & 1) == 0) {
      pSVar8 = *(ScreenSpaceProcessor **)(this + 0x30);
      if (pSVar8 != (ScreenSpaceProcessor *)0x0) {
        ScreenSpaceProcessor::~ScreenSpaceProcessor(pSVar8);
        operator_delete(pSVar8);
      }
      *(undefined8 *)(this + 0x30) = 0;
      if (*(long **)(this + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x20) + 8))();
      }
      uVar5 = 0;
      *(undefined8 *)(this + 0x20) = 0;
    }
    else {
      if (this[0xd] != (IndirectLightRenderController)0x0) {
        this_02 = (RenderTextureController *)operator_new(0x80);
                    /* try { // try from 00a0c6d4 to 00a0c6f3 has its CatchHandler @ 00a0cb94 */
        RenderTextureController::RenderTextureController
                  (this_02,*(IRenderDevice **)(this + 0x18),param_2,param_2,1.0,0,0x16,false,PVar14)
        ;
        *(RenderTextureController **)(this + 0x28) = this_02;
        uVar9 = createShaders();
        if ((uVar9 & 1) == 0) {
          uVar5 = 0;
          goto LAB_00a0cb40;
        }
        local_134 = *(undefined4 *)this;
        local_148 = 0;
        local_140 = 0;
        local_13c = *(int *)(this + 4) + -1;
        local_12c = 0x100000001;
        local_124 = 0;
        local_fc = 0;
        uStack_138 = 0xffffffff;
        uStack_104 = 0x3f80000000000000;
        local_10c = 0;
        local_118 = 0;
        local_114 = 0x100002401;
        local_120 = 0x1600000002;
        local_f8 = "Indirect Lighting Prefiltered Cube RT";
        uStack_130 = local_134;
        uVar7 = (**(code **)(**(long **)(this + 0x18) + 0x100))
                          (*(long **)(this + 0x18),uVar5,&local_148);
        *(undefined8 *)(this + 0x180) = uVar7;
        RenderDeviceUtil::makeCubeFaceMatrix(0,(float *)&local_2c8);
        Matrix4x4::invert(aMStack_448,(Matrix4x4 *)&local_2c8);
        RenderDeviceUtil::makeCubeFaceMatrix(1,afStack_288);
        Matrix4x4::invert(aMStack_408,(Matrix4x4 *)afStack_288);
        RenderDeviceUtil::makeCubeFaceMatrix(2,afStack_248);
        Matrix4x4::invert(aMStack_3c8,(Matrix4x4 *)afStack_248);
        RenderDeviceUtil::makeCubeFaceMatrix(3,afStack_208);
        Matrix4x4::invert(aMStack_388,(Matrix4x4 *)afStack_208);
        RenderDeviceUtil::makeCubeFaceMatrix(4,afStack_1c8);
        Matrix4x4::invert(aMStack_348,(Matrix4x4 *)afStack_1c8);
        RenderDeviceUtil::makeCubeFaceMatrix(5,afStack_188);
        Matrix4x4::invert(aMStack_308,(Matrix4x4 *)afStack_188);
        uVar9 = 0;
        uVar11 = *(uint *)(this + 8);
        do {
          if (uVar11 != 0) {
            uVar15 = 0;
            do {
              ShaderStructLayout::setMatrix4x4(afStack_4a0,aMStack_448 + uVar9 * 0x40);
              local_45c = 0x3f99999a;
              local_450 = (float)(ulong)(0x100 >> (ulong)(uVar15 & 0x1f));
              local_460 = (float)NEON_ucvtf(*(undefined4 *)(this + 8));
              local_4a8 = 1;
              local_458 = (float)(ulong)uVar15;
              local_460 = local_460 + -1.0;
              local_44c = 0x43800000;
              local_4b8[0] = 0x58;
              local_4b0 = afStack_4a0;
              local_454 = (float)(uVar9 & 0xffffffff);
              uVar7 = (**(code **)(**(long **)(this + 0x18) + 0x118))
                                (*(long **)(this + 0x18),uVar5,local_4b8);
              puVar12 = *(undefined8 **)(this + 0x228);
              if (puVar12 == *(undefined8 **)(this + 0x230)) {
                pvVar16 = *(void **)(this + 0x220);
                uVar17 = (long)puVar12 - (long)pvVar16;
                uVar13 = ((long)uVar17 >> 3) + 1;
                if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (uVar13 <= (ulong)((long)uVar17 >> 2)) {
                  uVar13 = (long)uVar17 >> 2;
                }
                if (0x7ffffffffffffff7 < uVar17) {
                  uVar13 = 0x1fffffffffffffff;
                }
                if (uVar13 == 0) {
                  pvVar10 = (void *)0x0;
                }
                else {
                  if (uVar13 >> 0x3d != 0) goto LAB_00a0cb7c;
                  pvVar10 = operator_new(uVar13 << 3);
                }
                puVar12 = (undefined8 *)((long)pvVar10 + ((long)uVar17 >> 3) * 8);
                *puVar12 = uVar7;
                if (0 < (long)uVar17) {
                  memcpy(pvVar10,pvVar16,uVar17);
                }
                *(void **)(this + 0x220) = pvVar10;
                *(undefined8 **)(this + 0x228) = puVar12 + 1;
                *(void **)(this + 0x230) = (void *)((long)pvVar10 + uVar13 * 8);
                if (pvVar16 != (void *)0x0) {
                  operator_delete(pvVar16);
                }
              }
              else {
                *puVar12 = uVar7;
                *(undefined8 **)(this + 0x228) = puVar12 + 1;
              }
              uVar11 = *(uint *)(this + 8);
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar11);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != 6);
      }
      local_2c8 = 0;
      local_2b0 = "Sky SH Struct Buffer";
      local_2c0 = 0xd00000004;
      local_2b8 = 0x2008;
      uVar5 = (**(code **)(**(long **)(this + 0x18) + 0x120))
                        (*(long **)(this + 0x18),uVar5,&local_2c8);
      iVar3 = 3;
      *(undefined8 *)(this + 0x208) = uVar5;
      do {
        uVar5 = (**(code **)(**(long **)(this + 0x18) + 0x148))();
        uVar7 = (**(code **)(**(long **)(this + 0x18) + 0x150))();
        puVar12 = *(undefined8 **)(this + 0x1f8);
        if (puVar12 < *(undefined8 **)(this + 0x200)) {
          *puVar12 = uVar5;
          puVar12[1] = uVar7;
          *(undefined8 **)(this + 0x1f8) = puVar12 + 2;
        }
        else {
          pvVar16 = *(void **)(this + 0x1f0);
          __n = (long)puVar12 - (long)pvVar16;
          uVar9 = ((long)__n >> 4) + 1;
          if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar13 = (long)*(undefined8 **)(this + 0x200) - (long)pvVar16;
          uVar17 = (long)uVar13 >> 3;
          if (uVar9 <= uVar17) {
            uVar9 = uVar17;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar9 = 0xfffffffffffffff;
          }
          if (uVar9 >> 0x3c != 0) {
LAB_00a0cb7c:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar10 = operator_new(uVar9 * 0x10);
          puVar12 = (undefined8 *)((long)pvVar10 + ((long)__n >> 4) * 0x10);
          *puVar12 = uVar5;
          puVar12[1] = uVar7;
          if (0 < (long)__n) {
            memcpy(pvVar10,pvVar16,__n);
          }
          *(void **)(this + 0x1f0) = pvVar10;
          *(undefined8 **)(this + 0x1f8) = puVar12 + 2;
          *(void **)(this + 0x200) = (void *)((long)pvVar10 + uVar9 * 0x10);
          if (pvVar16 != (void *)0x0) {
            operator_delete(pvVar16);
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 1;
  }
LAB_00a0cb40:
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


