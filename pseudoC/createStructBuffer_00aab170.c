// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStructBuffer
// Entry Point: 00aab170
// Size: 52 bytes
// Signature: undefined __thiscall createStructBuffer(NullRenderDevice * this, ICommandBuffer * param_1, StructBufferDesc * param_2)


/* NullRenderDevice::createStructBuffer(ICommandBuffer*, StructBufferDesc const&) */

NullStructBuffer * __thiscall
NullRenderDevice::createStructBuffer
          (NullRenderDevice *this,ICommandBuffer *param_1,StructBufferDesc *param_2)

{
  NullStructBuffer *this_00;
  
  this_00 = (NullStructBuffer *)operator_new(0x18);
                    /* try { // try from 00aab18c to 00aab193 has its CatchHandler @ 00aab1a4 */
  NullStructBuffer::NullStructBuffer(this_00,param_2);
  return this_00;
}


