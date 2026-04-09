// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cookConvexMesh
// Entry Point: 00bac390
// Size: 640 bytes
// Signature: undefined __cdecl cookConvexMesh(IndexedTriangleSet * param_1, bool param_2, Vector3 * param_3, Bt2PhysicsUserMemoryStream * param_4)


/* Bt2PhysicsCookingUtil::cookConvexMesh(IndexedTriangleSet*, bool, Vector3 const&,
   Bt2PhysicsUserMemoryStream&) */

void Bt2PhysicsCookingUtil::cookConvexMesh
               (IndexedTriangleSet *param_1,bool param_2,Vector3 *param_3,
               Bt2PhysicsUserMemoryStream *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined auVar4 [16];
  long lVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float local_a0;
  float fStack_9c;
  undefined4 *local_98;
  uint local_90;
  uint local_8c;
  float *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_90 = 0;
  uVar8 = convertMeshData(param_1,&local_88,&local_8c);
  if ((uVar8 & 1) != 0) {
    uVar8 = cookConvexMesh(local_8c,local_88,&local_90,(btVector3 **)&local_98,&local_a0,&fStack_9c,
                           (Vector3 *)&local_58,(Vector3 *)&local_80);
    uVar13 = local_90;
    if (local_88 != (float *)0x0) {
      operator_delete__(local_88);
      uVar13 = local_90;
    }
    local_90 = uVar13;
    if ((uVar8 & 1) != 0) {
      uVar8 = (ulong)uVar13;
      uVar3 = uVar13 * 0xc + 0x40;
      puVar9 = (undefined4 *)operator_new__((ulong)uVar3);
      puVar9[2] = local_a0;
      puVar9[3] = fStack_9c;
      *(undefined8 *)(puVar9 + 4) = local_58;
      puVar9[6] = local_50;
      *puVar9 = 0x46d63;
      puVar9[1] = uVar13;
      *(undefined8 *)(puVar9 + 9) = uStack_78;
      *(undefined8 *)(puVar9 + 7) = local_80;
      *(undefined8 *)(puVar9 + 0xd) = uStack_68;
      *(undefined8 *)(puVar9 + 0xb) = uStack_70;
      puVar9[0xf] = local_60;
      if (uVar13 == 0) {
        if (local_98 != (undefined4 *)0x0) goto LAB_00bac4c4;
      }
      else {
        puVar2 = puVar9 + 0x10;
        if (uVar13 < 5) {
LAB_00bac470:
          lVar11 = 0;
        }
        else {
          uVar16 = uVar8 - 1;
          lVar11 = 0;
          uVar14 = (uVar16 & 0xffffffff) + (uVar16 & 0xffffffff) * 2;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar16;
          bVar6 = (uVar14 & 0xffffffff00000000) == 0;
          bVar7 = SUB168(auVar4 * ZEXT816(0xc),8) == 0;
          uVar17 = (uint)uVar14;
          if (((((((uVar17 != 0xffffffff) && (bVar6)) && (uVar16 >> 0x20 == 0)) &&
                ((uVar17 < 0xfffffffe && (bVar6)))) &&
               ((puVar9 + 0x11 <= puVar9 + 0x11 + uVar16 * 3 &&
                ((bVar7 && (puVar9 + 0x12 <= puVar9 + 0x12 + uVar16 * 3)))))) && (bVar7)) &&
             ((puVar2 <= puVar2 + uVar16 * 3 && (bVar7)))) {
            if ((local_98 < puVar9 + uVar8 * 3 + 0x10) && (puVar2 < local_98 + uVar8 * 4 + -1))
            goto LAB_00bac470;
            uVar14 = 0;
            uVar16 = 4;
            if ((uVar13 & 3) != 0) {
              uVar16 = uVar8 & 3;
            }
            lVar11 = uVar8 - uVar16;
            lVar12 = lVar11;
            puVar15 = local_98;
            do {
              uVar18 = *puVar15;
              uVar22 = puVar15[1];
              uVar26 = puVar15[2];
              uVar19 = puVar15[4];
              uVar23 = puVar15[5];
              uVar27 = puVar15[6];
              uVar20 = puVar15[8];
              uVar24 = puVar15[9];
              uVar28 = puVar15[10];
              uVar21 = puVar15[0xc];
              uVar25 = puVar15[0xd];
              uVar29 = puVar15[0xe];
              puVar15 = puVar15 + 0x10;
              uVar16 = uVar14 & 0xfffffffc;
              uVar14 = uVar14 + 0xc;
              lVar12 = lVar12 + -4;
              puVar9[uVar16 + 0x10] = uVar18;
              puVar9[uVar16 + 0x11] = uVar22;
              puVar9[uVar16 + 0x12] = uVar26;
              puVar9[uVar16 + 0x13] = uVar19;
              puVar9[uVar16 + 0x14] = uVar23;
              puVar9[uVar16 + 0x15] = uVar27;
              puVar9[uVar16 + 0x16] = uVar20;
              puVar9[uVar16 + 0x17] = uVar24;
              puVar9[uVar16 + 0x18] = uVar28;
              puVar9[uVar16 + 0x19] = uVar21;
              puVar9[uVar16 + 0x1a] = uVar25;
              puVar9[uVar16 + 0x1b] = uVar29;
            } while (lVar12 != 0);
          }
        }
        uVar13 = (int)lVar11 * 3;
        lVar12 = uVar8 - lVar11;
        puVar15 = local_98 + lVar11 * 4 + 2;
        do {
          uVar17 = uVar13 + 1;
          uVar1 = uVar13 + 2;
          lVar12 = lVar12 + -1;
          puVar2[uVar13] = puVar15[-2];
          uVar13 = uVar13 + 3;
          puVar2[uVar17] = puVar15[-1];
          puVar2[uVar1] = *puVar15;
          puVar15 = puVar15 + 4;
        } while (lVar12 != 0);
LAB_00bac4c4:
                    /* try { // try from 00bac4c4 to 00bac4c7 has its CatchHandler @ 00bac610 */
        btAlignedFreeInternal(local_98);
      }
      if ((param_4[0x18] != (Bt2PhysicsUserMemoryStream)0x0) &&
         (*(void **)(param_4 + 8) != (void *)0x0)) {
        operator_delete__(*(void **)(param_4 + 8));
      }
      uVar10 = 1;
      *(uint *)param_4 = uVar3;
      *(undefined4 **)(param_4 + 8) = puVar9;
      *(undefined4 **)(param_4 + 0x10) = puVar9;
      param_4[0x18] = (Bt2PhysicsUserMemoryStream)0x1;
      goto LAB_00bac4ec;
    }
  }
  uVar10 = 0;
LAB_00bac4ec:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


