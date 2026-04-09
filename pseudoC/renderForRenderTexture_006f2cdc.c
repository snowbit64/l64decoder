// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderForRenderTexture
// Entry Point: 006f2cdc
// Size: 608 bytes
// Signature: undefined __thiscall renderForRenderTexture(FontOverlayRenderer * this, ITextureObject * param_1, Matrix4x4 * param_2, ICommandBuffer * param_3)


/* FontOverlayRenderer::renderForRenderTexture(ITextureObject*, Matrix4x4 const&, ICommandBuffer*)
    */

void __thiscall
FontOverlayRenderer::renderForRenderTexture
          (FontOverlayRenderer *this,ITextureObject *param_1,Matrix4x4 *param_2,
          ICommandBuffer *param_3)

{
  AdhocShader *this_00;
  ITextureObject *pIVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  FontOverlayRenderer *pFVar5;
  FontOverlayRenderer *pFVar6;
  char *local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0x80) != 0) && (*(long *)(this + 0x90) != 0)) {
    pFVar5 = *(FontOverlayRenderer **)(this + 0x410);
    pIVar1 = (ITextureObject *)0x0;
    if (*(ITextureObject **)(this + 0x3e0) != param_1) {
      pIVar1 = param_1;
    }
    if (pFVar5 != (FontOverlayRenderer *)0x0) {
      pFVar6 = this + 0x410;
      do {
        if (*(ITextureObject **)(pFVar5 + 0x20) >= pIVar1) {
          pFVar6 = pFVar5;
        }
        pFVar5 = *(FontOverlayRenderer **)
                  (pFVar5 + (ulong)(*(ITextureObject **)(pFVar5 + 0x20) < pIVar1) * 8);
      } while (pFVar5 != (FontOverlayRenderer *)0x0);
      if (((pFVar6 != this + 0x410) && (*(ITextureObject **)(pFVar6 + 0x20) <= pIVar1)) &&
         ((*(int *)(pFVar6 + 0x34) != 0 || (*(int *)(pFVar6 + 0x4c) != 0)))) {
        (**(code **)(*(long *)param_3 + 0xc0))(param_3,*(undefined8 *)(this + 0x3c0));
        (**(code **)(*(long *)param_3 + 0xb8))(param_3,*(undefined8 *)(this + 0x3c8));
        this_00 = (AdhocShader *)(this + 0x2a0);
        (**(code **)(*(long *)param_3 + 0x48))(param_3,*(undefined8 *)(this + 0x2a8));
        uStack_68 = *(undefined8 *)(this + 0x80);
        local_70 = "diffuseTexture";
        uStack_78 = *(undefined8 *)(this + 0x3d0);
        local_60 = 0xffffffff;
        local_80 = "diffuseSampler";
        iVar3 = AdhocShader::getConstantBufferHandle(this_00,"Font3DConstants");
        if (iVar3 != -1) {
          pfVar4 = (float *)(**(code **)(*(long *)param_3 + 0xa0))
                                      (param_3,iVar3,*(undefined8 *)(this + 0x3a8));
          ShaderStructLayout::setMatrix4x4(pfVar4,param_2);
          (**(code **)(*(long *)param_3 + 0xa8))(param_3,iVar3,*(undefined8 *)(this + 0x3a8));
        }
        AdhocShader::bindResourcesPs
                  (this_00,param_3,(ShaderTexture *)&local_70,1,(ShaderStructBuffer *)0x0,0,
                   (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,(ShaderSampler *)&local_80,1
                  );
        if (*(int *)(pFVar6 + 0x34) != 0) {
          (**(code **)(*(long *)param_3 + 0xb0))(param_3,*(undefined8 *)(this + 0x3b8));
          renderForRenderTexture(this,(BufferData3D *)(pFVar6 + 0x28),param_3);
        }
        if (*(int *)(pFVar6 + 0x4c) != 0) {
          (**(code **)(*(long *)param_3 + 0xb0))(param_3,*(undefined8 *)(this + 0x3b0));
          renderForRenderTexture(this,(BufferData3D *)(pFVar6 + 0x40),param_3);
        }
        AdhocShader::unbindResourcesPs
                  (this_00,param_3,(ShaderTexture *)&local_70,1,(ShaderStructBuffer *)0x0,0,
                   (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,(ShaderSampler *)&local_80,1
                  );
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


