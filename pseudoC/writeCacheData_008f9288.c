// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeCacheData
// Entry Point: 008f9288
// Size: 552 bytes
// Signature: undefined __thiscall writeCacheData(TerrainPatchOccluderManager * this, File * param_1)


/* TerrainPatchOccluderManager::writeCacheData(File&) */

uint __thiscall
TerrainPatchOccluderManager::writeCacheData(TerrainPatchOccluderManager *this,File *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  puVar3 = (uint *)(this + 0xf8);
  local_68 = *(long *)(lVar4 + 0x28);
  local_6c = *(uint *)(*(long *)(this + 0x68) + 0x268);
  iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,puVar3,4);
  if ((iVar5 == 4) &&
     (iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_6c,4), iVar5 == 4)) {
    uVar6 = *(uint *)(this + 0xf8);
    if (uVar6 != 0) {
      uVar10 = 0;
      do {
        uVar1 = uVar10 + 1;
        uVar12 = 0;
        do {
          uVar8 = 0;
          uVar2 = uVar12 + 1;
          do {
            uVar11 = (ulong)(uVar12 + uVar6 * uVar10);
            lVar9 = *(long *)(this + 0x118);
            uVar13 = (ulong)uVar8;
            uVar7 = writeMesh(param_1,*(IndexedTriangleSet **)
                                       (lVar9 + uVar11 * 0x380 + uVar13 * 0x20 + 8));
            if ((((uVar7 & 1) == 0) ||
                ((uVar1 < *puVar3 &&
                 (((uVar7 = writeMesh(param_1,*(IndexedTriangleSet **)
                                               (lVar9 + uVar11 * 0x380 + uVar13 * 0x20 + 0x88)),
                   (uVar7 & 1) == 0 ||
                   ((uVar8 != 0 &&
                    (uVar7 = writeMesh(param_1,*(IndexedTriangleSet **)
                                                (lVar9 + uVar11 * 0x380 + uVar13 * 0x20 + 0x188)),
                    (uVar7 & 1) == 0)))) ||
                  ((uVar8 < local_6c &&
                   (uVar7 = writeMesh(param_1,*(IndexedTriangleSet **)
                                               (lVar9 + uVar11 * 0x380 + uVar13 * 0x20 + 0x108)),
                   (uVar7 & 1) == 0)))))))) ||
               ((uVar2 < *puVar3 &&
                (((uVar7 = writeMesh(param_1,*(IndexedTriangleSet **)
                                              (lVar9 + uVar11 * 0x380 + uVar13 * 0x20 + 0x208)),
                  (uVar7 & 1) == 0 ||
                  ((uVar8 != 0 &&
                   (uVar7 = writeMesh(param_1,*(IndexedTriangleSet **)
                                               (lVar9 + uVar11 * 0x380 + uVar13 * 0x20 + 0x308)),
                   (uVar7 & 1) == 0)))) ||
                 ((uVar8 < local_6c &&
                  (uVar7 = writeMesh(param_1,*(IndexedTriangleSet **)
                                              (lVar9 + uVar11 * 0x380 + uVar13 * 0x20 + 0x288)),
                  (uVar7 & 1) == 0)))))))) goto LAB_008f9474;
            uVar8 = uVar8 + 1;
            uVar6 = *puVar3;
          } while (uVar8 <= local_6c);
          uVar12 = uVar2;
        } while (uVar2 < uVar6);
        uVar10 = uVar1;
      } while (uVar1 < uVar6);
    }
    uVar6 = Decimator::serialize(*(Decimator **)(this + 0xe8),param_1);
  }
  else {
LAB_008f9474:
    uVar6 = 0;
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


