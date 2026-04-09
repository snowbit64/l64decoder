// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeWorldFrustumCorners
// Entry Point: 00a56610
// Size: 760 bytes
// Signature: undefined __thiscall computeWorldFrustumCorners(MergedShadowGroup * this, LightSource * param_1, Vector3 * param_2)


/* LightSource::MergedShadowGroup::computeWorldFrustumCorners(LightSource const&, Vector3*) const */

void __thiscall
LightSource::MergedShadowGroup::computeWorldFrustumCorners
          (MergedShadowGroup *this,LightSource *param_1,Vector3 *param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  float local_120;
  float fStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  float fStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  float fStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  RenderDeviceUtil::computeSpotShadowViewProjection
            ((Matrix4x4 *)(param_1 + 0xb8),*(uint *)(param_1 + 0x1b8),*(float *)(param_1 + 0x19c),
             *(float *)(param_1 + 0x194),*(int *)(param_1 + 0x16c) == 2,(Matrix4x4 *)&local_98,
             (Matrix4x4 *)&local_d8);
  uVar5 = NEON_fmadd(local_98,local_d8,fStack_94 * local_c8);
  uVar6 = NEON_fmadd(local_98,uStack_d4,fStack_94 * fStack_c4);
  uVar14 = NEON_fmadd(local_90,uStack_b4,uVar6);
  uVar5 = NEON_fmadd(local_90,local_b8,uVar5);
  uVar15 = NEON_fmadd(local_88,local_d8,local_c8 * fStack_84);
  uVar16 = NEON_fmadd(local_88,uStack_d4,fStack_c4 * fStack_84);
  uVar12 = NEON_fmadd(local_98,local_d0,fStack_94 * local_c0);
  uVar6 = NEON_fmadd(local_98,uStack_cc,fStack_94 * fStack_bc);
  local_118 = NEON_fmadd(uStack_8c,local_a8,uVar5);
  uStack_114 = NEON_fmadd(uStack_8c,uStack_a4,uVar14);
  uVar5 = NEON_fmadd(local_88,local_d0,local_c0 * fStack_84);
  uVar14 = NEON_fmadd(local_88,uStack_cc,fStack_bc * fStack_84);
  uVar12 = NEON_fmadd(local_90,local_b0,uVar12);
  uVar6 = NEON_fmadd(local_90,uStack_ac,uVar6);
  local_110 = NEON_fmadd(uStack_8c,local_a0,uVar12);
  uStack_10c = NEON_fmadd(uStack_8c,uStack_9c,uVar6);
  uVar15 = NEON_fmadd(local_80,local_b8,uVar15);
  uVar6 = NEON_fmadd(local_80,uStack_b4,uVar16);
  uVar12 = NEON_fmadd(local_80,local_b0,uVar5);
  uVar5 = NEON_fmadd(local_80,uStack_ac,uVar14);
  local_108 = NEON_fmadd(uStack_7c,local_a8,uVar15);
  uStack_104 = NEON_fmadd(uStack_7c,uStack_a4,uVar6);
  local_100 = NEON_fmadd(uStack_7c,local_a0,uVar12);
  uStack_fc = NEON_fmadd(uStack_7c,uStack_9c,uVar5);
  uVar12 = NEON_fmadd(local_78,local_d8,local_c8 * fStack_74);
  uVar16 = NEON_fmadd(local_78,uStack_d4,fStack_c4 * fStack_74);
  uVar13 = NEON_fmadd(local_78,local_d0,local_c0 * fStack_74);
  uVar15 = NEON_fmadd(local_78,uStack_cc,fStack_bc * fStack_74);
  uVar5 = NEON_fmadd(local_68,local_d8,local_c8 * fStack_64);
  uVar6 = NEON_fmadd(local_68,uStack_d4,fStack_c4 * fStack_64);
  uVar14 = NEON_fmadd(local_68,local_d0,local_c0 * fStack_64);
  uVar7 = NEON_fmadd(local_70,local_b8,uVar12);
  uVar12 = NEON_fmadd(local_70,uStack_b4,uVar16);
  uVar16 = NEON_fmadd(local_70,uStack_ac,uVar15);
  uVar15 = NEON_fmadd(local_68,uStack_cc,fStack_bc * fStack_64);
  local_f8 = NEON_fmadd(uStack_6c,local_a8,uVar7);
  uVar7 = NEON_fmadd(local_70,local_b0,uVar13);
  uVar5 = NEON_fmadd(local_60,local_b8,uVar5);
  uStack_f4 = NEON_fmadd(uStack_6c,uStack_a4,uVar12);
  uVar6 = NEON_fmadd(local_60,uStack_b4,uVar6);
  local_f0 = NEON_fmadd(uStack_6c,local_a0,uVar7);
  uVar14 = NEON_fmadd(local_60,local_b0,uVar14);
  uStack_ec = NEON_fmadd(uStack_6c,uStack_9c,uVar16);
  uVar12 = NEON_fmadd(local_60,uStack_ac,uVar15);
  local_e8 = NEON_fmadd(uStack_5c,local_a8,uVar5);
  uStack_e4 = NEON_fmadd(uStack_5c,uStack_a4,uVar6);
  local_e0 = NEON_fmadd(uStack_5c,local_a0,uVar14);
  uStack_dc = NEON_fmadd(uStack_5c,uStack_9c,uVar12);
  Matrix4x4::invert((Matrix4x4 *)&local_158,(Matrix4x4 *)&local_118);
  local_188 = RenderDeviceUtil::getNormalizedDeviceZCoordinate
                        (*(float *)(param_1 + 0x194),&local_d8);
  local_184 = NEON_fmov(0x3f800000,4);
  local_16c = NEON_fmov(0xbf800000,4);
  lVar3 = 0;
  uStack_198 = 0x3f800000bf800000;
  local_1a0 = 0xbf8000003f800000;
  local_190 = 0x3f800000bf800000;
  local_178 = 0xbf8000003f800000;
  uStack_1b8 = 0x3f8000003f800000;
  local_1c0 = 0x3f800000bf800000;
  uStack_1a8 = 0xbf8000003f800000;
  uStack_1b0 = 0x3f8000003f800000;
  fVar8 = -1.0;
  fVar10 = 1.0;
  fVar11 = 1.0;
  while( true ) {
    uVar5 = NEON_fmadd(fVar8,uStack_14c,fVar11 * fStack_13c);
    uVar6 = NEON_fmadd(fVar8,local_150,fVar11 * local_140);
    fVar4 = (float)NEON_fmadd(fVar10,uStack_12c,uVar5);
    fVar9 = (float)NEON_fmadd(fVar10,local_130,uVar6);
    fVar4 = 1.0 / (fStack_11c + fVar4);
    *(ulong *)(param_2 + lVar3) =
         CONCAT44(((float)((ulong)local_148 >> 0x20) * fVar11 +
                   (float)((ulong)local_158 >> 0x20) * fVar8 +
                   (float)((ulong)local_138 >> 0x20) * fVar10 + (float)((ulong)local_128 >> 0x20)) *
                  fVar4,((float)local_148 * fVar11 + (float)local_158 * fVar8 +
                         (float)local_138 * fVar10 + (float)local_128) * fVar4);
    *(float *)((long)(param_2 + lVar3) + 8) = (local_120 + fVar9) * fVar4;
    if (lVar3 == 0x54) break;
    pfVar1 = (float *)(((ulong)&local_1c0 | 0xc) + lVar3);
    lVar3 = lVar3 + 0xc;
    fVar8 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar10 = pfVar1[2];
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
  local_17c = local_188;
  local_170 = local_188;
  local_164 = local_188;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


