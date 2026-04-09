// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_transformAABB
// Entry Point: 00ebad40
// Size: 536 bytes
// Signature: undefined __cdecl fm_transformAABB(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* FLOAT_MATH::fm_transformAABB(float const*, float const*, float const*, float*, float*) */

void FLOAT_MATH::fm_transformAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_6c;
  float local_64 [4];
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  fVar8 = *param_1;
  fVar6 = param_1[1];
  local_6c._0_4_ = *param_2;
  local_64[2] = param_2[1];
  fVar4 = param_1[2];
  local_40 = param_2[2];
  local_6c._4_4_ = fVar6;
  local_64[0] = fVar4;
  local_64[1] = (float)local_6c;
  local_64[3] = fVar4;
  fStack_54 = fVar8;
  local_50 = local_64[2];
  fStack_4c = fVar4;
  local_48 = fVar8;
  fStack_44 = fVar6;
  fStack_3c = (float)local_6c;
  local_38 = fVar6;
  fStack_34 = local_40;
  local_30 = (float)local_6c;
  fStack_2c = local_64[2];
  local_28 = local_40;
  fStack_24 = fVar8;
  local_20 = local_64[2];
  fStack_1c = local_40;
  if (param_3 != (float *)0x0) {
    fVar3 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar8;
    uVar7 = NEON_fmadd(param_3[2],fVar8,fVar6 * param_3[6]);
    fVar5 = (float)NEON_fmadd(param_3[10],fVar4,uVar7);
    fVar8 = (float)*(undefined8 *)(param_3 + 4) * fVar6 + (float)*(undefined8 *)param_3 * fVar8 +
            (float)*(undefined8 *)(param_3 + 8) * fVar4 + (float)*(undefined8 *)(param_3 + 0xc);
    fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * fVar6 + fVar3 +
            (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar4 +
            (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
    fVar4 = param_3[0xe] + fVar5;
  }
  lVar2 = 0;
  *param_5 = fVar8;
  *param_4 = fVar8;
  param_5[1] = fVar6;
  param_4[1] = fVar6;
  param_5[2] = fVar4;
  param_4[2] = fVar4;
  do {
    if (param_3 == (float *)0x0) {
      fVar4 = *(float *)((long)local_64 + lVar2);
      fVar6 = *(float *)((long)&local_6c + lVar2);
      fVar8 = *param_4;
      *(float *)((long)local_64 + lVar2) = fVar4;
      if (fVar6 < fVar8) goto LAB_00ebae88;
    }
    else {
      fVar8 = *(float *)((long)&local_6c + lVar2);
      fVar6 = *(float *)((long)local_64 + lVar2 + -4);
      fVar3 = *(float *)((long)local_64 + lVar2);
      uVar7 = NEON_fmadd(param_3[2],fVar8,fVar6 * param_3[6]);
      fVar4 = (float)NEON_fmadd(param_3[10],fVar3,uVar7);
      fVar4 = param_3[0xe] + fVar4;
      *(ulong *)((long)&local_6c + lVar2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * fVar6 +
                    (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar8 +
                    (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar3 +
                    (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20),
                    (float)*(undefined8 *)(param_3 + 4) * fVar6 +
                    (float)*(undefined8 *)param_3 * fVar8 +
                    (float)*(undefined8 *)(param_3 + 8) * fVar3 +
                    (float)*(undefined8 *)(param_3 + 0xc));
      fVar6 = *(float *)((long)&local_6c + lVar2);
      fVar8 = *param_4;
      *(float *)((long)local_64 + lVar2) = fVar4;
      if (fVar6 < fVar8) {
LAB_00ebae88:
        *param_4 = fVar6;
      }
    }
    fVar8 = *(float *)((long)local_64 + lVar2 + -4);
    if (fVar8 < param_4[1]) {
      param_4[1] = fVar8;
      if (fVar4 < param_4[2]) goto LAB_00ebaee0;
LAB_00ebaea8:
      if (fVar6 <= *param_5) goto LAB_00ebaeb4;
LAB_00ebaef0:
      *param_5 = fVar6;
      if (param_5[1] < fVar8) goto LAB_00ebaf00;
LAB_00ebaec0:
      fVar6 = param_5[2];
    }
    else {
      if (param_4[2] <= fVar4) goto LAB_00ebaea8;
LAB_00ebaee0:
      param_4[2] = fVar4;
      if (*param_5 < fVar6) goto LAB_00ebaef0;
LAB_00ebaeb4:
      if (fVar8 <= param_5[1]) goto LAB_00ebaec0;
LAB_00ebaf00:
      param_5[1] = fVar8;
      fVar6 = param_5[2];
    }
    if (fVar6 < fVar4) {
      param_5[2] = fVar4;
    }
    lVar2 = lVar2 + 0xc;
    if (lVar2 == 0x54) {
      if (*(long *)(lVar1 + 0x28) == local_18) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


