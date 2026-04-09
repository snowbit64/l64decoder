// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transformAndDrawLine
// Entry Point: 009f2f98
// Size: 284 bytes
// Signature: undefined __thiscall transformAndDrawLine(DeferredDebugRenderer * this, Vector3 * param_1, Vector3 * param_2, float * param_3, Matrix4x4 * param_4, CATEGORY param_5)


/* DeferredDebugRenderer::transformAndDrawLine(Vector3 const&, Vector3 const&, float const*,
   Matrix4x4 const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::transformAndDrawLine
          (DeferredDebugRenderer *this,Vector3 *param_1,Vector3 *param_2,float *param_3,
          Matrix4x4 *param_4,CATEGORY param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)param_1;
  local_30 = *(float *)(param_1 + 8);
  local_48 = *(undefined8 *)param_2;
  local_40 = *(float *)(param_2 + 8);
  if (param_4 != (Matrix4x4 *)0x0) {
    local_38._4_4_ = (float)((ulong)local_38 >> 0x20);
    local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
    uVar7 = NEON_fmadd((undefined4)local_38,*(undefined4 *)param_4,
                       local_38._4_4_ * *(float *)(param_4 + 0x10));
    uVar9 = NEON_fmadd((undefined4)local_38,*(undefined4 *)(param_4 + 4),
                       local_38._4_4_ * *(float *)(param_4 + 0x14));
    uVar2 = NEON_fmadd((undefined4)local_38,*(undefined4 *)(param_4 + 8),
                       local_38._4_4_ * *(float *)(param_4 + 0x18));
    uVar3 = NEON_fmadd((undefined4)local_48,*(undefined4 *)param_4,
                       *(float *)(param_4 + 0x10) * local_48._4_4_);
    uVar5 = NEON_fmadd((undefined4)local_48,*(undefined4 *)(param_4 + 4),
                       *(float *)(param_4 + 0x14) * local_48._4_4_);
    uVar11 = NEON_fmadd((undefined4)local_48,*(undefined4 *)(param_4 + 8),
                        *(float *)(param_4 + 0x18) * local_48._4_4_);
    fVar8 = (float)NEON_fmadd(local_30,*(undefined4 *)(param_4 + 0x20),uVar7);
    fVar10 = (float)NEON_fmadd(local_30,*(undefined4 *)(param_4 + 0x24),uVar9);
    local_30 = (float)NEON_fmadd(local_30,*(undefined4 *)(param_4 + 0x28),uVar2);
    fVar4 = (float)NEON_fmadd(local_40,*(undefined4 *)(param_4 + 0x20),uVar3);
    fVar6 = (float)NEON_fmadd(local_40,*(undefined4 *)(param_4 + 0x24),uVar5);
    local_40 = (float)NEON_fmadd(local_40,*(undefined4 *)(param_4 + 0x28),uVar11);
    local_30 = *(float *)(param_4 + 0x38) + local_30;
    local_40 = *(float *)(param_4 + 0x38) + local_40;
    local_38 = CONCAT44(*(float *)(param_4 + 0x34) + fVar10,fVar8 + *(float *)(param_4 + 0x30));
    local_48 = CONCAT44(*(float *)(param_4 + 0x34) + fVar6,*(float *)(param_4 + 0x30) + fVar4);
  }
  addLine(this,(float *)&local_38,param_3,(float *)&local_48,param_3,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


