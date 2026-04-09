// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initDOF
// Entry Point: 00a3bc58
// Size: 1060 bytes
// Signature: undefined __thiscall initDOF(ScreenSpaceProcessor * this, IRenderDevice * param_1, bool param_2, bool param_3)


/* ScreenSpaceProcessor::initDOF(IRenderDevice*, bool, bool) */

uint __thiscall
ScreenSpaceProcessor::initDOF
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,bool param_2,bool param_3)

{
  ITextureObject **ppIVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  ScreenSpaceProcessor SVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ScreenSpaceProcessor *pSVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  undefined8 *local_a8;
  undefined4 local_a0;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (*(long **)(this + 0x1a48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a48) + 8))();
  }
  if (*(long **)(this + 0x1a58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a58) + 8))();
  }
  if (*(long **)(this + 0x1a60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a60) + 8))();
  }
  if (*(long **)(this + 0x1a50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a50) + 8))();
  }
  if (*(long **)(this + 0x1a68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a68) + 8))();
  }
  if (*(long **)(this + 0x1a70) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a70) + 8))();
  }
  if (*(long **)(this + 0x1a78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a78) + 8))();
  }
  ppIVar1 = (ITextureObject **)(this + 0x1a48);
  if (*(long **)(this + 0x1990) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1990) + 8))();
  }
  plVar8 = *(long **)(this + 0x1a18);
  if (plVar8 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*plVar8 + 8))();
  }
  uVar12 = 1;
  *(undefined8 *)(this + 0x1990) = 0;
  *(undefined8 *)(this + 0x1a18) = 0;
  *(undefined8 *)(this + 0x1a78) = 0;
  *(undefined8 *)(this + 0x1a50) = 0;
  *ppIVar1 = (ITextureObject *)0x0;
  *(undefined8 *)(this + 0x1a60) = 0;
  *(undefined8 *)(this + 0x1a58) = 0;
  *(undefined8 *)(this + 0x1a70) = 0;
  *(undefined8 *)(this + 0x1a68) = 0;
  this[0x1b44] = (ScreenSpaceProcessor)param_2;
  this[0x1b65] = (ScreenSpaceProcessor)param_3;
  uVar7 = uVar12;
  if (!param_2) goto LAB_00a3c044;
  *(undefined8 *)(this + 0x1a50) = 0;
  *ppIVar1 = (ITextureObject *)0x0;
  *(undefined8 *)(this + 0x1a60) = 0;
  *(undefined8 *)(this + 0x1a58) = 0;
  *(undefined8 *)(this + 0x1a68) = 0;
  local_90 = 1;
  uStack_80 = 0;
  local_78 = 0x3f800000;
  local_70 = 1;
  if ((*(int *)(this + 0x1b4c) == 5) && (*(int *)(this + 0x1b50) == 4)) {
    uVar12 = (uint)(*(int *)(this + 0x1b54) != 0);
  }
  iVar11 = 7;
  if (!param_3) {
    iVar11 = 3;
  }
  uVar7 = 2;
  if (param_3) {
    uVar7 = 3;
  }
  piVar2 = (int *)(this + 0x1870);
  if (uVar12 == 0) {
    piVar2 = (int *)(this + 0x1868);
  }
  piVar3 = (int *)(this + 0x1874);
  if (uVar12 == 0) {
    piVar3 = (int *)(this + 0x186c);
  }
  local_98 = (uint)(*piVar2 + iVar11) >> (ulong)uVar7;
  local_88 = 0;
  local_8c = 0x15;
  local_94 = (uint)(*piVar3 + iVar11) >> (ulong)uVar7;
  pSVar9 = (ScreenSpaceProcessor *)
           createRenderTexture((ScreenSpaceProcessor *)plVar8,param_1,
                               (PostFxRenderTextureAttachmentDesc *)&local_98,
                               "nearCoCinitialization",ppIVar1);
  if (((ulong)pSVar9 & 1) == 0) {
LAB_00a3bf04:
    uVar7 = 0;
    SVar5 = this[0x1b78];
  }
  else {
    pSVar9 = (ScreenSpaceProcessor *)
             createRenderTexture(pSVar9,param_1,(PostFxRenderTextureAttachmentDesc *)&local_98,
                                 "nearCocBlur0",(ITextureObject **)(this + 0x1a58));
    if (((ulong)pSVar9 & 1) == 0) {
LAB_00a3bef0:
      uVar7 = 0;
      SVar5 = this[0x1b78];
    }
    else {
      pSVar9 = (ScreenSpaceProcessor *)
               createRenderTexture(pSVar9,param_1,(PostFxRenderTextureAttachmentDesc *)&local_98,
                                   "nearCocBlur1",(ITextureObject **)(this + 0x1a60));
      if (((ulong)pSVar9 & 1) == 0) goto LAB_00a3bf04;
      pSVar9 = (ScreenSpaceProcessor *)
               createRenderTexture(pSVar9,param_1,(PostFxRenderTextureAttachmentDesc *)&local_98,
                                   "nearCoC",(ITextureObject **)(this + 0x1a50));
      if (((ulong)pSVar9 & 1) == 0) goto LAB_00a3bef0;
      pSVar9 = (ScreenSpaceProcessor *)
               createRenderTexture(pSVar9,param_1,(PostFxRenderTextureAttachmentDesc *)&local_98,
                                   "nearCoCSmallBlur",(ITextureObject **)(this + 0x1a68));
      uVar7 = (uint)pSVar9;
      SVar5 = this[0x1b78];
    }
  }
  if (SVar5 != (ScreenSpaceProcessor)0x0) {
    puVar4 = (uint *)(this + 0x1870);
    if (uVar12 == 0) {
      puVar4 = (uint *)(this + 0x1868);
    }
    local_8c = 0x14;
    local_98 = *puVar4;
    puVar4 = (uint *)(this + 0x1874);
    if (uVar12 == 0) {
      puVar4 = (uint *)(this + 0x186c);
    }
    local_94 = *puVar4;
    if (((uVar7 & 1) == 0) ||
       (pSVar9 = (ScreenSpaceProcessor *)
                 createRenderTexture(pSVar9,param_1,(PostFxRenderTextureAttachmentDesc *)&local_98,
                                     "far coc 0",(ITextureObject **)(this + 0x1a70)),
       ((ulong)pSVar9 & 1) == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = createRenderTexture(pSVar9,param_1,(PostFxRenderTextureAttachmentDesc *)&local_98,
                                  "far coc 1",(ITextureObject **)(this + 0x1a78));
    }
    this[0x1a84] = (ScreenSpaceProcessor)0x1;
    plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
    (**(code **)(*plVar8 + 0x120))(plVar8,2,this + 0x1a70,0,0,0,0xc);
  }
  local_a8 = &local_b8;
  local_b0[0] = 8;
  local_b8 = 0x3f80000040800000;
  local_a0 = 1;
  uVar10 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  pSVar9 = (ScreenSpaceProcessor *)(**(code **)(*(long *)param_1 + 0x118))(param_1,uVar10,local_b0);
  *(ScreenSpaceProcessor **)(this + 0x1990) = pSVar9;
  createGaussTexture(pSVar9,param_1,4,4.0,(ITextureObject **)(this + 0x1a18));
LAB_00a3c044:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


