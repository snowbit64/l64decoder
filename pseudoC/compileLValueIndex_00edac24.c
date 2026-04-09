// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileLValueIndex
// Entry Point: 00edac24
// Size: 612 bytes
// Signature: undefined __thiscall compileLValueIndex(Compiler * this, uchar param_1, AstExpr * param_2, RegScope * param_3)


/* WARNING: Removing unreachable block (ram,0x00edadd4) */
/* WARNING: Removing unreachable block (ram,0x00edadcc) */
/* WARNING: Removing unreachable block (ram,0x00edae28) */
/* WARNING: Removing unreachable block (ram,0x00edae38) */
/* Luau::Compiler::compileLValueIndex(unsigned char, Luau::AstExpr*, Luau::Compiler::RegScope&) */

void __thiscall
Luau::Compiler::compileLValueIndex(Compiler *this,uchar param_1,AstExpr *param_2,RegScope *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *in_x8;
  AstExpr *pAVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  AstExpr *pAVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  
  if ((*(long *)(this + 0xe0) != 0) && (pAVar5 = *(AstExpr **)(this + 0xe8), pAVar5 != param_2)) {
    uVar6 = 0;
    uVar11 = (ulong)param_2 >> 4 ^ (ulong)param_2 >> 9;
    uVar8 = *(long *)(this + 0xd8) - 1;
    do {
      uVar11 = uVar11 & uVar8;
      pAVar13 = *(AstExpr **)(*(long *)(this + 0xd0) + uVar11 * 0x18);
      if (pAVar13 == param_2) {
        lVar7 = *(long *)(this + 0xd0) + uVar11 * 0x18;
        uVar6 = *(ulong *)(lVar7 + 8);
        uVar16 = *(undefined8 *)(lVar7 + 0x10);
        if ((int)uVar6 == 4) {
          in_x8[2] = uVar6 >> 0x20;
          *in_x8 = 3;
          in_x8[1] = uVar16;
          *(uchar *)((long)in_x8 + 4) = param_1;
          uVar16 = *(undefined8 *)(param_2 + 0xc);
          in_x8[4] = *(undefined8 *)(param_2 + 0x14);
          in_x8[3] = uVar16;
          return;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      uVar11 = uVar6 + uVar11;
    } while (pAVar13 != pAVar5 && uVar6 < uVar8 || pAVar13 != pAVar5 && uVar6 == uVar8);
  }
  *(undefined4 *)in_x8 = 5;
  iVar3 = AstRtti<Luau::AstExprLocal>::value;
  *(undefined8 *)((long)in_x8 + 0xc) = 0;
  *(undefined8 *)((long)in_x8 + 4) = 0;
  iVar2 = AstRtti<Luau::AstExprGroup>::value;
  *(undefined8 *)((long)in_x8 + 0x1c) = 0;
  *(undefined8 *)((long)in_x8 + 0x14) = 0;
  iVar4 = AstRtti<Luau::AstExprTypeAssertion>::value;
  *(undefined4 *)((long)in_x8 + 0x24) = 0;
  iVar9 = *(int *)(param_2 + 8);
  *(uchar *)((long)in_x8 + 4) = param_1;
  pAVar5 = param_2;
  if (param_2 == (AstExpr *)0x0) goto LAB_00edace8;
  while (iVar9 != iVar3) {
LAB_00edace8:
    do {
      if ((iVar9 != iVar2) && (iVar9 != iVar4)) goto LAB_00edad60;
      pAVar5 = *(AstExpr **)(pAVar5 + 0x20);
      iVar9 = *(int *)(pAVar5 + 8);
    } while (pAVar5 == (AstExpr *)0x0);
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar6 = *(ulong *)(pAVar5 + 0x20);
    uVar11 = *(ulong *)(this + 0x70);
    if (uVar6 != uVar11) {
      uVar8 = 0;
      uVar12 = uVar6 >> 4 ^ uVar6 >> 9;
      uVar10 = *(long *)(this + 0x60) - 1;
      do {
        uVar12 = uVar12 & uVar10;
        uVar14 = *(ulong *)(*(long *)(this + 0x58) + uVar12 * 0x10);
        if (uVar14 == uVar6) {
          lVar7 = *(long *)(this + 0x58) + uVar12 * 0x10;
          if (*(char *)(lVar7 + 9) != '\0') {
            uVar15 = (uint)*(byte *)(lVar7 + 8);
            goto LAB_00edad94;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        uVar12 = uVar8 + uVar12;
      } while (uVar14 != uVar11 && uVar8 < uVar10 || uVar14 != uVar11 && uVar8 == uVar10);
    }
  }
LAB_00edad60:
  uVar15 = *(uint *)(this + 0x178);
  uVar1 = uVar15 + 1;
  if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_2 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
  compileExpr(this,param_2,(uchar)uVar15,true);
LAB_00edad94:
  *(char *)((long)in_x8 + 6) = (char)uVar15;
  uVar16 = *(undefined8 *)(param_2 + 0xc);
  in_x8[4] = *(undefined8 *)(param_2 + 0x14);
  in_x8[3] = uVar16;
  return;
}


