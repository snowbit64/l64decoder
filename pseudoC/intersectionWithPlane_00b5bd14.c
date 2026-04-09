// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersectionWithPlane
// Entry Point: 00b5bd14
// Size: 468 bytes
// Signature: undefined __thiscall intersectionWithPlane(Plane * this, Plane * param_1, Vector3 * param_2, Vector3 * param_3)


/* Plane::intersectionWithPlane(Plane const&, Vector3&, Vector3&) const */

undefined8 __thiscall
Plane::intersectionWithPlane(Plane *this,Plane *param_1,Vector3 *param_2,Vector3 *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 4),*(undefined4 *)(param_1 + 8),
                            *(float *)(param_1 + 4) * -*(float *)(this + 8));
  *(float *)param_3 = fVar2;
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(this + 8),*(undefined4 *)param_1,
                            *(float *)(param_1 + 8) * -*(float *)this);
  *(float *)(param_3 + 4) = fVar3;
  fVar4 = (float)NEON_fmadd(*(undefined4 *)this,*(undefined4 *)(param_1 + 4),
                            *(float *)param_1 * -*(float *)(this + 4));
  uVar5 = NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
  fVar6 = (float)NEON_fmadd(fVar4,fVar4,uVar5);
  *(float *)(param_3 + 8) = fVar4;
  if (SQRT(fVar6) < 1e-06) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined8 *)param_2 = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined8 *)param_3 = 0;
    return 0;
  }
  fVar7 = ABS(fVar2);
  fVar8 = ABS(fVar3);
  fVar6 = fVar8;
  if (fVar8 <= fVar7) {
    fVar6 = fVar7;
  }
  cVar1 = '\x02';
  if (ABS(fVar4) <= fVar6) {
    cVar1 = fVar7 < fVar8;
  }
  if (cVar1 == '\x02') {
    fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 4),*(float *)(param_1 + 0xc),
                              *(float *)(this + 0xc) * -*(float *)(param_1 + 4));
    fVar2 = fVar2 / fVar4;
    fVar3 = (float)NEON_fmadd(*(undefined4 *)param_1,*(float *)(this + 0xc),
                              *(float *)(param_1 + 0xc) * -*(float *)this);
    fVar3 = fVar3 / fVar4;
    fVar4 = 0.0;
  }
  else if (cVar1 == '\x01') {
    fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(float *)(this + 0xc),
                              *(float *)(param_1 + 0xc) * -*(float *)(this + 8));
    fVar2 = fVar2 / fVar3;
    fVar4 = (float)NEON_fmadd(*(undefined4 *)this,*(float *)(param_1 + 0xc),
                              *(float *)(this + 0xc) * -*(float *)param_1);
    fVar4 = fVar4 / fVar3;
    fVar3 = 0.0;
  }
  else {
    if (cVar1 != '\0') {
      return 0;
    }
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(this + 8),*(float *)(param_1 + 0xc),
                              *(float *)(this + 0xc) * -*(float *)(param_1 + 8));
    fVar3 = fVar3 / fVar2;
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 4),*(float *)(this + 0xc),
                              *(float *)(param_1 + 0xc) * -*(float *)(this + 4));
    fVar4 = fVar4 / fVar2;
    fVar2 = 0.0;
  }
  *(float *)param_2 = fVar2;
  *(float *)(param_2 + 4) = fVar3;
  *(float *)(param_2 + 8) = fVar4;
  fVar4 = *(float *)param_3;
  fVar2 = *(float *)(param_3 + 4);
  uVar5 = NEON_fmadd(fVar4,fVar4,fVar2 * fVar2);
  fVar3 = *(float *)(param_3 + 8);
  fVar7 = (float)NEON_fmadd(fVar3,fVar3,uVar5);
  fVar6 = 1.0;
  if (1e-06 < fVar7) {
    fVar6 = 1.0 / SQRT(fVar7);
  }
  *(float *)param_3 = fVar4 * fVar6;
  *(float *)(param_3 + 4) = fVar2 * fVar6;
  *(float *)(param_3 + 8) = fVar3 * fVar6;
  return 1;
}


