// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainLodTexture
// Entry Point: 008f1f04
// Size: 576 bytes
// Signature: undefined __thiscall ~TerrainLodTexture(TerrainLodTexture * this)


/* TerrainLodTexture::~TerrainLodTexture() */

void __thiscall TerrainLodTexture::~TerrainLodTexture(TerrainLodTexture *this)

{
  void **ppvVar1;
  bool bVar2;
  ResourceManager *pRVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  BitmapImage *this_00;
  void **ppvVar11;
  void *pvVar12;
  ulong uVar13;
  uint *puVar14;
  
  *(undefined ***)this = &PTR__TerrainLodTexture_00fde830;
                    /* try { // try from 008f1f34 to 008f1f4b has its CatchHandler @ 008f2144 */
  pRVar3 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar3,*(Resource **)(this + 0x20));
  pRVar3 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar3,*(Resource **)(this + 0x28));
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  lVar9 = *(long *)(this + 0x60);
  if (*(long *)(this + 0x68) != lVar9) {
    uVar10 = 0;
    do {
      lVar5 = lVar9 + uVar10 * 0x28;
      ppvVar1 = (void **)(lVar5 + 0x10);
      uVar7 = 0;
      do {
        pvVar6 = *ppvVar1;
        puVar14 = (uint *)((long)pvVar6 + uVar7 * 200 + 0xc0);
        if (*puVar14 != 0) {
          uVar13 = 0;
          ppvVar11 = (void **)((long)pvVar6 + uVar7 * 200 + 8);
          do {
            if (ppvVar11[-1] != (void *)0x0) {
              operator_delete__(ppvVar11[-1]);
            }
            if (*ppvVar11 != (void *)0x0) {
              operator_delete__(*ppvVar11);
            }
            uVar13 = uVar13 + 1;
            ppvVar11 = ppvVar11 + 3;
          } while (uVar13 < *puVar14);
        }
        bVar2 = uVar7 < *(ushort *)(lVar5 + 0x18);
        uVar7 = uVar7 + 1;
      } while (bVar2);
      plVar4 = *(long **)(lVar9 + uVar10 * 0x28 + 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pvVar6 = *ppvVar1;
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
      }
                    /* try { // try from 008f201c to 008f2023 has its CatchHandler @ 008f2148 */
      DensityMap::removeDirtyListener(*(DensityMap **)(lVar9 + uVar10 * 0x28),(DirtyListener *)this)
      ;
      lVar9 = *(long *)(this + 0x60);
      uVar10 = (ulong)((int)uVar10 + 1);
      uVar7 = (*(long *)(this + 0x68) - lVar9 >> 3) * -0x3333333333333333;
    } while (uVar10 <= uVar7 && uVar7 - uVar10 != 0);
  }
  lVar9 = *(long *)(this + 0x48);
  lVar5 = *(long *)(this + 0x50);
  if (lVar5 != lVar9) {
    uVar10 = 0;
    do {
      this_00 = *(BitmapImage **)(lVar9 + uVar10 * 0x20);
      if (this_00 != (BitmapImage *)0x0) {
        BitmapImage::~BitmapImage(this_00);
        operator_delete(this_00);
        lVar9 = *(long *)(this + 0x48);
        lVar5 = *(long *)(this + 0x50);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar5 - lVar9 >> 5));
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  pvVar6 = *(void **)(this + 0x78);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x60);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x48);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  pvVar12 = pvVar6;
  pvVar8 = *(void **)(this + 0x50);
  if (*(void **)(this + 0x50) != pvVar6) {
    do {
      pvVar12 = (void *)((long)pvVar8 + -0x20);
      if ((*(byte *)((long)pvVar8 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar8 + -8));
      }
      pvVar8 = pvVar12;
    } while (pvVar12 != pvVar6);
    pvVar12 = *(void **)(this + 0x48);
  }
  *(void **)(this + 0x50) = pvVar6;
  operator_delete(pvVar12);
  return;
}


