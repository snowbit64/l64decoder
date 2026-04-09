// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cookConvexMesh
// Entry Point: 00bac614
// Size: 204 bytes
// Signature: undefined __cdecl cookConvexMesh(IndexedTriangleSet * param_1, uint * param_2, btVector3 * * param_3, float * param_4, float * param_5, Vector3 * param_6, Vector3 * param_7)


/* Bt2PhysicsCookingUtil::cookConvexMesh(IndexedTriangleSet*, unsigned int&, btVector3*&, float&,
   float&, Vector3&, Vector3*) */

uint Bt2PhysicsCookingUtil::cookConvexMesh
               (IndexedTriangleSet *param_1,uint *param_2,btVector3 **param_3,float *param_4,
               float *param_5,Vector3 *param_6,Vector3 *param_7)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint local_74;
  float *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_2 = 0;
  uVar3 = convertMeshData(param_1,&local_70,&local_74);
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    uVar2 = cookConvexMesh(local_74,local_70,param_2,param_3,param_4,param_5,param_6,param_7);
    if (local_70 != (float *)0x0) {
      operator_delete__(local_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


