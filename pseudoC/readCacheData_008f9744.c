// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readCacheData
// Entry Point: 008f9744
// Size: 680 bytes
// Signature: undefined __thiscall readCacheData(TerrainPatchOccluderManager * this, File * param_1, uint param_2)


/* TerrainPatchOccluderManager::readCacheData(File&, unsigned int) */

uint __thiscall
TerrainPatchOccluderManager::readCacheData
          (TerrainPatchOccluderManager *this,File *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_6c,4);
  if ((iVar4 == 4) &&
     (local_6c ==
      *(uint *)(*(long *)(this + 0x68) + 0x19c) >> (ulong)(*(uint *)(this + 0x100) & 0x1f))) {
    if (param_2 < 3) {
      if (*(int *)(*(long *)(this + 0x68) + 0x268) == 0) {
        local_70 = 0;
        uVar5 = *(uint *)(this + 0xf8);
        goto joined_r0x008f9848;
      }
    }
    else {
      iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_70,4);
      if ((iVar4 == 4) && (local_70 == *(uint *)(*(long *)(this + 0x68) + 0x268))) {
        uVar5 = *(uint *)(this + 0xf8);
joined_r0x008f9848:
        if (uVar5 != 0) {
          uVar9 = 0;
          do {
            uVar1 = uVar9 + 1;
            uVar10 = 0;
            do {
              uVar8 = 0;
              uVar2 = uVar10 + 1;
              do {
                uVar11 = (ulong)(uVar10 + uVar5 * uVar9);
                lVar13 = *(long *)(this + 0x118);
                uVar12 = (ulong)uVar8;
                uVar6 = readMesh(param_1,(IndexedTriangleSet **)
                                         (lVar13 + uVar11 * 0x380 + uVar12 * 0x20 + 8));
                if ((uVar6 & 1) == 0) goto LAB_008f9808;
                if (uVar8 == 0) {
                  uVar7 = TriangleSet::createBoundingVolume();
                  *(undefined8 *)(lVar13 + uVar11 * 0x380 + 0x18) = uVar7;
                }
                if (((uVar1 < *(uint *)(this + 0xf8)) &&
                    (((uVar6 = readMesh(param_1,(IndexedTriangleSet **)
                                                (lVar13 + uVar11 * 0x380 + uVar12 * 0x20 + 0x88)),
                      (uVar6 & 1) == 0 ||
                      ((uVar8 != 0 &&
                       (uVar6 = readMesh(param_1,(IndexedTriangleSet **)
                                                 (lVar13 + uVar11 * 0x380 + uVar12 * 0x20 + 0x188)),
                       (uVar6 & 1) == 0)))) ||
                     ((uVar8 < local_70 &&
                      (uVar6 = readMesh(param_1,(IndexedTriangleSet **)
                                                (lVar13 + uVar11 * 0x380 + uVar12 * 0x20 + 0x108)),
                      (uVar6 & 1) == 0)))))) ||
                   ((uVar2 < *(uint *)(this + 0xf8) &&
                    (((uVar6 = readMesh(param_1,(IndexedTriangleSet **)
                                                (lVar13 + uVar11 * 0x380 + uVar12 * 0x20 + 0x208)),
                      (uVar6 & 1) == 0 ||
                      ((uVar8 != 0 &&
                       (uVar6 = readMesh(param_1,(IndexedTriangleSet **)
                                                 (lVar13 + uVar11 * 0x380 + uVar12 * 0x20 + 0x308)),
                       (uVar6 & 1) == 0)))) ||
                     ((uVar8 < local_70 &&
                      (uVar6 = readMesh(param_1,(IndexedTriangleSet **)
                                                (lVar13 + uVar11 * 0x380 + uVar12 * 0x20 + 0x288)),
                      (uVar6 & 1) == 0)))))))) goto LAB_008f9808;
                uVar8 = uVar8 + 1;
                uVar5 = *(uint *)(this + 0xf8);
              } while (uVar8 <= local_70);
              uVar10 = uVar2;
            } while (uVar2 < uVar5);
            uVar9 = uVar1;
          } while (uVar1 < uVar5);
        }
        uVar5 = Decimator::deserialize(*(Decimator **)(this + 0xe8),param_1,2 < param_2);
        goto LAB_008f980c;
      }
    }
  }
LAB_008f9808:
  uVar5 = 0;
LAB_008f980c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


