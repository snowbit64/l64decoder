// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseNameExpr
// Entry Point: 00eef96c
// Size: 432 bytes
// Signature: undefined __thiscall parseNameExpr(Parser * this, char * param_1)


/* Luau::Parser::parseNameExpr(char const*) */

AstExprGlobal * __thiscall Luau::Parser::parseNameExpr(Parser *this,char *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  AstExprGlobal *this_00;
  AstExprError *this_01;
  AstExprLocal *this_02;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  AstLocal *pAVar11;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x28) == 0x117) {
    uStack_58 = *(undefined8 *)(this + 0x34);
    local_60 = *(undefined8 *)(this + 0x2c);
    uVar10 = *(ulong *)(this + 0x40);
    nextLexeme();
    local_50 = 1;
    local_68 = uVar10;
    if ((*(long *)(this + 0x118) != 0) && (uVar4 = *(ulong *)(this + 0x120), uVar10 != uVar4)) {
      uVar5 = 0;
      uVar8 = uVar10 >> 4 ^ uVar10 >> 9;
      uVar7 = *(long *)(this + 0x110) - 1;
      do {
        uVar8 = uVar8 & uVar7;
        uVar9 = *(ulong *)(*(long *)(this + 0x108) + uVar8 * 0x10);
        if (uVar9 == uVar10) {
          pAVar11 = *(AstLocal **)(*(long *)(this + 0x108) + uVar8 * 0x10 + 8);
          if (pAVar11 != (AstLocal *)0x0) {
            lVar1 = *(long *)(this + 0xf0);
            lVar2 = *(long *)(this + 0xf8);
            lVar6 = *(long *)(pAVar11 + 0x20);
            this_02 = (AstExprLocal *)Allocator::allocate(*(Allocator **)(this + 0x80),0x30);
            AstExprLocal::AstExprLocal
                      (this_02,(Location *)&local_60,pAVar11,lVar6 != (lVar2 - lVar1 >> 3) + -1);
            if (*(long *)(lVar3 + 0x28) == local_48) {
              return (AstExprGlobal *)this_02;
            }
            goto LAB_00eefb18;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        uVar8 = uVar5 + uVar8;
      } while (uVar9 != uVar4 && uVar5 < uVar7 || uVar9 != uVar4 && uVar5 == uVar7);
    }
    this_00 = (AstExprGlobal *)Allocator::allocate(*(Allocator **)(this + 0x80),0x28);
    AstExprGlobal::AstExprGlobal(this_00,(Location *)&local_60,(AstName *)&local_68);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return this_00;
    }
  }
  else {
    reportNameError(this,param_1);
    lVar1 = *(long *)(this + 0x148);
    lVar2 = *(long *)(this + 0x150);
    local_68 = 0;
    local_60 = 0;
    this_01 = (AstExprError *)Allocator::allocate(*(Allocator **)(this + 0x80),0x38);
    AstExprError::AstExprError
              (this_01,(Location *)(this + 0x2c),(AstArray *)&local_68,
               (int)((ulong)(lVar2 - lVar1) >> 4) * -0x55555555 - 1);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return (AstExprGlobal *)this_01;
    }
  }
LAB_00eefb18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


