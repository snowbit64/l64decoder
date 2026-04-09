// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Draw
// Entry Point: 00f8cb30
// Size: 6568 bytes
// Signature: undefined __cdecl Draw(btSoftBody * param_1, btIDebugDraw * param_2, int param_3)


/* WARNING: Type propagation algorithm not settling */
/* btSoftBodyHelpers::Draw(btSoftBody*, btIDebugDraw*, int) */

void btSoftBodyHelpers::Draw(btSoftBody *param_1,btIDebugDraw *param_2,int param_3)

{
  float *pfVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar29;
  undefined8 uVar28;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar40;
  undefined8 uVar39;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  long local_130;
  char local_128;
  undefined8 local_11c;
  long local_110;
  char local_108;
  undefined8 local_fc;
  long local_f0;
  char local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float fStack_c8;
  undefined4 uStack_c4;
  long local_b8;
  
  lVar3 = tpidr_el0;
  local_b8 = *(long *)(lVar3 + 0x28);
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_178 = 0;
  local_180 = 0x3f800000;
  local_168 = 0x3f800000;
  local_170 = 0x3f8000003f800000;
  if (((uint)param_3 >> 8 & 1) == 0) {
    if (((param_3 & 1U) != 0) && (iVar4 = *(int *)(param_1 + 0x374), 0 < iVar4)) {
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x380) + lVar15;
        if ((*(byte *)(*(long *)(lVar10 + 8) + 0x14) & 1) != 0) {
          uStack_134 = 0;
          local_140 = *(float *)(lVar10 + 0x10) + -0.1;
          fStack_13c = (float)*(undefined8 *)(lVar10 + 0x14);
          fStack_138 = (float)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20);
          uStack_c4 = 0;
          local_d0._0_4_ = *(float *)(lVar10 + 0x10) + 0.1;
          local_d0._4_4_ = (float)*(undefined8 *)(lVar10 + 0x14);
          fStack_c8 = (float)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20);
          local_150 = 0x3f800000;
          uStack_148 = 0;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_150);
          fStack_138 = *(float *)(lVar10 + 0x18);
          local_140 = *(float *)(lVar10 + 0x10);
          uStack_134 = 0;
          fStack_13c = *(float *)(lVar10 + 0x14) + -0.1;
          local_d0._0_4_ = *(float *)(lVar10 + 0x10);
          fStack_c8 = *(float *)(lVar10 + 0x18);
          uStack_c4 = 0;
          local_d0._4_4_ = *(float *)(lVar10 + 0x14) + 0.1;
          uStack_148 = 0;
          local_150 = 0x3f80000000000000;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_150);
          uStack_134 = 0;
          fStack_138 = *(float *)(lVar10 + 0x18) + -0.1;
          local_140 = (float)*(undefined8 *)(lVar10 + 0x10);
          fStack_13c = (float)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20);
          uStack_c4 = 0;
          fStack_c8 = *(float *)(lVar10 + 0x18) + 0.1;
          local_d0._0_4_ = (float)*(undefined8 *)(lVar10 + 0x10);
          local_d0._4_4_ = (float)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20);
          uStack_148 = 0x3f800000;
          local_150 = 0;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_150);
          iVar4 = *(int *)(param_1 + 0x374);
        }
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 0x78;
      } while (lVar16 < iVar4);
    }
    if ((((uint)param_3 >> 1 & 1) != 0) && (iVar4 = *(int *)(param_1 + 0x394), 0 < iVar4)) {
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x3a0) + lVar15;
        if ((*(byte *)(*(long *)(lVar10 + 8) + 0x14) & 1) != 0) {
          (**(code **)(*(long *)param_2 + 0x20))
                    (param_2,*(long *)(lVar10 + 0x10) + 0x10,*(long *)(lVar10 + 0x18) + 0x10,
                     &local_e0);
          iVar4 = *(int *)(param_1 + 0x394);
        }
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 0x48;
      } while (lVar16 < iVar4);
    }
    if ((((uint)param_3 >> 4 & 1) != 0) && (iVar4 = *(int *)(param_1 + 0x374), 0 < iVar4)) {
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x380) + lVar15;
        if ((*(byte *)(*(long *)(lVar10 + 8) + 0x14) & 1) != 0) {
          puVar18 = (undefined8 *)(lVar10 + 0x10);
          fVar38 = (float)*(undefined8 *)(lVar10 + 0x50) * 0.5;
          fVar40 = (float)((ulong)*(undefined8 *)(lVar10 + 0x50) >> 0x20) * 0.5;
          fVar41 = *(float *)(lVar10 + 0x58) * 0.5;
          uStack_134 = 0;
          local_140 = (float)*puVar18 + fVar38;
          fStack_13c = (float)((ulong)*puVar18 >> 0x20) + fVar40;
          fStack_138 = *(float *)(lVar10 + 0x18) + fVar41;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,puVar18,&local_140,&local_170);
          local_140 = (float)*puVar18 - fVar38;
          fStack_13c = (float)((ulong)*puVar18 >> 0x20) - fVar40;
          fStack_138 = *(float *)(lVar10 + 0x18) - fVar41;
          uStack_134 = 0;
          uStack_c4 = 0;
          local_d0._0_4_ = (float)local_170 * 0.5;
          local_d0._4_4_ = (float)((ulong)local_170 >> 0x20) * 0.5;
          fStack_c8 = (float)local_168 * 0.5;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,puVar18,&local_140,&local_d0);
          iVar4 = *(int *)(param_1 + 0x374);
        }
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 0x78;
      } while (lVar16 < iVar4);
    }
    if (((uint)param_3 >> 5 & 1) != 0) {
      if (((DAT_02125870 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02125870), iVar4 != 0)) {
        DAT_0212584c = 0;
        DAT_02125844 = 0;
        DAT_02125840 = 0x3f800000;
        DAT_02125854 = 0x3f800000;
        DAT_02125858 = 0;
        DAT_02125860 = 0;
        DAT_02125868 = 0x3f800000;
        __cxa_guard_release(&DAT_02125870);
      }
      if (0 < *(int *)(param_1 + 0x414)) {
        uVar39 = NEON_fmov(0x3fc00000,4);
        lVar15 = 0;
        lVar16 = 0;
        do {
          lVar10 = *(long *)(param_1 + 0x420) + lVar15;
          lVar8 = *(long *)(lVar10 + 0x20);
          uStack_134 = 0;
          uVar27 = NEON_fmadd(*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar8 + 0x14),
                              *(float *)(lVar10 + 8) * *(float *)(lVar8 + 0x10));
          fVar38 = (float)NEON_fmadd(*(undefined4 *)(lVar10 + 0x10),*(undefined4 *)(lVar8 + 0x18),
                                     uVar27);
          fVar38 = fVar38 + *(float *)(lVar10 + 0x18);
          local_140 = (float)NEON_fmsub(fVar38,*(float *)(lVar10 + 8),*(float *)(lVar8 + 0x10));
          fStack_13c = (float)NEON_fmsub(fVar38,*(undefined4 *)(lVar10 + 0xc),
                                         *(undefined4 *)(lVar8 + 0x14));
          fStack_138 = (float)NEON_fmsub(fVar38,*(undefined4 *)(lVar10 + 0x10),
                                         *(undefined4 *)(lVar8 + 0x18));
          fVar38 = *(float *)(lVar10 + 8);
          fVar40 = *(float *)(lVar10 + 0xc);
          fVar32 = *(float *)(lVar10 + 0x10);
          uStack_c4 = 0;
          fVar41 = (float)NEON_fminnm(fVar38,fVar40);
          uVar9 = (ulong)(fVar40 <= fVar38);
          if (fVar32 <= fVar41) {
            uVar9 = 2;
          }
          fVar41 = *(float *)((long)&DAT_02125844 + uVar9 * 0x10 + 4);
          fVar48 = (float)NEON_fnmsub(fVar41,fVar40,*(float *)(&DAT_02125844 + uVar9 * 2) * fVar32);
          fVar35 = (float)NEON_fnmsub((&DAT_02125840)[uVar9 * 4],fVar32,fVar41 * fVar38);
          fVar41 = (float)NEON_fnmsub(*(float *)(&DAT_02125844 + uVar9 * 2),fVar38,
                                      (float)(&DAT_02125840)[uVar9 * 4] * fVar40);
          uVar27 = NEON_fmadd(fVar35,fVar35,fVar48 * fVar48);
          fVar50 = (float)NEON_fmadd(fVar41,fVar41,uVar27);
          fVar50 = 1.0 / SQRT(fVar50);
          fVar41 = fVar50 * fVar41;
          fVar48 = fVar50 * fVar48;
          fVar50 = fVar50 * fVar35;
          fVar35 = (float)NEON_fnmsub(fVar50,fVar32,fVar41 * fVar40);
          fVar32 = (float)NEON_fnmsub(fVar41,fVar38,fVar48 * fVar32);
          fVar40 = (float)NEON_fnmsub(fVar48,fVar40,fVar50 * fVar38);
          uVar27 = NEON_fmadd(fVar32,fVar32,fVar35 * fVar35);
          local_d0._4_4_ = fStack_13c - fVar50 * 0.5;
          fVar38 = (float)NEON_fmadd(fVar40,fVar40,uVar27);
          fStack_c8 = fStack_138 - fVar41 * 0.5;
          local_d0._0_4_ = local_140 - fVar48 * 0.5;
          uStack_148 = (ulong)(uint)(fVar41 * 0.5 + fStack_138);
          local_150 = CONCAT44(fVar50 * 0.5 + fStack_13c,fVar48 * 0.5 + local_140);
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_d0,&local_150,&local_180);
          fVar38 = 0.5 / SQRT(fVar38);
          uStack_c4 = 0;
          local_d0._0_4_ = local_140 - fVar38 * fVar35;
          local_d0._4_4_ = fStack_13c - fVar38 * fVar32;
          fStack_c8 = fStack_138 - fVar38 * fVar40;
          local_150 = CONCAT44(fStack_13c + fVar38 * fVar32,fVar38 * fVar35 + local_140);
          uStack_148 = (ulong)(uint)(fStack_138 + fVar38 * fVar40);
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_d0,&local_150,&local_180);
          uStack_c4 = 0;
          local_d0._0_4_ = local_140 + (float)uVar39 * (float)*(undefined8 *)(lVar10 + 8);
          local_d0._4_4_ =
               fStack_13c +
               (float)((ulong)uVar39 >> 0x20) * (float)((ulong)*(undefined8 *)(lVar10 + 8) >> 0x20);
          fStack_c8 = (float)NEON_fmadd(*(undefined4 *)(lVar10 + 0x10),0x3fc00000,fStack_138);
          uStack_148 = 0;
          local_150 = 0x3f8000003f800000;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_150);
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x78;
        } while (lVar16 < *(int *)(param_1 + 0x414));
      }
    }
    if (((uint)param_3 >> 2 & 1) != 0) {
      iVar4 = *(int *)(param_1 + 0x3b4);
      fStack_138 = 0.0;
      uStack_134 = 0;
      local_140 = 0.0;
      fStack_13c = 0.7;
      if (0 < iVar4) {
        lVar15 = 0;
        lVar16 = 0;
        do {
          lVar10 = *(long *)(param_1 + 0x3c0) + lVar15;
          if ((*(byte *)(*(long *)(lVar10 + 8) + 0x14) & 1) != 0) {
            uVar39 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x10);
            uVar23 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x10);
            fVar41 = *(float *)(*(long *)(lVar10 + 0x10) + 0x18);
            uStack_c4 = 0;
            fVar38 = (float)uVar39;
            fVar32 = (float)uVar23;
            fVar40 = (float)((ulong)uVar39 >> 0x20);
            fVar35 = (float)((ulong)uVar23 >> 0x20);
            fVar50 = *(float *)(*(long *)(lVar10 + 0x18) + 0x18);
            uVar39 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x10);
            fVar36 = *(float *)(*(long *)(lVar10 + 0x20) + 0x18);
            fVar30 = (float)uVar39;
            fVar49 = (float)((ulong)uVar39 >> 0x20);
            fVar48 = (fVar32 + fVar38 + fVar30) * 0.3333333;
            fVar29 = (fVar35 + fVar40 + fVar49) * 0.3333333;
            fVar33 = (fVar50 + fVar41 + fVar36) * 0.3333333;
            local_d0._0_4_ = fVar48 + (fVar38 - fVar48) * 0.8;
            local_d0._4_4_ = fVar29 + (fVar40 - fVar29) * 0.8;
            local_160 = CONCAT44(fVar29 + (fVar49 - fVar29) * 0.8,fVar48 + (fVar30 - fVar48) * 0.8);
            fStack_c8 = (float)NEON_fmadd(fVar41 - fVar33,0x3f4ccccd,fVar33);
            local_150 = CONCAT44(fVar29 + (fVar35 - fVar29) * 0.8,fVar48 + (fVar32 - fVar48) * 0.8);
            uVar22 = NEON_fmadd(fVar50 - fVar33,0x3f4ccccd,fVar33);
            uVar25 = NEON_fmadd(fVar36 - fVar33,0x3f4ccccd,fVar33);
            uStack_148 = (ulong)uVar22;
            uStack_158 = (ulong)uVar25;
            (**(code **)(*(long *)param_2 + 0x48))
                      (0x3f800000,param_2,&local_d0,&local_150,&local_160,&local_140);
            iVar4 = *(int *)(param_1 + 0x3b4);
          }
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x48;
        } while (lVar16 < iVar4);
      }
    }
    if (((uint)param_3 >> 3 & 1) != 0) {
      iVar4 = *(int *)(param_1 + 0x3d4);
      fStack_138 = 0.7;
      uStack_134 = 0;
      local_140 = 0.3;
      fStack_13c = 0.3;
      if (0 < iVar4) {
        uVar39 = NEON_fmov(0x3e800000,4);
        lVar15 = 0;
        lVar16 = 0;
        do {
          lVar10 = *(long *)(param_1 + 0x3e0) + lVar15;
          if ((*(byte *)(*(long *)(lVar10 + 8) + 0x14) & 1) != 0) {
            uVar23 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x10);
            fVar41 = *(float *)(*(long *)(lVar10 + 0x10) + 0x18);
            uStack_c4 = 0;
            uVar24 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x10);
            fVar50 = *(float *)(*(long *)(lVar10 + 0x18) + 0x18);
            uVar28 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x10);
            uVar37 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + 0x10);
            fVar38 = (float)uVar23;
            fVar32 = (float)uVar24;
            fVar40 = (float)((ulong)uVar23 >> 0x20);
            fVar35 = (float)((ulong)uVar24 >> 0x20);
            fVar30 = *(float *)(*(long *)(lVar10 + 0x20) + 0x18);
            fVar51 = *(float *)(*(long *)(lVar10 + 0x28) + 0x18);
            fVar48 = (float)uVar28;
            fVar49 = (float)uVar37;
            fVar33 = (float)((ulong)uVar37 >> 0x20);
            fVar29 = (float)((ulong)uVar28 >> 0x20);
            fVar42 = (fVar32 + fVar38 + fVar48 + fVar49) * (float)uVar39;
            fVar44 = (fVar35 + fVar40 + fVar29 + fVar33) * (float)((ulong)uVar39 >> 0x20);
            fVar36 = (fVar50 + fVar41 + fVar30 + fVar51) * 0.25;
            fVar46 = fVar42 + (fVar38 - fVar42) * 0.8;
            fVar47 = fVar44 + (fVar40 - fVar44) * 0.8;
            fVar40 = fVar42 + (fVar32 - fVar42) * 0.8;
            fVar32 = fVar44 + (fVar35 - fVar44) * 0.8;
            uVar23 = CONCAT44(fVar32,fVar40);
            fVar35 = fVar42 + (fVar48 - fVar42) * 0.8;
            fVar48 = fVar44 + (fVar29 - fVar44) * 0.8;
            uVar28 = CONCAT44(fVar48,fVar35);
            uVar45 = NEON_fmadd(fVar41 - fVar36,0x3f4ccccd,fVar36);
            uVar22 = NEON_fmadd(fVar50 - fVar36,0x3f4ccccd,fVar36);
            fVar38 = (float)NEON_fmadd(fVar30 - fVar36,0x3f4ccccd,fVar36);
            uStack_148 = (ulong)uVar22;
            uStack_158 = (ulong)(uint)fVar38;
            local_160 = uVar28;
            local_150 = uVar23;
            local_d0._0_4_ = fVar46;
            local_d0._4_4_ = fVar47;
            fStack_c8 = (float)uVar45;
            (**(code **)(*(long *)param_2 + 0x48))
                      (0x3f800000,param_2,&local_d0,&local_150,&local_160,&local_140);
            uVar24 = CONCAT44(fVar44 + (fVar33 - fVar44) * 0.8,fVar42 + (fVar49 - fVar42) * 0.8);
            uVar25 = NEON_fmadd(fVar51 - fVar36,0x3f4ccccd,fVar36);
            uStack_c4 = 0;
            uStack_148 = (ulong)uVar22;
            uStack_158 = (ulong)uVar25;
            local_160 = uVar24;
            local_150 = uVar23;
            local_d0._0_4_ = fVar46;
            local_d0._4_4_ = fVar47;
            fStack_c8 = (float)uVar45;
            (**(code **)(*(long *)param_2 + 0x48))
                      (0x3f800000,param_2,&local_d0,&local_150,&local_160,&local_140);
            uStack_c4 = 0;
            uStack_148 = (ulong)(uint)fVar38;
            uStack_158 = (ulong)uVar25;
            local_160 = uVar24;
            local_150 = uVar28;
            local_d0._0_4_ = fVar40;
            local_d0._4_4_ = fVar32;
            fStack_c8 = (float)uVar22;
            (**(code **)(*(long *)param_2 + 0x48))
                      (0x3f800000,param_2,&local_d0,&local_150,&local_160,&local_140);
            uStack_c4 = 0;
            uStack_148 = (ulong)uVar45;
            uStack_158 = (ulong)uVar25;
            local_160 = uVar24;
            local_150 = CONCAT44(fVar47,fVar46);
            local_d0._0_4_ = fVar35;
            local_d0._4_4_ = fVar48;
            fStack_c8 = fVar38;
            (**(code **)(*(long *)param_2 + 0x48))
                      (0x3f800000,param_2,&local_d0,&local_150,&local_160,&local_140);
            iVar4 = *(int *)(param_1 + 0x3d4);
          }
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x88;
        } while (lVar16 < iVar4);
      }
    }
  }
  else {
    srand(0x70e);
    iVar4 = *(int *)(param_1 + 0x5dc);
    if (0 < iVar4) {
      lVar16 = 0;
      do {
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x5e8) + lVar16 * 8) + 0x1a1) != '\0') {
          iVar4 = rand();
          fVar41 = (float)iVar4 * 4.656613e-10;
          iVar4 = rand();
          fVar32 = (float)iVar4 * 4.656613e-10;
          iVar4 = rand();
          uStack_c4 = 0;
          uVar27 = NEON_fmadd(fVar32,fVar32,fVar41 * fVar41);
          fVar40 = (float)iVar4 * 4.656613e-10;
          fVar38 = (float)NEON_fmadd(fVar40,fVar40,uVar27);
          fStack_c8 = 0.75 / SQRT(fVar38);
          local_d0._0_4_ = fStack_c8 * fVar41;
          local_d0._4_4_ = fStack_c8 * fVar32;
          fStack_c8 = fStack_c8 * fVar40;
          uVar22 = *(uint *)(*(long *)(*(long *)(param_1 + 0x5e8) + lVar16 * 8) + 0x24);
          if ((int)uVar22 < 1) {
            puVar18 = (undefined8 *)0x0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            puVar18 = (undefined8 *)(*(code *)PTR_FUN_01048e38)((ulong)uVar22 << 4,0x10);
            lVar15 = 0;
            puVar5 = puVar18;
            do {
              lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x5e8) + lVar16 * 8) + 0x30
                                          ) + lVar15);
              lVar15 = lVar15 + 8;
              uVar39 = *(undefined8 *)(lVar10 + 0x10);
              puVar5[1] = *(undefined8 *)(lVar10 + 0x18);
              *puVar5 = uVar39;
              puVar5 = puVar5 + 2;
            } while ((ulong)uVar22 * 8 - lVar15 != 0);
          }
          local_128 = '\x01';
          local_108 = '\x01';
          local_e8 = '\x01';
          fStack_13c = 0.0;
          fStack_138 = 0.0;
          local_11c = 0;
          local_fc = 0;
          local_130 = 0;
          local_110 = 0;
          local_f0 = 0;
          btConvexHullComputer::compute(&local_140,SUB81(puVar18,0),0,0x10,0.0,0.0);
          lVar8 = local_f0;
          lVar10 = local_110;
          lVar15 = local_130;
          lVar13 = (long)(int)local_fc;
          if (0 < (int)local_fc) {
            lVar20 = 0;
            do {
              lVar12 = (long)*(int *)(lVar8 + lVar20 * 4);
              piVar14 = (int *)(lVar10 + lVar12 * 0xc);
              piVar17 = piVar14 + (long)piVar14[1] * 3 + (long)piVar14[(long)piVar14[1] * 3] * 3;
              if (piVar17 != piVar14) {
                iVar4 = *(int *)(lVar10 + lVar12 * 0xc + 8);
                iVar7 = piVar14[(long)piVar14[1] * 3 + 2];
                do {
                  iVar21 = iVar4;
                  iVar4 = piVar17[2];
                  (**(code **)(*(long *)param_2 + 0x48))
                            (0x3f800000,param_2,lVar15 + (long)iVar7 * 0x10,
                             lVar15 + (long)iVar21 * 0x10,lVar15 + (long)iVar4 * 0x10,&local_d0);
                  piVar17 = piVar17 + (long)piVar17[1] * 3 + (long)piVar17[(long)piVar17[1] * 3] * 3
                  ;
                  iVar7 = iVar21;
                } while (piVar17 != piVar14);
              }
              lVar20 = lVar20 + 1;
            } while (lVar20 < lVar13);
          }
          if ((lVar8 != 0) && (local_e8 != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)(lVar8);
          }
          if ((local_110 != 0) && (local_108 != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          if ((local_130 != 0) && (local_128 != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          if (puVar18 != (undefined8 *)0x0) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          iVar4 = *(int *)(param_1 + 0x5dc);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar4);
    }
  }
  uVar27 = uStack_134;
  fVar35 = fStack_138;
  fVar41 = fStack_13c;
  fVar38 = local_140;
  local_140 = 1.0;
  fVar40 = local_140;
  fStack_13c = 1.0;
  fVar32 = fStack_13c;
  fStack_138 = 1.0;
  fVar50 = fStack_138;
  uStack_134 = 0;
  uVar43 = uStack_134;
  local_140 = fVar38;
  fStack_13c = fVar41;
  fStack_138 = fVar35;
  uStack_134 = uVar27;
  if (((uint)param_3 >> 6 & 1) != 0) {
    if (0 < *(int *)(param_1 + 0x3f4)) {
      lVar15 = 0;
      lVar16 = 0;
      do {
        plVar19 = (long *)(*(long *)(param_1 + 0x400) + lVar15);
        lVar10 = plVar19[3];
        fVar48 = *(float *)(plVar19 + 2);
        fVar38 = (float)plVar19[1];
        fVar35 = (float)((ulong)plVar19[1] >> 0x20);
        uVar39 = NEON_rev64(CONCAT44(*(float *)(lVar10 + 0xc) * fVar35,
                                     *(float *)(lVar10 + 0x18) * fVar38),4);
        fVar41 = (float)NEON_fmadd(*(undefined4 *)(lVar10 + 0x30),fVar48,
                                   *(float *)(lVar10 + 0x28) * fVar38 +
                                   *(float *)(lVar10 + 0x2c) * fVar35);
        local_150 = CONCAT44((float)((ulong)uVar39 >> 0x20) + fVar35 * *(float *)(lVar10 + 0x1c) +
                             *(float *)(lVar10 + 0x20) * fVar48 +
                             (float)((ulong)*(undefined8 *)(lVar10 + 0x38) >> 0x20),
                             (float)uVar39 + fVar38 * *(float *)(lVar10 + 8) +
                             *(float *)(lVar10 + 0x10) * fVar48 +
                             (float)*(undefined8 *)(lVar10 + 0x38));
        uStack_148 = (ulong)(uint)(fVar41 + *(float *)(lVar10 + 0x40));
        lVar10 = *plVar19;
        uStack_158 = 0;
        local_160 = 0x3f800000;
        uStack_134 = 0;
        uStack_c4 = 0;
        fStack_13c = *(float *)(lVar10 + 0x14);
        fStack_138 = *(float *)(lVar10 + 0x18);
        local_140 = *(float *)(lVar10 + 0x10) + -0.25;
        local_d0._0_4_ = *(float *)(lVar10 + 0x10) + 0.25;
        local_d0._4_4_ = fStack_13c;
        fStack_c8 = fStack_138;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_160);
        fStack_138 = *(float *)(lVar10 + 0x18);
        local_140 = *(float *)(lVar10 + 0x10);
        fStack_13c = *(float *)(lVar10 + 0x14) + -0.25;
        local_d0._4_4_ = *(float *)(lVar10 + 0x14) + 0.25;
        uStack_134 = 0;
        uStack_c4 = 0;
        local_d0._0_4_ = local_140;
        fStack_c8 = fStack_138;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_160);
        fStack_13c = *(float *)(lVar10 + 0x14);
        local_140 = *(float *)(lVar10 + 0x10);
        fStack_138 = *(float *)(lVar10 + 0x18) + -0.25;
        fStack_c8 = *(float *)(lVar10 + 0x18) + 0.25;
        uStack_134 = 0;
        uStack_c4 = 0;
        local_d0._0_4_ = local_140;
        local_d0._4_4_ = fStack_13c;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_160);
        local_140 = (float)local_150 + -0.25;
        local_d0._0_4_ = (float)local_150 + 0.25;
        uStack_158 = 0;
        local_160 = 0x3f80000000000000;
        uStack_134 = 0;
        uStack_c4 = 0;
        fStack_13c = local_150._4_4_;
        fStack_138 = (float)uStack_148;
        local_d0._4_4_ = local_150._4_4_;
        fStack_c8 = (float)uStack_148;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_160);
        fStack_13c = local_150._4_4_ + -0.25;
        local_d0._4_4_ = local_150._4_4_ + 0.25;
        uStack_134 = 0;
        local_140 = (float)local_150;
        local_d0._0_4_ = (float)local_150;
        fStack_138 = (float)uStack_148;
        fStack_c8 = (float)uStack_148;
        uStack_c4 = 0;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_160);
        fStack_138 = (float)uStack_148 + -0.25;
        fStack_c8 = (float)uStack_148 + 0.25;
        uStack_134 = 0;
        local_140 = (float)local_150;
        fStack_13c = local_150._4_4_;
        local_d0._0_4_ = (float)local_150;
        local_d0._4_4_ = local_150._4_4_;
        uStack_c4 = 0;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_160);
        local_140 = fVar40;
        fStack_13c = fVar32;
        fStack_138 = fVar50;
        uStack_134 = uVar43;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,*plVar19 + 0x10,&local_150,&local_140);
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 0x68;
      } while (lVar16 < *(int *)(param_1 + 0x3f4));
    }
    iVar4 = *(int *)(param_1 + 0x374);
    if (0 < iVar4) {
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x380) + lVar15;
        if (((*(byte *)(*(long *)(lVar10 + 8) + 0x14) & 1) != 0) &&
           (*(float *)(lVar10 + 0x60) <= 0.0)) {
          lVar10 = *(long *)(param_1 + 0x380) + lVar15;
          uStack_148 = 0;
          local_150 = 0x3f800000;
          fStack_13c = *(float *)(lVar10 + 0x14);
          fStack_138 = *(float *)(lVar10 + 0x18);
          uStack_134 = 0;
          uStack_c4 = 0;
          local_140 = *(float *)(lVar10 + 0x10) + -0.25;
          local_d0._0_4_ = *(float *)(lVar10 + 0x10) + 0.25;
          local_d0._4_4_ = fStack_13c;
          fStack_c8 = fStack_138;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_150);
          fStack_138 = *(float *)(lVar10 + 0x18);
          local_140 = *(float *)(lVar10 + 0x10);
          fStack_13c = *(float *)(lVar10 + 0x14) + -0.25;
          local_d0._4_4_ = *(float *)(lVar10 + 0x14) + 0.25;
          uStack_134 = 0;
          uStack_c4 = 0;
          local_d0._0_4_ = local_140;
          fStack_c8 = fStack_138;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_150);
          fStack_13c = *(float *)(lVar10 + 0x14);
          local_140 = *(float *)(lVar10 + 0x10);
          fStack_138 = *(float *)(lVar10 + 0x18) + -0.25;
          fStack_c8 = *(float *)(lVar10 + 0x18) + 0.25;
          uStack_134 = 0;
          uStack_c4 = 0;
          local_d0._0_4_ = local_140;
          local_d0._4_4_ = fStack_13c;
          (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_150);
          iVar4 = *(int *)(param_1 + 0x374);
        }
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 0x78;
      } while (lVar16 < iVar4);
    }
  }
  if ((((uint)param_3 >> 7 & 1) != 0) && (0 < *(int *)(param_1 + 0x354))) {
    lVar16 = 0;
    do {
      lVar15 = *(long *)(param_1 + 0x360);
      lVar10 = lVar15 + lVar16 * 0x58;
      uVar39 = *(undefined8 *)(lVar10 + 0x10);
      fStack_138 = (float)*(undefined8 *)(lVar10 + 0x18);
      uStack_134 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
      local_140 = (float)uVar39;
      fStack_13c = (float)((ulong)uVar39 >> 0x20);
      if (0 < (int)*(uint *)(lVar10 + 0x20)) {
        lVar8 = lVar15 + lVar16 * 0x58;
        uVar9 = 0;
        do {
          lVar13 = uVar9 * 8;
          lVar20 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          lVar13 = *(long *)(lVar8 + lVar13 + 0x28);
          fVar38 = *(float *)(lVar8 + lVar20 + 0x48);
          uVar23 = *(undefined8 *)(lVar13 + 0x10);
          local_140 = (float)uVar39 + (float)uVar23 * fVar38;
          fStack_13c = (float)((ulong)uVar39 >> 0x20) + (float)((ulong)uVar23 >> 0x20) * fVar38;
          uVar39 = CONCAT44(fStack_13c,local_140);
          fStack_138 = (float)NEON_fmadd(*(undefined4 *)(lVar13 + 0x18),fVar38,fStack_138);
        } while (*(uint *)(lVar10 + 0x20) != uVar9);
      }
      (**(code **)(*(long *)param_2 + 0x60))
                (param_2,&local_140,*(undefined8 *)(lVar15 + lVar16 * 0x58 + 8));
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x354));
  }
  if (((uint)param_3 >> 9 & 1) != 0) {
    fStack_138 = 1.0;
    uStack_134 = 0;
    local_140 = 1.0;
    fStack_13c = 0.0;
    local_d0._0_4_ = fVar40;
    local_d0._4_4_ = fVar32;
    fStack_c8 = fVar50;
    uStack_c4 = uVar43;
    FUN_00f8e4d8(param_2,*(undefined8 *)(param_1 + 0x4b8),0,&local_140,&local_d0,0,0xffffffff);
  }
  if (((uint)param_3 >> 10 & 1) != 0) {
    fStack_138 = 0.0;
    uStack_134 = 0;
    local_140 = 0.0;
    fStack_13c = 1.0;
    fStack_c8 = 0.0;
    uStack_c4 = 0;
    local_d0._0_4_ = 1.0;
    local_d0._4_4_ = 0.0;
    FUN_00f8e4d8(param_2,*(undefined8 *)(param_1 + 0x518),0,&local_140,&local_d0,0,0xffffffff);
  }
  if (((uint)param_3 >> 0xb & 1) != 0) {
    fStack_c8 = 0.0;
    uStack_c4 = 0;
    local_d0._0_4_ = 1.0;
    local_d0._4_4_ = 0.0;
    fStack_138 = 1.0;
    uStack_134 = 0;
    local_140 = 0.0;
    fStack_13c = 1.0;
    FUN_00f8e4d8(param_2,*(undefined8 *)(param_1 + 0x578),0,&local_140,&local_d0,0,0xffffffff);
  }
  if ((((uint)param_3 >> 0xc & 1) != 0) && (0 < *(int *)(param_1 + 0x454))) {
    lVar16 = 0;
    do {
      plVar19 = *(long **)(*(long *)(param_1 + 0x460) + lVar16 * 8);
      iVar4 = (**(code **)(*plVar19 + 0x28))(plVar19);
      if (iVar4 == 1) {
        if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar4 != 0)) {
          puVar18 = (undefined8 *)btTransform::getIdentity();
          btSoftBody::Body::xform()::identity._8_8_ = puVar18[1];
          btSoftBody::Body::xform()::identity._0_8_ = *puVar18;
          btSoftBody::Body::xform()::identity._24_8_ = puVar18[3];
          btSoftBody::Body::xform()::identity._16_8_ = puVar18[2];
          btSoftBody::Body::xform()::identity._40_8_ = puVar18[5];
          btSoftBody::Body::xform()::identity._32_8_ = puVar18[4];
          btSoftBody::Body::xform()::identity._56_8_ = puVar18[7];
          btSoftBody::Body::xform()::identity._48_8_ = puVar18[6];
          __cxa_guard_release(&btSoftBody::Body::xform()::identity);
        }
        puVar2 = btSoftBody::Body::xform()::identity;
        if (plVar19[1] != 0) {
          puVar2 = (undefined1 *)(plVar19[1] + 0x60);
        }
        if (plVar19[3] != 0) {
          puVar2 = (undefined1 *)(plVar19[3] + 8);
        }
        fStack_138 = (float)*(undefined8 *)(puVar2 + 0x38);
        uStack_134 = (undefined4)((ulong)*(undefined8 *)(puVar2 + 0x38) >> 0x20);
        local_140 = (float)*(undefined8 *)(puVar2 + 0x30);
        fStack_13c = (float)((ulong)*(undefined8 *)(puVar2 + 0x30) >> 0x20);
        if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar4 != 0)) {
          puVar18 = (undefined8 *)btTransform::getIdentity();
          btSoftBody::Body::xform()::identity._8_8_ = puVar18[1];
          btSoftBody::Body::xform()::identity._0_8_ = *puVar18;
          btSoftBody::Body::xform()::identity._24_8_ = puVar18[3];
          btSoftBody::Body::xform()::identity._16_8_ = puVar18[2];
          btSoftBody::Body::xform()::identity._40_8_ = puVar18[5];
          btSoftBody::Body::xform()::identity._32_8_ = puVar18[4];
          btSoftBody::Body::xform()::identity._56_8_ = puVar18[7];
          btSoftBody::Body::xform()::identity._48_8_ = puVar18[6];
          __cxa_guard_release(&btSoftBody::Body::xform()::identity);
        }
        puVar2 = btSoftBody::Body::xform()::identity;
        if (plVar19[4] != 0) {
          puVar2 = (undefined1 *)(plVar19[4] + 0x60);
        }
        if (plVar19[6] != 0) {
          puVar2 = (undefined1 *)(plVar19[6] + 8);
        }
        fStack_c8 = (float)*(undefined8 *)(puVar2 + 0x38);
        uStack_c4 = (undefined4)((ulong)*(undefined8 *)(puVar2 + 0x38) >> 0x20);
        local_d0._0_4_ = (float)*(undefined8 *)(puVar2 + 0x30);
        local_d0._4_4_ = (float)((ulong)*(undefined8 *)(puVar2 + 0x30) >> 0x20);
        if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar4 != 0)) {
          puVar18 = (undefined8 *)btTransform::getIdentity();
          btSoftBody::Body::xform()::identity._8_8_ = puVar18[1];
          btSoftBody::Body::xform()::identity._0_8_ = *puVar18;
          btSoftBody::Body::xform()::identity._24_8_ = puVar18[3];
          btSoftBody::Body::xform()::identity._16_8_ = puVar18[2];
          btSoftBody::Body::xform()::identity._40_8_ = puVar18[5];
          btSoftBody::Body::xform()::identity._32_8_ = puVar18[4];
          btSoftBody::Body::xform()::identity._56_8_ = puVar18[7];
          btSoftBody::Body::xform()::identity._48_8_ = puVar18[6];
          __cxa_guard_release(&btSoftBody::Body::xform()::identity);
        }
        fVar38 = *(float *)(plVar19 + 7);
        uVar27 = *(undefined4 *)((long)plVar19 + 0x3c);
        pfVar1 = (float *)btSoftBody::Body::xform()::identity;
        if (plVar19[1] != 0) {
          pfVar1 = (float *)(plVar19[1] + 0x60);
        }
        uVar43 = *(undefined4 *)(plVar19 + 8);
        if (plVar19[3] != 0) {
          pfVar1 = (float *)(plVar19[3] + 8);
        }
        fVar29 = *pfVar1;
        fVar50 = pfVar1[1];
        fVar49 = pfVar1[4];
        fVar32 = pfVar1[5];
        fVar48 = pfVar1[8];
        fVar35 = pfVar1[9];
        fVar41 = pfVar1[2];
        fVar30 = pfVar1[6];
        fVar40 = pfVar1[10];
        if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar4 != 0)) {
          puVar18 = (undefined8 *)btTransform::getIdentity();
          btSoftBody::Body::xform()::identity._8_8_ = puVar18[1];
          btSoftBody::Body::xform()::identity._0_8_ = *puVar18;
          btSoftBody::Body::xform()::identity._24_8_ = puVar18[3];
          btSoftBody::Body::xform()::identity._16_8_ = puVar18[2];
          btSoftBody::Body::xform()::identity._40_8_ = puVar18[5];
          btSoftBody::Body::xform()::identity._32_8_ = puVar18[4];
          btSoftBody::Body::xform()::identity._56_8_ = puVar18[7];
          btSoftBody::Body::xform()::identity._48_8_ = puVar18[6];
          __cxa_guard_release(&btSoftBody::Body::xform()::identity);
        }
        pfVar1 = (float *)btSoftBody::Body::xform()::identity;
        if (plVar19[4] != 0) {
          pfVar1 = (float *)(plVar19[4] + 0x60);
        }
        uVar31 = NEON_fmadd(uVar27,fVar50,fVar38 * fVar29);
        uVar26 = NEON_fmadd(fVar32,uVar27,fVar49 * fVar38);
        uVar27 = NEON_fmadd(fVar35,uVar27,fVar48 * fVar38);
        if (plVar19[6] != 0) {
          pfVar1 = (float *)(plVar19[6] + 8);
        }
        uVar52 = *(undefined4 *)(plVar19 + 10);
        fVar35 = *(float *)(plVar19 + 9);
        uVar34 = *(undefined4 *)((long)plVar19 + 0x4c);
        fVar41 = (float)NEON_fmadd(uVar43,fVar41,uVar31);
        fVar32 = (float)NEON_fmadd(fVar30,uVar43,uVar26);
        fVar38 = (float)NEON_fmadd(fVar40,uVar43,uVar27);
        uVar27 = NEON_fmadd(uVar34,pfVar1[1],fVar35 * *pfVar1);
        uVar26 = NEON_fmadd(pfVar1[5],uVar34,pfVar1[4] * fVar35);
        uVar43 = NEON_fmadd(pfVar1[9],uVar34,pfVar1[8] * fVar35);
        local_150 = CONCAT44(fStack_13c + fVar32 * 10.0,local_140 + fVar41 * 10.0);
        fVar35 = (float)NEON_fmadd(uVar52,pfVar1[2],uVar27);
        fVar50 = (float)NEON_fmadd(pfVar1[6],uVar52,uVar26);
        fVar40 = (float)NEON_fmadd(pfVar1[10],uVar52,uVar43);
        uStack_148 = (ulong)(uint)(fStack_138 + fVar38 * 10.0);
        uStack_158 = 0;
        local_160 = 0x3f8000003f800000;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_150,&local_160);
        local_150 = CONCAT44(fStack_13c + fVar50 * 10.0,local_140 + fVar35 * 10.0);
        uStack_148 = (ulong)(uint)(fStack_138 + fVar40 * 10.0);
        uStack_158 = 0;
        local_160 = 0x3f8000003f800000;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_150,&local_160);
        local_150 = CONCAT44(local_d0._4_4_ + fVar32 * 10.0,(float)local_d0 + fVar41 * 10.0);
        uStack_148 = (ulong)(uint)(fStack_c8 + fVar38 * 10.0);
        uStack_158 = 0x3f800000;
        local_160 = 0x3f80000000000000;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_d0,&local_150,&local_160);
        puVar5 = &local_d0;
        puVar18 = &local_150;
        puVar6 = &local_160;
        pcVar11 = *(code **)(*(long *)param_2 + 0x20);
        local_150 = CONCAT44(local_d0._4_4_ + fVar50 * 10.0,(float)local_d0 + fVar35 * 10.0);
        uStack_148 = (ulong)(uint)(fStack_c8 + fVar40 * 10.0);
        uStack_158 = 0x3f800000;
        local_160 = 0x3f80000000000000;
