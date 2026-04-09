// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00b7a704
// Size: 712 bytes
// Signature: undefined clone(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSet::clone() */

undefined8 * IndexedTriangleSet::clone(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long in_x0;
  undefined8 *this;
  void *pvVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  this = (undefined8 *)operator_new(0x90);
                    /* try { // try from 00b7a728 to 00b7a72b has its CatchHandler @ 00b7a9cc */
  TriangleSet::TriangleSet((TriangleSet *)this);
  *(undefined4 *)(this + 0xd) = 0;
  uVar9 = *(uint *)(in_x0 + 0x68);
  this[0xe] = 0;
  *(undefined4 *)(this + 0xf) = 0;
  this[0x10] = 0;
  *(undefined2 *)(this + 0x11) = 0;
  uVar8 = (ulong)uVar9 * 2 + 6 & 0x3fffffffc;
  if (0x10000 < *(uint *)(this + 1)) {
    uVar8 = (ulong)uVar9 << 2;
  }
  *this = &PTR__IndexedTriangleSet_00fea4b8;
  *(undefined4 *)((long)this + 0x8c) = 0;
  pvVar4 = operator_new__(uVar8);
  uVar1 = *(uint *)(in_x0 + 8);
  uVar2 = *(uint *)(in_x0 + 0xc);
  this[0xe] = pvVar4;
  *(uint *)(this + 0xd) = uVar9;
  TriangleSet::setNumVertices((TriangleSet *)this,uVar1,uVar2);
  if (*(int *)(this + 0xf) == 0) {
    uVar9 = *(uint *)(in_x0 + 0x78);
    puVar5 = (undefined8 *)operator_new__((ulong)uVar9 << 3);
    this[0x10] = puVar5;
    if (((uVar9 != 0) && (*puVar5 = 0, uVar9 != 1)) && (puVar5[1] = 0, uVar9 != 2)) {
      uVar8 = 2;
      do {
        *(undefined8 *)(this[0x10] + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
    *(uint *)(this + 0xf) = uVar9;
  }
  uVar9 = *(uint *)(in_x0 + 8);
  pvVar4 = *(void **)(in_x0 + 0x10);
  *(undefined *)(this + 0x11) = *(undefined *)(in_x0 + 0x88);
  memcpy((void *)this[2],pvVar4,(ulong)uVar9 * 0xc);
  uVar9 = *(uint *)(in_x0 + 0xc);
  if ((uVar9 & 1) != 0) {
    memcpy((void *)this[7],*(void **)(in_x0 + 0x38),(ulong)*(uint *)(in_x0 + 8) * 0xc);
    uVar9 = *(uint *)(in_x0 + 0xc);
  }
  if ((uVar9 >> 7 & 1) != 0) {
    memcpy((void *)this[8],*(void **)(in_x0 + 0x40),(ulong)*(uint *)(in_x0 + 8) << 4);
    uVar9 = *(uint *)(in_x0 + 0xc);
  }
  if ((uVar9 >> 1 & 1) != 0) {
    memcpy((void *)this[3],*(void **)(in_x0 + 0x18),(ulong)*(uint *)(in_x0 + 8) << 3);
    uVar9 = *(uint *)(in_x0 + 0xc);
  }
  if ((uVar9 >> 2 & 1) != 0) {
    memcpy((void *)this[4],*(void **)(in_x0 + 0x20),(ulong)*(uint *)(in_x0 + 8) << 3);
    uVar9 = *(uint *)(in_x0 + 0xc);
  }
  if ((uVar9 >> 3 & 1) != 0) {
    memcpy((void *)this[5],*(void **)(in_x0 + 0x28),(ulong)*(uint *)(in_x0 + 8) << 3);
    uVar9 = *(uint *)(in_x0 + 0xc);
  }
  if ((uVar9 >> 4 & 1) != 0) {
    memcpy((void *)this[6],*(void **)(in_x0 + 0x30),(ulong)*(uint *)(in_x0 + 8) << 3);
    uVar9 = *(uint *)(in_x0 + 0xc);
  }
  if ((uVar9 >> 5 & 1) != 0) {
    memcpy((void *)this[9],*(void **)(in_x0 + 0x48),(ulong)*(uint *)(in_x0 + 8) << 4);
    uVar9 = *(uint *)(in_x0 + 0xc);
  }
  if ((uVar9 >> 6 & 1) == 0) {
    iVar7 = *(int *)(in_x0 + 0x68);
  }
  else {
    if ((uVar9 >> 8 & 1) == 0) {
      memcpy((void *)this[10],*(void **)(in_x0 + 0x50),(ulong)(uint)(*(int *)(in_x0 + 8) << 2) << 2)
      ;
      uVar9 = *(uint *)(in_x0 + 0xc);
    }
    iVar7 = 4;
    if ((uVar9 & 0x100) != 0) {
      iVar7 = 1;
    }
    memcpy((void *)this[0xb],*(void **)(in_x0 + 0x58),(ulong)(uint)(iVar7 * *(int *)(in_x0 + 8)));
    iVar7 = *(int *)(in_x0 + 0x68);
  }
  if (iVar7 != 0) {
    uVar9 = 1;
    if (0x10000 < *(uint *)(in_x0 + 8)) {
      uVar9 = 2;
    }
    memcpy((void *)this[0xe],*(void **)(in_x0 + 0x70),(ulong)(uint)(iVar7 << (ulong)uVar9));
  }
  uVar9 = *(uint *)(in_x0 + 0x78);
  if (uVar9 != 0) {
    lVar11 = 0;
    do {
      lVar12 = *(long *)(*(long *)(in_x0 + 0x80) + lVar11);
      puVar6 = (undefined4 *)operator_new(0x20);
      uVar13 = *(undefined8 *)(lVar12 + 0x10);
      lVar10 = this[0x10];
      uVar14 = *(undefined8 *)(lVar12 + 8);
      uVar3 = *(undefined4 *)(lVar12 + 4);
      *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(puVar6 + 4) = uVar13;
      *(undefined4 **)(lVar10 + lVar11) = puVar6;
      lVar11 = lVar11 + 8;
      *puVar6 = (int)uVar14;
      puVar6[1] = uVar3;
      *(undefined8 *)(puVar6 + 2) = uVar14;
    } while ((ulong)uVar9 * 8 - lVar11 != 0);
  }
  return this;
}


