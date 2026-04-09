// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: report
// Entry Point: 00ef1208
// Size: 148 bytes
// Signature: undefined __cdecl report(Location * param_1, char * param_2, ...)


/* Luau::Parser::report(Luau::Location const&, char const*, ...) */

void Luau::Parser::report(Location *param_1,char *param_2,...)

{
  long lVar1;
  char *in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined *)register0x00000008;
  report((Parser *)param_1,(Location *)param_2,in_x2,(int)&stack0xffffffffffffffe0 - 0x50);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


