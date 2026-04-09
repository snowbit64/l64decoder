// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: squaredError
// Entry Point: 00b6b914
// Size: 208 bytes
// Signature: undefined __cdecl squaredError(Matrix4x4 * param_1, Vector3 * param_2)


/* QuadricSolverUtil::squaredError(Matrix4x4 const&, Vector3 const&) */

undefined4 QuadricSolverUtil::squaredError(Matrix4x4 *param_1,Vector3 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Vector4::set((Vector4 *)&local_38,*(float *)param_2,*(float *)(param_2 + 4),
               *(float *)(param_2 + 8),1.0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar6 = NEON_fmadd(local_38,*(undefined4 *)(param_1 + 4),fStack_34 * *(float *)(param_1 + 0x14))
    ;
    uVar2 = NEON_fmadd(local_38,*(undefined4 *)param_1,fStack_34 * *(float *)(param_1 + 0x10));
    uVar5 = NEON_fmadd(local_30,*(undefined4 *)(param_1 + 0x24),uVar6);
    uVar2 = NEON_fmadd(local_30,*(undefined4 *)(param_1 + 0x20),uVar2);
    uVar6 = NEON_fmadd(local_38,*(undefined4 *)(param_1 + 8),fStack_34 * *(float *)(param_1 + 0x18))
    ;
    fVar4 = (float)NEON_fmadd(uStack_2c,*(undefined4 *)(param_1 + 0x34),uVar5);
    uVar2 = NEON_fmadd(uStack_2c,*(undefined4 *)(param_1 + 0x30),uVar2);
    uVar6 = NEON_fmadd(local_30,*(undefined4 *)(param_1 + 0x28),uVar6);
    uVar3 = NEON_fmadd(local_38,*(undefined4 *)(param_1 + 0xc),
                       fStack_34 * *(float *)(param_1 + 0x1c));
    uVar5 = NEON_fmadd(uStack_2c,*(undefined4 *)(param_1 + 0x38),uVar6);
    uVar6 = NEON_fmadd(local_30,*(undefined4 *)(param_1 + 0x2c),uVar3);
    uVar2 = NEON_fmadd(local_38,uVar2,fStack_34 * fVar4);
    uVar6 = NEON_fmadd(uStack_2c,*(undefined4 *)(param_1 + 0x3c),uVar6);
    uVar2 = NEON_fmadd(local_30,uVar5,uVar2);
    uVar2 = NEON_fmadd(uStack_2c,uVar6,uVar2);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


