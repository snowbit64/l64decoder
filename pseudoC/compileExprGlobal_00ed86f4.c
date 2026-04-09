// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprGlobal
// Entry Point: 00ed86f4
// Size: 364 bytes
// Signature: undefined __thiscall compileExprGlobal(Compiler * this, AstExprGlobal * param_1, uchar param_2)


/* Luau::Compiler::compileExprGlobal(Luau::AstExprGlobal*, unsigned char) */

void __thiscall
Luau::Compiler::compileExprGlobal(Compiler *this,AstExprGlobal *param_1,uchar param_2)

{
  uchar uVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  BytecodeBuilder *this_00;
  char *__s;
  undefined8 uVar9;
  BytecodeBuilder *__s_00;
  
  if (0 < *(int *)(this + 8)) {
    __s = *(char **)(param_1 + 0x20);
    if ((*(long *)(this + 0x90) != 0) && (pcVar4 = *(char **)(this + 0x98), pcVar4 != __s)) {
      uVar5 = 0;
      uVar7 = (ulong)__s >> 4 ^ (ulong)__s >> 9;
      uVar6 = *(long *)(this + 0x88) - 1;
      do {
        uVar7 = uVar7 & uVar6;
        pcVar8 = *(char **)(*(long *)(this + 0x80) + uVar7 * 0x10);
        if (pcVar8 == __s) {
          if (*(int *)(*(long *)(this + 0x80) + uVar7 * 0x10 + 8) == 2) goto LAB_00ed87e4;
          break;
        }
        uVar5 = uVar5 + 1;
        uVar7 = uVar5 + uVar7;
      } while (pcVar8 != pcVar4 && uVar5 < uVar6 || pcVar8 != pcVar4 && uVar5 == uVar6);
    }
    uVar9 = *(undefined8 *)this;
    sVar3 = strlen(__s);
    uVar2 = BytecodeBuilder::addConstantString(uVar9,__s,sVar3);
    if ((int)uVar2 < 0) goto LAB_00ed8850;
    if (uVar2 < 0x400) {
      uVar2 = BytecodeBuilder::getImportId(uVar2);
      uVar5 = BytecodeBuilder::addImport(*(BytecodeBuilder **)this,uVar2);
      if ((uVar5 >> 0xf & 0x1ffff) == 0) {
        BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0xc,param_2,(short)uVar5);
        goto LAB_00ed8834;
      }
    }
  }
LAB_00ed87e4:
  __s_00 = *(BytecodeBuilder **)(param_1 + 0x20);
  sVar3 = strlen((char *)__s_00);
  uVar2 = BytecodeBuilder::addConstantString(*(undefined8 *)this,__s_00,sVar3);
  if (-1 < (int)uVar2) {
    this_00 = *(BytecodeBuilder **)this;
    uVar1 = BytecodeBuilder::getStringHash(__s_00,sVar3);
    BytecodeBuilder::emitABC(this_00,7,param_2,'\0',uVar1);
LAB_00ed8834:
    BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar2);
    return;
  }
LAB_00ed8850:
                    /* WARNING: Subroutine does not return */
  CompileError::raise((Location *)(param_1 + 0xc),
                      "Exceeded constant limit; simplify the code to compile");
}


