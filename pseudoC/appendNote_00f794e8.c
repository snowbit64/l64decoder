// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendNote
// Entry Point: 00f794e8
// Size: 96 bytes
// Signature: undefined __thiscall appendNote(btSoftBody * this, char * param_1, btVector3 * param_2, Face * param_3)


/* btSoftBody::appendNote(char const*, btVector3 const&, btSoftBody::Face*) */

void __thiscall
btSoftBody::appendNote(btSoftBody *this,char *param_1,btVector3 *param_2,Face *param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0x3eaaaaab;
  local_40 = 0x3eaaaaab3eaaaaab;
  appendNote(this,param_1,param_2,(btVector4 *)&local_40,*(Node **)(param_3 + 0x10),
             *(Node **)(param_3 + 0x18),*(Node **)(param_3 + 0x20),(Node *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


