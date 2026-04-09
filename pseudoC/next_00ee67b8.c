// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: next
// Entry Point: 00ee67b8
// Size: 460 bytes
// Signature: undefined __thiscall next(Lexer * this, bool param_1, bool param_2)


/* Luau::Lexer::next(bool, bool) */

undefined8 * __thiscall Luau::Lexer::next(Lexer *this,bool param_1,bool param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x28);
  puVar2 = (undefined8 *)(this + 0x20);
  if (param_1) {
    do {
      uVar6 = *(ulong *)(this + 8);
      uVar7 = (ulong)*(uint *)(this + 0x10);
      if (uVar7 < uVar6) {
        do {
          while( true ) {
            bVar3 = *(byte *)(*(long *)this + uVar7);
            if (0x20 < bVar3) goto LAB_00ee68a0;
            if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003a00U) != 0) break;
            if ((ulong)bVar3 != 10) goto LAB_00ee68a0;
            uVar1 = (int)uVar7 + 1;
            *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
            *(uint *)(this + 0x18) = uVar1;
            uVar7 = (ulong)uVar1;
            *(uint *)(this + 0x10) = uVar1;
            if (uVar6 <= uVar7) goto LAB_00ee68a0;
          }
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
          *(uint *)(this + 0x10) = uVar1;
        } while (uVar7 < uVar6);
      }
LAB_00ee68a0:
      if ((param_2 & 1U) != 0) {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x2c);
        *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x24);
      }
      readNext();
      param_2 = false;
      *(undefined8 *)(this + 0x28) = uStack_70;
      *puVar2 = local_78;
      *(undefined8 *)(this + 0x38) = uStack_60;
      *(undefined8 *)(this + 0x30) = local_68;
    } while ((*(uint *)(this + 0x20) & 0xfffffffe) == 0x118);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    uVar7 = (ulong)*(uint *)(this + 0x10);
    if (uVar7 < uVar6) {
      do {
        while( true ) {
          bVar3 = *(byte *)(*(long *)this + uVar7);
          if (0x20 < bVar3) goto LAB_00ee692c;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003a00U) != 0) break;
          if ((ulong)bVar3 != 10) goto LAB_00ee692c;
          uVar1 = (int)uVar7 + 1;
          *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
          *(uint *)(this + 0x18) = uVar1;
          uVar7 = (ulong)uVar1;
          *(uint *)(this + 0x10) = uVar1;
          if (uVar6 <= uVar7) goto LAB_00ee692c;
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
        *(uint *)(this + 0x10) = uVar1;
      } while (uVar7 < uVar6);
    }
LAB_00ee692c:
    if (param_2) {
      *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x2c);
      *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x24);
    }
    readNext();
    *(undefined8 *)(this + 0x28) = uStack_70;
    *puVar2 = local_78;
    *(undefined8 *)(this + 0x38) = uStack_60;
    *(undefined8 *)(this + 0x30) = local_68;
  }
  if (*(long *)(lVar4 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar2;
}


