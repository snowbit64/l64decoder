// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncloseOrigin
// Entry Point: 00f6e1f8
// Size: 1392 bytes
// Signature: undefined EncloseOrigin(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* gjkepa2_impl::GJK::EncloseOrigin() */

void gjkepa2_impl::GJK::EncloseOrigin(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  GJK *in_x0;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar7 = *(long **)(in_x0 + 0x1c0);
  switch(*(undefined4 *)(plVar7 + 6)) {
  case 1:
    uStack_5c = 0;
    fStack_64 = 0.0;
    local_60 = 0.0;
    local_68 = 1.0;
    appendvertice(in_x0,(sSimplex *)plVar7,(btVector3 *)&local_68);
    uVar5 = EncloseOrigin();
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)(in_x0 + 0x1c0);
      local_78 = CONCAT44(-fStack_64,-local_68);
      local_70 = -local_60;
      uVar3 = *(int *)(lVar8 + 0x30) - 1;
      *(uint *)(lVar8 + 0x30) = uVar3;
      uVar2 = *(uint *)(in_x0 + 0x1b8);
      uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
      local_6c = 0;
      *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
      *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
      appendvertice(in_x0,*(sSimplex **)(in_x0 + 0x1c0),(btVector3 *)&local_78);
      uVar5 = EncloseOrigin();
      if ((uVar5 & 1) == 0) {
        lVar8 = *(long *)(in_x0 + 0x1c0);
        uVar3 = *(int *)(lVar8 + 0x30) - 1;
        *(uint *)(lVar8 + 0x30) = uVar3;
        uVar2 = *(uint *)(in_x0 + 0x1b8);
        uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
        local_68 = 0.0;
        local_60 = 0.0;
        uStack_5c = 0;
        *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
        *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
        fStack_64 = 1.0;
        appendvertice(in_x0,*(sSimplex **)(in_x0 + 0x1c0),(btVector3 *)&local_68);
        uVar5 = EncloseOrigin();
        if ((uVar5 & 1) == 0) {
          lVar8 = *(long *)(in_x0 + 0x1c0);
          local_78 = CONCAT44(-fStack_64,-local_68);
          local_70 = -local_60;
          uVar3 = *(int *)(lVar8 + 0x30) - 1;
          *(uint *)(lVar8 + 0x30) = uVar3;
          uVar2 = *(uint *)(in_x0 + 0x1b8);
          uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
          local_6c = 0;
          *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
          *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
          appendvertice(in_x0,*(sSimplex **)(in_x0 + 0x1c0),(btVector3 *)&local_78);
          uVar5 = EncloseOrigin();
          if ((uVar5 & 1) == 0) {
            lVar8 = *(long *)(in_x0 + 0x1c0);
            uVar3 = *(int *)(lVar8 + 0x30) - 1;
            *(uint *)(lVar8 + 0x30) = uVar3;
            uVar2 = *(uint *)(in_x0 + 0x1b8);
            uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
            local_68 = 0.0;
            fStack_64 = 0.0;
            *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
            *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
            plVar7 = *(long **)(in_x0 + 0x1c0);
            local_60 = 1.0;
            goto LAB_00f6e68c;
          }
        }
      }
    }
    break;
  case 2:
    lVar8 = *plVar7;
    lVar1 = plVar7[1];
    local_68 = 0.0;
    uStack_5c = 0;
    fVar13 = *(float *)(lVar1 + 0x10);
    fVar14 = *(float *)(lVar8 + 0x10);
    fVar10 = *(float *)(lVar1 + 0x14) - *(float *)(lVar8 + 0x14);
    fVar11 = *(float *)(lVar1 + 0x18) - *(float *)(lVar8 + 0x18);
    local_60 = -fVar10;
    if (fVar11 * fVar11 + fVar10 * fVar10 <= 0.0) {
LAB_00f6e5a4:
      fVar13 = fVar13 - fVar14;
      local_68 = -fVar11;
      fStack_64 = 0.0;
      uStack_5c = 0;
      if (fVar11 * fVar11 + fVar13 * fVar13 <= 0.0) {
LAB_00f6e670:
        fStack_64 = -fVar13;
        local_60 = 0.0;
        uStack_5c = 0;
        local_68 = fVar10;
        if (0.0 < fVar13 * fVar13 + fVar10 * fVar10) {
          plVar7 = *(long **)(in_x0 + 0x1c0);
          goto LAB_00f6e68c;
        }
        goto switchD_00f6e24c_caseD_4;
      }
      local_60 = fVar13;
      appendvertice(in_x0,*(sSimplex **)(in_x0 + 0x1c0),(btVector3 *)&local_68);
      uVar5 = EncloseOrigin();
      if ((uVar5 & 1) == 0) {
        lVar8 = *(long *)(in_x0 + 0x1c0);
        local_78 = CONCAT44(-fStack_64,-local_68);
        local_70 = -local_60;
        uVar3 = *(int *)(lVar8 + 0x30) - 1;
        *(uint *)(lVar8 + 0x30) = uVar3;
        uVar2 = *(uint *)(in_x0 + 0x1b8);
        uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
        local_6c = 0;
        *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
        *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
        appendvertice(in_x0,*(sSimplex **)(in_x0 + 0x1c0),(btVector3 *)&local_78);
        uVar5 = EncloseOrigin();
        if ((uVar5 & 1) == 0) {
          lVar8 = *(long *)(in_x0 + 0x1c0);
          uVar3 = *(int *)(lVar8 + 0x30) - 1;
          *(uint *)(lVar8 + 0x30) = uVar3;
          uVar2 = *(uint *)(in_x0 + 0x1b8);
          uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
          *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
          *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
          goto LAB_00f6e670;
        }
      }
    }
    else {
      fStack_64 = fVar11;
      appendvertice(in_x0,(sSimplex *)plVar7,(btVector3 *)&local_68);
      uVar5 = EncloseOrigin();
      if ((uVar5 & 1) == 0) {
        lVar8 = *(long *)(in_x0 + 0x1c0);
        local_78 = CONCAT44(-fStack_64,-local_68);
        local_70 = -local_60;
        uVar3 = *(int *)(lVar8 + 0x30) - 1;
        *(uint *)(lVar8 + 0x30) = uVar3;
        uVar2 = *(uint *)(in_x0 + 0x1b8);
        uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
        local_6c = 0;
        *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
        *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
        appendvertice(in_x0,*(sSimplex **)(in_x0 + 0x1c0),(btVector3 *)&local_78);
        uVar5 = EncloseOrigin();
        if ((uVar5 & 1) == 0) {
          lVar8 = *(long *)(in_x0 + 0x1c0);
          uVar3 = *(int *)(lVar8 + 0x30) - 1;
          *(uint *)(lVar8 + 0x30) = uVar3;
          uVar2 = *(uint *)(in_x0 + 0x1b8);
          uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
          *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
          *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
          goto LAB_00f6e5a4;
        }
      }
    }
    break;
  case 3:
    lVar8 = *plVar7;
    lVar1 = plVar7[1];
    uStack_5c = 0;
    lVar9 = plVar7[2];
    fVar11 = *(float *)(lVar1 + 0x14) - *(float *)(lVar8 + 0x14);
    fVar10 = *(float *)(lVar1 + 0x10) - *(float *)(lVar8 + 0x10);
    fVar15 = *(float *)(lVar9 + 0x10) - *(float *)(lVar8 + 0x10);
    fVar14 = *(float *)(lVar9 + 0x14) - *(float *)(lVar8 + 0x14);
    fVar13 = *(float *)(lVar1 + 0x18) - *(float *)(lVar8 + 0x18);
    fVar16 = *(float *)(lVar9 + 0x18) - *(float *)(lVar8 + 0x18);
    local_60 = (float)NEON_fnmsub(fVar14,fVar10,fVar15 * fVar11);
    local_68 = (float)NEON_fnmsub(fVar16,fVar11,fVar14 * fVar13);
    fStack_64 = (float)NEON_fnmsub(fVar15,fVar13,fVar16 * fVar10);
    uVar12 = NEON_fmadd(local_68,local_68,local_60 * local_60);
    fVar10 = (float)NEON_fmadd(fStack_64,fStack_64,uVar12);
    if (fVar10 <= 0.0) goto switchD_00f6e24c_caseD_4;
