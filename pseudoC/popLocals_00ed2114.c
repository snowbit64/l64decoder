// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: popLocals
// Entry Point: 00ed2114
// Size: 348 bytes
// Signature: undefined __thiscall popLocals(Compiler * this, ulong param_1)


/* Luau::Compiler::popLocals(unsigned long) */

void __thiscall Luau::Compiler::popLocals(Compiler *this,ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  char *__s;
  ulong uVar12;
  
  lVar5 = *(long *)(this + 0x188);
  lVar6 = *(long *)(this + 400);
  uVar7 = lVar6 - lVar5 >> 3;
  uVar12 = param_1;
  if (param_1 < uVar7) {
    do {
      if (*(long *)(this + 0x68) != 0) {
        uVar7 = *(ulong *)(lVar5 + uVar12 * 8);
        if (uVar7 != *(ulong *)(this + 0x70)) {
          uVar8 = 0;
          uVar9 = uVar7 >> 4 ^ uVar7 >> 9;
          do {
            uVar9 = uVar9 & *(long *)(this + 0x60) - 1U;
            puVar10 = (ulong *)(*(long *)(this + 0x58) + uVar9 * 0x10);
            if (*puVar10 == uVar7) goto LAB_00ed21c0;
            if (*puVar10 == *(ulong *)(this + 0x70)) break;
            uVar8 = uVar8 + 1;
            uVar9 = uVar8 + uVar9;
          } while (uVar8 <= *(long *)(this + 0x60) - 1U);
        }
      }
      puVar10 = (ulong *)0x0;
LAB_00ed21c0:
      iVar2 = *(int *)(this + 0xc);
      puVar1 = (ulong *)0x0;
      if (puVar10 != (ulong *)0x0) {
        puVar1 = puVar10 + 1;
      }
      *(undefined *)((long)puVar1 + 1) = 0;
      if (1 < iVar2) {
        uVar3 = BytecodeBuilder::getDebugPC();
        uVar11 = *(undefined8 *)this;
        __s = **(char ***)(*(long *)(this + 0x188) + uVar12 * 8);
        sVar4 = strlen(__s);
        BytecodeBuilder::pushDebugLocal
                  (uVar11,__s,sVar4,*(undefined *)puVar1,*(undefined4 *)((long)puVar1 + 4),uVar3);
        lVar5 = *(long *)(this + 0x188);
        lVar6 = *(long *)(this + 400);
      }
      uVar12 = uVar12 + 1;
      uVar7 = lVar6 - lVar5 >> 3;
    } while (uVar12 < uVar7);
  }
  if (param_1 <= uVar7) {
    if (param_1 < uVar7) {
      *(ulong *)(this + 400) = lVar5 + param_1 * 8;
    }
    return;
  }
  std::__ndk1::vector<Luau::AstLocal*,std::__ndk1::allocator<Luau::AstLocal*>>::__append
            ((vector<Luau::AstLocal*,std::__ndk1::allocator<Luau::AstLocal*>> *)(this + 0x188),
             param_1 - uVar7);
  return;
}


