// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawObject
// Entry Point: 00f48f90
// Size: 2680 bytes
// Signature: undefined __thiscall debugDrawObject(btCollisionWorld * this, btTransform * param_1, btCollisionShape * param_2, btVector3 * param_3)


/* btCollisionWorld::debugDrawObject(btTransform const&, btCollisionShape const*, btVector3 const&)
    */

void __thiscall
btCollisionWorld::debugDrawObject
          (btCollisionWorld *this,btTransform *param_1,btCollisionShape *param_2,btVector3 *param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 local_150;
  undefined **ppuStack_148;
  undefined8 local_140;
  ulong local_138;
  undefined8 uStack_130;
  ulong local_128;
  undefined8 uStack_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong local_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  lVar8 = (**(code **)(*(long *)this + 0x28))();
  if (lVar8 != 0) {
    plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    uVar5 = (**(code **)(*plVar9 + 0x70))();
    if ((uVar5 >> 0xf & 1) != 0) {
      plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar9 + 0x80))(0x3f800000,plVar9,param_1);
    }
  }
  switch(*(int *)(param_2 + 8)) {
  case 0:
    fVar17 = *(float *)(param_2 + 0x2c);
    fVar22 = *(float *)(param_2 + 0x30);
    fVar31 = *(float *)(param_2 + 0x34);
    uVar18 = *(undefined4 *)(param_2 + 0x38);
    fVar27 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    fVar28 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    fVar29 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    local_150 = (undefined **)CONCAT44(fVar28 + fVar22,fVar27 + fVar17);
    ppuStack_148 = (undefined **)CONCAT44(uVar18,fVar29 + fVar31);
    plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_c0 = CONCAT44(-(fVar28 + fVar22),-(fVar27 + fVar17));
    local_b8 = (ulong)(uint)-(fVar29 + fVar31);
    (**(code **)(*plVar9 + 0xa0))(plVar9,&local_c0,&local_150,param_1,param_3);
    break;
  default:
    if (*(int *)(param_2 + 8) < 7) {
      lVar8 = *(long *)(param_2 + 0x48);
      if (lVar8 == 0) {
        iVar6 = (**(code **)(*(long *)param_2 + 200))(param_2);
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            (**(code **)(*(long *)param_2 + 0xd0))(param_2,iVar6,&local_150,&local_c0);
            uVar23 = NEON_fmadd(*(undefined4 *)(param_1 + 4),local_150._4_4_,
                                *(float *)param_1 * (float)local_150);
            uVar30 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),local_150._4_4_,
                                *(float *)(param_1 + 0x10) * (float)local_150);
            uVar18 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),local_150._4_4_,
                                *(float *)(param_1 + 0x20) * (float)local_150);
            fVar28 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),ppuStack_148._0_4_,uVar23);
            fVar29 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),ppuStack_148._0_4_,uVar30);
            local_d4 = 0;
            fVar27 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),ppuStack_148._0_4_,uVar18);
            uVar18 = NEON_fmadd((undefined4)local_c0,*(float *)param_1,*(float *)(param_1 + 0x30));
            uVar23 = NEON_fmadd((undefined4)local_c0,*(float *)(param_1 + 0x10),
                                *(float *)(param_1 + 0x34));
            uVar30 = NEON_fmadd((undefined4)local_c0,*(float *)(param_1 + 0x20),
                                *(float *)(param_1 + 0x38));
            uVar18 = NEON_fmadd(local_c0._4_4_,*(undefined4 *)(param_1 + 4),uVar18);
            uVar23 = NEON_fmadd(local_c0._4_4_,*(undefined4 *)(param_1 + 0x14),uVar23);
            uVar30 = NEON_fmadd(local_c0._4_4_,*(undefined4 *)(param_1 + 0x24),uVar30);
            local_d0 = CONCAT44(fVar29 + *(float *)(param_1 + 0x34),
                                fVar28 + *(float *)(param_1 + 0x30));
            uStack_c8 = (ulong)(uint)(fVar27 + *(float *)(param_1 + 0x38));
            local_e0 = NEON_fmadd((undefined4)local_b8,*(undefined4 *)(param_1 + 8),uVar18);
            uStack_dc = NEON_fmadd((undefined4)local_b8,*(undefined4 *)(param_1 + 0x18),uVar23);
            local_d8 = NEON_fmadd((undefined4)local_b8,*(undefined4 *)(param_1 + 0x28),uVar30);
            plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_d0,&local_e0,param_3);
            iVar6 = iVar6 + 1;
            iVar7 = (**(code **)(*(long *)param_2 + 200))(param_2);
          } while (iVar6 < iVar7);
        }
      }
      else if (0 < *(int *)(lVar8 + 0x2c)) {
        lVar14 = 0;
        do {
          fVar28 = 0.0;
          fVar29 = 0.0;
          fVar27 = 0.0;
          iVar6 = *(int *)(*(long *)(lVar8 + 0x38) + lVar14 * 0x30 + 4);
          if ((iVar6 != 0) && (0 < iVar6)) {
            fVar27 = 0.0;
            fVar29 = 0.0;
            fVar28 = 0.0;
            lVar15 = 0;
            lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + lVar14 * 0x30 + 0x10);
            iVar7 = *(int *)(lVar10 + (ulong)(iVar6 - 1) * 4);
            while( true ) {
              iVar3 = *(int *)(lVar10 + lVar15 * 4);
              lVar10 = (long)iVar3 * 0x10;
              pfVar1 = (float *)(*(long *)(lVar8 + 0x18) + lVar10);
              fVar28 = *pfVar1 + fVar28;
              fVar29 = pfVar1[1] + fVar29;
              fVar27 = pfVar1[2] + fVar27;
              plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
              pfVar1 = (float *)(*(long *)(lVar8 + 0x18) + (long)iVar7 * 0x10);
              puVar2 = (undefined4 *)(*(long *)(lVar8 + 0x18) + lVar10);
              fVar17 = *pfVar1;
              fVar22 = pfVar1[1];
              fVar37 = pfVar1[2];
              uVar23 = NEON_fmadd(*(undefined4 *)(param_1 + 4),fVar22,*(float *)param_1 * fVar17);
              uVar30 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),fVar22,
                                  *(float *)(param_1 + 0x10) * fVar17);
              uVar18 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),fVar22,
                                  *(float *)(param_1 + 0x20) * fVar17);
              fVar22 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar37,uVar23);
              fVar31 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),fVar37,uVar30);
              fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar37,uVar18);
              local_150 = (undefined **)
                          CONCAT44(fVar31 + *(float *)(param_1 + 0x34),
                                   fVar22 + *(float *)(param_1 + 0x30));
              ppuStack_148 = (undefined **)(ulong)(uint)(fVar17 + *(float *)(param_1 + 0x38));
              uVar23 = *puVar2;
              uVar24 = puVar2[1];
              uVar18 = NEON_fmadd(uVar23,*(float *)param_1,*(float *)(param_1 + 0x30));
              uVar30 = NEON_fmadd(uVar23,*(float *)(param_1 + 0x10),*(float *)(param_1 + 0x34));
              uVar23 = NEON_fmadd(uVar23,*(float *)(param_1 + 0x20),*(float *)(param_1 + 0x38));
              uVar18 = NEON_fmadd(uVar24,*(undefined4 *)(param_1 + 4),uVar18);
              uVar20 = NEON_fmadd(uVar24,*(undefined4 *)(param_1 + 0x14),uVar30);
              uVar30 = NEON_fmadd(uVar24,*(undefined4 *)(param_1 + 0x24),uVar23);
              uVar23 = puVar2[2];
              uVar18 = NEON_fmadd(uVar23,*(undefined4 *)(param_1 + 8),uVar18);
              uVar20 = NEON_fmadd(uVar23,*(undefined4 *)(param_1 + 0x18),uVar20);
              uVar5 = NEON_fmadd(uVar23,*(undefined4 *)(param_1 + 0x28),uVar30);
              local_c0 = CONCAT44(uVar20,uVar18);
              local_b8 = (ulong)uVar5;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_150,&local_c0,param_3);
              lVar15 = lVar15 + 1;
              if (*(int *)(*(long *)(lVar8 + 0x38) + lVar14 * 0x30 + 4) <= lVar15) break;
              lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + lVar14 * 0x30 + 0x10);
              iVar7 = iVar3;
            }
          }
          plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
          uVar5 = (**(code **)(*plVar9 + 0x70))();
          if ((uVar5 >> 0xe & 1) != 0) {
            lVar15 = *(long *)(lVar8 + 0x38) + lVar14 * 0x30;
            fVar17 = 1.0 / (float)iVar6;
            ppuStack_148 = (undefined **)0x0;
            local_150 = (undefined **)0x3f8000003f800000;
            fVar22 = *(float *)(lVar15 + 0x20);
            fVar31 = *(float *)(lVar15 + 0x24);
            fVar37 = *(float *)(lVar15 + 0x28);
            fVar28 = fVar28 * fVar17;
            fVar29 = fVar29 * fVar17;
            fVar27 = fVar27 * fVar17;
            plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
            fVar22 = fVar22 + fVar28;
            fVar31 = fVar31 + fVar29;
            uVar20 = NEON_fmadd(*(undefined4 *)(param_1 + 4),fVar29,*(float *)param_1 * fVar28);
            uVar24 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),fVar29,
                                *(float *)(param_1 + 0x10) * fVar28);
            fVar37 = fVar37 + fVar27;
            uVar32 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),fVar29,
                                *(float *)(param_1 + 0x20) * fVar28);
            uVar18 = NEON_fmadd(*(undefined4 *)(param_1 + 4),fVar31,*(float *)param_1 * fVar22);
            uVar23 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),fVar31,
                                *(float *)(param_1 + 0x10) * fVar22);
            uVar30 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),fVar31,
                                *(float *)(param_1 + 0x20) * fVar22);
            fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar27,uVar20);
            fVar22 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),fVar27,uVar24);
            fVar31 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar27,uVar32);
            fVar27 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar37,uVar18);
            fVar28 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),fVar37,uVar23);
            fVar29 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar37,uVar30);
            local_b8 = (ulong)(uint)(fVar31 + *(float *)(param_1 + 0x38));
            local_c0 = CONCAT44(fVar22 + *(float *)(param_1 + 0x34),
                                fVar17 + *(float *)(param_1 + 0x30));
            local_d0 = CONCAT44(fVar28 + *(float *)(param_1 + 0x34),
                                fVar27 + *(float *)(param_1 + 0x30));
            uStack_c8 = (ulong)(uint)(fVar29 + *(float *)(param_1 + 0x38));
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_c0,&local_d0,&local_150);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(lVar8 + 0x2c));
      }
    }
    iVar6 = *(int *)(param_2 + 8);
    if (iVar6 - 0x15U < 9) {
      uStack_c8 = 0xdd5e0b6b;
      local_d0 = 0xdd5e0b6bdd5e0b6b;
      local_b8 = 0x5d5e0b6b;
      local_c0 = 0x5d5e0b6b5d5e0b6b;
      local_140 = (**(code **)(*(long *)this + 0x28))(this);
      uStack_130 = *(undefined8 *)(param_3 + 8);
      local_138 = *(ulong *)param_3;
      local_150 = &PTR__DebugDrawcallback_01019850;
      ppuStack_148 = &PTR__DebugDrawcallback_01019888;
      uStack_120 = *(undefined8 *)(param_1 + 8);
      local_128 = *(ulong *)param_1;
      uStack_110 = *(undefined8 *)(param_1 + 0x18);
      local_118 = *(ulong *)(param_1 + 0x10);
      uStack_100 = *(undefined8 *)(param_1 + 0x28);
      local_108 = *(undefined8 *)(param_1 + 0x20);
      uStack_f0 = *(undefined8 *)(param_1 + 0x38);
      local_f8 = *(undefined8 *)(param_1 + 0x30);
      (**(code **)(*(long *)param_2 + 0x80))(param_2,&local_150,&local_d0,&local_c0);
      iVar6 = *(int *)(param_2 + 8);
    }
    if (iVar6 == 3) {
      uStack_c8 = 0xdd5e0b6b;
      local_d0 = 0xdd5e0b6bdd5e0b6b;
      local_b8 = 0x5d5e0b6b;
      local_c0 = 0x5d5e0b6b5d5e0b6b;
      local_140 = (**(code **)(*(long *)this + 0x28))(this);
      uStack_120 = *(undefined8 *)(param_1 + 8);
      local_128 = *(ulong *)param_1;
      uStack_110 = *(undefined8 *)(param_1 + 0x18);
      local_118 = *(ulong *)(param_1 + 0x10);
      local_150 = &PTR__DebugDrawcallback_01019850;
      ppuStack_148 = &PTR__DebugDrawcallback_01019888;
      uStack_130 = *(undefined8 *)(param_3 + 8);
      local_138 = *(ulong *)param_3;
      uStack_100 = *(undefined8 *)(param_1 + 0x28);
      local_108 = *(undefined8 *)(param_1 + 0x20);
      uStack_f0 = *(undefined8 *)(param_1 + 0x38);
      local_f8 = *(undefined8 *)(param_1 + 0x30);
      (**(code **)(**(long **)(param_2 + 0x78) + 0x10))
                (*(long **)(param_2 + 0x78),&ppuStack_148,&local_d0,&local_c0);
    }
    break;
  case 8:
    uVar18 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
    plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    (**(code **)(*plVar9 + 0x30))(uVar18,plVar9,param_1,param_3);
    break;
  case 9:
    if (0 < (int)*(uint *)(param_2 + 0x6c)) {
      uVar13 = (ulong)*(uint *)(param_2 + 0x6c) + 1;
      do {
        uVar5 = (int)uVar13 - 2;
        puVar12 = (undefined8 *)(*(long *)(param_2 + 0x78) + (ulong)uVar5 * 0x10);
        uVar16 = *puVar12;
        fVar27 = *(float *)(puVar12 + 1);
        plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
        local_150 = *(undefined ***)param_1;
        local_140 = *(undefined8 *)(param_1 + 0x10);
        uVar21 = NEON_ext(local_150,local_140,4,1);
        uVar25 = NEON_rev64(uVar16,4);
        uStack_130 = *(undefined8 *)(param_1 + 0x20);
        fVar29 = (float)((ulong)uVar16 >> 0x20);
        ppuStack_148 = (undefined **)(ulong)(uint)*(float *)(param_1 + 8);
        fVar28 = (float)NEON_fmadd(*(uint *)(param_1 + 0x28),fVar27,
                                   *(float *)(param_1 + 0x20) * (float)uVar16 +
                                   *(float *)(param_1 + 0x24) * fVar29);
        local_138 = (ulong)(uint)*(float *)(param_1 + 0x18);
        uStack_120 = CONCAT44((float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar25 >> 0x20) +
                              fVar29 * (float)((ulong)local_140 >> 0x20) +
                              *(float *)(param_1 + 0x18) * fVar27 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                              (float)uVar21 * (float)uVar25 + (float)uVar16 * SUB84(local_150,0) +
                              *(float *)(param_1 + 8) * fVar27 +
                              (float)*(undefined8 *)(param_1 + 0x30));
        local_128 = (ulong)*(uint *)(param_1 + 0x28);
        local_118 = (ulong)(uint)(fVar28 + *(float *)(param_1 + 0x38));
        (**(code **)(*plVar9 + 0x30))
                  (*(undefined4 *)(*(long *)(param_2 + 0x98) + (ulong)uVar5 * 4),plVar9,&local_150,
                   param_3);
        uVar13 = uVar13 - 1;
      } while (1 < uVar13);
    }
    break;
  case 10:
    uVar13 = (ulong)*(int *)(param_2 + 0x44);
    uVar23 = *(undefined4 *)(param_2 + uVar13 * 4 + 0x2c);
    uVar18 = *(undefined4 *)(param_2 + (long)((*(int *)(param_2 + 0x44) + 2) % 3) * 4 + 0x2c);
    plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    pcVar11 = *(code **)(*plVar9 + 0xa8);
    goto LAB_00f49758;
  case 0xb:
    uVar18 = *(undefined4 *)(param_2 + 0x48);
    uVar23 = *(undefined4 *)(param_2 + 0x4c);
    uVar5 = *(uint *)(param_2 + 0x54);
    plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    uVar13 = (ulong)uVar5;
    pcVar11 = *(code **)(*plVar9 + 0xb8);
    goto LAB_00f49794;
  case 0xd:
    uVar13 = (ulong)*(int *)(param_2 + 0x44);
    uVar18 = (**(code **)(*(long *)param_2 + 0xb8))(param_2);
    fVar17 = *(float *)(param_2 + 0x34);
    uVar23 = *(undefined4 *)(param_2 + 0x38);
    uVar25 = *(undefined8 *)(param_2 + 0x2c);
    fVar27 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    fVar28 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    fVar29 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    ppuStack_148 = (undefined **)CONCAT44(uVar23,fVar29 + fVar17);
    local_150 = (undefined **)
                CONCAT44(fVar28 + (float)((ulong)uVar25 >> 0x20),fVar27 + (float)uVar25);
    uVar23 = *(undefined4 *)((long)&local_150 + uVar13 * 4);
    plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    pcVar11 = *(code **)(*plVar9 + 0xb0);
