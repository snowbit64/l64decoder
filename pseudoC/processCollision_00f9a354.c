// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f9a354
// Size: 472 bytes
// Signature: undefined __thiscall processCollision(btSoftBodyConcaveCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btSoftBodyConcaveCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btSoftBodyConcaveCollisionAlgorithm::processCollision
          (btSoftBodyConcaveCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
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
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x10] != (btSoftBodyConcaveCollisionAlgorithm)0x0) {
    param_2 = param_1;
  }
  if (*(int *)(*(long *)(param_2 + 8) + 8) - 0x15U < 9) {
    plVar3 = *(long **)(*(long *)(param_2 + 0x10) + 200);
    fVar4 = (float)(**(code **)(*plVar3 + 0x60))(plVar3);
    *(btDispatcherInfo **)(this + 0x60) = param_3;
    *(btManifoldResult **)(this + 0x50) = param_4;
    *(float *)(this + 0x68) = fVar4 + 0.06;
    (**(code **)(**(long **)(this + 0x20) + 0x38))(*(long **)(this + 0x20),&local_58,&local_68);
    puVar2 = *(undefined8 **)(param_2 + 0x18);
    fVar9 = (fStack_54 + fStack_64) * 0.5;
    uVar21 = *(undefined4 *)(this + 0x68);
    fVar11 = *(float *)(puVar2 + 3);
    fVar14 = (local_50 + local_60) * 0.5;
    fVar20 = *(float *)((long)puVar2 + 0x34);
    fVar12 = (float)NEON_fmadd(local_68 - local_58,0x3f000000,uVar21);
    fVar16 = (float)puVar2[2];
    fVar17 = (float)((ulong)puVar2[2] >> 0x20);
    fVar23 = (float)*puVar2;
    fVar8 = (float)((ulong)*puVar2 >> 0x20);
    fVar22 = *(float *)(puVar2 + 5);
    fVar4 = (float)NEON_fnmsub(local_58 + local_68,0x3f000000,*(undefined4 *)(puVar2 + 6));
    fVar18 = (float)puVar2[4];
    fVar19 = (float)((ulong)puVar2[4] >> 0x20);
    fVar6 = (float)NEON_fmadd(fStack_64 - fStack_54,0x3f000000,uVar21);
    uVar10 = NEON_fmadd(fVar22,fVar14,fVar11 * fVar9);
    fVar15 = *(float *)(puVar2 + 7);
    fVar7 = (float)NEON_fmadd(local_60 - local_50,0x3f000000,uVar21);
    fVar13 = (float)NEON_fmadd(fVar15,fVar22,fVar20 * fVar11);
    fVar5 = (float)NEON_fmadd(fVar4,*(float *)(puVar2 + 1),uVar10);
    uVar10 = NEON_fmadd(fVar6,ABS(fVar11),fVar12 * ABS(*(float *)(puVar2 + 1)));
    fVar11 = (fVar16 * fVar9 + fVar18 * fVar14 + fVar23 * fVar4) -
             (fVar16 * fVar20 + fVar18 * fVar15);
    fVar9 = (fVar17 * fVar9 + fVar19 * fVar14 + fVar8 * fVar4) - (fVar17 * fVar20 + fVar19 * fVar15)
    ;
    fVar23 = ABS(fVar23) * fVar12 + ABS(fVar16) * fVar6 + ABS(fVar18) * fVar7;
    fVar6 = ABS(fVar8) * fVar12 + ABS(fVar17) * fVar6 + ABS(fVar19) * fVar7;
    fVar4 = (float)NEON_fmadd(fVar7,ABS(fVar22),uVar10);
    *(ulong *)(this + 0x40) = CONCAT44(fVar6 + fVar9,fVar23 + fVar11);
    *(undefined4 *)(this + 0x3c) = 0;
    *(float *)(this + 0x38) = (fVar5 - fVar13) - fVar4;
    *(float *)(this + 0x48) = fVar4 + (fVar5 - fVar13);
    *(ulong *)(this + 0x30) = CONCAT44(fVar9 - fVar6,fVar11 - fVar23);
    *(undefined4 *)(this + 0x4c) = 0;
    (**(code **)(*plVar3 + 0x80))(plVar3,this + 0x18,this + 0x30,this + 0x40);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


