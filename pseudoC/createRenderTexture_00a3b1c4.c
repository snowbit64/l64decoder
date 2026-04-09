// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderTexture
// Entry Point: 00a3b1c4
// Size: 292 bytes
// Signature: undefined __thiscall createRenderTexture(ScreenSpaceProcessor * this, IRenderDevice * param_1, PostFxRenderTextureAttachmentDesc * param_2, char * param_3, ITextureObject * * param_4)


/* ScreenSpaceProcessor::createRenderTexture(IRenderDevice*,
   ScreenSpaceProcessor::PostFxRenderTextureAttachmentDesc const&, char const*, ITextureObject*&) */

void __thiscall
ScreenSpaceProcessor::createRenderTexture
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,
          PostFxRenderTextureAttachmentDesc *param_2,char *param_3,ITextureObject **param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ITextureObject *pIVar5;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == (IRenderDevice *)0x0) {
    bVar3 = false;
  }
  else {
    uStack_7c = 0x20000000200;
    local_84 = 0xffffffffffffffff;
    uVar1 = (uint)(byte)param_2[0x12] << 10;
    if (param_2[0x13] != (PostFxRenderTextureAttachmentDesc)0x0) {
      uVar1 = (uint)(byte)param_2[0x12] << 10 | 0x2000;
    }
    uStack_6c = 0;
    local_74 = 0x100000001;
    local_5c = 0x100000001;
    local_64 = 3;
    local_90 = 0;
    local_88 = 0;
    local_60 = 0;
    uStack_4c = 0x3f80000000000000;
    local_54 = 0;
    local_44 = 0;
    local_40 = 0;
    RenderDeviceUtil::buildRenderTargetDesc
              (*(uint *)param_2,*(uint *)(param_2 + 4),*(uint *)(param_2 + 8),
               (float *)(param_2 + 0x14),*(PIXEL_FORMAT *)(param_2 + 0xc),(bool)param_2[0x11],
               *(uint *)(param_2 + 0x28),(bool)param_2[0x10],uVar1,param_3,
               (TextureObjectDesc *)&local_90);
    uVar4 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
    pIVar5 = (ITextureObject *)(**(code **)(*(long *)param_1 + 0x100))(param_1,uVar4,&local_90);
    bVar3 = pIVar5 != (ITextureObject *)0x0;
    *param_4 = pIVar5;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