LAB_00f8de2c:
        (*pcVar11)(param_2,puVar5,puVar18,puVar6);
      }
      else if (iVar4 == 0) {
        if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar4 != 0)) {
          puVar18 = (undefined8 *)btTransform::getIdentity();
          btSoftBody::Body::xform()::identity._8_8_ = puVar18[1];
          btSoftBody::Body::xform()::identity._0_8_ = *puVar18;
          btSoftBody::Body::xform()::identity._24_8_ = puVar18[3];
          btSoftBody::Body::xform()::identity._16_8_ = puVar18[2];
          btSoftBody::Body::xform()::identity._40_8_ = puVar18[5];
          btSoftBody::Body::xform()::identity._32_8_ = puVar18[4];
          btSoftBody::Body::xform()::identity._56_8_ = puVar18[7];
          btSoftBody::Body::xform()::identity._48_8_ = puVar18[6];
          __cxa_guard_release(&btSoftBody::Body::xform()::identity);
        }
        pfVar1 = (float *)btSoftBody::Body::xform()::identity;
        if (plVar19[1] != 0) {
          pfVar1 = (float *)(plVar19[1] + 0x60);
        }
        fVar38 = *(float *)(plVar19 + 8);
        if (plVar19[3] != 0) {
          pfVar1 = (float *)(plVar19[3] + 8);
        }
        fVar40 = (float)plVar19[7];
        fVar32 = (float)((ulong)plVar19[7] >> 0x20);
        uVar39 = NEON_rev64(CONCAT44(pfVar1[1] * fVar32,pfVar1[4] * fVar40),4);
        fVar41 = (float)NEON_fmadd(pfVar1[10],fVar38,pfVar1[8] * fVar40 + pfVar1[9] * fVar32);
        local_150 = CONCAT44((float)((ulong)uVar39 >> 0x20) + fVar32 * pfVar1[5] +
                             pfVar1[6] * fVar38 +
                             (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20),
                             (float)uVar39 + fVar40 * *pfVar1 + pfVar1[2] * fVar38 +
                             (float)*(undefined8 *)(pfVar1 + 0xc));
        uStack_148 = (ulong)(uint)(fVar41 + pfVar1[0xe]);
        if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar4 != 0)) {
          puVar18 = (undefined8 *)btTransform::getIdentity();
          btSoftBody::Body::xform()::identity._8_8_ = puVar18[1];
          btSoftBody::Body::xform()::identity._0_8_ = *puVar18;
          btSoftBody::Body::xform()::identity._24_8_ = puVar18[3];
          btSoftBody::Body::xform()::identity._16_8_ = puVar18[2];
          btSoftBody::Body::xform()::identity._40_8_ = puVar18[5];
          btSoftBody::Body::xform()::identity._32_8_ = puVar18[4];
          btSoftBody::Body::xform()::identity._56_8_ = puVar18[7];
          btSoftBody::Body::xform()::identity._48_8_ = puVar18[6];
          __cxa_guard_release(&btSoftBody::Body::xform()::identity);
        }
        pfVar1 = (float *)btSoftBody::Body::xform()::identity;
        if (plVar19[4] != 0) {
          pfVar1 = (float *)(plVar19[4] + 0x60);
        }
        fVar38 = *(float *)(plVar19 + 10);
        if (plVar19[6] != 0) {
          pfVar1 = (float *)(plVar19[6] + 8);
        }
        fVar40 = (float)plVar19[9];
        fVar32 = (float)((ulong)plVar19[9] >> 0x20);
        uVar39 = NEON_rev64(CONCAT44(pfVar1[1] * fVar32,pfVar1[4] * fVar40),4);
        fVar41 = (float)NEON_fmadd(pfVar1[10],fVar38,pfVar1[8] * fVar40 + pfVar1[9] * fVar32);
        local_160 = CONCAT44((float)((ulong)uVar39 >> 0x20) + fVar32 * pfVar1[5] +
                             pfVar1[6] * fVar38 +
                             (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20),
                             (float)uVar39 + fVar40 * *pfVar1 + pfVar1[2] * fVar38 +
                             (float)*(undefined8 *)(pfVar1 + 0xc));
        uStack_158 = (ulong)(uint)(fVar41 + pfVar1[0xe]);
        if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar4 != 0)) {
          puVar18 = (undefined8 *)btTransform::getIdentity();
          btSoftBody::Body::xform()::identity._8_8_ = puVar18[1];
          btSoftBody::Body::xform()::identity._0_8_ = *puVar18;
          btSoftBody::Body::xform()::identity._24_8_ = puVar18[3];
          btSoftBody::Body::xform()::identity._16_8_ = puVar18[2];
          btSoftBody::Body::xform()::identity._40_8_ = puVar18[5];
          btSoftBody::Body::xform()::identity._32_8_ = puVar18[4];
          btSoftBody::Body::xform()::identity._56_8_ = puVar18[7];
          btSoftBody::Body::xform()::identity._48_8_ = puVar18[6];
          __cxa_guard_release(&btSoftBody::Body::xform()::identity);
        }
        fStack_138 = 0.0;
        uStack_134 = 0;
        local_140 = 1.0;
        fStack_13c = 1.0;
        puVar2 = btSoftBody::Body::xform()::identity;
        if (plVar19[1] != 0) {
          puVar2 = (undefined1 *)(plVar19[1] + 0x60);
        }
        if (plVar19[3] != 0) {
          puVar2 = (undefined1 *)(plVar19[3] + 8);
        }
        (**(code **)(*(long *)param_2 + 0x20))(param_2,puVar2 + 0x30,&local_150,&local_140);
        if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar4 != 0)) {
          puVar18 = (undefined8 *)btTransform::getIdentity();
          btSoftBody::Body::xform()::identity._8_8_ = puVar18[1];
          btSoftBody::Body::xform()::identity._0_8_ = *puVar18;
          btSoftBody::Body::xform()::identity._24_8_ = puVar18[3];
          btSoftBody::Body::xform()::identity._16_8_ = puVar18[2];
          btSoftBody::Body::xform()::identity._40_8_ = puVar18[5];
          btSoftBody::Body::xform()::identity._32_8_ = puVar18[4];
          btSoftBody::Body::xform()::identity._56_8_ = puVar18[7];
          btSoftBody::Body::xform()::identity._48_8_ = puVar18[6];
          __cxa_guard_release(&btSoftBody::Body::xform()::identity);
        }
        puVar2 = btSoftBody::Body::xform()::identity;
        if (plVar19[4] != 0) {
          puVar2 = (undefined1 *)(plVar19[4] + 0x60);
        }
        if (plVar19[6] != 0) {
          puVar2 = (undefined1 *)(plVar19[6] + 8);
        }
        fStack_138 = 1.0;
        uStack_134 = 0;
        local_140 = 0.0;
        fStack_13c = 1.0;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,puVar2 + 0x30,&local_160,&local_140);
        local_140 = (float)local_150 + -0.25;
        local_d0._0_4_ = (float)local_150 + 0.25;
        uStack_188 = 0;
        local_190 = 0x3f8000003f800000;
        uStack_134 = 0;
        fStack_13c = local_150._4_4_;
        fStack_138 = (float)uStack_148;
        local_d0._4_4_ = local_150._4_4_;
        fStack_c8 = (float)uStack_148;
        uStack_c4 = 0;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_190);
        fStack_13c = local_150._4_4_ + -0.25;
        local_d0._4_4_ = local_150._4_4_ + 0.25;
        uStack_134 = 0;
        local_140 = (float)local_150;
        local_d0._0_4_ = (float)local_150;
        fStack_138 = (float)uStack_148;
        fStack_c8 = (float)uStack_148;
        uStack_c4 = 0;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_190);
        fStack_138 = (float)uStack_148 + -0.25;
        fStack_c8 = (float)uStack_148 + 0.25;
        uStack_134 = 0;
        local_140 = (float)local_150;
        fStack_13c = local_150._4_4_;
        local_d0._0_4_ = (float)local_150;
        local_d0._4_4_ = local_150._4_4_;
        uStack_c4 = 0;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_190);
        local_140 = (float)local_160 + -0.25;
        local_d0._0_4_ = (float)local_160 + 0.25;
        uStack_188 = 0x3f800000;
        local_190 = 0x3f80000000000000;
        uStack_134 = 0;
        uStack_c4 = 0;
        fStack_13c = local_160._4_4_;
        fStack_138 = (float)uStack_158;
        local_d0._4_4_ = local_160._4_4_;
        fStack_c8 = (float)uStack_158;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_190);
        fStack_13c = local_160._4_4_ + -0.25;
        local_d0._4_4_ = local_160._4_4_ + 0.25;
        uStack_134 = 0;
        local_140 = (float)local_160;
        local_d0._0_4_ = (float)local_160;
        fStack_138 = (float)uStack_158;
        fStack_c8 = (float)uStack_158;
        uStack_c4 = 0;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_140,&local_d0,&local_190);
        fStack_13c = local_160._4_4_;
        uStack_134 = 0;
        local_140 = (float)local_160;
        uStack_c4 = 0;
        puVar5 = (undefined8 *)&local_140;
        puVar18 = &local_d0;
        fStack_138 = (float)uStack_158 + -0.25;
        fStack_c8 = (float)uStack_158 + 0.25;
        pcVar11 = *(code **)(*(long *)param_2 + 0x20);
        puVar6 = &local_190;
        local_d0._0_4_ = local_140;
        local_d0._4_4_ = fStack_13c;
        goto LAB_00f8de2c;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x454));
  }
  if (*(long *)(lVar3 + 0x28) != local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


