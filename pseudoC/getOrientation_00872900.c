// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrientation
// Entry Point: 00872900
// Size: 200 bytes
// Signature: undefined __cdecl getOrientation(float param_1, Vector3 * param_2)


/* NavigationPath::getOrientation(float, Vector3&) */

void NavigationPath::getOrientation(float param_1,Vector3 *param_2)

{
  long lVar1;
  Vector3 *in_x1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  float local_50;
  undefined auStack_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_38 = 0x3f80000000000000;
  (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(*(long **)(param_2 + 0x20),auStack_48,&local_58)
  ;
  uVar2 = NEON_fmadd(local_58,local_58,fStack_54 * fStack_54);
  fVar4 = (float)NEON_fmadd(local_50,local_50,uVar2);
  fVar3 = 1.0;
  if (1e-06 < fVar4) {
    fVar3 = 1.0 / SQRT(fVar4);
  }
  local_58 = local_58 * fVar3;
  fStack_54 = fStack_54 * fVar3;
  local_50 = local_50 * fVar3;
  Spline::getOrientation((Vector3 *)&local_38,(Vector3 *)&local_58,in_x1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


