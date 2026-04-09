// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createConstantBuffer
// Entry Point: 00aab118
// Size: 68 bytes
// Signature: undefined __thiscall createConstantBuffer(NullRenderDevice * this, ICommandBuffer * param_1, ConstantBufferDesc * param_2)


/* NullRenderDevice::createConstantBuffer(ICommandBuffer*, ConstantBufferDesc const&) */

NullConstantBuffer * __thiscall
NullRenderDevice::createConstantBuffer
          (NullRenderDevice *this,ICommandBuffer *param_1,ConstantBufferDesc *param_2)

{
  NullConstantBuffer *this_00;
  
  this_00 = (NullConstantBuffer *)operator_new(0x18);
                    /* try { // try from 00aab13c to 00aab147 has its CatchHandler @ 00aab15c */
  NullConstantBuffer::NullConstantBuffer(this_00,param_2,this);
  return this_00;
}


