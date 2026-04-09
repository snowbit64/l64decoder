// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: translate
// Entry Point: 00f7f684
// Size: 108 bytes
// Signature: undefined __thiscall translate(btSoftBody * this, btVector3 * param_1)


/* btSoftBody::translate(btVector3 const&) */

void __thiscall btSoftBody::translate(btSoftBody *this,btVector3 *param_1)

{
  long lVar1;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  local_38 = *(undefined8 *)param_1;
  local_68 = 0x3f800000;
  local_5c = 0;
  local_64 = 0;
  local_54 = 0x3f800000;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  transform(this,(btTransform *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


