// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyDistanceTextures
// Entry Point: 00a63514
// Size: 440 bytes
// Signature: undefined __thiscall applyDistanceTextures(FoliageSystem * this, TerrainLodTexture * param_1)


/* FoliageSystem::applyDistanceTextures(TerrainLodTexture*) */

void __thiscall FoliageSystem::applyDistanceTextures(FoliageSystem *this,TerrainLodTexture *param_1)

{
  DensityMap **ppDVar1;
  DensityMap **ppDVar2;
  DensityMap *pDVar3;
  uchar *puVar4;
  ulong *puVar5;
  DensityMap *pDVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong *__s;
  ulong uVar10;
  
  ppDVar2 = *(DensityMap ***)(*(long *)this + 0x18);
  for (ppDVar1 = *(DensityMap ***)(*(long *)this + 0x10); ppDVar1 != ppDVar2; ppDVar1 = ppDVar1 + 5)
  {
    pDVar3 = ppDVar1[2];
    for (pDVar6 = ppDVar1[1]; pDVar6 != pDVar3; pDVar6 = pDVar6 + 0x70) {
      uVar8 = (*(long *)(pDVar6 + 0x60) - *(long *)(pDVar6 + 0x58) >> 3) * 0x4ec4ec4ec4ec4ec5;
      uVar7 = (uint)uVar8;
      if (uVar7 != 0) {
        uVar10 = uVar8 & 0xffffffff;
        puVar4 = (uchar *)operator_new__(uVar10);
        lVar9 = (uVar10 + (uVar8 & 0xffffffff) * 2) * 8;
        puVar5 = (ulong *)operator_new__(lVar9 + 8);
        __s = puVar5 + 1;
        *puVar5 = uVar10;
        memset(__s,0,((lVar9 - 0x18U) / 0x18) * 0x18 + 0x18);
        lVar9 = *(long *)(pDVar6 + 0x58);
        if (*(long *)(pDVar6 + 0x60) != lVar9) {
          uVar8 = 0;
          do {
            lVar9 = lVar9 + uVar8 * 0x68;
            puVar4[uVar8] = (uchar)*(undefined4 *)(lVar9 + 0x30);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(__s + uVar8 * 3),(basic_string *)(lVar9 + 0x18));
            lVar9 = *(long *)(pDVar6 + 0x58);
            uVar8 = (ulong)((int)uVar8 + 1);
            uVar10 = (*(long *)(pDVar6 + 0x60) - lVar9 >> 3) * 0x4ec4ec4ec4ec4ec5;
          } while (uVar8 <= uVar10 && uVar10 - uVar8 != 0);
        }
        TerrainLodTexture::addDynamicLayer
                  (param_1,*ppDVar1,*(uint *)(pDVar6 + 0x48),*(uint *)(pDVar6 + 0x4c),
                   *(uint *)(pDVar6 + 0x50),uVar7,(DistanceTextureDesc *)__s,false,uVar7,puVar4);
        operator_delete__(puVar4);
        for (lVar9 = *puVar5 * 0x18; lVar9 != 0; lVar9 = lVar9 + -0x18) {
          if ((*(byte *)((long)puVar5 + lVar9 + -0x10) & 1) != 0) {
            operator_delete(*(void **)((long)puVar5 + lVar9));
          }
        }
        operator_delete__(puVar5);
      }
    }
  }
  return;
}


