// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVertexBuffer
// Entry Point: 008c8ebc
// Size: 832 bytes
// Signature: undefined __thiscall addVertexBuffer(VertexBufferGeometry * this, PRIMITIVE_TYPE param_1, IVertexBuffer * param_2, IVertexDeclaration * param_3)


/* VertexBufferGeometry::addVertexBuffer(ICommandBuffer::PRIMITIVE_TYPE, IVertexBuffer*,
   IVertexDeclaration*) */

void __thiscall
VertexBufferGeometry::addVertexBuffer
          (VertexBufferGeometry *this,PRIMITIVE_TYPE param_1,IVertexBuffer *param_2,
          IVertexDeclaration *param_3)

{
  ulong uVar1;
  PRIMITIVE_TYPE *pPVar2;
  IVertexBuffer **ppIVar3;
  IVertexDeclaration **ppIVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  size_t __n;
  
  pPVar2 = *(PRIMITIVE_TYPE **)(this + 0x60);
  if (pPVar2 == *(PRIMITIVE_TYPE **)(this + 0x68)) {
    pvVar12 = *(void **)(this + 0x58);
    uVar10 = (long)pPVar2 - (long)pvVar12;
    uVar1 = ((long)uVar10 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) goto LAB_008c91ec;
    if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
      uVar1 = (long)uVar10 >> 1;
    }
    if (0x7ffffffffffffffb < uVar10) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_008c91f0;
      pvVar9 = operator_new(uVar1 << 2);
    }
    pPVar2 = (PRIMITIVE_TYPE *)((long)pvVar9 + ((long)uVar10 >> 2) * 4);
    *pPVar2 = param_1;
    if (0 < (long)uVar10) {
      memcpy(pvVar9,pvVar12,uVar10);
    }
    *(void **)(this + 0x58) = pvVar9;
    *(PRIMITIVE_TYPE **)(this + 0x60) = pPVar2 + 1;
    *(void **)(this + 0x68) = (void *)((long)pvVar9 + uVar1 * 4);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *pPVar2 = param_1;
    *(PRIMITIVE_TYPE **)(this + 0x60) = pPVar2 + 1;
  }
  ppIVar3 = *(IVertexBuffer ***)(this + 0x90);
  if (ppIVar3 == *(IVertexBuffer ***)(this + 0x98)) {
    pvVar12 = *(void **)(this + 0x88);
    uVar10 = (long)ppIVar3 - (long)pvVar12;
    uVar1 = ((long)uVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_008c91ec;
    if (uVar1 <= (ulong)((long)uVar10 >> 2)) {
      uVar1 = (long)uVar10 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_008c91f0;
      pvVar9 = operator_new(uVar1 << 3);
    }
    ppIVar3 = (IVertexBuffer **)((long)pvVar9 + ((long)uVar10 >> 3) * 8);
    *ppIVar3 = param_2;
    if (0 < (long)uVar10) {
      memcpy(pvVar9,pvVar12,uVar10);
    }
    *(void **)(this + 0x88) = pvVar9;
    *(IVertexBuffer ***)(this + 0x90) = ppIVar3 + 1;
    *(void **)(this + 0x98) = (void *)((long)pvVar9 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppIVar3 = param_2;
    *(IVertexBuffer ***)(this + 0x90) = ppIVar3 + 1;
  }
  ppIVar4 = *(IVertexDeclaration ***)(this + 0xa8);
  if (ppIVar4 == *(IVertexDeclaration ***)(this + 0xb0)) {
    pvVar12 = *(void **)(this + 0xa0);
    uVar10 = (long)ppIVar4 - (long)pvVar12;
    uVar1 = ((long)uVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_008c91ec;
    if (uVar1 <= (ulong)((long)uVar10 >> 2)) {
      uVar1 = (long)uVar10 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_008c91f0;
      pvVar9 = operator_new(uVar1 << 3);
    }
    ppIVar4 = (IVertexDeclaration **)((long)pvVar9 + ((long)uVar10 >> 3) * 8);
    *ppIVar4 = param_3;
    if (0 < (long)uVar10) {
      memcpy(pvVar9,pvVar12,uVar10);
    }
    *(void **)(this + 0xa0) = pvVar9;
    *(IVertexDeclaration ***)(this + 0xa8) = ppIVar4 + 1;
    *(void **)(this + 0xb0) = (void *)((long)pvVar9 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppIVar4 = param_3;
    *(IVertexDeclaration ***)(this + 0xa8) = ppIVar4 + 1;
  }
  uVar7 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
  uVar8 = (**(code **)(*(long *)param_3 + 0x10))(param_3,0);
  uVar6 = 0;
  if (uVar8 != 0) {
    uVar6 = uVar7 / uVar8;
  }
  puVar5 = *(uint **)(this + 0x78);
  if (puVar5 < *(uint **)(this + 0x80)) {
    *puVar5 = uVar6;
    *(uint **)(this + 0x78) = puVar5 + 1;
  }
  else {
    pvVar12 = *(void **)(this + 0x70);
    __n = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)__n >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
LAB_008c91ec:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar10 = (long)*(uint **)(this + 0x80) - (long)pvVar12;
    uVar11 = (long)uVar10 >> 1;
    if (uVar1 <= uVar11) {
      uVar1 = uVar11;
    }
    if (0x7ffffffffffffffb < uVar10) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) {
LAB_008c91f0:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar9 = operator_new(uVar1 << 2);
    }
    puVar5 = (uint *)((long)pvVar9 + ((long)__n >> 2) * 4);
    *puVar5 = uVar6;
    if (0 < (long)__n) {
      memcpy(pvVar9,pvVar12,__n);
    }
    *(void **)(this + 0x70) = pvVar9;
    *(uint **)(this + 0x78) = puVar5 + 1;
    *(void **)(this + 0x80) = (void *)((long)pvVar9 + uVar1 * 4);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
      return;
    }
  }
  return;
}


