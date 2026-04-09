// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createVertexDeclaration
// Entry Point: 00aab1b8
// Size: 52 bytes
// Signature: undefined __thiscall createVertexDeclaration(NullRenderDevice * this, VertexDeclarationDesc * param_1)


/* NullRenderDevice::createVertexDeclaration(VertexDeclarationDesc const&) */

NullVertexDeclaration * __thiscall
NullRenderDevice::createVertexDeclaration(NullRenderDevice *this,VertexDeclarationDesc *param_1)

{
  NullVertexDeclaration *this_00;
  
  this_00 = (NullVertexDeclaration *)operator_new(0x18);
                    /* try { // try from 00aab1d4 to 00aab1db has its CatchHandler @ 00aab1ec */
  NullVertexDeclaration::NullVertexDeclaration(this_00,param_1);
  return this_00;
}


