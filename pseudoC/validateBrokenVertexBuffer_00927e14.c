// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateBrokenVertexBuffer
// Entry Point: 00927e14
// Size: 228 bytes
// Signature: undefined __thiscall validateBrokenVertexBuffer(DestructionGeometry * this, uint param_1)


/* DestructionGeometry::validateBrokenVertexBuffer(unsigned int) */

void __thiscall
DestructionGeometry::validateBrokenVertexBuffer(DestructionGeometry *this,uint param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  void *__src;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((uint)(*(int *)(this + 0xc4) - *(int *)(this + 0xc0)) < param_1) {
    __src = *(void **)(this + 0xa0);
    *(uint *)(this + 0xc4) = *(int *)(this + 0xc4) + param_1 * 5;
    plVar3 = (long *)DestructionGeometryShared::getVertexDeclaration();
    iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0);
    posix_memalign(&local_40,0x10,(ulong)(*(int *)(this + 0xc4) * iVar2 + 0xf));
    *(void **)(this + 0xa0) = local_40;
    if (__src != (void *)0x0) {
      memcpy(local_40,__src,(ulong)(uint)(*(int *)(this + 0xc0) * iVar2));
      free(__src);
    }
    if (*(long **)(this + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb0) + 8))();
    }
    *(undefined8 *)(this + 0xb0) = 0;
    this[0xd1] = (DestructionGeometry)0x1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


