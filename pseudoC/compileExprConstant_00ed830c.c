// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprConstant
// Entry Point: 00ed830c
// Size: 388 bytes
// Signature: undefined __thiscall compileExprConstant(Compiler * this, AstExpr * param_1, Constant * param_2, uchar param_3)


/* Luau::Compiler::compileExprConstant(Luau::AstExpr*, Luau::Compile::Constant const*, unsigned
   char) */

void __thiscall
Luau::Compiler::compileExprConstant(Compiler *this,AstExpr *param_1,Constant *param_2,uchar param_3)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  
  switch(*(undefined4 *)param_2) {
  case 1:
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,2,param_3,'\0','\0');
    return;
  case 2:
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,3,param_3,(uchar)param_2[8],'\0');
    return;
  case 3:
    dVar3 = *(double *)(param_2 + 8);
    if ((((-32768.0 <= dVar3) && (dVar3 <= 32767.0)) && (dVar3 == (double)(int)dVar3)) &&
       ((dVar3 != 0.0 || (-1 < (long)dVar3)))) {
      BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,4,param_3,(short)(int)dVar3);
      return;
    }
    uVar2 = BytecodeBuilder::addConstantNumber(*(BytecodeBuilder **)this,dVar3);
    iVar1 = (int)uVar2;
    break;
  case 4:
    uVar2 = BytecodeBuilder::addConstantString
                      (*(undefined8 *)this,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 4)
                      );
    iVar1 = (int)uVar2;
    break;
  default:
    return;
  }
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded constant limit; simplify the code to compile");
  }
  if ((uVar2 >> 0xf & 0x1ffff) == 0) {
    BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,5,param_3,(short)uVar2);
    return;
  }
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x42,param_3,0);
  BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,(uint)uVar2);
  return;
}


