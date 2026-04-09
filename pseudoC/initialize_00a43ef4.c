// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00a43ef4
// Size: 1744 bytes
// Signature: undefined __thiscall initialize(FFXShadowDenoiser * this, bool param_1)


/* FFXShadowDenoiser::initialize(bool) */

void __thiscall FFXShadowDenoiser::initialize(FFXShadowDenoiser *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 local_c0;
  char *pcStack_b8;
  ulong local_b0;
  undefined4 local_a8;
  int local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar6 = (**(code **)(**(long **)(this + 0x10) + 0x138))();
  if (param_1) {
    if (*(long **)(this + 0x128) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x128) + 8))();
    }
    if (*(long **)(this + 0x150) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x150) + 8))();
    }
    if (*(long **)(this + 0x158) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x158) + 8))();
    }
    if (*(long **)(this + 0x160) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x160) + 8))();
    }
    if (*(long **)(this + 0x168) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x168) + 8))();
    }
    if (*(long **)(this + 0x170) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x170) + 8))();
    }
    local_b0 = 0;
    local_a8._0_2_ = 0;
    local_80 = 0;
    local_84 = 3;
    uStack_9c = 0x200;
    uStack_98 = 0x200;
    local_a4 = 0xffffffff;
    uStack_a0 = 0xffffffff;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_94 = 1;
    uStack_90 = 1;
    local_7c = 0x100000001;
    uStack_6c = 0x3f80000000000000;
    local_74 = 0;
    local_64 = 0;
    local_60 = (char *)0x0;
    RenderDeviceUtil::buildRenderTargetDesc
              (*(uint *)(this + 0x18),*(uint *)(this + 0x1c),1,(float *)0x0,0x16,false,0,false,
               0x2000,"Moments 0",(TextureObjectDesc *)&local_b0);
    uVar7 = (**(code **)(**(long **)(this + 0x10) + 0x100))(*(long **)(this + 0x10),uVar6,&local_b0)
    ;
    *(undefined8 *)(this + 0x168) = uVar7;
    local_60 = "Moments 1";
    uVar7 = (**(code **)(**(long **)(this + 0x10) + 0x100))(*(long **)(this + 0x10),uVar6,&local_b0)
    ;
    *(undefined8 *)(this + 0x170) = uVar7;
    uStack_9c = 0x200;
    uStack_98 = 0x200;
    local_a4 = 0xffffffff;
    uStack_a0 = 0xffffffff;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_94 = 1;
    uStack_90 = 1;
    local_b0 = 0;
    local_a8 = (uint)local_a8._2_2_ << 0x10;
    local_84 = 3;
    local_80 = 0;
    local_7c = 0x100000001;
    uStack_6c = 0x3f80000000000000;
    local_74 = 0;
    local_64 = 0;
    local_60 = (char *)0x0;
    RenderDeviceUtil::buildRenderTargetDesc
              (*(uint *)(this + 0x18),*(uint *)(this + 0x1c),1,(float *)0x0,0x18,false,0,false,
               0x2000,"Scratch 0",(TextureObjectDesc *)&local_b0);
    uVar7 = (**(code **)(**(long **)(this + 0x10) + 0x138))();
    uVar8 = (**(code **)(**(long **)(this + 0x10) + 0x100))(*(long **)(this + 0x10),uVar7,&local_b0)
    ;
    *(undefined8 *)(this + 0x158) = uVar8;
    local_60 = "Scratch 1";
    uVar7 = (**(code **)(**(long **)(this + 0x10) + 0x100))(*(long **)(this + 0x10),uVar7,&local_b0)
    ;
    uVar2 = DENOISER_TILE_SIZE_X;
    *(undefined8 *)(this + 0x160) = uVar7;
    local_b0 = 0;
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = ((*(int *)(this + 0x18) + uVar2) - 1) / uVar2;
    }
    uVar2 = 0;
    if (DENOISER_TILE_SIZE_Y != 0) {
      uVar2 = ((*(int *)(this + 0x1c) + DENOISER_TILE_SIZE_Y) - 1) / DENOISER_TILE_SIZE_Y;
    }
    uStack_98 = 0x512f1e;
    uStack_94 = 0;
    local_a4 = uVar2 * uVar1;
    uStack_a0 = 0x2001;
    local_a8 = 4;
    uVar7 = (**(code **)(**(long **)(this + 0x10) + 0x120))(*(long **)(this + 0x10),uVar6,&local_b0)
    ;
    *(undefined8 *)(this + 0x128) = uVar7;
    uStack_98 = 0x4f2b89;
    uStack_94 = 0;
    uVar6 = (**(code **)(**(long **)(this + 0x10) + 0x120))(*(long **)(this + 0x10),uVar6,&local_b0)
    ;
    *(undefined8 *)(this + 0x150) = uVar6;
  }
  if (*(AdhocShader *)(this + 0x20) == (AdhocShader)0x0) {
    AdhocShader::load((AdhocShader *)(this + 0x20),*(IRenderDevice **)(this + 0x10),
                      "denoising/prepareShadowMask_cs.cg",
                      "#define DEPTH_SHADOW_MAP\n#define SSP_SHADOW_MAP_DIRECTIONAL_LIGHT0\n#define GROUP_SIZE_X 16\n#define GROUP_SIZE_Y 16\n#define USE_DENOISING_DEBUG_TEXTURE\n"
                      ,0,(ShaderStructLayout *)0x0,0);
    RenderDeviceUtil::makeWriteOnlyConstantBuffer
              (*(IRenderDevice **)(this + 0x10),8,(IConstantBuffer **)(this + 0x120));
  }
  pcStack_b8 = "#define MSAA\n";
  local_c0 = 1;
  if (this[0x130] == (FFXShadowDenoiser)0x0) {
    ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)&local_b0,"cbPassData",0);
                    /* try { // try from 00a44258 to 00a44353 has its CatchHandler @ 00a445d0 */
    ShaderStructLayout::addField((ShaderStructLayout *)&local_b0,"Eye",2,0,3,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_b0,"iFirstFrame",2,0,0,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_b0,"iBufferDimensions",2,0,2,false,0);
    ShaderStructLayout::addField
              ((ShaderStructLayout *)&local_b0,"InvBufferDimensions",2,0,2,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_b0,"ProjectionInverse",2,4,4,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_b0,"ReprojectionMatrix",2,4,4,false,0)
    ;
    ShaderStructLayout::addField
              ((ShaderStructLayout *)&local_b0,"ViewProjectionInverse",2,4,4,false,0);
                    /* try { // try from 00a4435c to 00a4438f has its CatchHandler @ 00a445c4 */
    AdhocShader::ShaderVariants::load
              ((ShaderVariants *)(this + 0x130),(FlagMacro *)&local_c0,1,
               *(IRenderDevice **)(this + 0x10),"denoising/tileClassification_cs.cg",
               "#define DEPTH_SHADOW_MAP\n#define SSP_SHADOW_MAP_DIRECTIONAL_LIGHT0\n#define GROUP_SIZE_X 16\n#define GROUP_SIZE_Y 16\n#define USE_DENOISING_DEBUG_TEXTURE\n"
               ,(ShaderStructLayout *)&local_b0,1);
    RenderDeviceUtil::makeWriteOnlyConstantBuffer
              (*(IRenderDevice **)(this + 0x10),0xe0,(IConstantBuffer **)(this + 0x148));
    uVar5 = uStack_8c;
    uVar4 = uStack_90;
    pbVar9 = (byte *)CONCAT44(uStack_8c,uStack_90);
    if (pbVar9 != (byte *)0x0) {
      pbVar10 = (byte *)CONCAT44(local_84,uStack_88);
      if (pbVar10 != pbVar9) {
        do {
          pbVar11 = pbVar10 + -0x20;
          if ((*pbVar11 & 1) != 0) {
            operator_delete(*(void **)(pbVar10 + -0x10));
          }
          pbVar10 = pbVar11;
        } while (pbVar11 != pbVar9);
        pbVar9 = (byte *)CONCAT44(uStack_8c,uStack_90);
      }
      uStack_88 = uVar4;
      local_84 = uVar5;
      operator_delete(pbVar9);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_9c,uStack_a0));
    }
  }
  if (this[0x178] == (FFXShadowDenoiser)0x0) {
    ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)&local_b0,"cbPassData",0);
                    /* try { // try from 00a4440c to 00a4449b has its CatchHandler @ 00a445cc */
    ShaderStructLayout::addField((ShaderStructLayout *)&local_b0,"ProjectionInverse",2,4,4,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_b0,"iBufferDimensions",2,0,2,false,0);
    ShaderStructLayout::addField
              ((ShaderStructLayout *)&local_b0,"InvBufferDimensions",2,0,2,false,0);
    ShaderStructLayout::addField
              ((ShaderStructLayout *)&local_b0,"DepthSimilaritySigma",2,0,0,false,0);
                    /* try { // try from 00a444a4 to 00a4452f has its CatchHandler @ 00a445c8 */
    AdhocShader::ShaderVariants::load
              ((ShaderVariants *)(this + 0x178),(FlagMacro *)&local_c0,1,
               *(IRenderDevice **)(this + 0x10),"denoising/filterSoftShadows_pass1_cs.cg",
               "#define DEPTH_SHADOW_MAP\n#define SSP_SHADOW_MAP_DIRECTIONAL_LIGHT0\n#define GROUP_SIZE_X 16\n#define GROUP_SIZE_Y 16\n#define USE_DENOISING_DEBUG_TEXTURE\n"
               ,(ShaderStructLayout *)&local_b0,1);
    AdhocShader::ShaderVariants::load
              ((ShaderVariants *)(this + 400),(FlagMacro *)&local_c0,1,
               *(IRenderDevice **)(this + 0x10),"denoising/filterSoftShadows_pass2_cs.cg",
               "#define DEPTH_SHADOW_MAP\n#define SSP_SHADOW_MAP_DIRECTIONAL_LIGHT0\n#define GROUP_SIZE_X 16\n#define GROUP_SIZE_Y 16\n#define USE_DENOISING_DEBUG_TEXTURE\n"
               ,(ShaderStructLayout *)&local_b0,1);
    AdhocShader::ShaderVariants::load
              ((ShaderVariants *)(this + 0x1a8),(FlagMacro *)&local_c0,1,
               *(IRenderDevice **)(this + 0x10),"denoising/filterSoftShadows_pass3_cs.cg",
               "#define DEPTH_SHADOW_MAP\n#define SSP_SHADOW_MAP_DIRECTIONAL_LIGHT0\n#define GROUP_SIZE_X 16\n#define GROUP_SIZE_Y 16\n#define USE_DENOISING_DEBUG_TEXTURE\n"
               ,(ShaderStructLayout *)&local_b0,1);
    RenderDeviceUtil::makeWriteOnlyConstantBuffer
              (*(IRenderDevice **)(this + 0x10),0x54,(IConstantBuffer **)(this + 0x1c0));
    uVar5 = uStack_8c;
    uVar4 = uStack_90;
    pbVar9 = (byte *)CONCAT44(uStack_8c,uStack_90);
    if (pbVar9 != (byte *)0x0) {
      pbVar10 = (byte *)CONCAT44(local_84,uStack_88);
      if (pbVar10 != pbVar9) {
        do {
          pbVar11 = pbVar10 + -0x20;
          if ((*pbVar11 & 1) != 0) {
            operator_delete(*(void **)(pbVar10 + -0x10));
          }
          pbVar10 = pbVar11;
        } while (pbVar11 != pbVar9);
        pbVar9 = (byte *)CONCAT44(uStack_8c,uStack_90);
      }
      uStack_88 = uVar4;
      local_84 = uVar5;
      operator_delete(pbVar9);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_9c,uStack_a0));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


