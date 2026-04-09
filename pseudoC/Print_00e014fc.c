// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Print
// Entry Point: 00e014fc
// Size: 336 bytes
// Signature: undefined __thiscall Print(XMLDocument * this, XMLPrinter * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tinyxml2::XMLDocument::Print(tinyxml2::XMLPrinter*) const */

void __thiscall tinyxml2::XMLDocument::Print(XMLDocument *this,XMLPrinter *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **local_180;
  undefined local_178;
  undefined *local_170;
  undefined auStack_168 [80];
  undefined8 local_118;
  undefined local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined8 local_f6;
  undefined8 uStack_ee;
  undefined8 local_e6;
  undefined8 uStack_de;
  undefined8 local_d6;
  undefined8 uStack_ce;
  undefined8 local_c6;
  undefined8 uStack_be;
  undefined8 local_b6;
  undefined8 uStack_ae;
  undefined8 local_a6;
  undefined8 uStack_9e;
  undefined8 local_96;
  undefined8 uStack_8e;
  undefined8 local_86;
  undefined8 uStack_7e;
  undefined *local_70;
  undefined local_68 [20];
  undefined8 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (XMLPrinter *)0x0) {
    local_68[0] = 0;
    local_100 = 0xffffffff00000000;
    local_110 = 1;
    local_108 = _stdout;
    local_f8 = 1;
    uStack_ce = 0;
    local_c6 = 0;
    uStack_8e = 0;
    local_86 = 0;
    uStack_ae = 0;
    local_b6 = 0;
    uStack_9e = 0;
    local_a6 = 0;
    uStack_ee = 0;
    local_f6 = 0;
    uStack_de = 0;
    local_e6 = 0;
    local_d6 = 0x101000000010000;
    uStack_be = 0x1000100000000;
    local_96 = 0x1000000000000;
    uStack_7e = 0x1000100000000;
    local_54 = 0x100000014;
    local_178 = 0;
    local_118 = 10;
    local_180 = &PTR__XMLPrinter_01013648;
    local_170 = auStack_168;
    local_70 = local_68;
    (**(code **)(*(long *)this + 0x70))(this,&local_180);
    local_180 = &PTR__XMLPrinter_01013648;
    ppuVar2 = &PTR__XMLPrinter_01013648;
    if ((local_70 != local_68) && (ppuVar2 = local_180, local_70 != (undefined *)0x0)) {
      local_180 = &PTR__XMLPrinter_01013648;
      operator_delete__(local_70);
      ppuVar2 = local_180;
    }
    local_180 = ppuVar2;
    if ((local_170 != auStack_168) && (local_170 != (undefined *)0x0)) {
      operator_delete__(local_170);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x70))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


