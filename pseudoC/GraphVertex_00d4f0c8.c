// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GraphVertex
// Entry Point: 00d4f0c8
// Size: 384 bytes
// Signature: undefined __thiscall GraphVertex(GraphVertex * this, GraphVertex * param_1)


/* HACD::GraphVertex::GraphVertex(HACD::GraphVertex const&) */

void __thiscall HACD::GraphVertex::GraphVertex(GraphVertex *this,GraphVertex *param_1)

{
  GraphVertex *pGVar1;
  long lVar2;
  long lVar3;
  GraphVertex GVar4;
  GraphVertex *pGVar5;
  void *__dest;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t __n;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar7 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 8) = uVar10;
  *(undefined8 *)this = uVar7;
  uVar8 = *(ulong *)(param_1 + 0x98);
  *(undefined8 *)(this + 0xa0) = 0x10;
  if (uVar8 < 0x11) {
    *(ulong *)(this + 0x98) = uVar8;
LAB_00d4f12c:
    pGVar5 = this + 0x10;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0xa0);
    uVar6 = uVar9 << 3;
    if (uVar9 >> 0x3d != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    *(ulong *)(this + 0xa0) = uVar9;
    pGVar5 = (GraphVertex *)operator_new__(uVar6);
    *(GraphVertex **)(this + 0x90) = pGVar5;
    *(ulong *)(this + 0x98) = uVar8;
    if (uVar9 == 0x10) goto LAB_00d4f12c;
  }
  pGVar1 = param_1 + 0x10;
  if (*(long *)(param_1 + 0xa0) != 0x10) {
    pGVar1 = *(GraphVertex **)(param_1 + 0x90);
  }
  memcpy(pGVar5,pGVar1,uVar8 << 3);
  GVar4 = param_1[0xa8];
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  lVar2 = *(long *)(param_1 + 0xb0);
  lVar3 = *(long *)(param_1 + 0xb8);
  this[0xa8] = GVar4;
  uVar8 = lVar3 - lVar2;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __dest = operator_new(uVar8);
    *(void **)(this + 0xb0) = __dest;
    *(void **)(this + 0xb8) = __dest;
    *(void **)(this + 0xc0) = (void *)((long)__dest + ((long)uVar8 >> 3) * 8);
    __n = *(long *)(param_1 + 0xb8) - (long)*(void **)(param_1 + 0xb0);
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)(param_1 + 0xb0),__n);
      __dest = (void *)((long)__dest + __n);
    }
    *(void **)(this + 0xb8) = __dest;
  }
  SArray<HACD::DPoint,16ul>::SArray
            ((SArray<HACD::DPoint,16ul> *)(this + 200),(SArray *)(param_1 + 200));
  uVar7 = *(undefined8 *)(param_1 + 0x270);
  uVar11 = *(undefined8 *)(param_1 + 0x268);
  uVar10 = *(undefined8 *)(param_1 + 0x260);
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x270) = uVar7;
  *(undefined8 *)(this + 0x268) = uVar11;
  *(undefined8 *)(this + 0x260) = uVar10;
  uVar8 = *(ulong *)(param_1 + 0x300);
  *(undefined8 *)(this + 0x308) = 0x10;
  if (uVar8 < 0x11) {
    *(ulong *)(this + 0x300) = uVar8;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x308);
    uVar6 = uVar9 << 3;
    if (uVar9 >> 0x3d != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    *(ulong *)(this + 0x308) = uVar9;
    pGVar5 = (GraphVertex *)operator_new__(uVar6);
    *(GraphVertex **)(this + 0x2f8) = pGVar5;
    *(ulong *)(this + 0x300) = uVar8;
    if (uVar9 != 0x10) goto LAB_00d4f21c;
  }
  pGVar5 = this + 0x278;
LAB_00d4f21c:
  pGVar1 = param_1 + 0x278;
  if (*(long *)(param_1 + 0x308) != 0x10) {
    pGVar1 = *(GraphVertex **)(param_1 + 0x2f8);
  }
  memcpy(pGVar5,pGVar1,uVar8 << 3);
  return;
}


