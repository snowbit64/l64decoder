// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTextureObject
// Entry Point: 00aab010
// Size: 68 bytes
// Signature: undefined __thiscall createTextureObject(NullRenderDevice * this, ICommandBuffer * param_1, TextureObjectDesc * param_2)


/* NullRenderDevice::createTextureObject(ICommandBuffer*, TextureObjectDesc const&) */

NullTexture * __thiscall
NullRenderDevice::createTextureObject
          (NullRenderDevice *this,ICommandBuffer *param_1,TextureObjectDesc *param_2)

{
  NullTexture *this_00;
  
  this_00 = (NullTexture *)operator_new(0x70);
                    /* try { // try from 00aab034 to 00aab03f has its CatchHandler @ 00aab054 */
  NullTexture::NullTexture(this_00,param_2,this);
  return this_00;
}


