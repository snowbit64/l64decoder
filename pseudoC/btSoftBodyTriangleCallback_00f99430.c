// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSoftBodyTriangleCallback
// Entry Point: 00f99430
// Size: 496 bytes
// Signature: undefined __thiscall ~btSoftBodyTriangleCallback(btSoftBodyTriangleCallback * this)


/* btSoftBodyTriangleCallback::~btSoftBodyTriangleCallback() */

void __thiscall
btSoftBodyTriangleCallback::~btSoftBodyTriangleCallback(btSoftBodyTriangleCallback *this)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long **pplVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  
  *(undefined ***)this = &PTR__btSoftBodyTriangleCallback_0101c530;
  if (0 < *(int *)(this + 0x9c)) {
    lVar7 = 0;
    do {
      lVar9 = *(long *)(*(long *)(this + 8) + 0x348);
      iVar5 = *(int *)(lVar9 + 0x44);
      pplVar8 = (long **)(*(long *)(this + 0xa8) + lVar7 * 0x10 + 8);
      plVar6 = *pplVar8;
      if (0 < iVar5) {
        lVar10 = 0;
        do {
          ppvVar1 = (void **)(*(long *)(lVar9 + 0x50) + lVar10 * 8);
          pvVar3 = *ppvVar1;
          if (pvVar3 != (void *)0x0) {
            pvVar11 = (void *)0x0;
            do {
              while (pvVar4 = pvVar3, pvVar3 = *(void **)((long)pvVar4 + 0x120),
                    *(long **)((long)pvVar4 + 0x118) == plVar6) {
                ppvVar2 = ppvVar1;
                if (pvVar11 != (void *)0x0) {
                  ppvVar2 = (void **)((long)pvVar11 + 0x120);
                }
                *ppvVar2 = pvVar3;
                operator_delete(pvVar4);
                if (pvVar3 == (void *)0x0) goto LAB_00f994ac;
              }
              pvVar11 = pvVar4;
            } while (pvVar3 != (void *)0x0);
LAB_00f994ac:
            iVar5 = *(int *)(lVar9 + 0x44);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar5);
        plVar6 = *pplVar8;
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(this + 0x9c));
  }
  btHashMap<btHashKey<btTriIndex>,btTriIndex>::clear();
  if ((*(long *)(this + 200) != 0) && (this[0xd0] != (btSoftBodyTriangleCallback)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  this[0xd0] = (btSoftBodyTriangleCallback)0x1;
  if ((*(long *)(this + 0xa8) != 0) && (this[0xb0] != (btSoftBodyTriangleCallback)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0xb0] = (btSoftBodyTriangleCallback)0x1;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  if ((*(long *)(this + 0x88) != 0) && (this[0x90] != (btSoftBodyTriangleCallback)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x90] = (btSoftBodyTriangleCallback)0x1;
  if ((*(long *)(this + 0x68) != 0) && (this[0x70] != (btSoftBodyTriangleCallback)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x70] = (btSoftBodyTriangleCallback)0x1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


