// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersectionWithLine
// Entry Point: 00b5bbf0
// Size: 172 bytes
// Signature: undefined __thiscall intersectionWithLine(Plane * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* Plane::intersectionWithLine(Vector3 const&, Vector3 const&, Vector3&) const */

bool __thiscall
Plane::intersectionWithLine(Plane *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = *(undefined4 *)(this + 8);
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)this,
                     *(float *)(param_2 + 4) * *(float *)(this + 4));
  fVar5 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),uVar6,uVar1);
  if (0.0001 <= ABS(fVar5)) {
    uVar7 = *(undefined4 *)(param_1 + 8);
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar2 = NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)this,
                       *(float *)(this + 4) * *(float *)(param_1 + 4));
    fVar4 = *(float *)(this + 0xc);
    *(undefined8 *)param_3 = *(undefined8 *)param_1;
    *(undefined4 *)(param_3 + 8) = uVar1;
    fVar3 = (float)NEON_fmadd(uVar7,uVar6,uVar2);
    fVar3 = -(fVar4 + fVar3) / fVar5;
    uVar1 = NEON_fmadd(*(undefined4 *)param_2,fVar3,*(undefined4 *)param_3);
    *(undefined4 *)param_3 = uVar1;
    uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 4),fVar3,*(undefined4 *)(param_3 + 4));
    *(undefined4 *)(param_3 + 4) = uVar1;
    uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar3,*(undefined4 *)(param_3 + 8));
    *(undefined4 *)(param_3 + 8) = uVar1;
  }
  return 0.0001 <= ABS(fVar5);
}


