// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabbNonVirtual
// Entry Point: 00f62930
// Size: 1388 bytes
// Signature: undefined __thiscall getAabbNonVirtual(btConvexShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btConvexShape::getAabbNonVirtual(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btConvexShape::getAabbNonVirtual
          (btConvexShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  switch(*(uint *)(this + 8)) {
  case 0:
  case 0xd:
    fVar3 = *(float *)(this + 0x3c);
    fVar4 = *(float *)(this + 0x2c) + fVar3;
    fVar6 = *(float *)(this + 0x30) + fVar3;
    fVar3 = *(float *)(this + 0x34) + fVar3;
    uVar8 = NEON_fmadd(ABS(*(float *)(param_1 + 4)),fVar6,ABS(*(float *)param_1) * fVar4);
    uVar13 = NEON_fmadd(ABS(*(float *)(param_1 + 0x14)),fVar6,
                        ABS(*(float *)(param_1 + 0x10)) * fVar4);
    uVar5 = NEON_fmadd(ABS(*(float *)(param_1 + 0x24)),fVar6,ABS(*(float *)(param_1 + 0x20)) * fVar4
                      );
    fVar7 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 8)),fVar3,uVar8);
    fVar9 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 0x18)),fVar3,uVar13);
    fVar12 = *(float *)(param_1 + 0x30);
    fVar14 = *(float *)(param_1 + 0x34);
    fVar3 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 0x28)),fVar3,uVar5);
    fVar6 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0xc) = 0;
    fVar10 = fVar14 + fVar9;
    fVar4 = fVar3 + fVar6;
    *(float *)param_2 = fVar12 - fVar7;
    *(float *)(param_2 + 4) = fVar14 - fVar9;
    *(float *)(param_2 + 8) = fVar6 - fVar3;
    *(float *)param_3 = fVar12 + fVar7;
    goto LAB_00f62bb8;
  case 1:
    lVar2 = 0;
    fVar3 = *(float *)(this + 0x3c);
    do {
      local_88 = 0;
      local_80 = 0;
      uVar11 = *(undefined8 *)param_1;
      *(undefined4 *)((long)&local_88 + lVar2) = 0x3f800000;
      local_8c = 0;
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),local_88._4_4_,
                         *(float *)(param_1 + 8) * (float)local_88);
      local_98 = CONCAT44((float)((ulong)uVar11 >> 0x20) * (float)local_88 +
                          (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * local_88._4_4_ +
                          (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * (float)local_80,
                          (float)uVar11 * (float)local_88 +
                          (float)*(undefined8 *)(param_1 + 0x10) * local_88._4_4_ +
                          (float)*(undefined8 *)(param_1 + 0x20) * (float)local_80);
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),(float)local_80,uVar5);
      fVar4 = (float)local_80;
      local_90 = fVar7;
      fVar6 = (float)localGetSupportVertexWithoutMarginNonVirtual((btVector3 *)this);
      uVar11 = *(undefined8 *)param_1;
      fVar9 = *(float *)(param_1 + 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x24);
      uVar15 = *(undefined8 *)(param_1 + 4);
      local_8c = 0;
      fVar10 = *(float *)(param_1 + 0x10);
      fVar12 = *(float *)(param_1 + 0x14);
      *(undefined4 *)((long)&local_88 + lVar2) = 0xbf800000;
      uVar5 = NEON_fmadd(uVar5,fVar7,fVar9 * fVar6);
      fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar4,uVar5);
      local_90 = fVar9 + *(float *)(param_1 + 0x38);
      local_98 = CONCAT44(fVar10 * fVar6 + fVar12 * fVar7 + *(float *)(param_1 + 0x18) * fVar4 +
                          (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                          (float)uVar11 * fVar6 + (float)uVar15 * fVar7 +
                          (float)*(undefined8 *)(param_1 + 8) * fVar4 +
                          (float)*(undefined8 *)(param_1 + 0x30));
      *(float *)(param_3 + lVar2) = *(float *)((long)&local_98 + lVar2) + fVar3;
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),local_88._4_4_,
                         *(float *)(param_1 + 8) * (float)local_88);
      fVar9 = *(float *)(param_1 + 0x28);
      fVar6 = (float)NEON_fmadd(fVar9,(float)local_80,uVar5);
      fVar4 = (float)localGetSupportVertexWithoutMarginNonVirtual((btVector3 *)this);
      local_8c = 0;
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),fVar6,*(float *)(param_1 + 0x20) * fVar4);
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar9,uVar5);
      local_90 = fVar7 + *(float *)(param_1 + 0x38);
      local_98 = CONCAT44(*(float *)(param_1 + 0x10) * fVar4 + *(float *)(param_1 + 0x14) * fVar6 +
                          *(float *)(param_1 + 0x18) * fVar9 +
                          (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                          (float)*(undefined8 *)param_1 * fVar4 +
                          (float)*(undefined8 *)(param_1 + 4) * fVar6 +
                          (float)*(undefined8 *)(param_1 + 8) * fVar9 +
                          (float)*(undefined8 *)(param_1 + 0x30));
      *(float *)(param_2 + lVar2) = *(float *)((long)&local_98 + lVar2) - fVar3;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0xc);
    goto LAB_00f62e60;
  default:
    (**(code **)(*(long *)this + 0x10))(this,param_1,param_2,param_3);
    lVar1 = *(long *)(lVar1 + 0x28);
    goto LAB_00f62e68;
  case 4:
  case 5:
    if ((*(uint *)(this + 8) & 0xfffffffe) == 4) {
      uVar5 = *(undefined4 *)(this + 0x3c);
    }
    else {
      uVar5 = (**(code **)(*(long *)this + 0x60))(this);
    }
    uVar11 = *(undefined8 *)param_1;
    fVar22 = *(float *)(param_1 + 0x28);
    fVar4 = (*(float *)(this + 0x50) + *(float *)(this + 0x60)) * 0.5;
    fVar9 = *(float *)(param_1 + 0x10);
    fVar14 = (float)NEON_fmadd(*(float *)(this + 0x60) - *(float *)(this + 0x50),0x3f000000,uVar5);
    fVar17 = (float)NEON_fmadd(*(float *)(this + 100) - *(float *)(this + 0x54),0x3f000000,uVar5);
    uVar16 = *(undefined8 *)(param_1 + 4);
    fVar7 = (*(float *)(this + 0x54) + *(float *)(this + 100)) * 0.5;
    fVar21 = *(float *)(param_1 + 0x14);
    uVar18 = *(undefined8 *)(param_1 + 8);
    fVar12 = (*(float *)(this + 0x58) + *(float *)(this + 0x68)) * 0.5;
    fVar3 = (float)NEON_fmadd(*(float *)(this + 0x68) - *(float *)(this + 0x58),0x3f000000,uVar5);
    fVar19 = *(float *)(param_1 + 0x18);
    uVar5 = NEON_fmadd(*(float *)(param_1 + 0x24),fVar7,*(float *)(param_1 + 0x20) * fVar4);
    fVar6 = (float)NEON_fmadd(fVar22,fVar12,uVar5);
    uVar5 = NEON_fmadd(ABS(*(float *)(param_1 + 0x24)),fVar17,
                       ABS(*(float *)(param_1 + 0x20)) * fVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    fVar20 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0xc) = 0;
    fVar10 = (float)uVar11 * fVar4 + (float)uVar16 * fVar7 + (float)uVar18 * fVar12 + (float)uVar15;
    fVar12 = fVar9 * fVar4 + fVar21 * fVar7 + fVar19 * fVar12 + (float)((ulong)uVar15 >> 0x20);
    fVar7 = ABS((float)uVar11) * fVar14 + ABS((float)uVar16) * fVar17 + ABS((float)uVar18) * fVar3;
    fVar9 = ABS(fVar9) * fVar14 + ABS(fVar21) * fVar17 + ABS(fVar19) * fVar3;
    fVar3 = (float)NEON_fmadd(ABS(fVar22),fVar3,uVar5);
    fVar4 = fVar6 + fVar20 + fVar3;
    *(ulong *)param_2 = CONCAT44(fVar12 - fVar9,fVar10 - fVar7);
    *(float *)(param_2 + 8) = (fVar6 + fVar20) - fVar3;
    *(ulong *)param_3 = CONCAT44(fVar12 + fVar9,fVar10 + fVar7);
    break;
  case 8:
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x2c),
                              *(undefined4 *)(this + 0x2c));
    fVar4 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(float *)(param_2 + 8) = fVar4 - fVar3;
    *(ulong *)param_2 = CONCAT44((float)((ulong)uVar11 >> 0x20) - fVar3,(float)uVar11 - fVar3);
    fVar4 = *(float *)(param_1 + 0x38) + fVar3;
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) + fVar3,
                  (float)*(undefined8 *)(param_1 + 0x30) + fVar3);
    break;
  case 10:
    fVar6 = *(float *)param_1;
    fVar9 = *(float *)(param_1 + 4);
    lVar2 = (long)*(int *)(this + 0x44) * 4;
    fVar10 = *(float *)(param_1 + 0x10);
    fVar12 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(this + 0x3c);
    fVar14 = *(float *)(param_1 + 0x20);
    fVar21 = *(float *)(param_1 + 0x24);
    fVar20 = *(float *)(param_1 + 0x18);
    fVar3 = *(float *)(this + (long)((*(int *)(this + 0x44) + 2) % 3) * 4 + 0x2c);
    local_88 = CONCAT44(fVar3,fVar3);
    local_80 = (ulong)(uint)fVar3;
    fVar4 = *(float *)(param_1 + 8);
    *(float *)((long)&local_88 + lVar2) = *(float *)(this + lVar2 + 0x2c) + fVar3;
    fVar3 = (float)local_88 + fVar7;
    fVar17 = local_88._4_4_ + fVar7;
    fVar7 = (float)local_80 + fVar7;
    uVar8 = NEON_fmadd(ABS(fVar9),fVar17,ABS(fVar6) * fVar3);
    uVar13 = NEON_fmadd(ABS(fVar12),fVar17,ABS(fVar10) * fVar3);
    uVar5 = NEON_fmadd(ABS(fVar21),fVar17,ABS(fVar14) * fVar3);
    fVar6 = (float)NEON_fmadd(ABS(fVar4),fVar7,uVar8);
    fVar9 = (float)NEON_fmadd(ABS(fVar20),fVar7,uVar13);
    fVar12 = *(float *)(param_1 + 0x30);
    fVar14 = *(float *)(param_1 + 0x34);
    fVar3 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 0x28)),fVar7,uVar5);
    fVar7 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0xc) = 0;
    fVar10 = fVar14 + fVar9;
    fVar4 = fVar3 + fVar7;
    *(float *)param_2 = fVar12 - fVar6;
    *(float *)(param_2 + 4) = fVar14 - fVar9;
    *(float *)(param_2 + 8) = fVar7 - fVar3;
    *(float *)param_3 = fVar12 + fVar6;
LAB_00f62bb8:
    *(float *)(param_3 + 4) = fVar10;
  }
  *(float *)(param_3 + 8) = fVar4;
  *(undefined4 *)(param_3 + 0xc) = 0;
LAB_00f62e60:
  lVar1 = *(long *)(lVar1 + 0x28);
LAB_00f62e68:
  if (lVar1 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


