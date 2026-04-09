// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNumVertices
// Entry Point: 00b822e4
// Size: 316 bytes
// Signature: undefined __thiscall setNumVertices(TriangleSet * this, uint param_1, uint param_2)


/* WARNING: Type propagation algorithm not settling */
/* TriangleSet::setNumVertices(unsigned int, unsigned int) */

void __thiscall TriangleSet::setNumVertices(TriangleSet *this,uint param_1,uint param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  
  if (*(int *)(this + 8) == 0) {
    uVar4 = (ulong)(param_1 * 3) << 2;
    *(uint *)(this + 8) = param_1;
    *(uint *)(this + 0xc) = param_2;
    pvVar2 = operator_new__(uVar4);
    *(void **)(this + 0x10) = pvVar2;
    if ((param_2 & 1) != 0) {
      pvVar2 = operator_new__(uVar4);
      *(void **)(this + 0x38) = pvVar2;
    }
    if ((param_2 >> 7 & 1) != 0) {
      pvVar2 = operator_new__((ulong)(param_1 << 2) << 2);
      *(void **)(this + 0x40) = pvVar2;
    }
    uVar1 = ZEXT48(param_1 << 1);
    if ((param_2 >> 1 & 1) != 0) {
      pvVar2 = operator_new__(uVar1 << 2);
      *(void **)(this + 0x18) = pvVar2;
    }
    if ((param_2 >> 2 & 1) != 0) {
      pvVar2 = operator_new__(uVar1 << 2);
      *(void **)(this + 0x20) = pvVar2;
    }
    if ((param_2 >> 3 & 1) != 0) {
      pvVar2 = operator_new__(uVar1 << 2);
      *(void **)(this + 0x28) = pvVar2;
    }
    if ((param_2 >> 4 & 1) != 0) {
      pvVar2 = operator_new__(uVar1 << 2);
      *(void **)(this + 0x30) = pvVar2;
    }
    if ((param_2 >> 5 & 1) != 0) {
      pvVar2 = operator_new__((ulong)(param_1 << 2) << 2);
      *(void **)(this + 0x48) = pvVar2;
    }
    if ((param_2 >> 6 & 1) != 0) {
      iVar3 = 4;
      if ((param_2 & 0x100) != 0) {
        iVar3 = 1;
      }
      if ((param_2 >> 8 & 1) == 0) {
        pvVar2 = operator_new__((ulong)(iVar3 * param_1) << 2);
        *(void **)(this + 0x50) = pvVar2;
      }
      pvVar2 = operator_new__((ulong)(iVar3 * param_1));
      *(void **)(this + 0x58) = pvVar2;
    }
    if ((param_2 >> 9 & 1) != 0) {
      pvVar2 = operator_new__((ulong)param_1 << 2);
      *(void **)(this + 0x60) = pvVar2;
    }
  }
  return;
}


