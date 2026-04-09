// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSettings
// Entry Point: 00757048
// Size: 196 bytes
// Signature: undefined __thiscall writeSettings(HardwareScalability * this, bool param_1)


/* HardwareScalability::writeSettings(bool) */

void __thiscall HardwareScalability::writeSettings(HardwareScalability *this,bool param_1)

{
  HardwareScalability *pHVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined auStack_b8 [128];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 0x100);
  if (plVar3 != (long *)0x0) {
    pHVar1 = this + 0xe9;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar1 = *(HardwareScalability **)(this + 0xf8);
    }
    if ((int)*(uint *)(this + 0x18) < 4) {
      puVar4 = (&s_performanceClassNames)[*(uint *)(this + 0x18)];
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    FUN_007565a0(auStack_b8,param_1,"%s.graphic.scalability.performanceClass",pHVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3,auStack_b8,puVar4);
    if (param_1) {
      (**(code **)(*plVar3 + 0x30))(plVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


