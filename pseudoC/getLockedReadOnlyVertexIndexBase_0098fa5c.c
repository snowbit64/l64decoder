// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLockedReadOnlyVertexIndexBase
// Entry Point: 0098fa5c
// Size: 68 bytes
// Signature: undefined __cdecl getLockedReadOnlyVertexIndexBase(uchar * * param_1, int * param_2, PHY_ScalarType * param_3, int * param_4, uchar * * param_5, int * param_6, int * param_7, PHY_ScalarType * param_8, int param_9)


/* Bt2PhysicsMeshInterface::getLockedReadOnlyVertexIndexBase(unsigned char const**, int&,
   PHY_ScalarType&, int&, unsigned char const**, int&, int&, PHY_ScalarType&, int) const */

void Bt2PhysicsMeshInterface::getLockedReadOnlyVertexIndexBase
               (uchar **param_1,int *param_2,PHY_ScalarType *param_3,int *param_4,uchar **param_5,
               int *param_6,int *param_7,PHY_ScalarType *param_8,int param_9)

{
  undefined4 uVar1;
  uchar *puVar2;
  undefined4 in_stack_00000004;
  
  puVar2 = param_1[5];
  uVar1 = *(undefined4 *)(param_1 + 3);
  *param_4 = 0;
  *(uchar **)param_2 = puVar2;
  *(undefined4 *)param_3 = uVar1;
  puVar2 = param_1[4];
  *(undefined4 *)param_5 = 0xc;
  uVar1 = *(undefined4 *)((long)param_1 + 0x1c);
  *(undefined4 *)CONCAT44(in_stack_00000004,param_9) = 3;
  *(uchar **)param_6 = puVar2;
  *(undefined4 *)param_8 = uVar1;
  *param_7 = 6;
  return;
}


