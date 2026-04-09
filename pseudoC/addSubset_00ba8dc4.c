// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSubset
// Entry Point: 00ba8dc4
// Size: 328 bytes
// Signature: undefined __thiscall addSubset(BtTriangleInfoMap * this, int param_1)


/* BtTriangleInfoMap::addSubset(int) */

void __thiscall BtTriangleInfoMap::addSubset(BtTriangleInfoMap *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *__dest;
  void *__dest_00;
  void *pvVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  iVar2 = *(int *)(this + 0x24);
  uVar1 = iVar2 + param_1;
  uVar10 = (ulong)(int)uVar1;
  uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if (uVar10 >> 0x3d != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  __dest = (undefined *)operator_new__(uVar5);
  if (uVar1 != 0) {
    uVar5 = uVar10 - 1 & 0x1fffffffffffffff;
    puVar6 = __dest;
    if (uVar5 != 0) {
      uVar5 = uVar5 + 1;
      uVar8 = uVar5 & 0x3ffffffffffffffe;
      puVar6 = __dest + 8;
      uVar9 = uVar8;
      do {
        uVar9 = uVar9 - 2;
        *(undefined4 *)(puVar6 + -6) = 0x7fff7fff;
        *(undefined2 *)(puVar6 + 2) = 0x7fff;
        *(undefined4 *)(puVar6 + 4) = 0x7fff7fff;
        *(undefined2 *)(puVar6 + -2) = 0x7fff;
        puVar6[-8] = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 0x10;
      } while (uVar9 != 0);
      puVar6 = __dest + uVar8 * 8;
      if (uVar5 == uVar8) goto LAB_00ba8e7c;
    }
    do {
      *(undefined4 *)(puVar6 + 2) = 0x7fff7fff;
      *(undefined2 *)(puVar6 + 6) = 0x7fff;
      puVar7 = puVar6 + 8;
      *puVar6 = 0;
      puVar6 = puVar7;
    } while (puVar7 != __dest + uVar10 * 8);
  }
LAB_00ba8e7c:
  if (iVar2 != 0) {
    memcpy(__dest,*(void **)(this + 0x28),(long)iVar2 << 3);
  }
  iVar3 = *(int *)(this + 0x20);
  lVar11 = (long)iVar3;
  uVar5 = lVar11 + 1;
  uVar10 = uVar5 * 4;
  if (uVar5 >> 0x3e != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  __dest_00 = operator_new__(uVar10);
  if (iVar3 == 0) {
    lVar11 = 0;
  }
  else {
    memcpy(__dest_00,*(void **)(this + 0x30),lVar11 << 2);
  }
  pvVar4 = *(void **)(this + 0x28);
  *(int *)((long)__dest_00 + lVar11 * 4) = iVar2;
  *(int *)(this + 0x20) = (int)uVar5;
  *(uint *)(this + 0x24) = uVar1;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  *(undefined **)(this + 0x28) = __dest;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  *(void **)(this + 0x30) = __dest_00;
  return;
}


