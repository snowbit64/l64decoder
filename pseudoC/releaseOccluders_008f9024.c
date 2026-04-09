// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseOccluders
// Entry Point: 008f9024
// Size: 344 bytes
// Signature: undefined releaseOccluders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::releaseOccluders() */

void TerrainPatchOccluderManager::releaseOccluders(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  uint uVar3;
  GeoMipMappingTerrain *this;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  uVar3 = *(uint *)(in_x0 + 0xf8);
  if (uVar3 != 0) {
    uVar4 = 0;
    this = *(GeoMipMappingTerrain **)(in_x0 + 0x68);
    do {
      uVar6 = 0;
      do {
        lVar8 = 0;
        lVar7 = *(long *)(in_x0 + 0x118) + (ulong)(uVar6 + uVar4 * uVar3) * 0x380;
        do {
          lVar9 = 0;
          iVar10 = 0;
          do {
            lVar1 = lVar7 + lVar9;
            if (*(long *)(lVar1 + 8) != 0) {
              GeoMipMappingTerrain::setOccluderData
                        (this,(uVar6 << (ulong)(*(uint *)(in_x0 + 0x100) & 0x1f)) + (int)lVar8,
                         iVar10 + (uVar4 << (ulong)(*(uint *)(in_x0 + 0x100) & 0x1f)),(void *)0x0);
              if (*(long **)(lVar1 + 8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar1 + 8) + 8))();
              }
              lVar2 = lVar7 + lVar9;
              *(undefined8 *)(lVar1 + 8) = 0;
              pvVar5 = *(void **)(lVar2 + 0x10);
              if (pvVar5 != (void *)0x0) {
                if (*(void **)((long)pvVar5 + 8) != (void *)0x0) {
                  operator_delete__(*(void **)((long)pvVar5 + 8));
                }
                operator_delete(pvVar5);
              }
              *(undefined8 *)(lVar2 + 0x10) = 0;
              if (*(long **)(lVar2 + 0x18) != (long *)0x0) {
                (**(code **)(**(long **)(lVar2 + 0x18) + 8))();
              }
              *(undefined8 *)(lVar2 + 0x18) = 0;
            }
            iVar10 = iVar10 + 1;
            lVar9 = lVar9 + 0x20;
          } while (lVar9 != 0x80);
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x80;
        } while (lVar8 != 7);
        uVar3 = *(uint *)(in_x0 + 0xf8);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  *(undefined8 *)(in_x0 + 0x108) = 0;
  *(undefined8 *)(in_x0 + 0x110) = 0;
  return;
}


