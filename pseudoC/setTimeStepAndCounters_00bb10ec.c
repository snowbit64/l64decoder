// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTimeStepAndCounters
// Entry Point: 00bb10ec
// Size: 588 bytes
// Signature: undefined __thiscall setTimeStepAndCounters(Bt2SoftBodyHeightfieldTriangleCallback * this, float param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* Bt2SoftBodyHeightfieldTriangleCallback::setTimeStepAndCounters(float, btCollisionObjectWrapper
   const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
Bt2SoftBodyHeightfieldTriangleCallback::setTimeStepAndCounters
          (Bt2SoftBodyHeightfieldTriangleCallback *this,float param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(btDispatcherInfo **)(this + 0x48) = param_3;
  *(btManifoldResult **)(this + 0x38) = param_4;
  *(float *)(this + 0x50) = param_1 + 0.06;
  (**(code **)(**(long **)(this + 8) + 0x38))(*(long **)(this + 8),&local_58,&local_68);
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  fVar9 = *(float *)(puVar2 + 6);
  fVar6 = (fStack_64 + fStack_54) * 0.5;
  fVar7 = (local_68 + local_58) * 0.5;
  fVar8 = (local_60 + local_50) * 0.5;
  fVar12 = -*(float *)((long)puVar2 + 0x34);
  fVar21 = *(float *)(puVar2 + 3);
  fVar18 = (float)puVar2[2];
  fVar19 = (float)((ulong)puVar2[2] >> 0x20);
  fVar22 = *(float *)(puVar2 + 1);
  fVar27 = *(float *)(puVar2 + 5);
  fVar16 = (float)*puVar2;
  fVar17 = (float)((ulong)*puVar2 >> 0x20);
  uVar25 = NEON_fmadd(fVar22,0,fVar21);
  uVar10 = NEON_fmsub(fVar22,fVar9,fVar21 * fVar12);
  fVar23 = (float)puVar2[4];
  fVar24 = (float)((ulong)puVar2[4] >> 0x20);
  fVar26 = (float)NEON_fmadd(fVar27,0,uVar25);
  fVar15 = *(float *)(this + 0x50);
  uVar25 = NEON_fmadd(fVar7,fVar22,fVar6 * fVar21);
  fVar28 = *(float *)(puVar2 + 7);
  fVar13 = (float)NEON_fmadd(fVar27,0,fVar22 + fVar21 * 0.0);
  fVar20 = (float)NEON_fmadd(fVar22,0,fVar21 * 0.0);
  fVar14 = (fStack_64 - fStack_54) * 0.5 + fVar15;
  fVar22 = (local_68 - local_58) * 0.5 + fVar15;
  fVar11 = (float)NEON_fmsub(fVar27,fVar28,uVar10);
  fVar21 = (float)NEON_fmadd(fVar8,fVar27,uVar25);
  fVar15 = (local_60 - local_50) * 0.5 + fVar15;
  uVar25 = NEON_fmadd(fVar22,ABS(fVar13),ABS(fVar26) * fVar14);
  iVar4 = *(int *)(this + 0x9c);
  lVar3 = *(long *)(this + 0xd8) + 1;
  *(undefined4 *)(this + 0x24) = 0;
  fVar13 = (float)NEON_fmadd(fVar15,ABS(fVar27 + fVar20),uVar25);
  fVar20 = fVar18 * fVar6 + fVar16 * fVar7 + fVar23 * fVar8 +
           ((fVar18 * fVar12 - fVar16 * fVar9) - fVar23 * fVar28);
  fVar6 = fVar19 * fVar6 + fVar17 * fVar7 + fVar24 * fVar8 +
          ((fVar19 * fVar12 - fVar17 * fVar9) - fVar24 * fVar28);
  fVar7 = ABS(fVar18 + fVar16 * 0.0 + fVar23 * 0.0) * fVar14 +
          ABS(fVar16 + fVar18 * 0.0 + fVar23 * 0.0) * fVar22 +
          ABS(fVar23 + fVar18 * 0.0 + fVar16 * 0.0) * fVar15;
  fVar15 = ABS(fVar19 + fVar17 * 0.0 + fVar24 * 0.0) * fVar14 +
           ABS(fVar17 + fVar19 * 0.0 + fVar24 * 0.0) * fVar22 +
           ABS(fVar24 + fVar19 * 0.0 + fVar17 * 0.0) * fVar15;
  *(undefined4 *)(this + 0x34) = 0;
  *(long *)(this + 0xd8) = lVar3;
  *(float *)(this + 0x20) = (fVar21 + fVar11) - fVar13;
  *(ulong *)(this + 0x18) = CONCAT44(fVar6 - fVar15,fVar20 - fVar7);
  *(ulong *)(this + 0x28) = CONCAT44(fVar6 + fVar15,fVar20 + fVar7);
  *(float *)(this + 0x30) = fVar21 + fVar11 + fVar13;
  if (iVar4 < 1) {
LAB_00bb130c:
    if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar5 = 0;
  do {
    if ((ulong)(lVar3 - *(long *)(*(long *)(this + 0xa8) + (long)iVar5 * 0x10 + 8)) < 0xb) {
      iVar5 = iVar5 + 1;
      if (iVar4 <= iVar5) goto LAB_00bb130c;
    }
    else {
      btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
      ::remove((btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                *)(this + 0x58),(TriHashKey *)(*(long *)(this + 200) + (long)iVar5 * 0x30));
      iVar4 = iVar4 + -1;
      if (iVar4 <= iVar5) goto LAB_00bb130c;
    }
    lVar3 = *(long *)(this + 0xd8);
  } while( true );
}


