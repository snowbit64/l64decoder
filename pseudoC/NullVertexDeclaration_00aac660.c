// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullVertexDeclaration
// Entry Point: 00aac660
// Size: 508 bytes
// Signature: undefined __thiscall NullVertexDeclaration(NullVertexDeclaration * this, VertexDeclarationDesc * param_1)


/* NullVertexDeclaration::NullVertexDeclaration(VertexDeclarationDesc const&) */

void __thiscall
NullVertexDeclaration::NullVertexDeclaration
          (NullVertexDeclaration *this,VertexDeclarationDesc *param_1)

{
  uint uVar1;
  void *__s;
  long lVar2;
  
  uVar1 = *(uint *)param_1;
  *(uint *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR__NullVertexDeclaration_00fe5e50;
  __s = operator_new__((ulong)uVar1 << 2);
  *(void **)(this + 8) = __s;
  memset(__s,0,(ulong)uVar1 << 2);
  if (*(uint *)(param_1 + 0x44) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x44) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x18)];
  }
  if (*(uint *)(param_1 + 0x48) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x1c)];
  }
  if (*(uint *)(param_1 + 0x4c) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x4c) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x20)];
  }
  if (*(uint *)(param_1 + 0x50) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x50) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x24)];
  }
  if (*(uint *)(param_1 + 0x54) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x54) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x28)];
  }
  if (*(uint *)(param_1 + 0x58) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x58) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x2c)];
  }
  if (*(uint *)(param_1 + 0x5c) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x5c) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x30)];
  }
  if (*(uint *)(param_1 + 0x60) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x60) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x34)];
  }
  if (*(uint *)(param_1 + 100) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 100) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x38)];
  }
  if (*(uint *)(param_1 + 0x68) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x68) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x3c)];
  }
  if (*(uint *)(param_1 + 0x6c) < uVar1) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x6c) * 4;
    *(int *)((long)__s + lVar2) =
         *(int *)((long)__s + lVar2) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(param_1 + 0x40)];
  }
  return;
}


