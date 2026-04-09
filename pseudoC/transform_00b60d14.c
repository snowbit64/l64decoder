// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transform
// Entry Point: 00b60d14
// Size: 380 bytes
// Signature: undefined __thiscall transform(BoundingAxisAlignedBox * this, Matrix4x4 * param_1)


/* BoundingAxisAlignedBox::transform(Matrix4x4 const&) */

void __thiscall BoundingAxisAlignedBox::transform(BoundingAxisAlignedBox *this,Matrix4x4 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = *(undefined8 *)(this + 0x1c);
  uStack_74 = *(undefined4 *)(this + 0x1c);
  uStack_7c = *(undefined4 *)(this + 0x20);
  local_70 = *(undefined4 *)(this + 0x2c);
  local_60 = *(undefined4 *)(this + 0x30);
  local_78 = *(undefined4 *)(this + 0x24);
  local_80 = *(undefined4 *)(this + 0x28);
  local_90 = *(float *)(this + 0x24);
  local_8c = *(undefined8 *)(this + 0x28);
  local_84 = *(undefined4 *)(this + 0x30);
  uStack_6c = local_78;
  local_68 = uStack_74;
  uStack_64 = uStack_7c;
  uStack_5c = local_80;
  local_58 = local_70;
  uStack_54 = local_78;
  local_50 = local_80;
  uStack_4c = uStack_7c;
  local_48 = local_60;
  uStack_44 = uStack_74;
  local_40 = local_70;
  uStack_3c = local_60;
  (**(code **)(*(long *)this + 0x18))();
  uVar4 = *(undefined8 *)(this + 0x28);
  uVar5 = *(undefined8 *)(this + 0x1c);
  fVar6 = *(float *)(this + 0x30);
  fVar7 = *(float *)(this + 0x24);
  lVar3 = 0;
  do {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = lVar3 + 0xc;
    fVar15 = *(float *)((long)&local_98 + lVar3);
    fVar10 = *(float *)((long)&local_98 + lVar3 + 4);
    uVar12 = *(undefined8 *)param_1;
    uVar8 = NEON_fmadd(fVar15,*(undefined4 *)(param_1 + 8),fVar10 * *(float *)(param_1 + 0x18));
    fVar17 = *(float *)((long)&local_90 + lVar3);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    fVar16 = *(float *)(param_1 + 0x38);
    fVar9 = (float)NEON_fmadd(fVar17,*(undefined4 *)(param_1 + 0x28),uVar8);
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(this + 0x18) = 0;
    fVar16 = fVar16 + fVar9;
    fVar9 = (float)uVar11 * fVar10 + (float)uVar12 * fVar15 + (float)uVar13 * fVar17 + (float)uVar14
    ;
    fVar10 = (float)((ulong)uVar11 >> 0x20) * fVar10 + (float)((ulong)uVar12 >> 0x20) * fVar15 +
             (float)((ulong)uVar13 >> 0x20) * fVar17 + (float)((ulong)uVar14 >> 0x20);
    uVar11 = NEON_fcmge(uVar4,CONCAT44(fVar10,fVar9),4);
    uVar12 = NEON_fcmge(CONCAT44(fVar10,fVar9),uVar5,4);
    if (fVar6 < fVar16) {
      fVar6 = fVar16;
    }
    uVar4 = NEON_bif(uVar4,CONCAT44(fVar10,fVar9),uVar11,1);
    uVar5 = NEON_bif(uVar5,CONCAT44(fVar10,fVar9),uVar12,1);
    if (fVar16 < fVar7) {
      fVar7 = fVar16;
    }
    *(float *)(this + 0x30) = fVar6;
    *(undefined8 *)(this + 0x28) = uVar4;
    *(undefined8 *)(this + 0x1c) = uVar5;
    *(float *)(this + 0x24) = fVar7;
    fVar9 = ((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar5 >> 0x20)) * 0.5;
    *(ulong *)(this + 0xc) = CONCAT44(fVar9,((float)uVar4 + (float)uVar5) * 0.5);
    *(float *)(this + 0x14) = (fVar6 + fVar7) * 0.5;
    lVar3 = lVar1;
  } while (lVar1 != 0x60);
  *(undefined4 *)(this + 0x18) = 0;
  *(float *)(this + 0x10) = fVar9;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


