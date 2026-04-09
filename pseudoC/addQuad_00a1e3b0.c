// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addQuad
// Entry Point: 00a1e3b0
// Size: 140 bytes
// Signature: undefined __thiscall addQuad(NPlaneFrustum * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4)


/* NPlaneFrustum::addQuad(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall
NPlaneFrustum::addQuad
          (NPlaneFrustum *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)param_1;
  local_50 = *(undefined4 *)(param_1 + 8);
  local_4c = *(undefined8 *)param_2;
  local_44 = *(undefined4 *)(param_2 + 8);
  local_40 = *(undefined8 *)param_3;
  local_38 = *(undefined4 *)(param_3 + 8);
  local_2c = *(undefined4 *)(param_4 + 8);
  local_34 = *(undefined8 *)param_4;
  FUN_00a1e59c(this + 0x18,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


