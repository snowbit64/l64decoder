// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SaveFile
// Entry Point: 00e01398
// Size: 356 bytes
// Signature: undefined __thiscall SaveFile(XMLDocument * this, __sFILE * param_1, bool param_2)


/* tinyxml2::XMLDocument::SaveFile(__sFILE*, bool) */

undefined4 __thiscall
tinyxml2::XMLDocument::SaveFile(XMLDocument *this,__sFILE *param_1,bool param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **local_190;
  undefined local_188;
  undefined *local_180;
  undefined auStack_178 [80];
  undefined8 local_128;
  undefined local_120;
  __sFILE *local_118;
  undefined8 local_110;
  undefined local_108;
  undefined local_107;
  undefined8 local_106;
  undefined8 uStack_fe;
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
  undefined *local_80;
  undefined local_78 [20];
  undefined8 local_64;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  SetError((XMLError)this,0,(char *)0x0,0);
  local_110 = 0xffffffff00000000;
  local_120 = 1;
  local_108 = 1;
  uStack_de = 0;
  local_d6 = 0;
  uStack_9e = 0;
  local_96 = 0;
  uStack_ae = 0;
  local_b6 = 0;
  uStack_be = 0;
  local_c6 = 0;
  uStack_ee = 0;
  local_f6 = 0;
  uStack_fe = 0;
  local_106 = 0;
  local_e6 = 0x101000000010000;
  uStack_ce = 0x1000100000000;
  local_a6 = 0x1000000000000;
  uStack_8e = 0x1000100000000;
  local_64 = 0x100000014;
  local_78[0] = 0;
  local_188 = 0;
  local_128 = 10;
  local_190 = &PTR__XMLPrinter_01013648;
  local_180 = auStack_178;
  local_118 = param_1;
  local_107 = param_2;
  local_80 = local_78;
  (**(code **)(*(long *)this + 0x70))(this,&local_190);
  local_190 = &PTR__XMLPrinter_01013648;
  uVar1 = *(undefined4 *)(this + 0x6c);
  ppuVar3 = &PTR__XMLPrinter_01013648;
  if ((local_80 != local_78) && (ppuVar3 = local_190, local_80 != (undefined *)0x0)) {
    local_190 = &PTR__XMLPrinter_01013648;
    operator_delete__(local_80);
    ppuVar3 = local_190;
  }
  local_190 = ppuVar3;
  if ((local_180 != auStack_178) && (local_180 != (undefined *)0x0)) {
    operator_delete__(local_180);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


