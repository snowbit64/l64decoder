// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eraseSegmentsInsideParallelogram
// Entry Point: 008e1b1c
// Size: 196 bytes
// Signature: undefined __thiscall eraseSegmentsInsideParallelogram(TyreTrackSystem * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* TyreTrackSystem::eraseSegmentsInsideParallelogram(float, float, float, float, float, float) */

void __thiscall
TyreTrackSystem::eraseSegmentsInsideParallelogram
          (TyreTrackSystem *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  fVar3 = param_5 - param_1;
  fVar4 = param_4 - param_2;
  local_40 = param_3 - param_1;
  local_30 = param_6 - param_2;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)NEON_fmadd(local_40,local_30,fVar4 * -fVar3);
  fStack_3c = fVar4;
  fStack_34 = fVar3;
  if (fVar2 < 0.0) {
    fStack_3c = local_30;
    fStack_34 = local_40;
    local_40 = fVar3;
    local_30 = fVar4;
  }
  local_38 = (float)NEON_fmadd(local_40,local_40,fStack_3c * fStack_3c);
  fStack_2c = (float)NEON_fmadd(fStack_34,fStack_34,local_30 * local_30);
  local_38 = SQRT(local_38);
  fStack_2c = SQRT(fStack_2c);
  local_40 = local_40 / local_38;
  fStack_3c = fStack_3c / local_38;
  fStack_34 = fStack_34 / fStack_2c;
  local_30 = local_30 / fStack_2c;
  local_48 = param_1;
  fStack_44 = param_2;
  TyreTrackGeometry::eraseSegmentsInsideParallelogram
            (*(TyreTrackGeometry **)(this + 0x28),(Parallelogram *)&local_48);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


