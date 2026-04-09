// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processPostFx
// Entry Point: 00a3f064
// Size: 708 bytes
// Signature: undefined __cdecl processPostFx(IRenderDevice * param_1, RenderArgs * param_2, PostFxParams * param_3)


/* ScreenSpaceProcessor::processPostFx(IRenderDevice*, RenderArgs const&, PostFxParams const&) */

void ScreenSpaceProcessor::processPostFx
               (IRenderDevice *param_1,RenderArgs *param_2,PostFxParams *param_3)

{
  long lVar1;
  ITextureObject *pIVar2;
  int iVar3;
  long *plVar4;
  ITextureObject **ppIVar5;
  PostFxParams *in_x3;
  PostFxParams *in_x4;
  ITextureObject *local_90;
  ITextureObject *local_88;
  ITextureObject *local_80;
  ITextureObject *pIStack_78;
  undefined8 local_70;
  ITextureObject *pIStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_1[0x187c] != (IRenderDevice)0x0) && (param_1[0x187b] != (IRenderDevice)0x0)) {
    plVar4 = (long *)(**(code **)(*(long *)param_2 + 0x138))(param_2);
    if (param_1[0x1878] == (IRenderDevice)0x0) {
      calcSceneReadTexture
                ((ScreenSpaceProcessor *)param_1,(IRenderDevice *)param_2,(ICommandBuffer *)plVar4,
                 (RenderArgs *)param_3,in_x4,&local_80,&local_88);
      *(ITextureObject **)(param_1 + 0x1930) = local_80;
      plVar4 = *(long **)(param_1 + 0x1858);
    }
    else {
      if (param_1[0x187a] != (IRenderDevice)0x0) {
        pIStack_78 = *(ITextureObject **)(param_1 + 0x1b90);
        local_80 = *(ITextureObject **)(param_1 + 0x1b88);
        pIStack_68 = *(ITextureObject **)(in_x3 + 0x2fc);
        local_70 = *(ITextureObject **)(in_x3 + 0x2f4);
        ppIVar5 = (ITextureObject **)
                  (**(code **)(**(long **)(param_1 + 0x19d0) + 0x10))
                            (*(long **)(param_1 + 0x19d0),plVar4);
        ppIVar5[1] = pIStack_78;
        *ppIVar5 = local_80;
        ppIVar5[3] = pIStack_68;
        ppIVar5[2] = local_70;
        (**(code **)(**(long **)(param_1 + 0x19d0) + 0x18))(*(long **)(param_1 + 0x19d0),plVar4);
      }
      if ((param_1[0x1879] != (IRenderDevice)0x0) &&
         ((param_1[0x187a] != (IRenderDevice)0x0 || (*(long *)(param_1 + 0x1968) == 0)))) {
        lutColorGrading((ScreenSpaceProcessor *)param_1,(IRenderDevice *)param_2,in_x3);
      }
      calcSceneReadTexture
                ((ScreenSpaceProcessor *)param_1,(IRenderDevice *)param_2,(ICommandBuffer *)plVar4,
                 (RenderArgs *)param_3,in_x4,&local_88,&local_90);
      if (param_1[0x1b44] != (IRenderDevice)0x0) {
        calcDof((ScreenSpaceProcessor *)param_1,(IRenderDevice *)param_2,local_88,
                *(ITextureObject **)(param_1 + 0x1970),local_90,*(float *)(param_3 + 0xc4),
                *(float *)(param_3 + 0x2d0),in_x3);
        pIVar2 = local_90;
        local_90 = local_88;
        local_88 = pIVar2;
        (**(code **)(*plVar4 + 0x120))(plVar4,1,&local_88,0,0,0,1);
      }
      if (param_1[0x1879] != (IRenderDevice)0x0) {
        if (param_1[0x1b64] == (IRenderDevice)0x0) {
          calcAvgLuminance((ScreenSpaceProcessor *)param_1,(ICommandBuffer *)plVar4,local_88,in_x3,
                           *(float *)(param_3 + 0x2d0));
        }
        *(undefined8 *)(param_1 + 0x1a90) = 0;
        if (*(int *)(param_1 + 0x1b3c) != 0) {
          local_70 = (ITextureObject *)CONCAT44(local_70._4_4_,0xffffffff);
          local_80 = (ITextureObject *)0x4e460d;
          pIStack_78 = local_88;
          postProcess((ScreenSpaceProcessor *)param_1,(IRenderDevice *)param_2,
                      (ShaderTexture *)&local_80,1,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,
                      0,(ShaderConstantBuffer *)0x0,0,(AdhocShader *)(param_1 + 0x58),
                      (ITextureObject **)(param_1 + 0x1938),1,0,false,0);
          calcBloom((ScreenSpaceProcessor *)param_1,(IRenderDevice *)param_2,
                    *(ITextureObject **)(param_1 + 0x1938),(ITextureObject **)(param_1 + 0x1a90));
        }
      }
      *(ITextureObject **)(param_1 + 0x1930) = local_88;
      *(undefined4 *)(param_1 + 0x1900) = *(undefined4 *)(param_3 + 0x590);
      *(undefined4 *)(param_1 + 0x1904) = *(undefined4 *)(param_3 + 0x594);
      plVar4 = *(long **)(param_1 + 0x1858);
    }
    if ((plVar4 == (long *)0x0) ||
       (iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined4 *)(param_1 + 0x1860)), iVar3 == 0)
       ) {
      doFinalComposite((ScreenSpaceProcessor *)param_1,(IRenderDevice *)param_2,in_x3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


