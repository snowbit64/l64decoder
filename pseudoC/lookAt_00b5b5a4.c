// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lookAt
// Entry Point: 00b5b5a4
// Size: 120 bytes
// Signature: undefined __thiscall lookAt(Matrix4x4 * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* Matrix4x4::lookAt(Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall
Matrix4x4::lookAt(Matrix4x4 *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  long lVar1;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      (float)*(undefined8 *)param_2 - (float)*(undefined8 *)param_1);
  local_30 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  look(this,param_1,(Vector3 *)&local_38,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


