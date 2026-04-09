// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareServerWriteUpdateStream
// Entry Point: 00984128
// Size: 724 bytes
// Signature: undefined __cdecl prepareServerWriteUpdateStream(float param_1)


/* MeshSplitManager::prepareServerWriteUpdateStream(float) */

void MeshSplitManager::prepareServerWriteUpdateStream(float param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_x0;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if ((*(char *)(in_x0 + 0x24) == '\0') &&
     (uVar14 = *(long *)(in_x0 + 0x1a0) - *(long *)(in_x0 + 0x198), (int)(uVar14 >> 4) != 0)) {
    Mutex::enterCriticalSection();
    lVar15 = *(long *)(in_x0 + 0x60);
    uVar8 = *(long *)(in_x0 + 0x68) - lVar15;
    if ((int)(uVar8 >> 3) != 0) {
      uVar16 = 0;
LAB_009841b0:
      lVar15 = *(long *)(lVar15 + uVar16 * 8);
      if (*(char *)(lVar15 + 0x210) < '\0') {
        RawTransformGroup::getPhysicsObject();
        uVar5 = Bt2PhysicsRBObject::getIsSleeping();
        if ((uVar5 & 1) == 0) {
          iVar7 = (int)((ulong)(*(long *)(in_x0 + 0x188) - *(long *)(in_x0 + 0x180)) >> 2);
          iVar10 = iVar7 + -1;
          if (0 < iVar7) {
            iVar7 = 0;
            do {
              iVar1 = iVar7 + iVar10;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              uVar2 = iVar1 >> 1;
              uVar5 = (ulong)uVar2;
              uVar3 = *(uint *)(*(long *)(in_x0 + 0x180) + (long)(int)uVar2 * 4);
              if (uVar3 < *(uint *)(lVar15 + 0x214)) {
                iVar7 = uVar2 + 1;
              }
              else {
                if (uVar3 <= *(uint *)(lVar15 + 0x214)) {
                  lVar6 = Geometry::getBoundingVolume();
                  RawTransformGroup::updateWorldTransformation();
                  fVar22 = *(float *)(lVar6 + 0xc);
                  fVar17 = *(float *)(lVar6 + 0x10);
                  uVar21 = *(undefined8 *)(lVar15 + 0xb8);
                  fVar23 = *(float *)(lVar6 + 0x14);
                  uVar18 = NEON_fmadd(fVar22,*(undefined4 *)(lVar15 + 0xc0),
                                      fVar17 * *(float *)(lVar15 + 0xd0));
                  fVar19 = (float)NEON_fmadd(fVar23,*(undefined4 *)(lVar15 + 0xe0),uVar18);
                  fVar20 = (float)*(undefined8 *)(lVar15 + 200) * fVar17 + (float)uVar21 * fVar22 +
                           (float)*(undefined8 *)(lVar15 + 0xd8) * fVar23 +
                           (float)*(undefined8 *)(lVar15 + 0xe8);
                  fVar17 = (float)((ulong)*(undefined8 *)(lVar15 + 200) >> 0x20) * fVar17 +
                           (float)((ulong)uVar21 >> 0x20) * fVar22 +
                           (float)((ulong)*(undefined8 *)(lVar15 + 0xd8) >> 0x20) * fVar23 +
                           (float)((ulong)*(undefined8 *)(lVar15 + 0xe8) >> 0x20);
                  fVar19 = *(float *)(lVar15 + 0xf0) + fVar19;
                  Matrix4x4::getEulerAnglesXYZ
                            ((Matrix4x4 *)(undefined8 *)(lVar15 + 0xb8),(Vector3 *)&local_88);
                  lVar15 = 0;
                  goto LAB_009842a0;
                }
                iVar10 = uVar2 - 1;
              }
            } while (iVar7 <= iVar10);
          }
        }
      }
      goto LAB_009843a4;
    }
LAB_009843b8:
    param_1 = (float)Mutex::leaveCriticalSection();
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
LAB_009842a0:
  do {
    lVar6 = *(long *)(*(long *)(*(long *)(in_x0 + 0x198) + lVar15 + 8) + 8);
    puVar9 = (undefined8 *)(lVar6 + uVar5 * 0x1c);
    if (((0.005 < ABS(fVar20 - *(float *)puVar9)) ||
        (0.005 < ABS(fVar17 - *(float *)(lVar6 + uVar5 * 0x1c + 4)))) ||
       (pfVar11 = (float *)(lVar6 + uVar5 * 0x1c + 8), 0.005 < ABS(fVar19 - *pfVar11))) {
LAB_00984350:
      lVar6 = lVar6 + uVar5 * 0x1c;
      pfVar11 = (float *)(lVar6 + 8);
      *(undefined2 *)(lVar6 + 0x18) = 3;
      *(float *)(lVar6 + 0x14) = local_80;
      *(ulong *)(lVar6 + 0xc) = CONCAT44(fStack_84,local_88);
LAB_0098436c:
      *puVar9 = CONCAT44(fVar17,fVar20);
      *pfVar11 = fVar19;
    }
    else {
      lVar12 = lVar6 + uVar5 * 0x1c;
      puVar13 = (undefined8 *)(lVar12 + 0xc);
      if (((0.02 < ABS(local_88 - *(float *)puVar13)) ||
          (0.02 < ABS(fStack_84 - *(float *)(lVar6 + uVar5 * 0x1c + 0x10)))) ||
         (0.02 < ABS(local_80 - *(float *)(lVar6 + uVar5 * 0x1c + 0x14)))) goto LAB_00984350;
      if (*(short *)(lVar6 + uVar5 * 0x1c + 0x18) != 0) {
        *(float *)(lVar12 + 0x14) = local_80;
        *puVar13 = CONCAT44(fStack_84,local_88);
        goto LAB_0098436c;
      }
    }
    lVar15 = lVar15 + 0x10;
  } while ((uVar14 >> 4 & 0xffffffff) * 0x10 - lVar15 != 0);
LAB_009843a4:
  uVar16 = uVar16 + 1;
  if (uVar16 == (uVar8 >> 3 & 0xffffffff)) goto LAB_009843b8;
  lVar15 = *(long *)(in_x0 + 0x60);
  goto LAB_009841b0;
}


