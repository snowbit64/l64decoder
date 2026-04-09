// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycast
// Entry Point: 00af9f68
// Size: 232 bytes
// Signature: undefined __thiscall raycast(DetourNavigationMeshQuery * this, float * param_1, float * param_2, float * param_3)


/* DetourNavigationMeshQuery::raycast(float const*, float const*, float&) */

void __thiscall
DetourNavigationMeshQuery::raycast
          (DetourNavigationMeshQuery *this,float *param_1,float *param_2,float *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0x4080000040000000;
  local_50 = 0x40000000;
  local_60 = 0;
  local_68 = 0;
  iVar3 = dtNavMeshQuery::findNearestPoly
                    (*(dtNavMeshQuery **)(this + 8),param_1,(float *)&local_58,
                     (dtQueryFilter *)(this + 0x10),&local_6c,(float *)0x0);
  if (-1 < iVar3) {
    iVar3 = dtNavMeshQuery::raycast
                      (*(dtNavMeshQuery **)(this + 8),local_6c,param_1,param_2,
                       (dtQueryFilter *)(this + 0x10),param_3,(float *)&local_68,(uint *)0x0,
                       (int *)0x0,0);
    if (-1 < iVar3) {
      bVar2 = *param_3 <= 1.0;
      goto LAB_00afa024;
    }
  }
  bVar2 = false;
LAB_00afa024:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


