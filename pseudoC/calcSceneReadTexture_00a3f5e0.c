// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcSceneReadTexture
// Entry Point: 00a3f5e0
// Size: 476 bytes
// Signature: undefined __thiscall calcSceneReadTexture(ScreenSpaceProcessor * this, IRenderDevice * param_1, ICommandBuffer * param_2, RenderArgs * param_3, PostFxParams * param_4, ITextureObject * * param_5, ITextureObject * * param_6)


/* ScreenSpaceProcessor::calcSceneReadTexture(IRenderDevice*, ICommandBuffer*, RenderArgs const&,
   PostFxParams const&, ITextureObject*&, ITextureObject*&) */

void __thiscall
ScreenSpaceProcessor::calcSceneReadTexture
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ICommandBuffer *param_2,
          RenderArgs *param_3,PostFxParams *param_4,ITextureObject **param_5,
          ITextureObject **param_6)

{
  long lVar1;
  ITextureObject *pIVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x1b48) - 1U < 2) {
    local_68 = *(undefined8 *)(this + 0x1890);
    uStack_60 = *(undefined8 *)(this + 0x18d0);
    pIVar2 = (ITextureObject *)0x0;
    (**(code **)(*(long *)param_2 + 0x120))(param_2,2,&local_68,0,0,0,1);
    calcTAA(this,param_1,*(ITextureObject **)(this + 0x1890),*(ITextureObject **)(this + 0x1970),
            pIVar2,*(float *)(param_3 + 0x2d0),*(float *)(param_3 + 0xc4),(float *)(param_3 + 0x590)
            ,param_5,param_6);
    if (*(uint *)(this + 0x1b60) < 2) {
      *param_6 = *(ITextureObject **)(this + 0x1890);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x120))(param_2,1,param_6,0,0,1,8);
    }
    pcVar4 = *(code **)(*(long *)param_2 + 0x120);
    uVar3 = 8;
  }
  else {
    if ((((*(int *)(this + 0x1b4c) != 5) || (*(int *)(this + 0x1b48) == 3)) ||
        (*(int *)(this + 0x1b50) != 4)) || (*(int *)(this + 0x1b54) != 0)) {
      *param_6 = (ITextureObject *)0x0;
      (**(code **)(*(long *)param_2 + 0x120))(param_2,1,param_5,0,0,0,0xc);
      goto LAB_00a3f78c;
    }
    *param_5 = *(ITextureObject **)(this + 0x18b0);
    uVar3 = 1;
    *param_6 = *(ITextureObject **)(this + 0x1920);
    pcVar4 = *(code **)(*(long *)param_2 + 0x120);
  }
  (*pcVar4)(param_2,1,param_5,0,0,0,uVar3);
  this[0x1b10] = (ScreenSpaceProcessor)0x0;
LAB_00a3f78c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


