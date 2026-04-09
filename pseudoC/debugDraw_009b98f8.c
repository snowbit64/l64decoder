// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 009b98f8
// Size: 1460 bytes
// Signature: undefined __thiscall debugDraw(Bt2RaycastVehicle * this, DeferredDebugRenderer * param_1)


/* Bt2RaycastVehicle::debugDraw(DeferredDebugRenderer*) */

void __thiscall Bt2RaycastVehicle::debugDraw(Bt2RaycastVehicle *this,DeferredDebugRenderer *param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined4 local_124;
  undefined8 local_120;
  float local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float afStack_c0 [4];
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  if (0 < *(int *)(this + 0x3c)) {
    lVar5 = 0;
    lVar6 = 0x18c;
    do {
      lVar7 = *(long *)(this + 0x48);
      Vector4::set((Vector4 *)afStack_c0,1.0,1.0,1.0,1.0);
      lVar4 = lVar7 + lVar6;
      if (*(int *)(*(long *)(this + (ulong)*(uint *)(lVar4 + -0xc) * 8 + 8) + 0xec) == 2) {
        fVar8 = 0.4;
LAB_009b9a04:
        Vector4::set((Vector4 *)afStack_c0,fVar8,0.217,0.047,1.0);
      }
      else if (*(long *)(lVar4 + -0x16c) == 0) {
        fVar8 = 1.0;
        goto LAB_009b9a04;
      }
      pfVar1 = (float *)(lVar7 + lVar6);
      fVar30 = pfVar1[-0x38];
      fVar8 = pfVar1[-0x3a];
      fVar9 = pfVar1[-0x39];
      fVar17 = pfVar1[-0x20];
      fVar18 = pfVar1[-0x1f];
      lVar3 = *(long *)(this + (ulong)*(uint *)(lVar4 + -0xc) * 8 + 8);
      fVar19 = pfVar1[-0x1c];
      fVar21 = pfVar1[-0x1b];
      uVar10 = *(undefined4 *)(lVar3 + 8);
      fVar11 = *(float *)(lVar3 + 0xc);
      uVar13 = *(undefined4 *)(lVar3 + 0x18);
      fVar14 = *(float *)(lVar3 + 0x1c);
      uVar15 = *(undefined4 *)(lVar3 + 0x28);
      fVar16 = *(float *)(lVar3 + 0x2c);
      uVar27 = *(undefined4 *)(lVar3 + 0x10);
      uVar28 = *(undefined4 *)(lVar3 + 0x20);
      uVar12 = NEON_fmadd(uVar10,fVar19,fVar11 * fVar21);
      uVar26 = NEON_fmadd(uVar13,fVar19,fVar14 * fVar21);
      uVar20 = NEON_fmadd(uVar15,fVar19,fVar16 * fVar21);
      fVar19 = pfVar1[-0x1a];
      uVar22 = *(undefined4 *)(lVar3 + 0x30);
      uVar23 = NEON_fmadd(uVar10,fVar8,fVar11 * fVar9);
      uVar24 = NEON_fmadd(uVar13,fVar8,fVar9 * fVar14);
      uVar29 = NEON_fmadd(uVar15,fVar8,fVar9 * fVar16);
      uVar25 = NEON_fmadd(fVar17,uVar10,fVar11 * fVar18);
      local_d0 = (float)NEON_fmadd(uVar27,fVar19,uVar12);
      fStack_cc = (float)NEON_fmadd(uVar28,fVar19,uVar26);
      local_c8 = (float)NEON_fmadd(uVar22,fVar19,uVar20);
      uVar10 = NEON_fmadd(fVar17,uVar13,fVar14 * fVar18);
      uVar12 = NEON_fmadd(fVar17,uVar15,fVar16 * fVar18);
      fVar8 = pfVar1[-0x1e];
      local_c4 = 0;
      fVar18 = (float)NEON_fmadd(uVar27,fVar30,uVar23);
      fVar16 = (float)NEON_fmadd(uVar28,fVar30,uVar24);
      fVar17 = (float)NEON_fmadd(uVar22,fVar30,uVar29);
      fVar11 = (float)NEON_fmadd(fVar8,uVar27,uVar25);
      fVar9 = (float)NEON_fmadd(fVar8,uVar28,uVar10);
      fVar8 = (float)NEON_fmadd(fVar8,uVar22,uVar12);
      fVar14 = *pfVar1;
      local_d4 = 0;
      fVar11 = *(float *)(lVar3 + 0x38) + fVar11;
      fVar9 = fVar9 + *(float *)(lVar3 + 0x3c);
      fVar8 = fVar8 + *(float *)(lVar3 + 0x40);
      local_e0 = fVar11 + fVar18 * fVar14;
      fStack_dc = fVar9 + fVar16 * fVar14;
      local_d8 = fVar8 + fVar17 * fVar14;
      if (*(long *)(pfVar1 + -0x5b) == 0) {
        fVar14 = pfVar1[-0x2b];
        fVar19 = local_e0 + fVar18 * fVar14;
        fVar21 = fStack_dc + fVar16 * fVar14;
        fVar14 = local_d8 + fVar17 * fVar14;
      }
      else {
        fVar19 = pfVar1[-0x5f];
        fVar21 = pfVar1[-0x5e];
        fVar14 = pfVar1[-0x5d];
      }
      uStack_f8 = 0x3f80000000000000;
      local_100 = 0x3f800000;
      uStack_e8 = 0x3f8000003f800000;
      uStack_f0 = 0x3f8000003f800000;
      uStack_108 = 0x3f8000003f800000;
      local_110 = 0;
      local_114 = 0;
      fVar30 = pfVar1[-0x22] - pfVar1[-0x23];
      local_118 = local_d8 + local_c8 * fVar30;
      local_120 = CONCAT44(fStack_dc + fStack_cc * fVar30,local_e0 + local_d0 * fVar30);
      local_124 = 0;
      fVar30 = pfVar1[-0x22] - pfVar1[-0x23];
      local_130 = fVar19 + local_d0 * fVar30;
      fStack_12c = fVar21 + fStack_cc * fVar30;
      local_128 = fVar14 + local_c8 * fVar30;
      DeferredDebugRenderer::addLine
                (param_1,(float *)&local_120,(float *)&uStack_f0,&local_130,(float *)&uStack_f0,0x40
                );
      local_114 = 0;
      fVar30 = pfVar1[-0x22] + pfVar1[-0x23];
      local_118 = fVar30 * local_c8 + local_d8;
      local_120 = CONCAT44(fStack_cc * fVar30 + fStack_dc,local_d0 * fVar30 + local_e0);
      local_124 = 0;
      fVar30 = pfVar1[-0x22] + pfVar1[-0x23];
      local_130 = fVar19 + fVar30 * local_d0;
      fStack_12c = fVar21 + fVar30 * fStack_cc;
      local_128 = fVar14 + local_c8 * fVar30;
      DeferredDebugRenderer::addLine
                (param_1,(float *)&local_120,(float *)&uStack_f0,&local_130,(float *)&uStack_f0,0x40
                );
      DeferredDebugRenderer::addCircle
                (param_1,&local_e0,pfVar1[-0x2b],&local_d0,0.0,afStack_c0,0x15,0x40);
      DeferredDebugRenderer::addCircle
                (param_1,&local_e0,pfVar1[-0x2b],&local_d0,pfVar1[-0x12],afStack_c0,3,0x40);
      local_114 = 0;
      local_118 = fVar8 + local_c8 * 0.05;
      local_120 = CONCAT44(fVar9 + fStack_cc * 0.05,fVar11 + local_d0 * 0.05);
      local_124 = 0;
      fVar14 = pfVar1[-0x2e] - pfVar1[-0x2d];
      local_130 = fVar11 + fVar18 * fVar14;
      fStack_12c = fVar9 + fVar16 * fVar14;
      local_128 = fVar8 + fVar17 * fVar14;
      DeferredDebugRenderer::addLine
                (param_1,(float *)&local_120,(float *)&uStack_f0,&local_130,(float *)&local_100,0x40
                );
      local_114 = 0;
      local_118 = fVar8 + local_c8 * 0.05;
      local_120 = CONCAT44(fVar9 + fStack_cc * 0.05,fVar11 + local_d0 * 0.05);
      local_124 = 0;
      fVar14 = pfVar1[-0x2e] + pfVar1[-0x2c];
      local_130 = fVar11 + fVar18 * fVar14;
      fStack_12c = fVar9 + fVar16 * fVar14;
      local_128 = fVar8 + fVar17 * fVar14;
      DeferredDebugRenderer::addLine
                (param_1,(float *)&local_120,(float *)&uStack_f0,&local_130,(float *)&local_110,0x40
                );
      fVar9 = pfVar1[-0x3e];
      fVar11 = pfVar1[-0x3d];
      uVar10 = NEON_fmadd(fVar9,fVar9,fVar11 * fVar11);
      fVar8 = pfVar1[-0x3c];
      fVar14 = (float)NEON_fmadd(fVar8,fVar8,uVar10);
      if (1.421085e-14 <= fVar14) {
        lVar7 = lVar7 + lVar6;
        lVar4 = *(long *)(this + (ulong)*(uint *)(lVar4 + -0xc) * 8 + 8);
        fVar11 = *(float *)(lVar7 + -0x104) - fVar11;
        fVar9 = *(float *)(lVar7 + -0x108) - fVar9;
        local_114 = 0;
        fVar8 = *(float *)(lVar7 + -0x100) - fVar8;
        uVar12 = NEON_fmadd(fVar9,*(undefined4 *)(lVar4 + 8),fVar11 * *(float *)(lVar4 + 0xc));
        uVar13 = NEON_fmadd(fVar9,*(undefined4 *)(lVar4 + 0x18),fVar11 * *(float *)(lVar4 + 0x1c));
        uVar10 = NEON_fmadd(fVar9,*(undefined4 *)(lVar4 + 0x28),fVar11 * *(float *)(lVar4 + 0x2c));
        fVar11 = (float)NEON_fmadd(fVar8,*(undefined4 *)(lVar4 + 0x10),uVar12);
        fVar9 = (float)NEON_fmadd(fVar8,*(undefined4 *)(lVar4 + 0x20),uVar13);
        local_118 = (float)NEON_fmadd(fVar8,*(undefined4 *)(lVar4 + 0x30),uVar10);
        local_118 = local_118 + *(float *)(lVar4 + 0x40);
        local_120 = CONCAT44(fVar9 + *(float *)(lVar4 + 0x3c),fVar11 + *(float *)(lVar4 + 0x38));
        DeferredDebugRenderer::addPoint(param_1,(float *)&local_120,(float *)&uStack_f0,0x40);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x1a0;
    } while (lVar5 < *(int *)(this + 0x3c));
  }
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


