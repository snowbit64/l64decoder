// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepare
// Entry Point: 00c294c0
// Size: 156 bytes
// Signature: undefined __thiscall prepare(IR_Function * this, bool param_1)


/* IR_Function::prepare(bool) */

void __thiscall IR_Function::prepare(IR_Function *this,bool param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 100);
  if (iVar1 < 1) {
    elide();
    iVar1 = *(int *)(this + 100);
  }
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      return;
    }
    IR_Section::replaceSCONDandSLOOP();
    *(undefined4 *)(this + 100) = 2;
  }
  convertToHssa();
  uVar2 = IR_TypeSet::canAllStructsBeInstantiated();
  if ((uVar2 & 1) == 0) {
    IR_Section::elideImpossibleStructs();
  }
  simplifyHssa(this,param_1);
  return;
}


