// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createIndexBuffer
// Entry Point: 00aab0c0
// Size: 68 bytes
// Signature: undefined __thiscall createIndexBuffer(NullRenderDevice * this, ICommandBuffer * param_1, IndexBufferDesc * param_2)


/* NullRenderDevice::createIndexBuffer(ICommandBuffer*, IndexBufferDesc const&) */

NullIndexBuffer * __thiscall
NullRenderDevice::createIndexBuffer
          (NullRenderDevice *this,ICommandBuffer *param_1,IndexBufferDesc *param_2)

{
  NullIndexBuffer *this_00;
  
  this_00 = (NullIndexBuffer *)operator_new(0x20);
                    /* try { // try from 00aab0e4 to 00aab0ef has its CatchHandler @ 00aab104 */
  NullIndexBuffer::NullIndexBuffer(this_00,param_2,this);
  return this_00;
}


