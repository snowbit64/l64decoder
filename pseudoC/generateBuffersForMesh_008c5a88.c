// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateBuffersForMesh
// Entry Point: 008c5a88
// Size: 740 bytes
// Signature: undefined __thiscall generateBuffersForMesh(InstancedGeometryManager * this, IRenderDevice * param_1, MeshData * param_2)


/* InstancedGeometryManager::generateBuffersForMesh(IRenderDevice*,
   InstancedGeometryManager::MeshData&) */

void __thiscall
InstancedGeometryManager::generateBuffersForMesh
          (InstancedGeometryManager *this,IRenderDevice *param_1,MeshData *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  void *__dest;
  short *psVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  short sVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  void *local_a0;
  uint local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  char *local_50;
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  if (param_2[0x10] == (MeshData)0x0) {
    if (*(long *)(param_2 + 0x38) == 0) {
      local_a0 = *(void **)param_2;
      local_98 = *(int *)(param_2 + 8) * *(int *)(param_2 + 0xc);
      local_94 = 1;
      uStack_90 = 0x50b092;
      local_8c = 0;
      uVar9 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      uVar9 = (**(code **)(*(long *)param_1 + 0x108))(param_1,uVar9,&local_a0);
      *(undefined8 *)(param_2 + 0x38) = uVar9;
      lVar14 = *(long *)(param_2 + 0x48);
      goto joined_r0x008c5d60;
    }
  }
  else if (*(long *)(param_2 + 0x40) == 0) {
    local_94 = 0;
    uStack_90 = 0xffffffff;
    local_50 = "Software Instancing Vertex Buffer";
    local_8c = *(int *)(param_2 + 0xc) << 1;
    local_6c = 0x100000001;
    local_a0 = *(void **)param_2;
    local_84 = 1;
    uStack_80 = 1;
    uStack_88 = 1;
    uStack_5c = 0x3f80000000000000;
    local_64 = 0;
    local_98 = local_98 & 0xffff0000;
    local_7c = 0;
    local_70 = 0;
    local_54 = 0;
    local_78 = 0x2d00000004;
    uVar9 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
    uVar9 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar9,&local_a0);
    *(undefined8 *)(param_2 + 0x40) = uVar9;
    lVar14 = *(long *)(param_2 + 0x48);
    goto joined_r0x008c5d60;
  }
  lVar14 = *(long *)(param_2 + 0x48);
joined_r0x008c5d60:
  if (lVar14 == 0) {
    uVar3 = *(uint *)(param_2 + 0x20);
    uVar4 = (ulong)uVar3;
    uVar5 = *(uint *)(param_2 + 0x24);
    uVar15 = uVar5 * uVar4;
    uVar18 = uVar15 * 2;
    if (CARRY8(uVar15,uVar15)) {
      uVar18 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar18);
    memcpy(__dest,*(void **)(param_2 + 0x18),uVar4 << 1);
    if (1 < uVar5) {
      iVar13 = 0;
      uVar6 = *(undefined4 *)(param_2 + 0xc);
      pvVar2 = (void *)((long)__dest + uVar4 * 2);
      uVar15 = uVar4 & 0xfffffff0;
      uVar16 = 1;
      uVar18 = uVar4;
      do {
        iVar17 = (int)uVar18;
        if (uVar3 != 0) {
          sVar19 = (short)uVar6 * (short)uVar16;
          if (uVar3 < 0x10) {
LAB_008c5be8:
            uVar11 = 0;
          }
          else {
            uVar8 = uVar3 + uVar3 * iVar13;
            uVar11 = 0;
            if ((!CARRY4(uVar8,(uint)(uVar4 - 1))) && (uVar4 - 1 >> 0x20 == 0)) {
              lVar14 = (ulong)uVar8 * 2;
              uVar11 = uVar15;
              puVar12 = (undefined8 *)((long)__dest + 0x10);
              if (((void *)((long)__dest + lVar14) < pvVar2) &&
                 (__dest < (void *)((long)pvVar2 + lVar14))) goto LAB_008c5be8;
              do {
                uVar20 = puVar12[-1];
                uVar9 = puVar12[-2];
                uVar22 = puVar12[1];
                uVar21 = *puVar12;
                puVar1 = (undefined8 *)((long)__dest + uVar18 * 2);
                uVar11 = uVar11 - 0x10;
                uVar18 = (ulong)((int)uVar18 + 0x10);
                puVar1[1] = CONCAT26((short)((ulong)uVar20 >> 0x30) + sVar19,
                                     CONCAT24((short)((ulong)uVar20 >> 0x20) + sVar19,
                                              CONCAT22((short)((ulong)uVar20 >> 0x10) + sVar19,
                                                       (short)uVar20 + sVar19)));
                *puVar1 = CONCAT26((short)((ulong)uVar9 >> 0x30) + sVar19,
                                   CONCAT24((short)((ulong)uVar9 >> 0x20) + sVar19,
                                            CONCAT22((short)((ulong)uVar9 >> 0x10) + sVar19,
                                                     (short)uVar9 + sVar19)));
                puVar1[3] = CONCAT26((short)((ulong)uVar22 >> 0x30) + sVar19,
                                     CONCAT24((short)((ulong)uVar22 >> 0x20) + sVar19,
                                              CONCAT22((short)((ulong)uVar22 >> 0x10) + sVar19,
                                                       (short)uVar22 + sVar19)));
                puVar1[2] = CONCAT26((short)((ulong)uVar21 >> 0x30) + sVar19,
                                     CONCAT24((short)((ulong)uVar21 >> 0x20) + sVar19,
                                              CONCAT22((short)((ulong)uVar21 >> 0x10) + sVar19,
                                                       (short)uVar21 + sVar19)));
                puVar12 = puVar12 + 4;
              } while (uVar11 != 0);
              uVar11 = uVar15;
              if (uVar15 == uVar4) goto LAB_008c5bc4;
            }
          }
          uVar8 = iVar17 + (int)uVar11;
          lVar14 = uVar4 - uVar11;
          psVar10 = (short *)((long)__dest + uVar11 * 2);
          do {
            lVar14 = lVar14 + -1;
            *(short *)((long)__dest + (ulong)uVar8 * 2) = *psVar10 + sVar19;
            uVar8 = uVar8 + 1;
            psVar10 = psVar10 + 1;
          } while (lVar14 != 0);
        }
LAB_008c5bc4:
        uVar16 = uVar16 + 1;
        iVar13 = iVar13 + 1;
        uVar18 = (ulong)(iVar17 + uVar3);
      } while (uVar16 != uVar5);
    }
    local_98 = uVar3 * uVar5 * 2;
    local_94 = 1;
    uStack_90 = 0;
    uStack_88 = 0x50b092;
    local_84 = 0;
    local_a0 = __dest;
    uVar9 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
    uVar9 = (**(code **)(*(long *)param_1 + 0x110))(param_1,uVar9,&local_a0);
    *(undefined8 *)(param_2 + 0x48) = uVar9;
    operator_delete__(__dest);
  }
  if (*(long *)(lVar7 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


