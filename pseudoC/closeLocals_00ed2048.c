// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closeLocals
// Entry Point: 00ed2048
// Size: 204 bytes
// Signature: undefined __thiscall closeLocals(Compiler * this, ulong param_1)


/* Luau::Compiler::closeLocals(unsigned long) */

void __thiscall Luau::Compiler::closeLocals(Compiler *this,ulong param_1)

{
  ulong *puVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar5 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if ((param_1 < uVar5) && (*(long *)(this + 0x68) != 0)) {
    bVar2 = false;
    bVar4 = 0xff;
    do {
      uVar6 = *(ulong *)(*(long *)(this + 0x188) + param_1 * 8);
      if (uVar6 != *(ulong *)(this + 0x70)) {
        uVar7 = 0;
        uVar8 = uVar6 >> 4 ^ uVar6 >> 9;
        do {
          uVar8 = uVar8 & *(long *)(this + 0x60) - 1U;
          puVar9 = (ulong *)(*(long *)(this + 0x58) + uVar8 * 0x10);
          if (*puVar9 == uVar6) goto LAB_00ed20d0;
          if (*puVar9 == *(ulong *)(this + 0x70)) break;
          uVar7 = uVar7 + 1;
          uVar8 = uVar7 + uVar8;
        } while (uVar7 <= *(long *)(this + 0x60) - 1U);
      }
      puVar9 = (ulong *)0x0;
LAB_00ed20d0:
      puVar1 = (ulong *)0x0;
      if (puVar9 != (ulong *)0x0) {
        puVar1 = puVar9 + 1;
      }
      bVar3 = bVar4;
      if (*(byte *)((long)puVar1 + 2) != 0) {
        bVar3 = *(byte *)puVar1;
        if (bVar4 <= *(byte *)puVar1) {
          bVar3 = bVar4;
        }
        bVar2 = true;
      }
      param_1 = param_1 + 1;
      bVar4 = bVar3;
    } while (param_1 != uVar5);
    if (bVar2) {
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar3,'\0','\0');
      return;
    }
  }
  return;
}


