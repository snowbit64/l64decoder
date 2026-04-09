// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endMaterial
// Entry Point: 0090837c
// Size: 988 bytes
// Signature: undefined __cdecl endMaterial(void * param_1, char * param_2)


/* I3DMaterialPoolFactory::endMaterial(void*, char const*) */

void I3DMaterialPoolFactory::endMaterial(void *param_1,char *param_2)

{
  ulong uVar1;
  byte bVar2;
  MaterialManager *pMVar3;
  undefined8 uVar4;
  char *pcVar5;
  ResourceManager *pRVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  
  lVar12 = *(long *)((long)param_1 + 0x268);
  if ((*(long *)(lVar12 + 0x88) == 0) && (*(char *)(lVar12 + 0x1c) != '\0')) {
    pMVar3 = (MaterialManager *)MaterialManager::getInstance();
    uVar4 = MaterialManager::getSingleColorTexture
                      (pMVar3,(float *)(*(long *)((long)param_1 + 0x268) + 0x20),0,
                       *(STREAM_QUEUE *)((long)param_1 + 0x254));
    *(undefined8 *)(lVar12 + 0x88) = uVar4;
  }
  if ((*(long *)(lVar12 + 0x70) == 0) &&
     (*(char *)(*(long *)((long)param_1 + 0x268) + 0x30) != '\0')) {
    pMVar3 = (MaterialManager *)MaterialManager::getInstance();
    uVar4 = MaterialManager::getSingleColorTexture
                      (pMVar3,(float *)(*(long *)((long)param_1 + 0x268) + 0x34),0,
                       *(STREAM_QUEUE *)((long)param_1 + 0x254));
    *(undefined8 *)(lVar12 + 0x70) = uVar4;
  }
  if ((*(long *)(lVar12 + 0x80) == 0) &&
     (*(char *)(*(long *)((long)param_1 + 0x268) + 0x44) != '\0')) {
    pMVar3 = (MaterialManager *)MaterialManager::getInstance();
    uVar4 = MaterialManager::getSingleColorTexture
                      (pMVar3,(float *)(*(long *)((long)param_1 + 0x268) + 0x48),0,
                       *(STREAM_QUEUE *)((long)param_1 + 0x254));
    *(undefined8 *)(lVar12 + 0x80) = uVar4;
  }
  if ((*(long *)(lVar12 + 0xc0) != 0) && (uVar7 = *(uint *)(lVar12 + 0xcc), uVar7 != 0)) {
    uVar11 = 0;
    do {
      if (*(long *)(lVar12 + 0xd8 + uVar11 * 8) == 0) {
        lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x110) +
                                     (ulong)*(uint *)(lVar12 + 200) * 0xe0 + 0x58) + uVar11 * 8);
        bVar2 = *(byte *)(lVar10 + 0x18);
        uVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar1 = *(ulong *)(lVar10 + 0x20);
        }
        if (uVar1 != 0) {
          if ((bVar2 & 1) == 0) {
            pcVar5 = (char *)(lVar10 + 0x19);
          }
          else {
            pcVar5 = *(char **)(lVar10 + 0x28);
            if (pcVar5 == (char *)0x0) goto LAB_00908464;
          }
          uVar4 = TextureUtil::loadMaterialTexture
                            (pcVar5,*(bool *)(lVar10 + 0x30),
                             *(STREAM_QUEUE *)((long)param_1 + 0x254));
          uVar7 = *(uint *)(lVar12 + 0xcc);
          *(undefined8 *)(lVar12 + 0xd8 + uVar11 * 8) = uVar4;
        }
      }
