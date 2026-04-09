// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateGpuResources
// Entry Point: 0095ccdc
// Size: 92 bytes
// Signature: undefined __thiscall allocateGpuResources(MultiresTexture * this, IRenderDevice * param_1, ICommandBuffer * param_2)


/* MultiresTexture::allocateGpuResources(IRenderDevice*, ICommandBuffer*) */

uint __thiscall
MultiresTexture::allocateGpuResources
          (MultiresTexture *this,IRenderDevice *param_1,ICommandBuffer *param_2)

{
  uint uVar1;
  
  uVar1 = SoftVirtualTexture::allocateGpuResources
                    (*(SoftVirtualTexture **)(this + 0xe0),param_1,param_2);
  if ((uVar1 & 1) != 0) {
    SoftVirtualTexture::createNullTile(*(SoftVirtualTexture **)(this + 0xe0),param_2,1,0xff00ffff);
    uploadChangedIndexLayers(this,param_2);
  }
  return uVar1 & 1;
}


