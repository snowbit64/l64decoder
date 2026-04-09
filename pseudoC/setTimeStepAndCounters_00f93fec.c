// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTimeStepAndCounters
// Entry Point: 00f93fec
// Size: 412 bytes
// Signature: undefined __thiscall setTimeStepAndCounters(btConvexTriangleCallback * this, float param_1, btDispatcherInfo * param_2, btCollisionObjectWrapper * param_3, btCollisionObjectWrapper * param_4, btManifoldResult * param_5)


/* btConvexTriangleCallback::setTimeStepAndCounters(float, btDispatcherInfo const&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, btManifoldResult*) */

void __thiscall
btConvexTriangleCallback::setTimeStepAndCounters
          (btConvexTriangleCallback *this,float param_1,btDispatcherInfo *param_2,
          btCollisionObjectWrapper *param_3,btCollisionObjectWrapper *param_4,
          btManifoldResult *param_5)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(btCollisionObjectWrapper **)(this + 8) = param_3;
  *(btCollisionObjectWrapper **)(this + 0x10) = param_4;
  *(btDispatcherInfo **)(this + 0x48) = param_2;
  *(float *)(this + 0x50) = param_1;
  *(btManifoldResult **)(this + 0x38) = param_5;
  pfVar2 = *(float **)(param_4 + 0x18);
  puVar3 = *(undefined8 **)(param_3 + 0x18);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar12 = pfVar2[2];
  fVar6 = pfVar2[4];
  fVar7 = pfVar2[5];
  fVar10 = (float)*puVar3;
  fVar11 = (float)((ulong)*puVar3 >> 0x20);
  fVar13 = pfVar2[6];
  fVar17 = *(float *)(puVar3 + 1);
  local_5c = 0;
  fVar14 = (float)puVar3[2];
  fVar16 = (float)((ulong)puVar3[2] >> 0x20);
  uVar18 = *(undefined4 *)(puVar3 + 3);
  fVar8 = pfVar2[8];
  fVar9 = pfVar2[9];
  uVar23 = *(undefined4 *)(puVar3 + 5);
  fVar20 = *(float *)(puVar3 + 6) - pfVar2[0xc];
  uVar22 = NEON_fmadd(uVar18,fVar7,fVar17 * fVar5);
  fVar15 = *(float *)((long)puVar3 + 0x34) - pfVar2[0xd];
  uVar19 = NEON_fmadd(uVar18,fVar6,fVar17 * fVar4);
  local_4c = 0;
  uVar18 = NEON_fmadd(uVar18,fVar13,fVar17 * fVar12);
  fVar17 = pfVar2[10];
  local_50 = NEON_fmadd(uVar23,fVar9,uVar22);
  local_60 = NEON_fmadd(uVar23,fVar8,uVar19);
  local_40 = NEON_fmadd(uVar23,fVar17,uVar18);
  uVar18 = NEON_fmadd(fVar15,fVar6,fVar20 * fVar4);
  uVar19 = NEON_fmadd(fVar15,fVar7,fVar20 * fVar5);
  fVar21 = *(float *)(puVar3 + 7) - pfVar2[0xe];
  uVar22 = NEON_fmadd(fVar15,fVar13,fVar20 * fVar12);
  fVar15 = (float)puVar3[4];
  fVar20 = (float)((ulong)puVar3[4] >> 0x20);
  local_48 = CONCAT44(fVar11 * fVar12 + fVar16 * fVar13 + fVar20 * fVar17,
                      fVar10 * fVar12 + fVar14 * fVar13 + fVar15 * fVar17);
  local_38 = NEON_fmadd(fVar21,fVar8,uVar18);
  uStack_34 = NEON_fmadd(fVar21,fVar9,uVar19);
  local_30 = NEON_fmadd(fVar21,fVar17,uVar22);
  local_68 = CONCAT44(fVar11 * fVar4 + fVar16 * fVar6 + fVar20 * fVar8,
                      fVar10 * fVar4 + fVar14 * fVar6 + fVar15 * fVar8);
  local_58 = CONCAT44(fVar11 * fVar5 + fVar16 * fVar7 + fVar20 * fVar9,
                      fVar10 * fVar5 + fVar14 * fVar7 + fVar15 * fVar9);
  local_3c = 0;
  local_2c = 0;
  (**(code **)(**(long **)(param_3 + 8) + 0x10))
            (*(long **)(param_3 + 8),&local_68,this + 0x18,this + 0x28);
  *(float *)(this + 0x30) = *(float *)(this + 0x30) + param_1;
  *(float *)(this + 0x20) = *(float *)(this + 0x20) - param_1;
  *(ulong *)(this + 0x28) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20) + param_1,
                (float)*(undefined8 *)(this + 0x28) + param_1);
  *(ulong *)(this + 0x18) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) - param_1,
                (float)*(undefined8 *)(this + 0x18) - param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


