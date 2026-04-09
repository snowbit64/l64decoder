// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: storeConst
// Entry Point: 00c28dfc
// Size: 480 bytes
// Signature: undefined __thiscall storeConst(IR_Function * this, IR_Const * param_1)


/* IR_Function::storeConst(IR_Const const&) */

ulong __thiscall IR_Function::storeConst(IR_Function *this,IR_Const *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  GsTBasicType GVar5;
  ulong uVar6;
  IR_TypeSet *this_00;
  ulong uVar7;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((*(uint *)param_1 < 10) && ((1 << (ulong)(*(uint *)param_1 & 0x1f) & 0x268U) != 0)) {
    this_00 = *(IR_TypeSet **)(this + 0x38);
    GVar5 = IR_Const::getBasicType();
    local_80 = IR_TypeSet::getScalarType(this_00,GVar5);
    lVar1 = *(long *)(this + 0x80);
    uStack_88 = *(undefined8 *)(param_1 + 8);
    local_90 = *(ulong *)param_1;
    lVar2 = *(long *)(this + 0x88) - lVar1;
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (lVar2 >> 3) * -0x5555555555555555;
      uVar6 = 0;
      do {
        bVar4 = *(uint *)(lVar1 + uVar6 * 0x18) == (uint)local_90;
        if (bVar4 && (uint)local_90 < 0xe || bVar4 && (uint)local_90 == 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00c28ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)((ulong)(byte)(&DAT_0053deb8)[local_90 & 0xffffffff] * 4 + 0xc28ec0))(1)
          ;
          return uVar7;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 <= uVar7 && uVar7 - uVar6 != 0);
    }
    FUN_00c290dc(this + 0x80,&local_90);
  }
  else {
    lVar1 = *(long *)(this + 0x80);
    local_80 = 0;
    uStack_88 = *(undefined8 *)(param_1 + 8);
    local_90 = *(ulong *)param_1;
    lVar2 = *(long *)(this + 0x88) - lVar1;
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
      uVar7 = (lVar2 >> 3) * -0x5555555555555555;
      do {
        bVar4 = *(uint *)(lVar1 + uVar6 * 0x18) == (uint)local_90;
        if (bVar4 && (uint)local_90 < 0xe || bVar4 && (uint)local_90 == 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00c29040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)((ulong)(byte)(&DAT_0053dec7)[local_90 & 0xffffffff] * 4 + 0xc29010))(1)
          ;
          return uVar7;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 <= uVar7 && uVar7 - uVar6 != 0);
    }
    FUN_00c290dc(this + 0x80,&local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


