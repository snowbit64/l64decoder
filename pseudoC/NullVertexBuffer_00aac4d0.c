// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullVertexBuffer
// Entry Point: 00aac4d0
// Size: 64 bytes
// Signature: undefined __thiscall NullVertexBuffer(NullVertexBuffer * this, VertexBufferDesc * param_1, NullRenderDevice * param_2)


/* NullVertexBuffer::NullVertexBuffer(VertexBufferDesc const&, NullRenderDevice*) */

void __thiscall
NullVertexBuffer::NullVertexBuffer
          (NullVertexBuffer *this,VertexBufferDesc *param_1,NullRenderDevice *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(NullRenderDevice **)(this + 0x18) = param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = NEON_rev64(uVar1,4);
  *(undefined ***)this = &PTR__NullVertexBuffer_00fe5df0;
  *(undefined8 *)(this + 8) = uVar2;
  *(uint *)(param_2 + 0x128) = *(int *)(param_2 + 0x128) + ((int)uVar1 + 0xffU & 0xffffff00);
  return;
}


