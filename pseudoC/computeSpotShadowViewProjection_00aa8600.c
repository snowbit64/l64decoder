// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSpotShadowViewProjection
// Entry Point: 00aa8600
// Size: 512 bytes
// Signature: undefined __cdecl computeSpotShadowViewProjection(Matrix4x4 * param_1, uint param_2, float param_3, float param_4, bool param_5, Matrix4x4 * param_6, Matrix4x4 * param_7)


/* RenderDeviceUtil::computeSpotShadowViewProjection(Matrix4x4 const&, unsigned int, float, float,
   bool, Matrix4x4&, Matrix4x4&) */

void RenderDeviceUtil::computeSpotShadowViewProjection
               (Matrix4x4 *param_1,uint param_2,float param_3,float param_4,bool param_5,
               Matrix4x4 *param_6,Matrix4x4 *param_7)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24);
  uVar6 = NEON_fmadd(fVar5,fVar5,fVar3 * fVar3);
  fVar4 = *(float *)(param_1 + 0x28);
  fVar8 = (float)NEON_fmadd(fVar4,fVar4,uVar6);
  fVar7 = 1.0;
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_78 = -(fVar5 * fVar7);
  fStack_74 = -(fVar3 * fVar7);
  local_70 = -(fVar4 * fVar7);
  local_98 = *(undefined8 *)(param_1 + 0x30);
  fVar5 = fVar5 * fVar7 * fVar5 * fVar7;
  fVar3 = fVar3 * fVar7 * fVar3 * fVar7;
  fVar4 = fVar4 * fVar7 * fVar4 * fVar7;
  local_90 = *(undefined4 *)(param_1 + 0x38);
  local_88 = 0;
  local_80 = 0;
  uVar1 = 2;
  if (fVar5 <= fVar4 || fVar4 >= fVar3) {
    uVar1 = 0;
  }
  *(undefined4 *)
   ((long)&local_88 + ((ulong)~(uint)(fVar4 < fVar3) & (ulong)(fVar3 < fVar5) | uVar1) * 4) =
       0x3f800000;
  Matrix4x4::look(param_6,(Vector3 *)&local_98,(Vector3 *)&local_78,(Vector3 *)&local_88);
  fVar3 = tanf((param_3 * 0.5 * 3.141593) / 180.0);
  fVar3 = atanf(((float)(ulong)(param_2 + 4) / (float)(ulong)param_2) * fVar3);
  fVar4 = tanf((fVar3 + fVar3) * 0.5);
  fVar3 = 0.2;
  if (param_5) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = -0.2 / (0.2 - param_4);
    fVar3 = (param_4 * -0.2) / (0.2 - param_4);
  }
  *(float *)param_7 = 1.0 / fVar4;
  *(float *)(param_7 + 0x14) = 1.0 / fVar4;
  *(undefined8 *)(param_7 + 0xc) = 0;
  *(undefined8 *)(param_7 + 4) = 0;
  *(undefined8 *)(param_7 + 0x18) = 0;
  *(undefined8 *)(param_7 + 0x20) = 0;
  *(float *)(param_7 + 0x28) = fVar5;
  *(undefined8 *)(param_7 + 0x2c) = 0xbf800000;
  *(undefined4 *)(param_7 + 0x34) = 0;
  *(float *)(param_7 + 0x38) = fVar3;
  *(undefined4 *)(param_7 + 0x3c) = 0;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


