// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestPoints
// Entry Point: 00f948fc
// Size: 736 bytes
// Signature: undefined __cdecl getClosestPoints(ClosestPointInput * param_1, Result * param_2, btIDebugDraw * param_3, bool param_4, bool param_5)


/* SphereTriangleDetector::getClosestPoints(btDiscreteCollisionDetectorInterface::ClosestPointInput
   const&, btDiscreteCollisionDetectorInterface::Result&, btIDebugDraw*, bool, bool) */

void SphereTriangleDetector::getClosestPoints
               (ClosestPointInput *param_1,Result *param_2,btIDebugDraw *param_3,bool param_4,
               bool param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_bc;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar16 = *(float *)(param_2 + 0x40);
  fVar19 = *(float *)(param_2 + 0x44);
  local_bc = 0.0;
  local_8c = 0;
  fVar18 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x74);
  fVar4 = *(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x70);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  fVar8 = *(float *)(param_2 + 0x38) - *(float *)(param_2 + 0x78);
  fVar23 = *(float *)(param_2 + 0x50);
  fVar10 = *(float *)(param_2 + 0x54);
  fVar13 = (float)*(undefined8 *)param_2;
  fVar15 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  local_7c = 0;
  uVar12 = NEON_fmadd(uVar6,fVar23,fVar18 * fVar16);
  fVar22 = *(float *)(param_2 + 0x48);
  fVar27 = *(float *)(param_2 + 0x58);
  uVar24 = NEON_fmadd(fVar10,uVar6,fVar19 * fVar18);
  fVar20 = (float)*(undefined8 *)(param_2 + 0x10);
  fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  uVar17 = NEON_fmadd(fVar23,fVar5,fVar16 * fVar4);
  fVar26 = *(float *)(param_2 + 0x60);
  fVar28 = *(float *)(param_2 + 100);
  uVar11 = NEON_fmadd(fVar10,fVar5,fVar19 * fVar4);
  uVar7 = NEON_fmadd(fVar27,uVar6,fVar22 * fVar18);
  uVar6 = NEON_fmadd(fVar27,fVar5,fVar22 * fVar4);
  uVar25 = *(undefined4 *)(param_2 + 0x28);
  fVar4 = *(float *)(param_2 + 0x68);
  fVar5 = (float)*(undefined8 *)(param_2 + 0x20);
  fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  local_68 = NEON_fmadd(fVar26,fVar8,uVar17);
  local_90 = NEON_fmadd(uVar25,fVar26,uVar12);
  local_80 = NEON_fmadd(fVar28,uVar25,uVar24);
  local_78 = CONCAT44(fVar15 * fVar22 + fVar21 * fVar27 + fVar18 * fVar4,
                      fVar13 * fVar22 + fVar20 * fVar27 + fVar5 * fVar4);
  local_70 = NEON_fmadd(fVar4,uVar25,uVar7);
  uStack_64 = NEON_fmadd(fVar28,fVar8,uVar11);
  local_60 = NEON_fmadd(fVar4,fVar8,uVar6);
  local_98 = CONCAT44(fVar15 * fVar16 + fVar21 * fVar23 + fVar18 * fVar26,
                      fVar13 * fVar16 + fVar20 * fVar23 + fVar5 * fVar26);
  local_88 = CONCAT44(fVar15 * fVar19 + fVar21 * fVar10 + fVar18 * fVar28,
                      fVar13 * fVar19 + fVar20 * fVar10 + fVar5 * fVar28);
  local_6c = 0;
  local_5c = 0;
  uVar2 = collide((btVector3 *)param_1,(btVector3 *)&local_68,(btVector3 *)&local_48,&local_58,
                  &local_bc,*(float *)(param_1 + 0x18));
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)local_48;
    fVar5 = (float)((ulong)local_48 >> 0x20);
    if (param_5) {
      uVar9 = NEON_rev64(local_48,4);
      uVar14 = NEON_rev64(CONCAT44(fStack_54,local_58),4);
      uVar7 = *(undefined4 *)(param_2 + 0x68);
      fVar10 = *(float *)(param_2 + 0x60) * local_58 + *(float *)(param_2 + 100) * fStack_54;
      fVar8 = (float)NEON_fmadd(uVar7,local_40,
                                *(float *)(param_2 + 0x60) * fVar4 +
                                *(float *)(param_2 + 100) * fVar5);
      uVar6 = NEON_fmadd(uVar7,local_50,fVar10);
      fVar13 = (float)*(undefined8 *)(param_2 + 0x44) * (float)uVar14 +
               local_58 * (float)*(undefined8 *)(param_2 + 0x40) +
               (float)*(undefined8 *)(param_2 + 0x48) * local_50;
      fVar15 = *(float *)(param_2 + 0x50) * (float)((ulong)uVar14 >> 0x20) +
               fStack_54 * *(float *)(param_2 + 0x54) + *(float *)(param_2 + 0x58) * local_50;
      local_a0 = NEON_fnmadd(uVar7,local_50,-fVar10);
      pcVar3 = *(code **)(*(long *)param_3 + 0x20);
      local_b0 = (float)NEON_fmadd(local_bc,uVar6,fVar8 + *(float *)(param_2 + 0x78));
      local_b8 = CONCAT44(*(float *)(param_2 + 0x50) * (float)((ulong)uVar9 >> 0x20) +
                          fVar5 * *(float *)(param_2 + 0x54) + *(float *)(param_2 + 0x58) * local_40
                          + (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20) +
                          fVar15 * local_bc,
                          (float)*(undefined8 *)(param_2 + 0x44) * (float)uVar9 +
                          fVar4 * (float)*(undefined8 *)(param_2 + 0x40) +
                          (float)*(undefined8 *)(param_2 + 0x48) * local_40 +
                          (float)*(undefined8 *)(param_2 + 0x70) + fVar13 * local_bc);
      local_a8 = CONCAT44(-fVar15,-fVar13);
    }
    else {
      uVar11 = NEON_fmadd(*(float *)(param_2 + 0x54),fStack_54,*(float *)(param_2 + 0x50) * local_58
                         );
      uVar7 = NEON_fmadd(fStack_54,*(float *)(param_2 + 0x44),local_58 * *(float *)(param_2 + 0x40))
      ;
      uVar6 = NEON_fmadd(*(float *)(param_2 + 100),fStack_54,*(float *)(param_2 + 0x60) * local_58);
      uVar9 = NEON_rev64(CONCAT44(*(float *)(param_2 + 0x44) * fVar5,
                                  *(float *)(param_2 + 0x50) * fVar4),4);
      uVar7 = NEON_fmadd(local_50,*(float *)(param_2 + 0x48),uVar7);
      uVar11 = NEON_fmadd(*(float *)(param_2 + 0x58),local_50,uVar11);
      pcVar3 = *(code **)(*(long *)param_3 + 0x20);
      local_a8 = CONCAT44(uVar11,uVar7);
      local_b0 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x68),local_40,
                                   *(float *)(param_2 + 0x60) * fVar4 +
                                   *(float *)(param_2 + 100) * fVar5);
      local_a0 = NEON_fmadd(*(undefined4 *)(param_2 + 0x68),local_50,uVar6);
      local_b0 = local_b0 + *(float *)(param_2 + 0x78);
      local_b8 = CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar5 * *(float *)(param_2 + 0x54) +
                          *(float *)(param_2 + 0x58) * local_40 +
                          (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20),
                          (float)uVar9 + fVar4 * *(float *)(param_2 + 0x40) +
                          *(float *)(param_2 + 0x48) * local_40 +
                          (float)*(undefined8 *)(param_2 + 0x70));
    }
    local_9c = 0;
    local_ac = 0;
    (*pcVar3)(local_bc,param_3,&local_a8,&local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


