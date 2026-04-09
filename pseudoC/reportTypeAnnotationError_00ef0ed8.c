// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportTypeAnnotationError
// Entry Point: 00ef0ed8
// Size: 256 bytes
// Signature: undefined __cdecl reportTypeAnnotationError(Location * param_1, AstArray * param_2, bool param_3, char * param_4, ...)


/* Luau::Parser::reportTypeAnnotationError(Luau::Location const&, Luau::AstArray<Luau::AstType*>
   const&, bool, char const*, ...) */

AstTypeError *
Luau::Parser::reportTypeAnnotationError
          (Location *param_1,AstArray *param_2,bool param_3,char *param_4,...)

{
  long lVar1;
  long lVar2;
  long lVar3;
  AstTypeError *this;
  char *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  undefined auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  ppuStack_98 = &local_a0;
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  puStack_90 = auStack_c0;
  uStack_88 = 0xffffff80ffffffe8;
  local_b8 = in_x5;
  uStack_b0 = in_x6;
  local_a8 = in_x7;
  local_a0 = (undefined *)register0x00000008;
  report((Parser *)param_1,(Location *)param_2,in_x4,(int)&stack0xffffffffffffffb0 - 0x50);
  lVar1 = *(long *)(param_1 + 0x148);
  lVar2 = *(long *)(param_1 + 0x150);
  this = (AstTypeError *)Allocator::allocate(*(Allocator **)(param_1 + 0x80),0x38);
  AstTypeError::AstTypeError
            (this,(Location *)param_2,(AstArray *)(ulong)param_3,SUB81(param_4,0),
             (int)((ulong)(lVar2 - lVar1) >> 4) * -0x55555555 - 1);
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