LAB_00908464:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar7);
  }
  if (*(int *)(*(long *)((long)param_1 + 0x268) + 0x18) != 0) {
    pMVar3 = (MaterialManager *)MaterialManager::getInstance();
    lVar10 = MaterialManager::getMaterial(pMVar3,(MaterialDesc *)(lVar12 + 0x58));
    if (lVar10 != 0) {
      pplVar13 = (long **)((long)param_1 + 0xa8);
      uVar7 = *(uint *)(*(long *)((long)param_1 + 0x268) + 0x18);
      pplVar14 = (long **)*pplVar13;
      pplVar15 = pplVar13;
      while (pplVar14 != (long **)0x0) {
        while (pplVar15 = pplVar14, uVar7 < *(uint *)(pplVar15 + 4)) {
          pplVar13 = pplVar15;
          pplVar14 = (long **)*pplVar15;
          if ((long **)*pplVar15 == (long **)0x0) {
            plVar9 = *pplVar15;
            goto joined_r0x0090853c;
          }
        }
        if (uVar7 <= *(uint *)(pplVar15 + 4)) break;
        pplVar13 = pplVar15 + 1;
        pplVar14 = (long **)*pplVar13;
      }
      plVar9 = *pplVar13;
joined_r0x0090853c:
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)operator_new(0x30);
        plVar9[5] = lVar10;
        *plVar9 = 0;
        plVar9[1] = 0;
        plVar9[2] = (long)pplVar15;
        *pplVar13 = plVar9;
        plVar8 = *(long **)((long)param_1 + 0xa0);
        *(uint *)(plVar9 + 4) = uVar7;
        if (*plVar8 != 0) {
          *(long *)((long)param_1 + 0xa0) = *plVar8;
          plVar9 = *pplVar13;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)((long)param_1 + 0xa8),(__tree_node_base *)plVar9);
        *(long *)((long)param_1 + 0xb0) = *(long *)((long)param_1 + 0xb0) + 1;
      }
    }
  }
  pRVar6 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar6,*(Resource **)(lVar12 + 0x70));
  pRVar6 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar6,*(Resource **)(lVar12 + 0x78));
  pRVar6 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar6,*(Resource **)(lVar12 + 0x80));
  pRVar6 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar6,*(Resource **)(lVar12 + 0x88));
  if (*(int *)(lVar12 + 0xcc) != 0) {
    uVar11 = 0;
    do {
      pRVar6 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar6,*(Resource **)(lVar12 + 0xd8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(lVar12 + 0xcc));
  }
  pMVar3 = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::releaseCustomShader(pMVar3,*(CustomShader **)(lVar12 + 0xc0));
  *(undefined8 *)(lVar12 + 0x8c) = 0;
  *(undefined *)(lVar12 + 0x68) = 1;
  *(char **)(lVar12 + 0x60) = "UnnamedMaterial";
  *(undefined2 *)(lVar12 + 0xbc) = 1;
  *(undefined8 *)(lVar12 + 0x94) = 0xffffffffffffffff;
  *(undefined8 *)(lVar12 + 0x120) = 0;
  *(undefined8 *)(lVar12 + 0x118) = 0;
  *(undefined8 *)(lVar12 + 0x130) = 0;
  *(undefined8 *)(lVar12 + 0x128) = 0;
  *(undefined8 *)(lVar12 + 0xa4) = 0x3f0000003fc00000;
  *(undefined8 *)(lVar12 + 0x9c) = 0x3f0000003f000000;
  *(undefined8 *)(lVar12 + 0x150) = 0;
  *(undefined8 *)(lVar12 + 0x148) = 0;
  *(undefined8 *)(lVar12 + 0x290) = 0;
  *(undefined8 *)(lVar12 + 0x288) = 0;
  *(undefined8 *)(lVar12 + 0x74) = 0;
  *(undefined8 *)(lVar12 + 0x6c) = 0;
  *(undefined4 *)(lVar12 + 0xb8) = 0x3d0f5c29;
  *(undefined8 *)(lVar12 + 0x270) = 0;
  *(undefined8 *)(lVar12 + 0x268) = 0;
  *(undefined8 *)(lVar12 + 0x260) = 0;
  *(undefined8 *)(lVar12 + 600) = 0;
  *(undefined8 *)(lVar12 + 0x110) = 0;
  *(undefined8 *)(lVar12 + 0x108) = 0;
  *(undefined8 *)(lVar12 + 0x240) = 0;
  *(undefined8 *)(lVar12 + 0x238) = 0;
  *(undefined8 *)(lVar12 + 0x230) = 0;
  *(undefined8 *)(lVar12 + 0x228) = 0;
  *(undefined8 *)(lVar12 + 0x140) = 0;
  *(undefined8 *)(lVar12 + 0x138) = 0;
  *(undefined8 *)(lVar12 + 0x210) = 0;
  *(undefined8 *)(lVar12 + 0x208) = 0;
  *(undefined8 *)(lVar12 + 0x200) = 0;
  *(undefined8 *)(lVar12 + 0x1f8) = 0;
  *(undefined8 *)(lVar12 + 0x280) = 0;
  *(undefined8 *)(lVar12 + 0x278) = 0;
  *(undefined8 *)(lVar12 + 0x1e0) = 0;
  *(undefined8 *)(lVar12 + 0x1d8) = 0;
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  *(undefined8 *)(lVar12 + 0x1c8) = 0;
  *(undefined8 *)(lVar12 + 0x250) = 0;
  *(undefined8 *)(lVar12 + 0x248) = 0;
  *(undefined8 *)(lVar12 + 0x84) = 0;
  *(undefined8 *)(lVar12 + 0x7c) = 0;
  *(undefined *)(lVar12 + 0xac) = 0;
  *(undefined8 *)(lVar12 + 0x220) = 0;
  *(undefined8 *)(lVar12 + 0x218) = 0;
  *(undefined8 *)(lVar12 + 0xb0) = 0x3f0000003f800000;
  *(undefined *)(lVar12 + 0xbe) = 0;
  *(undefined8 *)(lVar12 + 0x1f0) = 0;
  *(undefined8 *)(lVar12 + 0x1e8) = 0;
  *(long *)(lVar12 + 0xc0) = 0;
  *(undefined8 *)(lVar12 + 200) = 0;
  *(undefined4 *)(lVar12 + 0xd0) = 0;
  *(undefined8 *)(lVar12 + 0x1c0) = 0;
  *(undefined8 *)(lVar12 + 0x1b8) = 0;
  *(undefined8 *)(lVar12 + 0xe0) = 0;
  *(undefined8 *)(lVar12 + 0xd8) = 0;
  *(undefined8 *)(lVar12 + 0xf0) = 0;
  *(undefined8 *)(lVar12 + 0xe8) = 0;
  *(undefined8 *)(lVar12 + 0x100) = 0;
  *(undefined8 *)(lVar12 + 0xf8) = 0;
  *(undefined8 *)(lVar12 + 0x1b0) = 0;
  *(undefined8 *)(lVar12 + 0x1a8) = 0;
  *(undefined8 *)(lVar12 + 0x1a0) = 0;
  *(undefined8 *)(lVar12 + 0x198) = 0;
  *(undefined8 *)(lVar12 + 400) = 0;
  *(undefined8 *)(lVar12 + 0x188) = 0;
  *(undefined4 *)(lVar12 + 0x298) = 0;
  *(undefined8 *)(lVar12 + 0x180) = 0;
  *(undefined8 *)(lVar12 + 0x178) = 0;
  *(undefined8 *)(lVar12 + 0x170) = 0;
  *(undefined8 *)(lVar12 + 0x168) = 0;
  *(undefined8 *)(lVar12 + 0x160) = 0;
  *(undefined8 *)(lVar12 + 0x158) = 0;
  return;
}