LAB_00f49758:
    uVar13 = uVar13 & 0xffffffff;
LAB_00f49794:
    (*pcVar11)(uVar18,uVar23,plVar9,uVar13,param_1,param_3);
    break;
  case 0x1c:
    uVar18 = *(undefined4 *)(param_2 + 0x50);
    plVar9 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    (**(code **)(*plVar9 + 0xc0))(uVar18,plVar9,param_2 + 0x40,param_1,param_3);
    break;
  case 0x1f:
    if (0 < (int)*(uint *)(param_2 + 0x24)) {
      uVar13 = (ulong)*(uint *)(param_2 + 0x24) + 1;
      do {
        fVar27 = *(float *)param_1;
        fVar28 = *(float *)(param_1 + 4);
        fVar22 = *(float *)(param_1 + 0x10);
        fVar31 = *(float *)(param_1 + 0x14);
        puVar12 = (undefined8 *)(*(long *)(param_2 + 0x30) + (ulong)((int)uVar13 - 2) * 0x58);
        fVar44 = *(float *)(param_1 + 8);
        fVar38 = *(float *)(param_1 + 0x20);
        fVar42 = *(float *)(param_1 + 0x24);
        fVar45 = *(float *)(param_1 + 0x18);
        fVar34 = *(float *)(puVar12 + 1);
        fVar37 = (float)*puVar12;
        fVar33 = (float)((ulong)*puVar12 >> 0x20);
        fVar39 = (float)puVar12[6];
        uVar23 = *(undefined4 *)(puVar12 + 3);
        fVar40 = (float)((ulong)puVar12[6] >> 0x20);
        fVar35 = (float)puVar12[2];
        fVar36 = (float)((ulong)puVar12[2] >> 0x20);
        uVar18 = NEON_fmadd(fVar28,uVar23,fVar27 * fVar34);
        uVar20 = *(undefined4 *)(puVar12 + 5);
        uVar25 = NEON_rev64(CONCAT44(fVar28 * fVar40,fVar22 * fVar39),4);
        fVar43 = *(float *)(puVar12 + 7);
        fVar41 = *(float *)(param_1 + 0x28);
        fVar29 = (float)puVar12[4];
        fVar17 = (float)((ulong)puVar12[4] >> 0x20);
        local_150 = (undefined **)
                    CONCAT44(fVar33 * fVar27 + fVar36 * fVar28 + fVar17 * fVar44,
                             fVar37 * fVar27 + fVar35 * fVar28 + fVar29 * fVar44);
        uVar5 = NEON_fmadd(fVar44,uVar20,uVar18);
        uVar30 = NEON_fmadd(fVar31,uVar23,fVar22 * fVar34);
        fVar28 = (float)NEON_fmadd(fVar41,fVar43,fVar38 * fVar39 + fVar42 * fVar40);
        uVar18 = NEON_fmadd(fVar42,uVar23,fVar38 * fVar34);
        uVar26 = NEON_fmadd(fVar45,uVar20,uVar30);
        uStack_130 = CONCAT44(fVar33 * fVar38 + fVar36 * fVar42 + fVar17 * fVar41,
                              fVar37 * fVar38 + fVar35 * fVar42 + fVar29 * fVar41);
        uVar19 = NEON_fmadd(fVar41,uVar20,uVar18);
        ppuStack_148 = (undefined **)(ulong)uVar5;
        uStack_120 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar40 * fVar31 + fVar45 * fVar43 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                              (float)uVar25 + fVar39 * fVar27 + fVar44 * fVar43 +
                              (float)*(undefined8 *)(param_1 + 0x30));
        local_118 = (ulong)(uint)(fVar28 + *(float *)(param_1 + 0x38));
        local_140 = CONCAT44(fVar33 * fVar22 + fVar36 * fVar31 + fVar17 * fVar45,
                             fVar37 * fVar22 + fVar35 * fVar31 + fVar29 * fVar45);
        local_138 = (ulong)uVar26;
        local_128 = (ulong)uVar19;
        (**(code **)(*(long *)this + 0x38))(this,&local_150,puVar12[8],param_3);
        uVar13 = uVar13 - 1;
      } while (1 < uVar13);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


