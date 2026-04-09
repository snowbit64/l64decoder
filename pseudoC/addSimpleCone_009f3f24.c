// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSimpleCone
// Entry Point: 009f3f24
// Size: 564 bytes
// Signature: undefined __thiscall addSimpleCone(DeferredDebugRenderer * this, float param_1, float param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6, float * param_7, CATEGORY param_8)


/* DeferredDebugRenderer::addSimpleCone(float, float, Vector3 const&, Vector3 const&, Vector3
   const&, Vector3 const&, float const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addSimpleCone
          (DeferredDebugRenderer *this,float param_1,float param_2,Vector3 *param_3,Vector3 *param_4
          ,Vector3 *param_5,Vector3 *param_6,float *param_7,CATEGORY param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)*(undefined8 *)param_4 * param_2 + (float)*(undefined8 *)param_3;
  fVar4 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) * param_2 +
          (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  local_78 = CONCAT44(fVar4,fVar3);
  fVar5 = *(float *)(param_4 + 8) * param_2 + *(float *)(param_3 + 8);
  local_70 = fVar5;
  fVar2 = tanf(param_1 * 0.5);
  fVar2 = fVar2 * param_2;
  addCircle(this,(float *)&local_78,fVar2,(float *)param_4,0.0,param_7,0x20,param_8);
  local_88 = CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)param_5 >> 0x20) * fVar2,
                      fVar3 + (float)*(undefined8 *)param_5 * fVar2);
  local_80 = fVar5 + fVar2 * *(float *)(param_5 + 8);
  addLine(this,(float *)param_3,param_7,(float *)&local_88,param_7,param_8);
  local_98 = CONCAT44(fVar4 - (float)((ulong)*(undefined8 *)param_5 >> 0x20) * fVar2,
                      fVar3 - (float)*(undefined8 *)param_5 * fVar2);
  local_90 = fVar5 - fVar2 * *(float *)(param_5 + 8);
  addLine(this,(float *)param_3,param_7,(float *)&local_98,param_7,param_8);
  local_a8 = CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)param_6 >> 0x20) * fVar2,
                      fVar3 + (float)*(undefined8 *)param_6 * fVar2);
  local_a0 = fVar5 + fVar2 * *(float *)(param_6 + 8);
  addLine(this,(float *)param_3,param_7,(float *)&local_a8,param_7,param_8);
  local_b8 = CONCAT44(fVar4 - (float)((ulong)*(undefined8 *)param_6 >> 0x20) * fVar2,
                      fVar3 - (float)*(undefined8 *)param_6 * fVar2);
  local_b0 = fVar5 - fVar2 * *(float *)(param_6 + 8);
  addLine(this,(float *)param_3,param_7,(float *)&local_b8,param_7,param_8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


