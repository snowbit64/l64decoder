// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSbVertexBufferForThreadIx
// Entry Point: 00a09c78
// Size: 308 bytes
// Signature: undefined __thiscall getSbVertexBufferForThreadIx(RenderController * this, uint param_1, uint param_2)


/* RenderController::getSbVertexBufferForThreadIx(unsigned int, unsigned int) */

long * __thiscall
RenderController::getSbVertexBufferForThreadIx(RenderController *this,uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 local_60;
  uint local_58;
  undefined4 uStack_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar5 = (ulong)(param_1 + 1);
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(*(long *)(this + 0x1e0) + uVar5 * 8);
  if (plVar4 == (long *)0x0) {
    local_58 = 0x10000;
    if ((param_2 + 0xffff & 0xffff0000) != 0) {
      local_58 = param_2 + 0xffff & 0xffff0000;
    }
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
    if (param_2 <= uVar2) goto LAB_00a09d7c;
    uVar2 = 0x10000;
    if ((param_2 + 0xffff & 0xffff0000) != 0) {
      uVar2 = param_2 + 0xffff & 0xffff0000;
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    local_58 = uVar2;
  }
  local_60 = 0;
  uStack_54 = 8;
  local_50 = "SB Offsets";
  plVar4 = **(long ***)(this + 8);
  if (param_1 == 0xffffffff) {
    uVar3 = (**(code **)(**(long **)this + 0x138))();
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(this + 0x198) + uVar5 * 8);
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x108))(plVar4,uVar3,&local_60);
  *(long **)(*(long *)(this + 0x1e0) + uVar5 * 8) = plVar4;
LAB_00a09d7c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar4;
}


