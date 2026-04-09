// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTimeStepAndCounters
// Entry Point: 00f9aa08
// Size: 376 bytes
// Signature: undefined __thiscall setTimeStepAndCounters(btSoftBodyTriangleCallback * this, float param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btSoftBodyTriangleCallback::setTimeStepAndCounters(float, btCollisionObjectWrapper const*,
   btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btSoftBodyTriangleCallback::setTimeStepAndCounters
          (btSoftBodyTriangleCallback *this,float param_1,btCollisionObjectWrapper *param_2,
          btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(btDispatcherInfo **)(this + 0x48) = param_3;
  *(btManifoldResult **)(this + 0x38) = param_4;
  *(float *)(this + 0x50) = param_1 + 0.06;
  (**(code **)(**(long **)(this + 8) + 0x38))(*(long **)(this + 8),&local_48,&local_58);
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  fVar10 = (fStack_44 + fStack_54) * 0.5;
  fVar12 = *(float *)(puVar2 + 1);
  fVar6 = *(float *)(puVar2 + 3);
  fVar14 = (local_40 + local_50) * 0.5;
  uVar20 = *(undefined4 *)(this + 0x50);
  fVar23 = (float)*puVar2;
  fVar8 = (float)((ulong)*puVar2 >> 0x20);
  fVar21 = *(float *)((long)puVar2 + 0x34);
  fVar16 = (float)puVar2[2];
  fVar17 = (float)((ulong)puVar2[2] >> 0x20);
  fVar13 = (float)NEON_fmadd(local_58 - local_48,0x3f000000,uVar20);
  fVar5 = (float)NEON_fmadd(fStack_54 - fStack_44,0x3f000000,uVar20);
  fVar22 = *(float *)(puVar2 + 5);
  fVar3 = (float)NEON_fnmsub(local_48 + local_58,0x3f000000,*(undefined4 *)(puVar2 + 6));
  fVar18 = (float)puVar2[4];
  fVar19 = (float)((ulong)puVar2[4] >> 0x20);
  uVar11 = NEON_fmadd(fVar22,fVar14,fVar6 * fVar10);
  fVar15 = *(float *)(puVar2 + 7);
  fVar9 = (float)NEON_fmadd(local_50 - local_40,0x3f000000,uVar20);
  *(undefined4 *)(this + 0x24) = 0;
  fVar4 = (float)NEON_fmadd(fVar3,fVar12,uVar11);
  fVar7 = (float)NEON_fmadd(fVar15,fVar22,fVar21 * fVar6);
  uVar11 = NEON_fmadd(fVar5,ABS(fVar6),fVar13 * ABS(fVar12));
  *(undefined4 *)(this + 0x34) = 0;
  fVar6 = (fVar16 * fVar10 + fVar18 * fVar14 + fVar23 * fVar3) - (fVar16 * fVar21 + fVar18 * fVar15)
  ;
  fVar10 = (fVar17 * fVar10 + fVar19 * fVar14 + fVar8 * fVar3) - (fVar17 * fVar21 + fVar19 * fVar15)
  ;
  fVar23 = ABS(fVar23) * fVar13 + ABS(fVar16) * fVar5 + ABS(fVar18) * fVar9;
  fVar5 = ABS(fVar8) * fVar13 + ABS(fVar17) * fVar5 + ABS(fVar19) * fVar9;
  fVar3 = (float)NEON_fmadd(fVar9,ABS(fVar22),uVar11);
  *(ulong *)(this + 0x18) = CONCAT44(fVar10 - fVar5,fVar6 - fVar23);
  *(float *)(this + 0x20) = (fVar4 - fVar7) - fVar3;
  *(ulong *)(this + 0x28) = CONCAT44(fVar5 + fVar10,fVar23 + fVar6);
  *(float *)(this + 0x30) = fVar3 + (fVar4 - fVar7);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


