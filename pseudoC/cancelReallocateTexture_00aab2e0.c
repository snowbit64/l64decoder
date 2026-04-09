// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelReallocateTexture
// Entry Point: 00aab2e0
// Size: 24 bytes
// Signature: undefined __thiscall cancelReallocateTexture(NullRenderDevice * this, ICommandBuffer * param_1, ITextureObject * param_2)


/* NullRenderDevice::cancelReallocateTexture(ICommandBuffer*, ITextureObject*) */

void __thiscall
NullRenderDevice::cancelReallocateTexture
          (NullRenderDevice *this,ICommandBuffer *param_1,ITextureObject *param_2)

{
  if (param_2 != (ITextureObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00aab2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 8))(param_2);
    return;
  }
  return;
}


