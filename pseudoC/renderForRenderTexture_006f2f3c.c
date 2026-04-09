// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderForRenderTexture
// Entry Point: 006f2f3c
// Size: 292 bytes
// Signature: undefined __thiscall renderForRenderTexture(FontOverlayRenderer * this, BufferData3D * param_1, ICommandBuffer * param_2)


/* FontOverlayRenderer::renderForRenderTexture(FontOverlayRenderer::BufferData3D&, ICommandBuffer*)
    */

void __thiscall
FontOverlayRenderer::renderForRenderTexture
          (FontOverlayRenderer *this,BufferData3D *param_1,ICommandBuffer *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 != 0) {
    uVar4 = 0;
    uVar1 = uVar2;
    do {
      uVar3 = uVar1 - 0x1000;
      if (0xfff < uVar1) {
        uVar1 = 0x1000;
      }
      __dest = (void *)(**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                                 (*(long **)(param_1 + 0x10),param_2,0,(ulong)(uVar1 * 0x14),1);
      memcpy(__dest,(void *)(*(long *)param_1 + (ulong)uVar4 * 0x14),(ulong)(uVar1 * 0x14));
      (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2);
      (**(code **)(*(long *)param_2 + 0x50))(param_2,param_1 + 0x10,1,*(undefined8 *)(this + 0x90));
      (**(code **)(*(long *)param_2 + 0x58))(param_2,*(undefined8 *)(this + 0x98));
      (**(code **)(*(long *)param_2 + 0xe8))(param_2,(uVar1 >> 2) * 6,0,0,0,0);
      uVar4 = uVar4 + 0x1000;
      uVar1 = uVar3;
    } while (uVar4 < uVar2);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


