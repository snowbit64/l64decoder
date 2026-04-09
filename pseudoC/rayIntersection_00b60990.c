// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayIntersection
// Entry Point: 00b60990
// Size: 792 bytes
// Signature: undefined __thiscall rayIntersection(BoundingAxisAlignedBox * this, Vector3 * param_1, Vector3 * param_2, float * param_3)


/* BoundingAxisAlignedBox::rayIntersection(Vector3 const&, Vector3 const&, float&) const */

bool __thiscall
BoundingAxisAlignedBox::rayIntersection
          (BoundingAxisAlignedBox *this,Vector3 *param_1,Vector3 *param_2,float *param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_110;
  float local_108;
  float local_100 [4];
  Plane aPStack_f0 [16];
  Plane aPStack_e0 [16];
  Plane aPStack_d0 [16];
  Plane aPStack_c0 [16];
  Plane aPStack_b0 [16];
  long local_a0;
  
  lVar1 = tpidr_el0;
  local_a0 = *(long *)(lVar1 + 0x28);
  Plane::Plane((Plane *)local_100,1.0,0.0,0.0,-*(float *)(this + 0x1c));
  Plane::Plane(aPStack_f0,-1.0,0.0,0.0,*(float *)(this + 0x28));
  Plane::Plane(aPStack_e0,0.0,1.0,0.0,-*(float *)(this + 0x20));
  Plane::Plane(aPStack_d0,0.0,-1.0,0.0,*(float *)(this + 0x2c));
  Plane::Plane(aPStack_c0,0.0,0.0,1.0,-*(float *)(this + 0x24));
  Plane::Plane(aPStack_b0,0.0,0.0,-1.0,*(float *)(this + 0x30));
  *param_3 = 0.0;
  lVar5 = 0;
  uVar4 = 0;
  bVar3 = false;
  local_110 = *(undefined8 *)param_1;
  local_108 = *(float *)(param_1 + 8);
  do {
    uVar7 = *(undefined4 *)param_2;
    fVar10 = *(float *)(param_2 + 4);
    uVar11 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)((long)local_100 + lVar5);
    fVar12 = *(float *)((long)local_100 + lVar5 + 4);
    uVar8 = *(undefined4 *)((long)local_100 + lVar5 + 8);
    fVar6 = (float)Plane::signedDistanceTo((Plane *)(undefined4 *)((long)local_100 + lVar5),param_1)
    ;
    if (ABS(fVar6) < 1e-05) {
      bVar3 = true;
      break;
    }
    uVar7 = NEON_fmadd(uVar9,uVar7,fVar12 * fVar10);
    fVar10 = (float)NEON_fmadd(uVar8,uVar11,uVar7);
    fVar10 = -fVar6 / fVar10;
    *param_3 = fVar10;
    if (0.0 <= fVar10) {
      local_110 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar10 +
                           (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                           (float)*(undefined8 *)param_2 * fVar10 + (float)*(undefined8 *)param_1);
      local_108 = fVar10 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
      if (lVar5 == 0) {
        bVar2 = true;
      }
      else {
        fVar6 = (float)Plane::signedDistanceTo((Plane *)local_100,(Vector3 *)&local_110);
        bVar2 = 0.0 <= fVar6 + 0.00015;
      }
      bVar3 = bVar2 != false;
      if (bVar2 != false) {
        if (lVar5 != 0x10) {
          fVar6 = (float)Plane::signedDistanceTo(aPStack_f0,(Vector3 *)&local_110);
          bVar2 = 0.0 <= fVar6 + 0.00015;
        }
        bVar3 = bVar2;
        if (bVar2 != false) {
          if (lVar5 != 0x20) {
            fVar6 = (float)Plane::signedDistanceTo(aPStack_e0,(Vector3 *)&local_110);
            bVar3 = 0.0 <= fVar6 + 0.00015;
          }
          if (bVar3 != false) {
            if (lVar5 != 0x30) {
              fVar6 = (float)Plane::signedDistanceTo(aPStack_d0,(Vector3 *)&local_110);
              bVar3 = 0.0 <= fVar6 + 0.00015;
            }
            if (bVar3 != false) {
              if (lVar5 != 0x40) {
                fVar6 = (float)Plane::signedDistanceTo(aPStack_c0,(Vector3 *)&local_110);
                bVar3 = 0.0 <= fVar6 + 0.00015;
              }
              if ((bVar3 != false) && (lVar5 != 0x50)) {
                fVar6 = (float)Plane::signedDistanceTo(aPStack_b0,(Vector3 *)&local_110);
                bVar3 = 0.0 <= fVar6 + 0.00015;
              }
            }
          }
        }
      }
    }
    if (4 < uVar4) break;
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x10;
  } while (bVar3 == false);
  if (*(long *)(lVar1 + 0x28) == local_a0) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


