// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderUVRange
// Entry Point: 00a6d650
// Size: 2244 bytes
// Signature: undefined __thiscall renderUVRange(FullScreenRenderController * this, ICommandBuffer * param_1, uint param_2, float param_3, float param_4, float param_5, float param_6)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FullScreenRenderController::renderUVRange(ICommandBuffer*, unsigned int, float, float, float,
   float) */

void __thiscall
FullScreenRenderController::renderUVRange
          (FullScreenRenderController *this,ICommandBuffer *param_1,uint param_2,float param_3,
          float param_4,float param_5,float param_6)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  float fVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long *plVar19;
  long lVar20;
  long **pplVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined auVar24 [16];
  ulong uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 local_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint uStack_d8;
  undefined4 local_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  
  lVar1 = tpidr_el0;
  lVar20 = *(long *)(lVar1 + 0x28);
  if ((param_3 == param_5) || (param_4 == param_6)) goto LAB_00a6ded8;
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,*(undefined8 *)(this + 0x20));
  if ((param_2 & 1) == 0) {
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(undefined8 *)(this + 0x30));
  }
  puVar17 = (undefined8 *)(this + 0x38);
  if ((param_2 & 2) != 0) {
    puVar17 = (undefined8 *)(this + 0x40);
  }
  (**(code **)(*(long *)param_1 + 0xc0))(param_1,*puVar17);
  fStack_98 = param_3;
  if (param_3 <= param_5) {
    fStack_98 = param_5;
    param_5 = param_3;
  }
  fVar26 = param_6;
  if (param_4 <= param_6) {
    fVar26 = param_4;
  }
  if (param_4 <= param_6) {
    param_4 = param_6;
  }
  fStack_e8 = param_5 - (float)(int)param_5;
  fStack_98 = fStack_98 - (float)(int)param_5;
  fStack_e4 = fVar26 - (float)(int)fVar26;
  fVar26 = param_4 - (float)(int)fVar26;
  if (fStack_e8 + 1.0 <= fStack_98) {
    fStack_e8 = 0.0;
    fStack_94 = 1.0;
    fStack_98 = 1.0;
    fVar16 = 0.0;
    if (fVar26 < fStack_e4 + 1.0) {
      fStack_98 = 1.0;
      fStack_e8 = 0.0;
      if (1.0 < fVar26) {
LAB_00a6dc88:
        pplVar21 = (long **)(this + 8);
        local_f0 = NEON_fmadd(fStack_e8,0x40000000,0xbf800000);
        uVar27 = NEON_fmadd(fStack_e4,0x40000000,0xbf800000);
        local_a0 = NEON_fmadd(fStack_98,0x40000000,0xbf800000);
        fStack_94 = fVar26 + -1.0;
        puVar17 = (undefined8 *)(**(code **)(**pplVar21 + 0x10))(*pplVar21,param_1,0,0x60,1);
        auVar5._8_4_ = fStack_e8;
        auVar5._0_8_ = CONCAT44(uVar27,local_f0);
        auVar5._12_4_ = fStack_e4;
        puVar17[1] = auVar5._8_8_;
        *puVar17 = CONCAT44(uVar27,local_f0);
        puVar17[3] = CONCAT44(fStack_e4,fStack_98);
        puVar17[2] = CONCAT44(uVar27,local_a0);
        auVar14._8_4_ = fStack_98;
        auVar14._0_8_ = CONCAT44(0x3f800000,local_a0);
        auVar14._12_4_ = 0x3f800000;
        puVar17[9] = CONCAT44(fStack_e4,fStack_98);
        puVar17[8] = CONCAT44(uVar27,local_a0);
        puVar17[0xb] = auVar14._8_8_;
        puVar17[10] = CONCAT44(0x3f800000,local_a0);
        puVar17[5] = CONCAT44(0x3f800000,fStack_e8);
        puVar17[4] = CONCAT44(0x3f800000,local_f0);
        puVar17[7] = CONCAT44(0x3f800000,fStack_e8);
        puVar17[6] = CONCAT44(0x3f800000,local_f0);
        (**(code **)(**pplVar21 + 0x18))(*pplVar21,param_1);
        (**(code **)(*(long *)param_1 + 0x50))(param_1,pplVar21,1,*(undefined8 *)(this + 0x18));
        (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
        (**(code **)(*(long *)param_1 + 0xe8))(param_1,6,0,0,0,0);
        uStack_9c = NEON_fmadd(fStack_94,0x40000000,0xbf800000);
        plVar19 = *pplVar21;
        fStack_e4 = 0.0;
        uStack_ec = 0xbf800000;
        uStack_ac = 0xbf800000;
        fStack_a4 = 0.0;
        local_c0 = local_f0;
        fStack_b8 = fStack_e8;
        goto LAB_00a6de3c;
      }
      fStack_98 = 1.0;
      fStack_94 = fVar26;
      fVar16 = fStack_e4;
    }
LAB_00a6ddf0:
    fStack_e4 = fVar16;
    plVar19 = *(long **)(this + 8);
    local_f0 = NEON_fmadd(fStack_e8,0x40000000,0xbf800000);
    uStack_ec = NEON_fmadd(fStack_e4,0x40000000,0xbf800000);
    local_a0 = NEON_fmadd(fStack_98,0x40000000,0xbf800000);
    uStack_9c = NEON_fmadd(fStack_94,0x40000000,0xbf800000);
    local_c0 = local_f0;
    fStack_b8 = fStack_e8;
    uStack_ac = uStack_ec;
    fStack_a4 = fStack_e4;
  }
  else {
    if (fStack_e4 + 1.0 <= fVar26) {
      fVar26 = 1.0;
      fStack_e4 = 0.0;
      if (fStack_98 <= 1.0) {
        fStack_94 = 1.0;
        fVar16 = 0.0;
        goto LAB_00a6ddf0;
      }
    }
    else {
      if ((1.0 < fStack_98) && (1.0 < fVar26)) {
        pplVar21 = (long **)(this + 8);
        uVar27 = NEON_fmadd(fStack_e8,0x40000000,0xbf800000);
        uVar28 = NEON_fmadd(fStack_e4,0x40000000,0xbf800000);
        uVar22 = NEON_fmov(0x3f800000,4);
        uStack_b4 = (undefined4)uVar22;
        uStack_b0 = (undefined4)((ulong)uVar22 >> 0x20);
        auVar24 = NEON_fmov(0x3f800000,4);
        fStack_98 = fStack_98 + -1.0;
        fStack_94 = fVar26 + -1.0;
        puVar17 = (undefined8 *)(**(code **)(**pplVar21 + 0x10))(*pplVar21,param_1,0,0x60,1);
        auVar2._8_4_ = fStack_e8;
        auVar2._0_8_ = CONCAT44(uVar28,uVar27);
        auVar2._12_4_ = fStack_e4;
        puVar17[1] = auVar2._8_8_;
        *puVar17 = CONCAT44(uVar28,uVar27);
        puVar17[3] = CONCAT44(fStack_e4,0x3f800000);
        puVar17[2] = CONCAT44(uVar28,0x3f800000);
        puVar17[9] = CONCAT44(fStack_e4,0x3f800000);
        puVar17[8] = CONCAT44(uVar28,uStack_b0);
        puVar17[0xb] = auVar24._8_8_;
        puVar17[10] = auVar24._0_8_;
        puVar17[5] = CONCAT44(0x3f800000,fStack_e8);
        puVar17[4] = CONCAT44(0x3f800000,uVar27);
        puVar17[7] = CONCAT44(uStack_b4,fStack_e8);
        puVar17[6] = CONCAT44(0x3f800000,uVar27);
        (**(code **)(**pplVar21 + 0x18))(*pplVar21,param_1);
        (**(code **)(*(long *)param_1 + 0x50))(param_1,pplVar21,1,*(undefined8 *)(this + 0x18));
        (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
        (**(code **)(*(long *)param_1 + 0xe8))(param_1,6,0,0,0,0);
        local_a0 = NEON_fmadd(fStack_98,0x40000000,0xbf800000);
        uVar25 = SUB168(_DAT_004c4af0,8);
        uVar23 = SUB168(_DAT_004c4af0,0);
        puVar18 = (ulong *)(**(code **)(**pplVar21 + 0x10))(*pplVar21,param_1,0,0x60,1);
        puVar18[5] = uVar25;
        puVar18[4] = uVar23;
        puVar18[7] = uVar25;
        puVar18[6] = uVar23;
        auVar10._8_4_ = fStack_98;
        auVar10._0_8_ = CONCAT44(uVar28,local_a0);
        auVar10._12_4_ = fStack_e4;
        puVar18[9] = auVar10._8_8_;
        puVar18[8] = CONCAT44(uVar28,local_a0);
        auVar11._8_4_ = fStack_98;
        auVar11._0_8_ = CONCAT44(0x3f800000,local_a0);
        auVar11._12_4_ = 0x3f800000;
        puVar18[0xb] = auVar11._8_8_;
        puVar18[10] = CONCAT44(0x3f800000,local_a0);
        auVar24._8_4_ = 0;
        auVar24._0_8_ = CONCAT44(uVar28,0xbf800000);
        auVar24._12_4_ = fStack_e4;
        puVar18[1] = auVar24._8_8_;
        *puVar18 = CONCAT44(uVar28,0xbf800000);
        auVar7._8_4_ = fStack_98;
        auVar7._0_8_ = CONCAT44(uVar28,local_a0);
        auVar7._12_4_ = fStack_e4;
        puVar18[3] = auVar7._8_8_;
        puVar18[2] = CONCAT44(uVar28,local_a0);
        (**(code **)(**pplVar21 + 0x18))(*pplVar21,param_1);
        (**(code **)(*(long *)param_1 + 0x50))(param_1,pplVar21,1,*(undefined8 *)(this + 0x18));
        (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
        (**(code **)(*(long *)param_1 + 0xe8))(param_1,6,0,0,0,0);
        auVar24 = _DAT_004c5dc0;
        auVar2 = _DAT_004c3550;
        uStack_9c = NEON_fmadd(fStack_94,0x40000000,0xbf800000);
        uStack_d8 = SUB164(_DAT_004c3550,0xc);
        fStack_e4 = SUB164(_DAT_004c3550,0);
        puVar17 = (undefined8 *)(**(code **)(**pplVar21 + 0x10))(*pplVar21,param_1,0,0x60,1);
        auVar8._8_4_ = fStack_e8;
        auVar8._0_8_ = CONCAT44(uStack_9c,uVar27);
        auVar8._12_4_ = fStack_94;
        puVar17[5] = auVar8._8_8_;
        puVar17[4] = CONCAT44(uStack_9c,uVar27);
        auVar9._8_4_ = fStack_e8;
        auVar9._0_8_ = CONCAT44(uStack_9c,uVar27);
        auVar9._12_4_ = fStack_94;
        puVar17[7] = auVar9._8_8_;
        puVar17[6] = CONCAT44(uStack_9c,uVar27);
        puVar17[9] = auVar24._8_8_;
        puVar17[8] = auVar24._0_8_;
        auVar12._8_4_ = 0x3f800000;
        auVar12._0_8_ = CONCAT44(uStack_9c,0x3f800000);
        auVar12._12_4_ = fStack_94;
        puVar17[0xb] = auVar12._8_8_;
        puVar17[10] = CONCAT44(uStack_9c,0x3f800000);
        auVar3._8_4_ = fStack_e8;
        auVar3._0_8_ = CONCAT44(0xbf800000,uVar27);
        auVar3._12_4_ = fStack_e4;
        puVar17[1] = auVar3._8_8_;
        *puVar17 = CONCAT44(0xbf800000,uVar27);
        puVar17[3] = (ulong)uStack_d8;
        puVar17[2] = auVar2._4_8_;
        (**(code **)(**pplVar21 + 0x18))(*pplVar21,param_1);
        (**(code **)(*(long *)param_1 + 0x50))(param_1,pplVar21,1,*(undefined8 *)(this + 0x18));
        (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
        (**(code **)(*(long *)param_1 + 0xe8))(param_1,6,0,0,0,0);
        plVar19 = *pplVar21;
        fStack_e8 = SUB164(_DAT_004c50b0,8);
        fStack_e4 = SUB164(_DAT_004c50b0,0xc);
        local_f0 = SUB164(_DAT_004c50b0,0);
        uStack_ec = SUB164(_DAT_004c50b0,4);
        local_c0 = 0xbf800000;
        fStack_b8 = 0.0;
        uStack_ac = 0xbf800000;
        fStack_a4 = 0.0;
        goto LAB_00a6de3c;
      }
      if (fStack_98 <= 1.0) {
        fStack_94 = fVar26;
        fVar16 = fStack_e4;
        if (1.0 < fVar26) goto LAB_00a6dc88;
        goto LAB_00a6ddf0;
      }
    }
    pplVar21 = (long **)(this + 8);
    uVar27 = NEON_fmadd(fStack_e8,0x40000000,0xbf800000);
    uStack_ec = NEON_fmadd(fStack_e4,0x40000000,0xbf800000);
    uStack_9c = NEON_fmadd(fVar26,0x40000000,0xbf800000);
    fStack_98 = fStack_98 + -1.0;
    puVar17 = (undefined8 *)(**(code **)(**pplVar21 + 0x10))(*pplVar21,param_1,0,0x60,1);
    auVar4._8_4_ = fStack_e8;
    auVar4._0_8_ = CONCAT44(uStack_ec,uVar27);
    auVar4._12_4_ = fStack_e4;
    puVar17[1] = auVar4._8_8_;
    *puVar17 = CONCAT44(uStack_ec,uVar27);
    puVar17[3] = CONCAT44(fStack_e4,0x3f800000);
    puVar17[2] = CONCAT44(uStack_ec,0x3f800000);
    auVar13._8_4_ = 0x3f800000;
    auVar13._0_8_ = CONCAT44(uStack_9c,0x3f800000);
    auVar13._12_4_ = fVar26;
    puVar17[9] = CONCAT44(fStack_e4,0x3f800000);
    puVar17[8] = CONCAT44(uStack_ec,0x3f800000);
    puVar17[0xb] = auVar13._8_8_;
    puVar17[10] = CONCAT44(uStack_9c,0x3f800000);
    puVar17[5] = CONCAT44(fVar26,fStack_e8);
    puVar17[4] = CONCAT44(uStack_9c,uVar27);
    puVar17[7] = CONCAT44(fVar26,fStack_e8);
    puVar17[6] = CONCAT44(uStack_9c,uVar27);
    (**(code **)(**pplVar21 + 0x18))(*pplVar21,param_1);
    (**(code **)(*(long *)param_1 + 0x50))(param_1,pplVar21,1,*(undefined8 *)(this + 0x18));
    (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
    (**(code **)(*(long *)param_1 + 0xe8))(param_1,6,0,0,0,0);
    local_a0 = NEON_fmadd(fStack_98,0x40000000,0xbf800000);
    plVar19 = *pplVar21;
    fStack_e8 = 0.0;
    local_f0 = 0xbf800000;
    local_c0 = 0xbf800000;
    fStack_b8 = 0.0;
    uStack_ac = uStack_ec;
    fStack_a4 = fStack_e4;
    fStack_94 = fVar26;
  }
LAB_00a6de3c:
  puVar17 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,param_1,0,0x60,1);
  auVar6._8_4_ = fStack_e8;
  auVar6._0_8_ = CONCAT44(uStack_ec,local_f0);
  auVar6._12_4_ = fStack_e4;
  puVar17[1] = auVar6._8_8_;
  *puVar17 = CONCAT44(uStack_ec,local_f0);
  puVar17[3] = CONCAT44(fStack_a4,fStack_98);
  puVar17[2] = CONCAT44(uStack_ac,local_a0);
  auVar15._8_4_ = fStack_98;
  auVar15._0_8_ = CONCAT44(uStack_9c,local_a0);
  auVar15._12_4_ = fStack_94;
  puVar17[9] = CONCAT44(fStack_a4,fStack_98);
  puVar17[8] = CONCAT44(uStack_ac,local_a0);
  puVar17[0xb] = auVar15._8_8_;
  puVar17[10] = CONCAT44(uStack_9c,local_a0);
  puVar17[5] = CONCAT44(fStack_94,fStack_b8);
  puVar17[4] = CONCAT44(uStack_9c,local_c0);
  puVar17[7] = CONCAT44(fStack_94,fStack_b8);
  puVar17[6] = CONCAT44(uStack_9c,local_c0);
  plVar19 = *(long **)(this + 8);
  (**(code **)(*plVar19 + 0x18))(plVar19,param_1);
  (**(code **)(*(long *)param_1 + 0x50))(param_1,this + 8,1,*(undefined8 *)(this + 0x18));
  (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
  (**(code **)(*(long *)param_1 + 0xe8))(param_1,6,0,0,0,0);
LAB_00a6ded8:
  if (*(long *)(lVar1 + 0x28) == lVar20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


