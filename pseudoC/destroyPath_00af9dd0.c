// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyPath
// Entry Point: 00af9dd0
// Size: 24 bytes
// Signature: undefined __thiscall destroyPath(DetourNavigationMeshQuery * this, NavigationMeshPath * param_1)


/* DetourNavigationMeshQuery::destroyPath(NavigationMeshPath*) */

void __thiscall
DetourNavigationMeshQuery::destroyPath(DetourNavigationMeshQuery *this,NavigationMeshPath *param_1)

{
  if (param_1 != (NavigationMeshPath *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00af9de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return;
  }
  return;
}


