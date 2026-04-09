// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createVertexBuffer
// Entry Point: 00aab068
// Size: 68 bytes
// Signature: undefined __thiscall createVertexBuffer(NullRenderDevice * this, ICommandBuffer * param_1, VertexBufferDesc * param_2)


/* NullRenderDevice::createVertexBuffer(ICommandBuffer*, VertexBufferDesc const&) */

NullVertexBuffer * __thiscall
NullRenderDevice::createVertexBuffer
          (NullRenderDevice *this,ICommandBuffer *param_1,VertexBufferDesc *param_2)

{
  NullVertexBuffer *this_00;
  
  this_00 = (NullVertexBuffer *)operator_new(0x20);
                    /* try { // try from 00aab08c to 00aab097 has its CatchHandler @ 00aab0ac */
  NullVertexBuffer::NullVertexBuffer(this_00,param_2,this);
  return this_00;
}


