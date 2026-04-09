// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendNote
// Entry Point: 00f79424
// Size: 100 bytes
// Signature: undefined __thiscall appendNote(btSoftBody * this, char * param_1, btVector3 * param_2, Node * param_3)


/* btSoftBody::appendNote(char const*, btVector3 const&, btSoftBody::Node*) */

void __thiscall
btSoftBody::appendNote(btSoftBody *this,char *param_1,btVector3 *param_2,Node *param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0;
  local_40 = 0x3f800000;
  appendNote(this,param_1,param_2,(btVector4 *)&local_40,param_3,(Node *)0x0,(Node *)0x0,(Node *)0x0
            );
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


