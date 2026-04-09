// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DoubleText
// Entry Point: 00dff6e0
// Size: 172 bytes
// Signature: undefined __thiscall DoubleText(XMLElement * this, double param_1)


/* tinyxml2::XMLElement::DoubleText(double) const */

undefined  [16] __thiscall tinyxml2::XMLElement::DoubleText(XMLElement *this,double param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  char *__s;
  undefined auVar5 [16];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 0x38);
  local_40 = param_1;
  if ((plVar3 != (long *)0x0) &&
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(), plVar3 != (long *)0x0)) {
    lVar4 = (**(code **)(**(long **)(this + 0x38) + 0x48))(*(long **)(this + 0x38));
    if (lVar4 == 0) {
      __s = (char *)StrPair::GetStr();
    }
    else {
      __s = (char *)0x0;
    }
    uVar2 = sscanf(__s,"%lf",&local_40);
    plVar3 = (long *)(ulong)uVar2;
    param_1 = local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


