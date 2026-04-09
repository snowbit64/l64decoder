// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullIndexBuffer
// Entry Point: 00aab5e4
// Size: 64 bytes
// Signature: undefined __thiscall NullIndexBuffer(NullIndexBuffer * this, IndexBufferDesc * param_1, NullRenderDevice * param_2)


/* NullIndexBuffer::NullIndexBuffer(IndexBufferDesc const&, NullRenderDevice*) */

void __thiscall
NullIndexBuffer::NullIndexBuffer
          (NullIndexBuffer *this,IndexBufferDesc *param_1,NullRenderDevice *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(NullRenderDevice **)(this + 0x10) = param_2;
  uVar2 = NEON_rev64(uVar1,4);
  *(undefined ***)this = &PTR__NullIndexBuffer_00fe5bf0;
  *(undefined8 *)(this + 8) = uVar2;
  *(uint *)(param_2 + 300) = *(int *)(param_2 + 300) + ((int)uVar1 + 0xffU & 0xffffff00);
  return;
}


