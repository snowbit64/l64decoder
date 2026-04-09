// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initBloom
// Entry Point: 00a3b57c
// Size: 1756 bytes
// Signature: undefined __thiscall initBloom(ScreenSpaceProcessor * this, IRenderDevice * param_1, uint param_2, uint param_3)


/* ScreenSpaceProcessor::initBloom(IRenderDevice*, unsigned int, unsigned int) */

ulong __thiscall
ScreenSpaceProcessor::initBloom
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ScreenSpaceProcessor *pSVar5;
  long lVar6;
  uint uVar7;
  ITextureObject **ppIVar8;
  ulong uVar9;
  ulong uVar10;
  float local_188;
  float fStack_184;
  undefined4 local_180 [2];
  float *local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  uint local_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  uint local_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  if (*(long **)(this + 0x1a98) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a98) + 8))();
  }
  *(undefined8 *)(this + 0x1a98) = 0;
  if (*(long **)(this + 0x1aa0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1aa0) + 8))();
  }
  *(undefined8 *)(this + 0x1aa0) = 0;
  if (*(long **)(this + 0x1aa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1aa8) + 8))();
  }
  *(undefined8 *)(this + 0x1aa8) = 0;
  if (*(long **)(this + 0x1ab0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ab0) + 8))();
  }
  *(undefined8 *)(this + 0x1ab0) = 0;
  if (*(long **)(this + 0x1ab8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ab8) + 8))();
  }
  *(undefined8 *)(this + 0x1ab8) = 0;
  if (*(long **)(this + 0x1ac0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ac0) + 8))();
  }
  if (*(long **)(this + 0x1ae8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ae8) + 8))();
  }
  *(undefined8 *)(this + 0x1ac0) = 0;
  *(undefined8 *)(this + 0x1ae8) = 0;
  if (*(long **)(this + 0x1ac8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ac8) + 8))();
  }
  if (*(long **)(this + 0x1af0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1af0) + 8))();
  }
  *(undefined8 *)(this + 0x1ac8) = 0;
  *(undefined8 *)(this + 0x1af0) = 0;
  if (*(long **)(this + 0x1ad0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ad0) + 8))();
  }
  if (*(long **)(this + 0x1af8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1af8) + 8))();
  }
  *(undefined8 *)(this + 0x1ad0) = 0;
  *(undefined8 *)(this + 0x1af8) = 0;
  if (*(long **)(this + 0x1ad8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ad8) + 8))();
  }
  if (*(long **)(this + 0x1b00) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b00) + 8))();
  }
  *(undefined8 *)(this + 0x1ad8) = 0;
  *(undefined8 *)(this + 0x1b00) = 0;
  if (*(long **)(this + 0x1ae0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ae0) + 8))();
  }
  if (*(long **)(this + 0x1b08) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b08) + 8))();
  }
  *(undefined8 *)(this + 0x1ae0) = 0;
  *(undefined8 *)(this + 0x1b08) = 0;
  if (*(long **)(this + 0x1938) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1938) + 8))();
  }
  *(undefined8 *)(this + 0x1938) = 0;
  if (*(long **)(this + 0x1a88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a88) + 8))();
  }
  *(undefined8 *)(this + 0x1a88) = 0;
  if (*(long **)(this + 0x1a10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a10) + 8))();
  }
  *(undefined8 *)(this + 0x1a10) = 0;
  *(uint *)(this + 0x1b3c) = param_2;
  *(uint *)(this + 0x1a08) = param_3;
  uVar4 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar10 = 1;
  if (param_2 == 0) goto LAB_00a3bc14;
  fStack_184 = 1.0 / (float)(ulong)param_2;
  local_170 = 4;
  local_180[0] = 8;
  local_178 = &local_188;
  local_188 = (float)(ulong)param_3;
  pSVar5 = (ScreenSpaceProcessor *)(**(code **)(*(long *)param_1 + 0x118))(param_1,uVar4,local_180);
  *(ScreenSpaceProcessor **)(this + 0x1998) = pSVar5;
  pSVar5 = (ScreenSpaceProcessor *)
           createGaussTexture(pSVar5,param_1,param_3,(float)(ulong)param_3,
                              (ITextureObject **)(this + 0x1a10));
  lVar6 = 0x1868;
  if ((*(int *)(this + 0x1b4c) != 5 || *(int *)(this + 0x1b50) != 4) || *(int *)(this + 0x1b54) != 0
     ) {
    lVar6 = 0x1870;
  }
  lVar1 = 0x186c;
  if ((*(int *)(this + 0x1b4c) != 5 || *(int *)(this + 0x1b50) != 4) || *(int *)(this + 0x1b54) != 0
     ) {
    lVar1 = 0x1874;
  }
  uVar9 = (ulong)param_2;
  local_a8 = 0x1600000001;
  ppIVar8 = (ITextureObject **)(this + 0x1a98);
  uStack_98 = 0;
  local_88 = 1;
  uVar3 = *(int *)(this + lVar6) + 1U >> 1;
  uVar7 = *(int *)(this + lVar1) + 1U >> 1;
  local_90 = 0x3f800000;
  local_a0 = 0;
  do {
    uVar3 = uVar3 >> 1;
    uVar7 = uVar7 >> 1;
    local_b0 = uVar3;
    uStack_ac = uVar7;
    if ((uVar10 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      pSVar5 = (ScreenSpaceProcessor *)
               createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_b0,
                                   "bloomDownUpScale",ppIVar8);
      uVar10 = (ulong)pSVar5 & 0xffffffff;
    }
    ppIVar8 = ppIVar8 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  uStack_c8 = 0;
  local_c0 = 0x3f800000;
  local_d8 = 0x1600000001;
  uVar3 = *(int *)(this + lVar6) + 1U >> 1;
  uVar7 = *(int *)(this + lVar1) + 1U >> 1;
  local_b8 = 1;
  local_d0 = 0;
  local_e0 = uVar3;
  uStack_dc = uVar7;
  if ((uVar10 & 1) == 0) {
    pSVar5 = (ScreenSpaceProcessor *)0x0;
  }
  else {
    pSVar5 = (ScreenSpaceProcessor *)
             createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_e0,
                                 "bloomMask",(ITextureObject **)(this + 0x1a88));
    uVar3 = *(int *)(this + lVar6) + 1U >> 1;
    uVar7 = *(int *)(this + lVar1) + 1U >> 1;
  }
  local_110 = uVar3 >> 1;
  uStack_10c = uVar7 >> 1;
  local_108 = 0x1600000001;
  local_f8 = 0;
  local_f0 = 0x3f800000;
  local_e8 = 1;
  local_100 = 0;
  if ((((ulong)pSVar5 & 1) == 0) ||
     (pSVar5 = (ScreenSpaceProcessor *)
               createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                   "blur read",(ITextureObject **)(this + 0x1ac0)),
     ((ulong)pSVar5 & 1) == 0)) {
LAB_00a3bb4c:
    local_110 = uVar3 >> 5;
    uStack_10c = uVar7 >> 5;
    uVar3 = 0;
  }
  else {
    pSVar5 = (ScreenSpaceProcessor *)
             createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                 "blur write",(ITextureObject **)(this + 0x1ae8));
    local_110 = uVar3 >> 2;
    uStack_10c = uVar7 >> 2;
    if ((((ulong)pSVar5 & 1) == 0) ||
       (pSVar5 = (ScreenSpaceProcessor *)
                 createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                     "blur read",(ITextureObject **)(this + 0x1ac8)),
       ((ulong)pSVar5 & 1) == 0)) goto LAB_00a3bb4c;
    pSVar5 = (ScreenSpaceProcessor *)
             createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                 "blur write",(ITextureObject **)(this + 0x1af0));
    local_110 = uVar3 >> 3;
    uStack_10c = uVar7 >> 3;
    if ((((ulong)pSVar5 & 1) == 0) ||
       (pSVar5 = (ScreenSpaceProcessor *)
                 createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                     "blur read",(ITextureObject **)(this + 0x1ad0)),
       ((ulong)pSVar5 & 1) == 0)) goto LAB_00a3bb4c;
    pSVar5 = (ScreenSpaceProcessor *)
             createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                 "blur write",(ITextureObject **)(this + 0x1af8));
    local_110 = uVar3 >> 4;
    uStack_10c = uVar7 >> 4;
    if ((((ulong)pSVar5 & 1) == 0) ||
       (pSVar5 = (ScreenSpaceProcessor *)
                 createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                     "blur read",(ITextureObject **)(this + 0x1ad8)),
       ((ulong)pSVar5 & 1) == 0)) goto LAB_00a3bb4c;
    pSVar5 = (ScreenSpaceProcessor *)
             createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                 "blur write",(ITextureObject **)(this + 0x1b00));
    local_110 = uVar3 >> 5;
    uStack_10c = uVar7 >> 5;
    if ((((ulong)pSVar5 & 1) == 0) ||
       (pSVar5 = (ScreenSpaceProcessor *)
                 createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                     "blur read",(ITextureObject **)(this + 0x1ae0)),
       ((ulong)pSVar5 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = createRenderTexture(pSVar5,param_1,(PostFxRenderTextureAttachmentDesc *)&local_110,
                                  "blur write",(ITextureObject **)(this + 0x1b08));
    }
  }
  local_134 = 0x100000001;
  uStack_144 = 0;
  local_14c = 0x100000001;
  uStack_154 = 0x20000000200;
  local_15c = 0xffffffffffffffff;
  local_168 = 0;
  local_160 = 0;
  local_13c = 3;
  local_138 = 0;
  uStack_124 = 0x3f80000000000000;
  local_12c = 0;
  local_11c = 0;
  local_118 = 0;
  RenderDeviceUtil::buildRenderTargetDesc
            (*(int *)(this + lVar6) + 1U >> 1,*(int *)(this + lVar1) + 1U >> 1,1,(float *)0x0,0x16,
             false,1,false,0,"Half-Res Scene Color Texture",(TextureObjectDesc *)&local_168);
  lVar6 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar4,&local_168);
  *(long *)(this + 0x1938) = lVar6;
  uVar10 = (ulong)(uVar3 & lVar6 != 0);
LAB_00a3bc14:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


