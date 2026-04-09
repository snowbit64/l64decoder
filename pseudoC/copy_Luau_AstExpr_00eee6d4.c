// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copy<Luau::AstExpr*>
// Entry Point: 00eee6d4
// Size: 208 bytes
// Signature: AstArray __cdecl copy<Luau::AstExpr*>(initializer_list param_1)


/* Luau::AstArray<Luau::AstExpr*>
   Luau::Parser::copy<Luau::AstExpr*>(std::initializer_list<Luau::AstExpr*>) */

ulong Luau::Parser::copy<Luau::AstExpr*>(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar7 = param_3 * 8;
  uVar2 = Allocator::allocate(*(Allocator **)(param_1 + 0x80),uVar7);
  if ((param_3 < 4) || ((uVar2 < param_2 + uVar7 && (param_2 < uVar2 + uVar7)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_3 & 0xfffffffffffffffc;
    puVar3 = (undefined8 *)(uVar2 + 0x10);
    puVar5 = (undefined8 *)(param_2 + 0x10);
    uVar6 = uVar7;
    do {
      puVar1 = puVar5 + -1;
      uVar8 = puVar5[-2];
      uVar10 = puVar5[1];
      uVar9 = *puVar5;
      puVar5 = puVar5 + 4;
      uVar6 = uVar6 - 4;
      puVar3[-1] = *puVar1;
      puVar3[-2] = uVar8;
      puVar3[1] = uVar10;
      *puVar3 = uVar9;
      puVar3 = puVar3 + 4;
    } while (uVar6 != 0);
    if (param_3 == uVar7) {
      return uVar2;
    }
  }
  lVar4 = param_3 - uVar7;
  puVar3 = (undefined8 *)(param_2 + uVar7 * 8);
  puVar5 = (undefined8 *)(uVar2 + uVar7 * 8);
  do {
    lVar4 = lVar4 + -1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (lVar4 != 0);
  return uVar2;
}


