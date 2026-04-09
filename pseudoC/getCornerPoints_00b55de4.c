// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCornerPoints
// Entry Point: 00b55de4
// Size: 752 bytes
// Signature: undefined __thiscall getCornerPoints(Frustum * this, Vector3 * param_1, float * param_2)


/* Frustum::getCornerPoints(Vector3*, float*) const */

void __thiscall Frustum::getCornerPoints(Frustum *this,Vector3 *param_1,float *param_2)

{
  Plane *this_00;
  Plane *this_01;
  Plane *this_02;
  Plane *this_03;
  Vector3 *pVVar1;
  Vector3 *pVVar2;
  Vector3 *pVVar3;
  Vector3 *pVVar4;
  long lVar5;
  float fVar6;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  Vector3 aVStack_f0 [16];
  Vector3 aVStack_e0 [16];
  Vector3 aVStack_d0 [16];
  Vector3 aVStack_c0 [16];
  Vector3 aVStack_b0 [16];
  Vector3 aVStack_a0 [16];
  Vector3 aVStack_90 [16];
  Vector3 aVStack_80 [16];
  long local_70;
  
  lVar5 = tpidr_el0;
  this_00 = (Plane *)(this + 0x18);
  local_70 = *(long *)(lVar5 + 0x28);
  this_01 = (Plane *)(this + 8);
  Plane::intersectionWithPlane(this_00,(Plane *)(this + 0x58),aVStack_90,aVStack_80);
  Plane::intersectionWithPlane(this_00,(Plane *)(this + 0x48),aVStack_b0,aVStack_a0);
  Plane::intersectionWithPlane(this_01,(Plane *)(this + 0x58),aVStack_d0,aVStack_c0);
  Plane::intersectionWithPlane(this_01,(Plane *)(this + 0x48),aVStack_f0,aVStack_e0);
  this_02 = (Plane *)(this + 0x28);
  Plane::intersectionWithLine(this_02,aVStack_90,aVStack_80,param_1);
  this_03 = (Plane *)(this + 0x38);
  Plane::intersectionWithLine(this_03,aVStack_90,aVStack_80,param_1 + 0xc);
  pVVar1 = param_1 + 0x18;
  Plane::intersectionWithLine(this_02,aVStack_b0,aVStack_a0,pVVar1);
  pVVar2 = param_1 + 0x24;
  Plane::intersectionWithLine(this_03,aVStack_b0,aVStack_a0,pVVar2);
  Plane::intersectionWithLine(this_02,aVStack_d0,aVStack_c0,param_1 + 0x30);
  Plane::intersectionWithLine(this_03,aVStack_d0,aVStack_c0,param_1 + 0x3c);
  pVVar3 = param_1 + 0x48;
  Plane::intersectionWithLine(this_02,aVStack_f0,aVStack_e0,pVVar3);
  pVVar4 = param_1 + 0x54;
  Plane::intersectionWithLine(this_03,aVStack_f0,aVStack_e0,pVVar4);
  if (param_2 != (float *)0x0) {
    local_f8 = 0;
    local_108 = 0;
    fVar6 = -*param_2;
    local_100 = 0x3f800000;
    local_110 = 0x3f80000000000000;
    if (*(float *)(param_1 + 0x20) < fVar6) {
      *(float *)(param_1 + 0x20) = fVar6;
      Plane::intersectionWithLine(this_00,pVVar1,(Vector3 *)&local_100,(Vector3 *)&local_120);
      *(undefined4 *)(param_1 + 0x18) = local_120;
      Plane::intersectionWithLine(this_02,pVVar1,(Vector3 *)&local_110,(Vector3 *)&local_120);
      *(undefined4 *)(param_1 + 0x1c) = local_11c;
      fVar6 = -*param_2;
    }
    if (*(float *)(param_1 + 0x2c) < fVar6) {
      *(float *)(param_1 + 0x2c) = fVar6;
      Plane::intersectionWithLine(this_00,pVVar2,(Vector3 *)&local_100,(Vector3 *)&local_120);
      *(undefined4 *)(param_1 + 0x24) = local_120;
      Plane::intersectionWithLine(this_03,pVVar2,(Vector3 *)&local_110,(Vector3 *)&local_120);
      *(undefined4 *)(param_1 + 0x28) = local_11c;
      fVar6 = -*param_2;
    }
    if (*(float *)(param_1 + 0x50) < fVar6) {
      *(float *)(param_1 + 0x50) = fVar6;
      Plane::intersectionWithLine(this_01,pVVar3,(Vector3 *)&local_100,(Vector3 *)&local_120);
      *(undefined4 *)(param_1 + 0x48) = local_120;
      Plane::intersectionWithLine(this_02,pVVar3,(Vector3 *)&local_110,(Vector3 *)&local_120);
      *(undefined4 *)(param_1 + 0x4c) = local_11c;
      fVar6 = -*param_2;
    }
    if (*(float *)(param_1 + 0x5c) < fVar6) {
      *(float *)(param_1 + 0x5c) = fVar6;
      Plane::intersectionWithLine(this_01,pVVar4,(Vector3 *)&local_100,(Vector3 *)&local_120);
      *(undefined4 *)(param_1 + 0x54) = local_120;
      Plane::intersectionWithLine(this_03,pVVar4,(Vector3 *)&local_110,(Vector3 *)&local_120);
      *(undefined4 *)(param_1 + 0x58) = local_11c;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


