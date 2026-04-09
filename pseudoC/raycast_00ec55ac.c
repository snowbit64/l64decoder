// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycast
// Entry Point: 00ec55ac
// Size: 296 bytes
// Signature: undefined __thiscall raycast(MyRaycastMesh * this, double * param_1, double * param_2, double * param_3, double * param_4, double * param_5)


/* RAYCAST_MESH::MyRaycastMesh::raycast(double const*, double const*, double&, double&, double*)
   const */

byte __thiscall
RAYCAST_MESH::MyRaycastMesh::raycast
          (MyRaycastMesh *this,double *param_1,double *param_2,double *param_3,double *param_4,
          double *param_5)

{
  long lVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  undefined auStack_8c [4];
  undefined auStack_88 [8];
  undefined auStack_80 [8];
  undefined auStack_78 [8];
  double local_70;
  double dStack_68;
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = *param_2 - *param_1;
  dStack_68 = param_2[1] - param_1[1];
  local_60 = param_2[2] - param_1[2];
  dVar3 = (double)FLOAT_MATH::fm_normalize(&local_70);
  bVar2 = (**(code **)**(undefined8 **)(this + 8))
                    (*(undefined8 **)(this + 8),param_1,&local_70,param_3,auStack_78,auStack_80,
                     auStack_88,param_4,auStack_8c);
  if ((param_5 != (double *)0x0) && ((bVar2 & 1) != 0)) {
    dVar4 = (double)NEON_fmadd(local_70,*param_3,*param_1);
    *param_5 = dVar4;
    dVar4 = (double)NEON_fmadd(dStack_68,*param_3,param_1[1]);
    param_5[1] = dVar4;
    dVar4 = (double)NEON_fmadd(local_60,*param_3,param_1[2]);
    param_5[2] = dVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return bVar2 & (bVar2 ^ 1 | *param_3 <= dVar3) & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


