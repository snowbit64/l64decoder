// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: apply
// Entry Point: 008b8370
// Size: 432 bytes
// Signature: undefined __thiscall apply(Distortion * this, float * param_1)


/* Distortion::apply(float&) */

void __thiscall Distortion::apply(Distortion *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(float *)(this + 4) != 0.0) {
    switch(*(undefined4 *)this) {
    case 0:
      fVar2 = 1.0;
      fVar1 = *param_1;
      if (fVar1 < 1.0 / *(float *)(this + 8)) {
        fVar2 = *(float *)(this + 8) * 3.141593;
        fVar3 = sinf(fVar2);
        fVar2 = sinf(fVar2 * fVar1);
        fVar2 = fVar2 * (1.0 / fVar3);
      }
      break;
    case 1:
      fVar2 = atanf(*(float *)(this + 8) * *param_1);
      fVar2 = fVar2 * 0.6366197;
      break;
    case 2:
      fVar3 = *param_1;
      fVar1 = *(float *)(this + 8);
      if (0.0 <= fVar3) {
        fVar2 = fVar1;
        if (fVar3 <= fVar1) {
          fVar2 = fVar3;
        }
      }
      else {
        fVar2 = -fVar1;
        if (-fVar1 <= fVar3) {
          fVar2 = fVar3;
        }
      }
      fVar2 = fVar2 / fVar1;
      break;
    case 3:
      fVar2 = *param_1;
      fVar2 = fVar2 / (*(float *)(this + 8) + fVar2 * fVar2);
      break;
    case 4:
      fVar2 = *(float *)(this + 8) * *param_1 * *param_1;
      break;
    case 5:
      fVar2 = *param_1;
      fVar1 = sinf(*(float *)(this + 8));
      fVar2 = fVar2 / (fVar1 + ABS(fVar2));
      break;
    case 6:
      fVar2 = (float)NEON_fmin(*(undefined4 *)(this + 8),0x3f7fbe77);
      fVar1 = (fVar2 + fVar2) / (1.0 - fVar2);
      fVar2 = (float)NEON_fmadd(fVar1,ABS(*param_1),0x3f800000);
      fVar2 = (*param_1 * (fVar1 + 1.0)) / fVar2;
      break;
    default:
      goto switchD_008b83b4_caseD_7;
    case 8:
      fVar2 = *param_1;
      fVar2 = (float)NEON_fmadd(*(float *)(this + 8) * 3.0,fVar2,
                                fVar2 * fVar2 * *(float *)(this + 8) * -fVar2);
    }
    *param_1 = fVar2;
  }
switchD_008b83b4_caseD_7:
  return;
}


