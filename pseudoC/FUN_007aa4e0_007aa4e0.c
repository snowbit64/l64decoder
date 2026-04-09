// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa4e0
// Entry Point: 007aa4e0
// Size: 384 bytes
// Signature: undefined FUN_007aa4e0(void)


void FUN_007aa4e0(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(*(long *)(param_1 + 0x170) + 0x31) & 1) != 0) {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_78,(Matrix4x4 *)(param_1 + 0xb8));
    fVar4 = param_2[0x10];
    fVar9 = param_2[4];
    fVar11 = param_2[8];
    fVar6 = param_2[0xc];
    fVar8 = param_2[0x14];
    fVar2 = param_2[0x18];
    fVar5 = param_2[0x1c];
    fVar7 = param_2[0x20];
    fVar3 = param_2[0x24];
    if (((fVar4 == 0.0) && (fVar8 == 0.0)) && (fVar2 == 0.0)) {
      FillPlaneGeometry::setInitialFillLevel(*(FillPlaneGeometry **)(param_1 + 0x170),*param_2);
    }
    else {
      uVar13 = NEON_fmadd(fVar9,local_78,fVar11 * local_68);
      uVar14 = NEON_fmadd(fVar9,local_74,fVar11 * fStack_64);
      uVar10 = NEON_fmadd(fVar9,uStack_70,fVar11 * local_60);
      uVar15 = NEON_fmadd(fVar4,local_78,fVar8 * local_68);
      local_88 = (float)NEON_fmadd(fVar6,local_58,uVar13);
      fStack_84 = (float)NEON_fmadd(fVar6,uStack_54,uVar14);
      local_80 = (float)NEON_fmadd(fVar6,local_50,uVar10);
      uVar16 = NEON_fmadd(fVar4,local_74,fVar8 * fStack_64);
      uVar10 = NEON_fmadd(fVar4,uStack_70,fVar8 * local_60);
      uVar14 = NEON_fmadd(fVar5,local_78,fVar7 * local_68);
      uVar12 = NEON_fmadd(fVar5,local_74,fVar7 * fStack_64);
      local_80 = local_40 + local_80;
      uVar13 = NEON_fmadd(fVar5,uStack_70,fVar7 * local_60);
      local_98 = NEON_fmadd(fVar2,local_58,uVar15);
      uStack_94 = NEON_fmadd(fVar2,uStack_54,uVar16);
      local_90 = NEON_fmadd(fVar2,local_50,uVar10);
      local_88 = local_48 + local_88;
      fStack_84 = fStack_44 + fStack_84;
      local_a8 = NEON_fmadd(fVar3,local_58,uVar14);
      uStack_a4 = NEON_fmadd(fVar3,uStack_54,uVar12);
      local_a0 = NEON_fmadd(fVar3,local_50,uVar13);
      FillPlaneGeometry::fillPlaneAdd
                (*(FillPlaneGeometry **)(param_1 + 0x170),*param_2,(Vector3 *)&local_88,
                 (Vector3 *)&local_98,(Vector3 *)&local_a8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


