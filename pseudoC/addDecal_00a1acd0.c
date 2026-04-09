// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDecal
// Entry Point: 00a1acd0
// Size: 88 bytes
// Signature: undefined __thiscall addDecal(RenderList * this, GsShape * param_1)


/* RenderList::addDecal(GsShape const*) */

void __thiscall RenderList::addDecal(RenderList *this,GsShape *param_1)

{
  long lVar1;
  GsShape *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0;
  local_30 = 0x3f800000;
  local_40 = param_1;
  FUN_00a19044(this + 0x58,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