LAB_00f6e68c:
    uStack_5c = 0;
    appendvertice(in_x0,(sSimplex *)plVar7,(btVector3 *)&local_68);
    uVar5 = EncloseOrigin();
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)(in_x0 + 0x1c0);
      local_78 = CONCAT44(-fStack_64,-local_68);
      local_70 = -local_60;
      uVar3 = *(int *)(lVar8 + 0x30) - 1;
      *(uint *)(lVar8 + 0x30) = uVar3;
      uVar2 = *(uint *)(in_x0 + 0x1b8);
      uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
      local_6c = 0;
      *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
      *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
      appendvertice(in_x0,*(sSimplex **)(in_x0 + 0x1c0),(btVector3 *)&local_78);
      uVar5 = EncloseOrigin();
      if ((uVar5 & 1) == 0) {
        lVar8 = *(long *)(in_x0 + 0x1c0);
        uVar3 = *(int *)(lVar8 + 0x30) - 1;
        *(uint *)(lVar8 + 0x30) = uVar3;
        uVar2 = *(uint *)(in_x0 + 0x1b8);
        uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8);
        *(uint *)(in_x0 + 0x1b8) = uVar2 + 1;
        *(undefined8 *)(in_x0 + (ulong)uVar2 * 8 + 0x198) = uVar6;
        goto switchD_00f6e24c_caseD_4;
      }
    }
    break;
  case 4:
    lVar8 = plVar7[2];
    lVar1 = plVar7[3];
    fVar10 = *(float *)(lVar1 + 0x10);
    fVar11 = *(float *)(lVar1 + 0x14);
    fVar13 = *(float *)(lVar1 + 0x18);
    lVar1 = *plVar7;
    lVar9 = plVar7[1];
    fVar20 = *(float *)(lVar8 + 0x10) - fVar10;
    fVar14 = *(float *)(lVar1 + 0x14) - fVar11;
    fVar15 = *(float *)(lVar1 + 0x18) - fVar13;
    fVar16 = *(float *)(lVar9 + 0x18) - fVar13;
    fVar18 = *(float *)(lVar9 + 0x14) - fVar11;
    fVar19 = *(float *)(lVar9 + 0x10) - fVar10;
    fVar10 = *(float *)(lVar1 + 0x10) - fVar10;
    fVar11 = *(float *)(lVar8 + 0x14) - fVar11;
    fVar13 = *(float *)(lVar8 + 0x18) - fVar13;
    uVar17 = NEON_fmadd(fVar16 * fVar10,fVar11,fVar18 * fVar15 * fVar20);
    uVar12 = NEON_fmadd(fVar19 * fVar15,fVar11,fVar16 * fVar14 * fVar20);
    fVar11 = (float)NEON_fmadd(fVar19 * fVar14,fVar13,uVar17);
    fVar10 = (float)NEON_fmadd(fVar18 * fVar10,fVar13,uVar12);
    if (fVar10 - fVar11 == 0.0) goto switchD_00f6e24c_caseD_4;
    break;
  default:
switchD_00f6e24c_caseD_4:
    uVar6 = 0;
    goto LAB_00f6e738;
  }
  uVar6 = 1;
LAB_00f6e738:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


