// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportMissingTypeAnnotationError
// Entry Point: 00ef49f0
// Size: 248 bytes
// Signature: undefined __cdecl reportMissingTypeAnnotationError(Location * param_1, Location * param_2, char * param_3, ...)


/* Luau::Parser::reportMissingTypeAnnotationError(Luau::Location const&, Luau::Location const&, char
   const*, ...) */

AstTypeError *
Luau::Parser::reportMissingTypeAnnotationError
          (Location *param_1,Location *param_2,char *param_3,...)

{
  long lVar1;
  long lVar2;
  long lVar3;
  AstTypeError *this;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  puStack_88 = &local_a0;
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  puStack_80 = &local_c0;
  uStack_78 = 0xffffff80ffffffe0;
  local_c0 = in_x4;
  uStack_b8 = in_x5;
  local_b0 = in_x6;
  uStack_a8 = in_x7;
  local_90 = (undefined *)register0x00000008;
  report((Parser *)param_1,param_2,in_x3,(int)&stack0xffffffffffffffc0 - 0x50);
  lVar1 = *(long *)(param_1 + 0x148);
  lVar2 = *(long *)(param_1 + 0x150);
  local_a0 = 0;
  uStack_98 = 0;
  this = (AstTypeError *)Allocator::allocate(*(Allocator **)(param_1 + 0x80),0x38);
  AstTypeError::AstTypeError
            (this,(Location *)param_3,(AstArray *)&local_a0,true,
             (int)((ulong)(lVar2 - lVar1) >> 4) * -0x55555555 - 1);
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


