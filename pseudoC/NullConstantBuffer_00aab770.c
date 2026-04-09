// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullConstantBuffer
// Entry Point: 00aab770
// Size: 32 bytes
// Signature: undefined __thiscall NullConstantBuffer(NullConstantBuffer * this, ConstantBufferDesc * param_1, NullRenderDevice * param_2)


/* NullConstantBuffer::NullConstantBuffer(ConstantBufferDesc const&, NullRenderDevice*) */

void __thiscall
NullConstantBuffer::NullConstantBuffer
          (NullConstantBuffer *this,ConstantBufferDesc *param_1,NullRenderDevice *param_2)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  *(undefined ***)this = &PTR__NullConstantBuffer_00fe5c50;
  return;
}


