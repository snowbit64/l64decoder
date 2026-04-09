// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeArcLengths
// Entry Point: 007362c8
// Size: 844 bytes
// Signature: undefined initializeArcLengths(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgent::initializeArcLengths() */

void VehicleNavigationAgent::initializeArcLengths(void)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long in_x0;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  float local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  float local_ac;
  long local_a0;
  
  lVar6 = tpidr_el0;
  local_a0 = *(long *)(lVar6 + 0x28);
  lVar20 = 0;
  iVar10 = 0;
  uVar3 = *(ushort *)(in_x0 + 0x1380);
  uVar22 = (ulong)uVar3;
  uVar21 = (uint)uVar3;
  uVar4 = (uVar21 << 1 | 1) * (uint)uVar3;
  uVar15 = (ulong)uVar4;
  uVar11 = (uVar22 << 1 | 1) * uVar22 - 1 & 0x1fffffffffffffff;
  uVar16 = uVar15 << 3;
  uVar1 = uVar11 + 1;
  uVar12 = uVar1 & 0x3ffffffffffffffe;
  do {
    puVar7 = (undefined4 *)operator_new__(uVar16);
    if (uVar4 == 0) {
      puVar8 = (undefined4 *)operator_new__(uVar16);
    }
    else {
      puVar8 = puVar7;
      if (uVar11 == 0) {
LAB_00736408:
        do {
          *puVar8 = 0;
          *(undefined *)(puVar8 + 1) = 0;
          puVar8 = puVar8 + 2;
        } while (puVar8 != puVar7 + uVar15 * 2);
      }
      else {
        puVar8 = puVar7 + 2;
        uVar14 = uVar12;
        do {
          puVar8[-2] = 0;
          uVar14 = uVar14 - 2;
          *puVar8 = 0;
          *(undefined *)(puVar8 + -1) = 0;
          *(undefined *)(puVar8 + 1) = 0;
          puVar8 = puVar8 + 4;
        } while (uVar14 != 0);
        puVar8 = puVar7 + uVar12 * 2;
        if (uVar1 != uVar12) goto LAB_00736408;
      }
      puVar8 = (undefined4 *)operator_new__(uVar16);
      puVar13 = puVar8;
      if (uVar11 != 0) {
        puVar13 = puVar8 + 2;
        uVar14 = uVar12;
        do {
          puVar13[-2] = 0;
          uVar14 = uVar14 - 2;
          *puVar13 = 0;
          *(undefined *)(puVar13 + -1) = 0;
          *(undefined *)(puVar13 + 1) = 0;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar13 = puVar8 + uVar12 * 2;
        if (uVar1 == uVar12) goto LAB_00736498;
      }
      do {
        *puVar13 = 0;
        *(undefined *)(puVar13 + 1) = 0;
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar8 + uVar15 * 2);
    }
LAB_00736498:
    uStack_b8 = 0x3f800000;
    local_c0 = 0;
    local_ac = (float)(iVar10 + 1) / 3.0;
    local_b0 = 0x40000000;
    local_d0 = 0x40000000;
    local_cc = 2.0 - local_ac;
    uStack_d8 = 0x3f8000003f800000;
    local_e0 = 0;
    if (uVar21 == 0) {
      uVar21 = 0;
      local_e0 = 0;
      uStack_d8 = 0x3f8000003f800000;
      local_c0 = 0;
      uStack_b8 = 0x3f800000;
    }
    else {
      uVar23 = 0;
      uVar14 = (ulong)(uVar21 << 1);
      puVar13 = puVar7;
      puVar18 = puVar8;
      fVar25 = 0.0;
      do {
        uVar5 = (int)uVar22 << 1;
        fVar24 = (float)(uVar23 + 1) / (float)(ulong)uVar21;
        if (uVar5 == uVar23) {
          uVar14 = (ulong)(uint)((int)uVar22 << 1);
        }
        else {
          iVar10 = (int)uVar14;
          uVar14 = (ulong)uVar5;
          puVar17 = puVar13;
          puVar19 = puVar18;
          fVar26 = (float)(ulong)uVar23 / (float)iVar10;
          uVar21 = uVar23;
          do {
            fVar27 = (float)(uVar21 + 1) / (float)(int)uVar14;
            uVar9 = FUN_0073e3f4(fVar26,fVar27,fVar25,fVar24,&local_c0);
            *puVar17 = (int)uVar9;
            puVar13 = puVar17 + 2;
            *(char *)(puVar17 + 1) = (char)((ulong)uVar9 >> 0x20);
            uVar9 = FUN_0073e3f4(fVar26,fVar27,fVar25,fVar24,&local_e0);
            *puVar19 = (int)uVar9;
            puVar18 = puVar19 + 2;
            uVar21 = uVar21 + 1 & 0xffff;
            *(char *)(puVar19 + 1) = (char)((ulong)uVar9 >> 0x20);
            uVar3 = *(ushort *)(in_x0 + 0x1380);
            uVar22 = (ulong)uVar3;
            uVar14 = (ulong)uVar3 << 1;
            puVar17 = puVar13;
            puVar19 = puVar18;
            fVar26 = fVar27;
          } while ((uint)uVar3 << 1 != uVar21);
        }
        uVar23 = uVar23 + 1 & 0xffff;
        uVar21 = (uint)uVar22;
        fVar25 = fVar24;
      } while ((uint)uVar14 != uVar23);
    }
    lVar2 = in_x0 + lVar20 * 8;
    lVar20 = lVar20 + 1;
    iVar10 = (int)lVar20;
    *(undefined4 **)(lVar2 + 0x12a8) = puVar7;
    *(undefined4 **)(lVar2 + 0x12c0) = puVar8;
    if (lVar20 == 3) {
      if (*(long *)(lVar6 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


